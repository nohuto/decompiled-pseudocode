/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x18002A254
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x18002A2E0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  if ( *((_QWORD *)this + 7) )
    TpReleaseWork();
  v2 = (__int64 **)((char *)this + 240);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v4 = (__int64 *)v3[1];
    v5 = *v3;
    *v4 = *v3;
    *(_QWORD *)(v5 + 8) = v4;
    operator delete(v3);
  }
  *((_QWORD *)this + 33) = 0LL;
  v6 = (void *)*((_QWORD *)this + 32);
  if ( v6 )
    operator delete(v6);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
