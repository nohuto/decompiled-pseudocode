/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0030304
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0030AD0 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0021908 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002B214 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002B6AC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002E588 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002E7E8 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002EA58 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002EF5C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateConfigurationSummaryDescriptor @ 0x1C002F1C0 (HUBDESC_InternalValidateConfigurationSummaryDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002F35C (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002FA98 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002FF54 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        int *a8,
        __int64 a9)
{
  int *v9; // rdi
  _WORD *v13; // r13
  unsigned __int16 *v14; // rdx
  unsigned int v15; // eax
  int v16; // ecx
  char v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r8d
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 **v30; // rax
  int v32; // [rsp+20h] [rbp-68h]
  unsigned int v33; // [rsp+90h] [rbp+8h]
  int v34; // [rsp+98h] [rbp+10h] BYREF

  v9 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v34;
    v34 = 0;
  }
  v13 = a5;
  if ( a5 )
    *a5 = 0;
  v14 = a6;
  if ( a6 )
    *a6 = 0;
  v15 = *a1;
  v16 = *(_DWORD *)(a2 + 72);
  v17 = 1;
  v18 = a9;
  *a3 = v15;
  v19 = (unsigned int)((_DWORD)a1 - *(_DWORD *)(a2 + 56));
  v20 = v16 - v19;
  LODWORD(a5) = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v33 = v20;
  if ( (unsigned __int8)v15 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL, v19, 0LL);
    if ( v33 < 3 )
    {
      *v9 = 1;
      WPP_RECORDER_SF_DDD(
        v18,
        2u,
        v22,
        0xD5u,
        (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
        (_DWORD)a5,
        *a1,
        3);
      goto LABEL_52;
    }
    *v9 = 2;
    *a3 = 3;
    WPP_RECORDER_SF_DDDD(v18, v21, v22, 0xD4u, v32);
    v14 = a6;
    v20 = v33;
  }
  if ( v20 < 3 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v9 = 2;
    WPP_RECORDER_SF_d(v18, 2u, 5u, 0xD6u, v24, v23);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
    goto LABEL_52;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v9, a8, v18);
    if ( *v9 == 1 )
      goto LABEL_52;
    v30 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v30 )
    {
      *v30 = a1;
      goto LABEL_52;
    }
    WPP_RECORDER_SF_(v18, 2u, 5u, 0xD7u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v26 = 76LL;
    goto LABEL_31;
  }
  if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, (__int64)a3, v9, v13, v14, a7, v18);
    if ( *v9 == 1 )
      goto LABEL_52;
    v29 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v29 + 8) )
    {
      *(_QWORD *)(v29 + 8) = a1;
      goto LABEL_52;
    }
    WPP_RECORDER_SF_(v18, 2u, 5u, 0xD8u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v26 = 75LL;
    goto LABEL_31;
  }
  if ( a1[2] != 4 )
  {
    switch ( a1[2] )
    {
      case 5u:
        HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v9, v18);
        goto LABEL_52;
      case 6u:
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v9, v18);
        goto LABEL_52;
      case 0xAu:
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v9, v18);
        if ( *v9 == 1 )
          goto LABEL_52;
        v27 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v27 + 16) )
        {
          *(_QWORD *)(v27 + 16) = a1;
          goto LABEL_52;
        }
        WPP_RECORDER_SF_(v18, 2u, 5u, 0xD9u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
        v26 = 203LL;
        break;
      case 0xDu:
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v9, v18);
        if ( *v9 == 1 )
          goto LABEL_52;
        v25 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v25 + 32) )
        {
          *(_QWORD *)(v25 + 32) = a1;
          goto LABEL_52;
        }
        WPP_RECORDER_SF_(v18, 2u, 5u, 0xDBu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
        v26 = 245LL;
        break;
      case 0x10u:
        HUBDESC_InternalValidateConfigurationSummaryDescriptor(a1, a2, a3, v9, v18);
        if ( *v9 == 1 )
          goto LABEL_52;
        if ( !*v9 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 80) + 40LL) = 1;
          goto LABEL_52;
        }
LABEL_53:
        v17 = 0;
        WPP_RECORDER_SF_(v18, 2u, 5u, 0xDCu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
        return v17;
      default:
        goto LABEL_52;
    }
LABEL_31:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v26);
    *v9 = 2;
    goto LABEL_53;
  }
  HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v9, v18);
  if ( *v9 == 1 )
    goto LABEL_52;
  v28 = *(_QWORD *)(a2 + 80);
  if ( *(_QWORD *)(v28 + 24) )
  {
    WPP_RECORDER_SF_(v18, 2u, 5u, 0xDAu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v26 = 74LL;
    goto LABEL_31;
  }
  if ( !*(_BYTE *)(v28 + 41) )
    *(_QWORD *)(v28 + 24) = a1;
LABEL_52:
  if ( *v9 )
    goto LABEL_53;
  return v17;
}
