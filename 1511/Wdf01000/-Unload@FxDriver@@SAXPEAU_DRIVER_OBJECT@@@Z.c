/*
 * XREFs of ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0032FA0
 * Callers:
 *     imp_WdfDriverMiniportUnload @ 0x1C0068390 (imp_WdfDriverMiniportUnload.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     FxDestroy @ 0x1C0033030 (FxDestroy.c)
 */

void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *v3; // rdi
  const void *_a1; // rax
  unsigned __int64 v5; // rcx
  void (__fastcall *v6)(unsigned __int64); // rax
  const void *v7; // rax

  v2 = *(_QWORD *)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  if ( v2 )
  {
    v3 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
    if ( v3->FxVerboseOn )
    {
      if ( *(_WORD *)(v2 + 10) )
        _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xCu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    if ( *(_QWORD *)(v2 + 352) )
    {
      if ( *(_WORD *)(v2 + 10) )
        v5 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v5 = 0LL;
      v6 = *(void (__fastcall **)(unsigned __int64))(v2 + 352);
      if ( v6 )
        v6(v5);
      if ( v3->FxVerboseOn )
      {
        if ( *(_WORD *)(v2 + 10) )
          v7 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v7 = 0LL;
        WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, v7, DriverObject);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v3->Driver = 0LL;
    FxDestroy(v3);
  }
}
