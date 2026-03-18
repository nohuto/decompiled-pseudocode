/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C0160F30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0022490 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AC434 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160DB8 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  __int64 result; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  result = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v9);
  if ( (int)result >= 0 )
  {
    UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v9);
    return WriteDpiToRegistry(a1, a2, a3);
  }
  return result;
}
