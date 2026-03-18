/*
 * XREFs of ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0019E00
 * Callers:
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_Dd @ 0x1C0017370 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001AC5C (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

void __fastcall FxIFRStart(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath,
        _DRIVER_OBJECT *a3)
{
  unsigned int _a1; // ebp
  char *PoolWithTag; // rax
  char *v6; // rsi
  _BYTE *v7; // rax
  __int64 v8; // rdx
  char v9; // cl

  if ( !FxLibraryGlobals.IfrDisabled )
  {
    if ( FxDriverGlobals )
    {
      if ( !FxDriverGlobals->WdfLogHeader )
      {
        _a1 = FxIFRGetSize(FxDriverGlobals, RegistryPath);
        PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, _a1, 0x674C7846u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, _a1);
          *((_QWORD *)v6 + 2) = v6 + 72;
          *((_DWORD *)v6 + 7) = 0;
          v7 = v6 + 36;
          *((_DWORD *)v6 + 6) = _a1 - 72;
          v8 = 32LL;
          *(_GUID *)v6 = WdfTraceGuid;
          while ( v8 != -2147483614 )
          {
            v9 = v7[FxDriverGlobals->Public.DriverName - (v6 + 36)];
            if ( !v9 )
              break;
            *v7++ = v9;
            if ( !--v8 )
            {
              --v7;
              break;
            }
          }
          *v7 = 0;
          FxDriverGlobals->WdfLogHeader = v6;
          _InterlockedIncrement(&FxDriverGlobals->WdfLogHeaderRefCount);
          WPP_IFR_SF_(FxDriverGlobals, 4u, 0x11u, 0xAu, WPP_tracing_cpp_Traceguids);
          if ( _a1 > 0x1000 )
            WPP_IFR_SF_Dd(FxDriverGlobals, 4u, 0x11u, 0xBu, WPP_tracing_cpp_Traceguids, _a1, _a1 >> 12);
        }
      }
    }
  }
}
