/*
 * XREFs of ?GetChipSetInfo@@YAKXZ @ 0x1801873A4
 * Callers:
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?FindAndParseField@@YAKPEAGPEBG@Z @ 0x180187320 (-FindAndParseField@@YAKPEAGPEBG@Z.c)
 *     ?GetFirstPciDevice@@YA_NIPEAG@Z @ 0x18018744C (-GetFirstPciDevice@@YA_NIPEAG@Z.c)
 */

__int64 GetChipSetInfo(void)
{
  __int64 result; // rax
  unsigned int v1; // ecx
  int v2; // ebx
  unsigned __int16 v3[264]; // [rsp+20h] [rbp-228h] BYREF

  result = (unsigned int)dword_1801F0558;
  if ( !dword_1801F0558 )
  {
    memset_0(v3, 0, 0x208uLL);
    if ( GetFirstPciDevice(v1, v3) )
    {
      v3[259] = 0;
      v2 = FindAndParseField(v3, L"VEN_");
      result = (v2 << 16) | (unsigned int)FindAndParseField(v3, L"DEV_");
      dword_1801F0558 = result;
    }
    else
    {
      return (unsigned int)dword_1801F0558;
    }
  }
  return result;
}
