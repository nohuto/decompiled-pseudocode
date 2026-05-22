/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::Invoke @ 0x1800994C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::Invoke(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rbx
  ULONGLONG TickCount64; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v3 = *(__int64 **)(a1 + 48);
  if ( v3
    && (v4 = *v3,
        TickCount64 = GetTickCount64(),
        v6 = (*(__int64 (__fastcall **)(__int64 *, ULONGLONG))(v4 + 24))(v3, TickCount64),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x84,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v7;
}
