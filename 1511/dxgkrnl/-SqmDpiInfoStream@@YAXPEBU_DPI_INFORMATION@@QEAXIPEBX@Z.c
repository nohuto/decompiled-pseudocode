/*
 * XREFs of ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ACB04
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000A8F4 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z @ 0x1C000FFCC (-DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TestAndSetSqmDpiInfoForMonitor@EDIDCACHE@@QEAAEQEAXIPEBU_DPI_INFORMATION@@PEBE@Z @ 0x1C00C35F8 (-TestAndSetSqmDpiInfoForMonitor@EDIDCACHE@@QEAAEQEAXIPEBU_DPI_INFORMATION@@PEBE@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

void __fastcall SqmDpiInfoStream(
        const struct _DPI_INFORMATION *a1,
        void *const a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  int v4; // edi
  EDIDCACHE *v9; // rcx
  unsigned __int8 v10; // al
  struct tagSIZE v11; // r8
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // esi
  struct tagSIZE v15; // rdx
  int v16; // eax
  _DWORD v17[52]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = 0;
  if ( a3 == -1
    || ((v9 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 98)) == 0LL
      ? (v10 = 0)
      : (v10 = EDIDCACHE::TestAndSetSqmDpiInfoForMonitor(v9, a2, a3, a1, a4)),
        v10) )
  {
    memset(v17, 0, sizeof(v17));
    v12 = DpiInternal::DiagonalDpi(*((DpiInternal **)a1 + 4), *(struct tagSIZE *)((char *)a1 + 24), v11, 0LL);
    v13 = *((_DWORD *)a1 + 10);
    v14 = v12;
    if ( v13 )
      v4 = 1000 * *((_DWORD *)a1 + 11) / v13;
    DxgkSqmCreateDwordStreamEntry(v17, *(_DWORD *)a1);
    DxgkSqmCreateDwordStreamEntry(&v17[4], *((_DWORD *)a1 + 2));
    DxgkSqmCreateDwordStreamEntry(&v17[8], *((_DWORD *)a1 + 6));
    DxgkSqmCreateDwordStreamEntry(&v17[12], *((_DWORD *)a1 + 7));
    DxgkSqmCreateDwordStreamEntry(&v17[16], *((_DWORD *)a1 + 8));
    DxgkSqmCreateDwordStreamEntry(&v17[20], *((_DWORD *)a1 + 9));
    DxgkSqmCreateDwordStreamEntry(&v17[24], v14);
    DxgkSqmCreateDwordStreamEntry(&v17[28], v4);
    v16 = DpiInternal::AvgXY(*((DpiInternal **)a1 + 7), v15);
    DxgkSqmCreateDwordStreamEntry(&v17[32], v16);
    DxgkSqmCreateDwordStreamEntry(&v17[36], *((_DWORD *)a1 + 16));
    DxgkSqmCreateDwordStreamEntry(&v17[40], *((_DWORD *)a1 + 18));
    DxgkSqmCreateDwordStreamEntry(&v17[44], *((_DWORD *)a1 + 21));
    DxgkSqmCreateDwordStreamEntry(&v17[48], *((_DWORD *)a1 + 23));
    DxgkSqmAddToStream(11625LL, 13LL, v17);
  }
}
