/*
 * XREFs of ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1400267C0
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140017CEC (--1CAudioDGModule@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x140025E28 (-AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z.c)
 */

void __fastcall ATL::CAtlModule::Term(ATL::CAtlModule *this)
{
  _DWORD *v1; // rdi
  __int64 v3; // rcx

  v1 = (_DWORD *)((char *)this + 8);
  if ( *((_DWORD *)this + 2) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      ATL::AtlCallTermFunc((ATL::CAtlModule *)((char *)this + 8));
      *((_QWORD *)this + 2) = 0LL;
    }
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    *v1 = 0;
  }
}
