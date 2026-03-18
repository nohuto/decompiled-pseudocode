/*
 * XREFs of MiFreeDriverInitialization @ 0x14047D508
 * Callers:
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x140544204 (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EA74 (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x14047D810 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS(v1);
  if ( !(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase )
  {
    v4 = 0LL;
    v5 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v5, 2, 0, (__int64)&v6, (__int64)&v7);
      v5 = result;
      if ( v6 )
      {
        result = MiFreeInitializationCode(a1, v6 << 25 >> 16, ((v7 << 25) | 0xFFF0000) >> 16);
        v4 += result;
      }
    }
    while ( v5 );
    if ( v4 && (v1 == PsNtosImageBase || v1 == PsHalImageBase) )
      qword_1403278E0 -= v4;
  }
  return result;
}
