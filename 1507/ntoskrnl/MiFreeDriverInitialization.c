/*
 * XREFs of MiFreeDriverInitialization @ 0x140573BE0
 * Callers:
 *     MiLoadImportDll @ 0x140571A68 (MiLoadImportDll.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MmFreeBootDriverInitializationCode @ 0x14059A128 (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 */

char __fastcall MiFreeDriverInitialization(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(v3) = *(_BYTE *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81, (_BYTE)v3 != 0x81)
    || (PVOID)v1 == PsNtosImageBase
    || (PVOID)v1 == PsHalImageBase )
  {
    v4 = 0LL;
    v5 = 0;
    do
    {
      LODWORD(v3) = MiSnapDriverRange(a1, v5, 2, 0, (__int64)&v7, (__int64)&v8);
      v5 = v3;
      if ( v7 )
      {
        v3 = MiFreeInitializationCode(a1, v7 << 25 >> 16, ((v8 << 25) | 0xFFF0000) >> 16);
        v4 += v3;
      }
    }
    while ( v5 );
    if ( v4 )
    {
      if ( (PVOID)v1 == PsNtosImageBase || (PVOID)v1 == PsHalImageBase )
        qword_14034FCD8 -= v4;
      else
        _InterlockedExchangeAdd(&dword_14034FD18, -(int)v4);
    }
  }
  return v3;
}
