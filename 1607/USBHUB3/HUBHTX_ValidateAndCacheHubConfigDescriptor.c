/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002CDC
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0008560 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B76C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rax
  PVOID PoolWithTag; // rax
  int v5; // esi
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  void *v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[7]; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0LL;
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = *(_WORD *)(a1 + 2402);
  HIDWORD(v12[0]) = *(_DWORD *)(a1 + 232);
  v12[3] = HUBMISC_LogDescriptorValidationErrorForHub;
  v12[4] = HUBMISC_LogDescriptorValidationWarningForHub;
  v3 = *(unsigned __int16 **)(a1 + 1200);
  v12[5] = a1;
  if ( v3[1] < 0xFFu )
  {
    v2 = v3;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v3[1], 0x68334855u);
    *(_QWORD *)(a1 + 1200) = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 2u, 3u, 0x15u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
      v5 = -1073741670;
      goto LABEL_10;
    }
    memmove(PoolWithTag, v2, v2[1]);
  }
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           *(_QWORD *)(a1 + 1200),
                           *(unsigned __int16 *)(*(_QWORD *)(a1 + 1200) + 2LL),
                           (unsigned int)v12,
                           *(_QWORD *)(a1 + 2464),
                           0LL) )
    goto LABEL_6;
  v6 = *(_WORD *)(*(_QWORD *)(a1 + 1200) + 2LL);
  v7 = *(_WORD *)(a1 + 2548);
  if ( v6 != v7 )
  {
    v11 = v7;
    v10 = v6;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      0x16u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v10,
      v11);
    ((void (__fastcall *)(_QWORD, __int64))v12[3])(v12[5], 61LL);
LABEL_6:
    v5 = -1073741823;
    goto LABEL_10;
  }
  v5 = 0;
LABEL_10:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x68334855u);
  if ( v5 < 0 )
  {
    v8 = *(void **)(a1 + 1200);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x68334855u);
      *(_QWORD *)(a1 + 1200) = 0LL;
    }
  }
  result = 2045LL;
  if ( v5 >= 0 )
    return 2053LL;
  return result;
}
