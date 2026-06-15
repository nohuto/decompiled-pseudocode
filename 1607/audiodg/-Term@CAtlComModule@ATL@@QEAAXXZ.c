/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140026744
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140017CEC (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x140017DB0 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_140054D40;
    v2 = qword_140054D48;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_140054D48;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_140054D50);
    ATL::_AtlComModule = 0;
  }
}
