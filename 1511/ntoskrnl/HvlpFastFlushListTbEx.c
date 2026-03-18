/*
 * XREFs of HvlpFastFlushListTbEx @ 0x140221760
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1402218E0 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401B3648 (HvlpFastFlushSecureRangeList.c)
 */

NTSTATUS __fastcall HvlpFastFlushListTbEx(__int64 *a1, __int64 a2, char a3, unsigned int a4, unsigned __int64 *a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 *v13; // r10
  __int64 v14; // r11
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  NTSTATUS result; // eax
  int v18; // [rsp+20h] [rbp-51h]
  __int64 v19; // [rsp+20h] [rbp-51h]
  __int64 v20; // [rsp+30h] [rbp-41h] BYREF
  __int64 v21; // [rsp+38h] [rbp-39h]
  _QWORD v22[12]; // [rsp+40h] [rbp-31h] BYREF

  v6 = *a1;
  v7 = a4;
  v9 = a1[1];
  v21 = v9;
  v20 = v6;
  if ( (HvlpFlags & 0x8000) == 0 )
    v21 = v9 | 8;
  v10 = HvlpAffinityToHvProcessorSet(a2, v22, 0x50u);
  v11 = (unsigned int)(v10 + 32 + 8 * v7);
  v12 = (unsigned int)(v10 + 32) >> 3;
  v18 = ((v10 + 7) << 14) & 0x3FE0000 | 0x14;
  if ( (_DWORD)v7 )
  {
    v13 = a5;
    v14 = v7;
    v15 = ((unsigned int)HvlpFlags >> 15) & 1;
    do
    {
      v16 = *v13;
      if ( v15 )
        v16 &= ~0x800uLL;
      *(&v20 + v12) = v16;
      ++v13;
      v12 = (unsigned int)(v12 + 1);
      --v14;
    }
    while ( v14 );
  }
  HIDWORD(v19) = v7 & 0xFFF;
  LODWORD(v19) = v18 | 0x10000;
  result = HvcallpExtendedFastHypercall(v19, &v20, v11);
  if ( a3 )
    return HvlpFastFlushSecureRangeList(a5, v7);
  return result;
}
