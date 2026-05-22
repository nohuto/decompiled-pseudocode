/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::SetTimeout @ 0x1800993F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::SetTimeout(__int64 a1, __int64 a2)
{
  ULONGLONG TickCount64; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONGLONG v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  TickCount64 = GetTickCount64();
  v5 = v17;
  v6 = a1 + 16;
  v7 = a2 - TickCount64;
  v8 = a1;
  v9 = *(_QWORD *)(a1 + 72);
  v10 = 10000 * v7;
  v11 = v6 & -(__int64)(v8 != 0);
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, v11, v10, &v17);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v12);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v13;
}
