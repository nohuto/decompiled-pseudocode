/*
 * XREFs of ?IsUsingResource@CBaseStreamGroupProxy@@UEAA_N_K@Z @ 0x18008CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::IsUsingResource(CBaseStreamGroupProxy *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)this + 9);
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 64LL))(*((_QWORD *)this + 9), a2);
  return result;
}
