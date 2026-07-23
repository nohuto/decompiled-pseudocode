/*
 * XREFs of RtlDispatchAPC @ 0x180086130
 * Callers:
 *     <none>
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall RtlDispatchAPC(void (__fastcall *a1)(__int64), __int64 a2, _ACTIVATION_CONTEXT *a3)
{
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  _BYTE v8[56]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 72LL;
  v7 = 1;
  memset(v8, 0, sizeof(v8));
  if ( a3 == (_ACTIVATION_CONTEXT *)-1LL )
  {
    a1(a2);
  }
  else
  {
    RtlActivateActivationContextUnsafeFast((__int64)&v6, (__int64)a3);
    a1(a2);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v6);
    RtlReleaseActivationContext(a3);
  }
}
