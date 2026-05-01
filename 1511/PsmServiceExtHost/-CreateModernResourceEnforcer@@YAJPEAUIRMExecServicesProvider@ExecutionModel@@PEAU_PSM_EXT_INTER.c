/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180023DEC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180023EB8 (-Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTE.c)
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180023F8C (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct ExecutionModel::IRMExecServicesProvider *a1,
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a2,
        struct ModernResourceEnforcer **a3)
{
  ModernResourceEnforcer *v6; // rax
  ModernResourceEnforcer *v7; // rdi
  int v8; // esi

  v6 = (ModernResourceEnforcer *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = ModernResourceEnforcer::ModernResourceEnforcer(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = ModernResourceEnforcer::Init(v7, a1, a2);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      (*(void (__fastcall **)(ModernResourceEnforcer *, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
