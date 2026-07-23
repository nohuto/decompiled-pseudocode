/*
 * XREFs of HvlpFastFlushListTb @ 0x1401C1614
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401C17FC (HvlpFlushRangeListTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x1401C26D8 (VslFastFlushSecureRangeList.c)
 */

__int64 __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 v6; // xmm1_8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-51h]
  __int128 v11; // [rsp+30h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h]
  __int64 v13[11]; // [rsp+48h] [rbp-29h] BYREF

  v6 = *((_QWORD *)a1 + 2);
  v11 = *a1;
  v12 = v6;
  if ( (((unsigned int)HvlpFlags >> 13) & 1) == 0 )
    *((_QWORD *)&v11 + 1) |= 8uLL;
  HvlpCopyFlushVaList(a3, a4, (((unsigned int)HvlpFlags >> 13) & 1) != 0, v13);
  HIDWORD(v10) = a5 & 0xFFF;
  LODWORD(v10) = 65539;
  result = HvcallpExtendedFastHypercall(v10, &v11, (unsigned int)(8 * a5 + 24));
  if ( a2 )
    return VslFastFlushSecureRangeList(a4, a3);
  return result;
}
