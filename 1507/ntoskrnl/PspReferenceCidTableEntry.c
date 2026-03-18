/*
 * XREFs of PspReferenceCidTableEntry @ 0x140511690
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400F3880 (ExSlowReplenishHandleTableEntry.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  signed __int64 v7; // rcx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  volatile __int64 *v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+20h] [rbp-18h]
  signed __int64 v22; // [rsp+28h] [rbp-10h]

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = PspCidTable;
  _m_prefetchw(v3);
  v6 = *v3;
  v7 = v3[1];
  while ( (v6 & 0x1FFFE) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v22 = v7;
      v21 = v6 - 2;
      *(_QWORD *)&v8 = v6;
      *((_QWORD *)&v8 + 1) = v7;
      v9 = _InterlockedCompareExchange128(v4, v7, v6 - 2, (signed __int64 *)&v8);
      v7 = *((_QWORD *)&v8 + 1);
      v10 = v8;
      v6 = v8;
      if ( v9 )
      {
        if ( (unsigned __int16)(v10 >> 1) == 16 )
          v6 = ((unsigned int)v6 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v6;
        v11 = (_BYTE *)((v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (*v11 & 0x7F) == a2 )
          return v11;
        ObfDereferenceObject(v11);
        return 0LL;
      }
    }
    else
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v6);
      _m_prefetchw(v4);
      v6 = *v4;
      v7 = v4[1];
    }
  }
  v13 = PspCidTable;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v4);
      v15 = *v4;
      if ( (*v4 & 1) != 0 )
        break;
      if ( !v15 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(v13, v4, v15);
    }
  }
  while ( v15 != _InterlockedCompareExchange64(v4, v15 - 1, v15) );
  v11 = (_BYTE *)((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v11 & 0x7F) != a2 )
    goto LABEL_27;
  if ( a2 != 3 )
  {
    if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6BC) & 3) != 2 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000 )
LABEL_16:
    v14 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
LABEL_17:
  _m_prefetchw(v11 - 48);
  v16 = *((_QWORD *)v11 - 6);
  if ( !v16 )
  {
LABEL_35:
    *v4 &= 0xFFFFFFFFFFFE0001uLL;
LABEL_27:
    v11 = 0LL;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 - 6, (unsigned int)(v14 + 1) + v16, v16);
    if ( v17 == v16 )
      break;
    if ( !v16 )
      goto LABEL_35;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)(v11 - 48), 1, v14 + 1, 1953261124);
LABEL_21:
  v18 = PspCidTable;
  _InterlockedExchangeAdd64(v4, 1uLL);
  v19 = (volatile __int64 *)(v18 + 48);
  _InterlockedOr(v20, 0);
  if ( *v19 )
    ExfUnblockPushLock(v19, 0LL);
  return v11;
}
