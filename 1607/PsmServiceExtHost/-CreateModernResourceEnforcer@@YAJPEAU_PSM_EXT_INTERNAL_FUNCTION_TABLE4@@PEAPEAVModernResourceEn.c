/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001CC1C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18001CCD8 (-Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x18001CD70 (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        struct ModernResourceEnforcer **a2)
{
  ModernResourceEnforcer *v4; // rax
  ModernResourceEnforcer *v5; // rbx
  int v6; // edi

  v4 = (ModernResourceEnforcer *)operator new(0x128uLL, (const struct std::nothrow_t *)&unk_18003D782);
  if ( v4 )
    v5 = ModernResourceEnforcer::ModernResourceEnforcer(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = ModernResourceEnforcer::Init(v5, a1);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
