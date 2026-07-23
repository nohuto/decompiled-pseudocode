/*
 * XREFs of VrpDereferenceDiffHiveEntryWithLock @ 0x1406170DC
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x140617090 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDereferenceDiffHiveEntryWithLock(volatile signed __int64 *P)
{
  __int64 v1; // rax
  volatile signed __int64 *v2; // rdx
  __int64 v3; // [rsp+50h] [rbp+8h]

  v1 = _InterlockedDecrement64(P + 2);
  if ( v1 <= 0 )
  {
    if ( v1 )
      __fastfail(0xEu);
    v3 = P[1] & (-1LL << (dword_1403225C4 & 0x1F));
    v2 = (volatile signed __int64 *)(qword_1403225C8
                                   + 8LL
                                   * ((37
                                     * (BYTE6(v3)
                                      + 37
                                      * (BYTE5(v3)
                                       + 37
                                       * (BYTE4(v3)
                                        + 37
                                        * (BYTE3(v3)
                                         + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))
                                     + HIBYTE(v3)) & (((unsigned int)dword_1403225C4 >> 5) - 1)));
    if ( (*P & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v2 = (volatile signed __int64 *)(qword_1403225C8
                                     + 8LL
                                     * ((37
                                       * (BYTE6(v3)
                                        + 37
                                        * (BYTE5(v3)
                                         + 37
                                         * (BYTE4(v3)
                                          + 37
                                          * (BYTE3(v3)
                                           + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))
                                       + HIBYTE(v3)) & (((unsigned int)dword_1403225C4 >> 5) - 1)));
    while ( (*v2 & 1) == 0 )
    {
      if ( *(volatile signed __int64 **)v2 == P )
      {
        *v2 = *P;
        --gLoadedDiffHives;
        *P |= 0x8000000000000002uLL;
        break;
      }
      v2 = (volatile signed __int64 *)*v2;
    }
    ExFreePoolWithTag((PVOID)P, 0x67655256u);
  }
}
