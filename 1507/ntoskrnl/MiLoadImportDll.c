/*
 * XREFs of MiLoadImportDll @ 0x140571A68
 * Callers:
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 * Callees:
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     MiFreeDriverInitialization @ 0x140573BE0 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 */

__int64 __fastcall MiLoadImportDll(int a1, int a2, int a3, ULONG_PTR *a4, _QWORD *a5)
{
  char v6; // si
  int SystemImage; // edi
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  ULONG_PTR v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v6 = a3;
  SystemImage = MmLoadSystemImage(a1, a2, 0, a3, (__int64)&v11, (__int64)&v12);
  if ( SystemImage >= 0 )
  {
    v8 = v11;
    v9 = v11;
    *(_DWORD *)(v11 + 104) |= 0x4000000u;
    SystemImage = MmCallDllInitialize(v9, (__int64)&PsLoadedModuleList);
    if ( SystemImage < 0 )
    {
      MmUnloadSystemImage(v8);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        MiFreeDriverInitialization(v8);
      *a4 = v11;
      *a5 = v12;
    }
  }
  return (unsigned int)SystemImage;
}
