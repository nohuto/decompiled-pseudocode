/*
 * XREFs of ??1?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CE68
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000BDB8 (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180008354 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1ActivityData@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CFE0 (--1ActivityData@-$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::ActivityBase<1,140737488355328,5>::~ActivityBase<1,140737488355328,5>(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  __int64 *result; // rax
  __int64 **v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 312);
      if ( v3 )
      {
        wil::ActivityBase<1,140737488355328,5>::ActivityData::~ActivityData(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  result = (__int64 *)wil::ActivityBase<1,140737488355328,5>::ActivityData::~ActivityData(a1 + 56);
  v5 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)v5 + 6) )
  {
    if ( *((_DWORD *)v5 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    *((_DWORD *)v5 + 6) = 0;
    for ( result = *v5; *result; *v5 = result )
    {
      v8 = **v5;
      if ( (__int64 **)v8 == v5 )
      {
        result = v5[2];
        **v5 = (__int64)result;
        break;
      }
      result = (__int64 *)(v8 + 16);
    }
    *v5 = 0LL;
  }
  return result;
}
