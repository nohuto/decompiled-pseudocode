/*
 * XREFs of ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C003CA28
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C003C9EC (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::RemoveTokenQueueTableEntry(
        CTokenManager *this,
        struct CTokenManager::TokenQueueTableEntry *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  _QWORD *v8; // rcx

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v2 )
  {
    v5 = (_QWORD *)v2[1];
    v6 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v5 != v2 || (_QWORD *)*v6 != v5 )
      __fastfail(3u);
    v2[1] = v6;
    *v6 = v2;
    while ( v5 != v2 )
    {
      v7 = (void (__fastcall ***)(_QWORD, __int64))(v5 - 1);
      (*(void (__fastcall **)(_QWORD *))(*(v5 - 1) + 56LL))(v5 - 1);
      (**v7)(v7, 1LL);
      v5 = (_QWORD *)v2[1];
      v8 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v5 != v2 || (_QWORD *)*v8 != v5 )
        __fastfail(3u);
      v2[1] = v8;
      *v8 = v2;
    }
    Win32FreePool();
  }
  ObfDereferenceObject(*(PVOID *)a2);
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 128), a2);
}
