/*
 * XREFs of RtlStackDbStackRemove @ 0x180101E68
 * Callers:
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800522E4 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x180101FE0 (RtlpStackDbEntryCleanup.c)
 */

void __fastcall RtlStackDbStackRemove(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  signed __int32 i; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a2 + 16);
  for ( i = v2; (i & 0xFFFFFF) != 1; v2 = i )
  {
    i = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF, v2);
    if ( v2 == i )
      break;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801506C0);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      RtlReleaseSRWLockExclusive(&stru_1801506C0);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 8) & (-1LL << (dword_1801506B4 & 0x1F));
      v5 = (_QWORD *)(qword_1801506B8
                    + 8LL
                    * ((37
                      * (BYTE6(v7)
                       + 37
                       * (BYTE5(v7)
                        + 37
                        * (BYTE4(v7)
                         + 37
                         * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                      + HIBYTE(v7)) & (((unsigned int)dword_1801506B4 >> 5) - 1)));
      if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v5 = (_QWORD *)(qword_1801506B8
                      + 8LL
                      * ((37
                        * (BYTE6(v7)
                         + 37
                         * (BYTE5(v7)
                          + 37
                          * (BYTE4(v7)
                           + 37
                           * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                        + HIBYTE(v7)) & (((unsigned int)dword_1801506B4 >> 5) - 1)));
      while ( (*v5 & 1) == 0 )
      {
        if ( *v5 == a2 )
        {
          *v5 = *(_QWORD *)a2;
          --dword_1801506B0;
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
        v5 = (_QWORD *)*v5;
      }
      RtlReleaseSRWLockExclusive(&stru_1801506C0);
      RtlpStackDbEntryCleanup(v6, a2);
    }
  }
}
