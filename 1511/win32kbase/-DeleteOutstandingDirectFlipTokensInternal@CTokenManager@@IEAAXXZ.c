/*
 * XREFs of ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9CC
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003D5EC (--1CTokenManager@@AEAA@XZ.c)
 *     NtTokenManagerDeleteOutstandingDirectFlipTokens @ 0x1C00E1A60 (NtTokenManagerDeleteOutstandingDirectFlipTokens.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingDirectFlipTokensInternal(CTokenManager *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = *((_QWORD *)this + 27);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 27);
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 27) = 0LL;
  }
}
