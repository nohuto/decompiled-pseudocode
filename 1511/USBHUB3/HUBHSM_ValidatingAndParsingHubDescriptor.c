/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0008300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C002E788 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C002EAB8 (HUBDESC_Validate20HubDescriptor.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  __int16 v4; // ax
  unsigned int v5; // edi
  __int16 v6; // cx
  __int16 v7; // ax
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v9, 0, 0x38uLL);
  LOWORD(v9[0]) = *(_WORD *)(v1 + 2402);
  v3 = *(_DWORD *)(v1 + 232);
  HIDWORD(v9[0]) = v3;
  v9[3] = HUBMISC_LogDescriptorValidationErrorForHub;
  v9[5] = v1;
  if ( v3 <= 0 )
    goto LABEL_16;
  if ( v3 > 2 )
  {
    if ( v3 == 3 && (unsigned __int8)HUBDESC_Validate30HubDescriptor(v1 + 1124, v2, v9, *(_QWORD *)(v1 + 2464)) )
    {
      v4 = *(unsigned __int8 *)(v1 + 1126);
      v5 = 2053;
      *(_WORD *)(v1 + 44) = v4;
      *(_WORD *)(v1 + 142) = v4;
      if ( (*(_BYTE *)(v1 + 1127) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
      v6 = (*(_WORD *)(v1 + 1127) >> 3) & 3;
      if ( (unsigned __int16)(v6 - 2) <= 1u )
      {
        _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x10u);
        return v5;
      }
      if ( v6 == 1 )
        goto LABEL_9;
      return v5;
    }
LABEL_16:
    v5 = 2045;
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2464), 2u, 3u, 0x21u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
    return v5;
  }
  if ( !(unsigned __int8)HUBDESC_Validate20HubDescriptor(v1 + 1124, v2, v9, *(_QWORD *)(v1 + 2464)) )
    goto LABEL_16;
  v7 = *(unsigned __int8 *)(v1 + 1126);
  v5 = 2053;
  *(_WORD *)(v1 + 44) = v7;
  *(_WORD *)(v1 + 136) = v7;
  if ( (*(_BYTE *)(v1 + 1127) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 4u);
  if ( (*(_BYTE *)(v1 + 1127) & 8) != 0 )
LABEL_9:
    _InterlockedOr((volatile signed __int32 *)(v1 + 40), 8u);
  return v5;
}
