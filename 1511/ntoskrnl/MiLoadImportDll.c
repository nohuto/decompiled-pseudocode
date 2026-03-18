/*
 * XREFs of MiLoadImportDll @ 0x14050A29C
 * Callers:
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 * Callees:
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(UNICODE_STRING *a1, const UNICODE_STRING *a2, int a3, _QWORD *a4, _QWORD *a5)
{
  char v6; // si
  int v7; // edi
  char *v8; // rbx
  char *v9; // rcx
  char *v11; // [rsp+30h] [rbp-18h] BYREF
  char *v12; // [rsp+38h] [rbp-10h] BYREF

  v6 = a3;
  v7 = MmLoadSystemImage(a1, a2, 0LL, a3, &v11, &v12);
  if ( v7 >= 0 )
  {
    v8 = v11;
    v9 = v11;
    *((_DWORD *)v11 + 26) |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage((ULONG_PTR)v8);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        MiFreeDriverInitialization((__int64)v8);
      *a4 = v11;
      *a5 = v12;
    }
  }
  return (unsigned int)v7;
}
