/*
 * XREFs of HUBDSM_GetMsOs20DescriptorSet @ 0x1C0018F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C001F6E8 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GetMsOs20DescriptorSet(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  PVOID PoolWithTag; // rax
  int v4; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2472);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2468), 0x64334855u);
  *(_QWORD *)(v1 + 2472) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Fu,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids);
    MsOsFeatureDescriptor = -1073741670;
LABEL_6:
    *(_DWORD *)(v1 + 392) = 0;
    LODWORD(v7) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x30u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v7);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
    return 1000LL;
  }
  *(_BYTE *)(v1 + 2036) = *(_BYTE *)(v1 + 2470);
  v8 = *(unsigned __int16 *)(v1 + 2468);
  *(_DWORD *)(v1 + 392) = 0x40000000;
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v1, 0, v4, 7, (__int64)PoolWithTag, v8);
  if ( MsOsFeatureDescriptor < 0 )
    goto LABEL_6;
  return 1000LL;
}
