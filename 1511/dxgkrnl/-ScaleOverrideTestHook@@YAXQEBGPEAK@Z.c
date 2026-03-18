/*
 * XREFs of ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000A5D4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     <none>
 */

void __fastcall ScaleOverrideTestHook(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  if ( g_OSTestSigningEnabled )
    DpiInternal::ScaleOverrideTestHookCore(this, a2, a3);
  else
    *(_DWORD *)a2 = 0;
}
