/*
 * XREFs of ?GetChipSetInfo@@YAKXZ @ 0x1801491F4
 * Callers:
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x1800E19E4 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?FindAndParseField@@YAKPEAGPEBG@Z @ 0x180149170 (-FindAndParseField@@YAKPEAGPEBG@Z.c)
 *     ?GetFirstPciDevice@@YA_NIPEAG@Z @ 0x1801492A0 (-GetFirstPciDevice@@YA_NIPEAG@Z.c)
 */

__int64 GetChipSetInfo(void)
{
  __int64 result; // rax
  unsigned int v1; // ecx
  int v2; // ebx
  unsigned __int16 v3; // [rsp+20h] [rbp-228h] BYREF
  _BYTE v4[516]; // [rsp+22h] [rbp-226h] BYREF
  __int16 v5; // [rsp+226h] [rbp-22h]

  result = (unsigned int)dword_180196524;
  if ( !dword_180196524 )
  {
    v3 = 0;
    memset_0(v4, 0, 0x206uLL);
    if ( GetFirstPciDevice(v1, &v3) )
    {
      v5 = 0;
      v2 = FindAndParseField(&v3, L"VEN_");
      result = (v2 << 16) | (unsigned int)FindAndParseField(&v3, L"DEV_");
      dword_180196524 = result;
    }
    else
    {
      return (unsigned int)dword_180196524;
    }
  }
  return result;
}
