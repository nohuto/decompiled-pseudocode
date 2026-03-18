/*
 * XREFs of PspReferenceCidTableEntry @ 0x140436CB0
 * Callers:
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x14008E230 (ExFastReferenceHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400D0410 (ExSlowReplenishHandleTableEntry.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // rdi
  int v5; // eax
  _BYTE *v6; // rbx
  int v8; // ebp
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1 & 0x3FC) != 0 )
  {
    v3 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, a1);
    v4 = v3;
    if ( v3 )
    {
      v5 = ExFastReferenceHandleTableEntry(PspCidTable, v3, v11);
      if ( v5 >= 0 )
      {
        v6 = (_BYTE *)((v11[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (*v6 & 0x7F) == a2 )
          return v6;
        ObfDereferenceObject((PVOID)((v11[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL));
        return 0LL;
      }
      if ( v5 != -1 )
        return 0LL;
      v8 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v4) )
        return 0LL;
      v6 = (_BYTE *)((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (*v6 & 0x7F) != a2 )
        goto LABEL_22;
      if ( a2 == 3 )
      {
        if ( (*(_DWORD *)(((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) != 0x4000000 )
          goto LABEL_12;
      }
      else if ( (*(_DWORD *)(((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6BC) & 3) != 2 )
      {
LABEL_12:
        _m_prefetchw(v6 - 48);
        v9 = *((_QWORD *)v6 - 6);
        if ( v9 )
        {
          while ( 1 )
          {
            v10 = v9;
            v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 - 6, (unsigned int)(v8 + 1) + v9, v9);
            if ( v10 == v9 )
              break;
            if ( !v9 )
              goto LABEL_21;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)(v6 - 48), 1, v8 + 1, 1953261124);
          goto LABEL_16;
        }
LABEL_21:
        *v4 &= 0xFFFFFFFFFFFE0001uLL;
LABEL_22:
        v6 = 0LL;
LABEL_16:
        ExUnlockHandleTableEntry(PspCidTable, v4);
        return v6;
      }
      v8 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
      goto LABEL_12;
    }
  }
  return 0LL;
}
