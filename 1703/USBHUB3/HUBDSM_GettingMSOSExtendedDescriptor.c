/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001AC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0022520 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  PVOID PoolWithTag; // rax
  int v3; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v1 + 1716), 0x64334855u);
  *(_QWORD *)(v1 + 2088) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Cu,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
    MsOsFeatureDescriptor = -1073741823;
LABEL_4:
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Du,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v6);
    HUBSM_AddEvent(v1 + 488, 4004);
    return 1000LL;
  }
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v1,
                            0,
                            v3,
                            4,
                            (__int64)PoolWithTag,
                            *(unsigned int *)(v1 + 1716));
  if ( MsOsFeatureDescriptor < 0 )
    goto LABEL_4;
  return 1000LL;
}
