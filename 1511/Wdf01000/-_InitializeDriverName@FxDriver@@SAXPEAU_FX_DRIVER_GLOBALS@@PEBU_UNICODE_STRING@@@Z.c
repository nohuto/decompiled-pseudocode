/*
 * XREFs of ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0021BB0
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C003070C (RtlStringCopyWorkerA.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxDriver::_InitializeDriverName(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath)
{
  char *DriverName; // rdi
  unsigned int v5; // r8d
  unsigned __int16 *Buffer; // r9
  unsigned __int64 v7; // rdx
  unsigned __int16 *i; // rcx
  _WORD *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]

  DriverName = FxDriverGlobals->Public.DriverName;
  memset(FxDriverGlobals->Public.DriverName, 0, sizeof(FxDriverGlobals->Public.DriverName));
  v5 = 0;
  if ( RegistryPath )
  {
    Buffer = RegistryPath->Buffer;
    v7 = (unsigned __int64)&Buffer[(unsigned __int64)RegistryPath->Length >> 1];
    for ( i = (unsigned __int16 *)(v7 - 2); *i != 92; --i )
    {
      if ( i == Buffer )
        goto LABEL_14;
    }
    if ( i == Buffer || *i != 92 )
    {
LABEL_14:
      RtlStringCopyWorkerA(DriverName, v7, 0LL, "WDF", v12);
      return;
    }
    v9 = i + 1;
    v10 = (__int64)(v7 - (_QWORD)v9) >> 1;
    if ( v10 > 0x1F )
      v10 = 31LL;
    if ( v10 )
    {
      v11 = 0LL;
      do
      {
        ++v5;
        FxDriverGlobals->Public.DriverName[v11] = v9[v11];
        v11 = v5;
      }
      while ( v5 < v10 );
    }
  }
}
