/*
 * XREFs of RegisterHiddenIdleStates @ 0x1C00207D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0014E9C (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 66) )
    return 3221225485LL;
  if ( !HalPrivateDispatchTable[127] )
    return 3221225659LL;
  v3 = *(_DWORD **)(a1 + 480);
  if ( !v3 || !*v3 || (*(_DWORD *)(a1 + 248) & 0x7F077) == 0 )
    return 3221225473LL;
  result = DecodeAcpi2CState(a1, (__int64 *)&v3[5 * (*v3 - 1) + 1], &v4, 0LL, 0LL);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[127])(*(unsigned int *)(a1 + 68), v4);
  return result;
}
