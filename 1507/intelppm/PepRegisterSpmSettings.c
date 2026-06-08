/*
 * XREFs of PepRegisterSpmSettings @ 0x1C0015E78
 * Callers:
 *     RegisterIdleComplete @ 0x1C0015AE4 (RegisterIdleComplete.c)
 *     RegisterKernelPepIdleStates @ 0x1C001F898 (RegisterKernelPepIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepRegisterSpmSettings(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( !PepSpmHandleQueried && (*(_DWORD *)(a1 + 248) & 0x800LL) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 1056);
    v4 = 0LL;
    PepSpmHandleQueried = 1;
    v2 = PoFxProcessorNotification(v1, 17LL, &v4);
    v3 = 0LL;
    if ( v2 >= 0 )
      v3 = v4;
    if ( v3 )
      ((void (*)(void))qword_1C000DBB8)();
  }
}
