/*
 * XREFs of PspReferenceCidTableEntry @ 0x14041F760
 * Callers:
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140090450 (ExSlowReplenishHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  signed __int64 v7; // rcx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  int v13; // ebx
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rtt

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (unsigned __int64 *)ExpLookupHandleTableEntry(PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = PspCidTable;
  _m_prefetchw(v3);
  v6 = *v3;
  v7 = v3[1];
  if ( (*v3 & 0x1FFFE) == 0 )
  {
LABEL_10:
    v13 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, v4) )
      return 0LL;
    v11 = (_BYTE *)(((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*v11 & 0x7F) == a2 )
    {
      if ( a2 == 3 )
        v14 = (*(_DWORD *)((((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000;
      else
        v14 = (*(_DWORD *)((((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6C0) & 3) == 2;
      if ( v14 )
        v13 = ExSlowReplenishHandleTableEntry(v4);
      _m_prefetchw(v11 - 48);
      v15 = *((_QWORD *)v11 - 6);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 - 6, (unsigned int)(v13 + 1) + v15, v15);
          if ( v16 == v15 )
            break;
          if ( !v15 )
            goto LABEL_24;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)(v11 - 48), 1, v13 + 1, 1953261124);
        goto LABEL_20;
      }
LABEL_24:
      *v4 &= 0xFFFFFFFFFFFE0001uLL;
    }
    v11 = 0LL;
LABEL_20:
    ExUnlockHandleTableEntry(PspCidTable, v4);
    return v11;
  }
  while ( 1 )
  {
    if ( (v6 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v6);
      _m_prefetchw(v4);
      v6 = *v4;
      v7 = v4[1];
      goto LABEL_27;
    }
    *(_QWORD *)&v8 = v6;
    *((_QWORD *)&v8 + 1) = v7;
    v9 = _InterlockedCompareExchange128((volatile signed __int64 *)v4, v7, v6 - 2, (signed __int64 *)&v8);
    v7 = *((_QWORD *)&v8 + 1);
    v10 = v8;
    v6 = v8;
    if ( v9 )
      break;
LABEL_27:
    if ( (v6 & 0x1FFFE) == 0 )
      goto LABEL_10;
  }
  if ( (unsigned __int16)(v10 >> 1) == 16 )
    v6 = ((unsigned int)v6 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v6;
  v11 = (_BYTE *)((v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v11 & 0x7F) == a2 )
    return v11;
  ObfDereferenceObject(v11);
  return 0LL;
}
