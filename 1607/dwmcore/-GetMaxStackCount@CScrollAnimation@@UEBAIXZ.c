/*
 * XREFs of ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x18015DFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScrollAnimation::GetMaxStackCount(CScrollAnimation *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 54);
  v2 = 1;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(v3 + 8LL * *((int *)this + 72) + 456);
  if ( v4 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) + 1;
  return v2;
}
