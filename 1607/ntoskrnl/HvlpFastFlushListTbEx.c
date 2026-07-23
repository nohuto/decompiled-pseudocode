/*
 * XREFs of HvlpFastFlushListTbEx @ 0x1401C16E0
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1401C1880 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFCC8 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x1401C26D8 (VslFastFlushSecureRangeList.c)
 */

__int64 __fastcall HvlpFastFlushListTbEx(__int64 *a1, __int64 a2, char a3, unsigned int a4, __int64 *a5, int a6)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-59h]
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h]
  _QWORD v17[12]; // [rsp+40h] [rbp-39h] BYREF

  v7 = *a1;
  v9 = a1[1];
  v16 = v9;
  v15 = v7;
  if ( (HvlpFlags & 0x2000) == 0 )
    v16 = v9 | 8;
  v11 = HvlpAffinityToHvProcessorSet(a2, v17, 0x50u);
  v12 = v11 + 32 + 8 * a6;
  LODWORD(v14) = ((v11 + 7) << 14) & 0x3FE0000 | 0x14;
  HIDWORD(v14) = a6 & 0xFFF;
  HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, (__int64 *)((char *)&v15 + (unsigned int)(v11 + 32)));
  LODWORD(v14) = v14 | 0x10000;
  result = HvcallpExtendedFastHypercall(v14, &v15, v12);
  if ( a3 )
    return VslFastFlushSecureRangeList(a5, a4);
  return result;
}
