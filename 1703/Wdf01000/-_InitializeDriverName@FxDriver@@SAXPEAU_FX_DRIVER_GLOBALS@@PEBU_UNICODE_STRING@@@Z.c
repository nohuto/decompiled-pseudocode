/*
 * XREFs of ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B440
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0019790 (imp_WdfDriverCreate.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C00178B8 (RtlStringCopyWorkerA.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

void __fastcall FxDriver::_InitializeDriverName(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath)
{
  char *DriverName; // rdi
  unsigned int v4; // r8d
  wchar_t *Buffer; // r9
  unsigned __int64 v6; // rdx
  wchar_t *i; // rcx
  _WORD *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9

  DriverName = FxDriverGlobals->Public.DriverName;
  memset(FxDriverGlobals->Public.DriverName, 0, sizeof(FxDriverGlobals->Public.DriverName));
  v4 = 0;
  if ( RegistryPath )
  {
    Buffer = RegistryPath->Buffer;
    v6 = (unsigned __int64)&Buffer[(unsigned __int64)RegistryPath->Length >> 1];
    for ( i = (wchar_t *)(v6 - 2); *i != 92; --i )
    {
      if ( i == Buffer )
        goto LABEL_14;
    }
    if ( i == Buffer || *i != 92 )
    {
LABEL_14:
      RtlStringCopyWorkerA(DriverName, v6, 0LL, "WDF");
      return;
    }
    v8 = i + 1;
    v9 = (__int64)(v6 - (_QWORD)v8) >> 1;
    if ( v9 > 0x1F )
      v9 = 31LL;
    if ( v9 )
    {
      v10 = 0LL;
      do
      {
        ++v4;
        DriverName[v10] = v8[v10];
        v10 = v4;
      }
      while ( v4 < v9 );
    }
  }
}
