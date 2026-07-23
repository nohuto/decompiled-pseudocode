/*
 * XREFs of MiFreeDriverInitialization @ 0x1403CD9BC
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x14050A29C (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14052FD8C (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (result = MiGetPdeAddress(v1), (*(_BYTE *)result & 0x81) != 0x81)
    || (PVOID)v1 == PsNtosImageBase
    || (PVOID)v1 == PsHalImageBase )
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
    if ( v4 )
    {
      if ( (PVOID)v1 == PsNtosImageBase || (PVOID)v1 == PsHalImageBase )
        qword_1402FF818 -= v4;
      else
        _InterlockedExchangeAdd(&dword_1402FF858, -(int)v4);
    }
  }
  return result;
}
