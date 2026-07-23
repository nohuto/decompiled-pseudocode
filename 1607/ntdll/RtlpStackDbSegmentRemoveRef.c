/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x180102948
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x180101FE0 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  signed __int32 i; // eax
  _QWORD *v5; // rdx
  __int64 v6; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a2 + 16);
  for ( i = v2; (i & 0xFFFFFF) != 1; v2 = i )
  {
    i = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF, v2);
    if ( v2 == i )
      break;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801506C8);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      RtlReleaseSRWLockExclusive(&stru_1801506C8);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8) & (-1LL << (dword_1801506A4 & 0x1F));
      v5 = (_QWORD *)(qword_1801506A8
                    + 8LL
                    * ((37
                      * (BYTE6(v6)
                       + 37
                       * (BYTE5(v6)
                        + 37
                        * (BYTE4(v6)
                         + 37
                         * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                      + HIBYTE(v6)) & (((unsigned int)dword_1801506A4 >> 5) - 1)));
      if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v5 = (_QWORD *)(qword_1801506A8
                      + 8LL
                      * ((37
                        * (BYTE6(v6)
                         + 37
                         * (BYTE5(v6)
                          + 37
                          * (BYTE4(v6)
                           + 37
                           * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                        + HIBYTE(v6)) & (((unsigned int)dword_1801506A4 >> 5) - 1)));
      while ( (*v5 & 1) == 0 )
      {
        if ( *v5 == a2 )
        {
          *v5 = *(_QWORD *)a2;
          --RtlpHpStackDbContext;
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
        v5 = (_QWORD *)*v5;
      }
      RtlReleaseSRWLockExclusive(&stru_1801506C8);
      ((void (__fastcall *)(__int64, __int64))qword_1801506D8)(a2, qword_1801506E0);
    }
  }
}
