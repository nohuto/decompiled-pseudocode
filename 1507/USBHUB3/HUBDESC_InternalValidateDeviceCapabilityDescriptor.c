/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002C71C
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C002CE74 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001EAFC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027848 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0027CD0 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002ABAC (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002AE08 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002B070 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002B56C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002B7C8 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002BF00 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002C370 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        int *a7,
        __int64 a8)
{
  int *v8; // rdi
  _WORD *v12; // rdx
  unsigned __int16 *v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rbp
  int v16; // r10d
  char v17; // r12
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 **v27; // rax
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+90h] [rbp+8h]
  unsigned int v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v8 = &v32;
    v32 = 0;
  }
  v12 = a5;
  if ( a5 )
    *a5 = 0;
  v13 = a6;
  if ( a6 )
    *a6 = 0;
  v14 = *a1;
  v15 = a8;
  v16 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v17 = 1;
  v18 = *(_DWORD *)(a2 + 72) - v16;
  *a3 = v14;
  v30 = v16;
  v31 = v18;
  if ( (unsigned __int8)v14 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int16 *, _QWORD))(a2 + 24))(
      *(_QWORD *)(a2 + 40),
      72LL,
      v13,
      0LL);
    if ( v31 < 3 )
    {
      *v8 = 1;
      WPP_RECORDER_SF_DDD(v15, 2u, v20, 0xD2u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v30, *a1, 3);
      goto LABEL_48;
    }
    *v8 = 2;
    *a3 = 3;
    WPP_RECORDER_SF_DDDD(v15, v19, v20, 0xD1u, v29);
    v12 = a5;
    v13 = a6;
    v18 = v31;
  }
  if ( v18 < 3 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v8 = 2;
    WPP_RECORDER_SF_d(v15, 2u, 5u, 0xD3u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v21);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
    goto LABEL_48;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v8, a7, v15);
    if ( *v8 == 1 )
      goto LABEL_48;
    v27 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v27 )
    {
      *v27 = a1;
      goto LABEL_48;
    }
    WPP_RECORDER_SF_(v15, 2u, 5u, 0xD4u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    v23 = 76LL;
    goto LABEL_27;
  }
  if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, a3, v8, v12, v13, v15);
    if ( *v8 == 1 )
      goto LABEL_48;
    v26 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v26 + 8) )
    {
      *(_QWORD *)(v26 + 8) = a1;
      goto LABEL_48;
    }
    WPP_RECORDER_SF_(v15, 2u, 5u, 0xD5u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    v23 = 75LL;
    goto LABEL_27;
  }
  if ( a1[2] != 4 )
  {
    switch ( a1[2] )
    {
      case 5u:
        HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v8, v15);
        goto LABEL_48;
      case 6u:
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v8, v15);
        goto LABEL_48;
      case 0xAu:
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v8, v15);
        if ( *v8 == 1 )
          goto LABEL_48;
        v24 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v24 + 16) )
        {
          *(_QWORD *)(v24 + 16) = a1;
          goto LABEL_48;
        }
        WPP_RECORDER_SF_(v15, 2u, 5u, 0xD6u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
        v23 = 203LL;
        break;
      case 0xDu:
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v8, v15);
        if ( *v8 == 1 )
          goto LABEL_48;
        v22 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v22 + 32) )
        {
          *(_QWORD *)(v22 + 32) = a1;
          goto LABEL_48;
        }
        WPP_RECORDER_SF_(v15, 2u, 5u, 0xD8u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
        v23 = 245LL;
        break;
      default:
        goto LABEL_48;
    }
LABEL_27:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v23);
    *v8 = 2;
LABEL_49:
    v17 = 0;
    WPP_RECORDER_SF_(v15, 2u, 5u, 0xD9u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    return v17;
  }
  HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v8, v15);
  if ( *v8 == 1 )
    goto LABEL_48;
  v25 = *(_QWORD *)(a2 + 80);
  if ( *(_QWORD *)(v25 + 24) )
  {
    WPP_RECORDER_SF_(v15, 2u, 5u, 0xD7u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    v23 = 74LL;
    goto LABEL_27;
  }
  if ( !*(_BYTE *)(v25 + 40) )
    *(_QWORD *)(v25 + 24) = a1;
LABEL_48:
  if ( *v8 )
    goto LABEL_49;
  return v17;
}
