/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x180102A08
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x1801020A0 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  signed __int64 result; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 16);
  LODWORD(result) = v4;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a2 + 16),
                             v4 ^ (v4 ^ (v4 - 1)) & 0xFFFFFF,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  v7 = v4 & 0xFFFFFF;
  if ( (unsigned int)v7 <= 1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_1801506C8, (char *)a2, v7, a4);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(&qword_1801506C8);
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 8) & (-1LL << (dword_1801506A4 & 0x1F));
      v8 = (_QWORD *)(qword_1801506A8
                    + 8LL
                    * ((37
                      * (BYTE6(v9)
                       + 37
                       * (BYTE5(v9)
                        + 37
                        * (BYTE4(v9)
                         + 37
                         * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                      + HIBYTE(v9)) & (((unsigned int)dword_1801506A4 >> 5) - 1)));
      if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v8 = (_QWORD *)(qword_1801506A8
                      + 8LL
                      * ((37
                        * (BYTE6(v9)
                         + 37
                         * (BYTE5(v9)
                          + 37
                          * (BYTE4(v9)
                           + 37
                           * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                        + HIBYTE(v9)) & (((unsigned int)dword_1801506A4 >> 5) - 1)));
      while ( (*v8 & 1) == 0 )
      {
        if ( *v8 == a2 )
        {
          *v8 = *(_QWORD *)a2;
          --RtlpHpStackDbContext;
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
        v8 = (_QWORD *)*v8;
      }
      RtlReleaseSRWLockExclusive(&qword_1801506C8);
      return ((__int64 (__fastcall *)(__int64, __int64))qword_1801506D8)(a2, qword_1801506E0);
    }
  }
  return result;
}
