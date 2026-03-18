/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D690
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C002DDF4 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F7BC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0028778 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002BADC (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002BD38 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002BFA0 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002C49C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002C6F8 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002CE30 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002D2E4 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
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
  _WORD *v13; // rdx
  unsigned __int16 *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rbp
  int v17; // r10d
  char v18; // r12
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 **v28; // rax
  int v30; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+90h] [rbp+8h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF

  v9 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v33;
    v33 = 0;
  }
  v13 = a5;
  if ( a5 )
    *a5 = 0;
  v14 = a6;
  if ( a6 )
    *a6 = 0;
  v15 = *a1;
  v16 = a9;
  v17 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v18 = 1;
  v19 = *(_DWORD *)(a2 + 72) - v17;
  *a3 = v15;
  v31 = v17;
  v32 = v19;
  if ( (unsigned __int8)v15 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int16 *, _QWORD))(a2 + 24))(
      *(_QWORD *)(a2 + 40),
      72LL,
      v14,
      0LL);
    if ( v32 < 3 )
    {
      *v9 = 1;
      WPP_RECORDER_SF_DDD(v16, 2u, v21, 0xD2u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31, *a1, 3);
      goto LABEL_48;
    }
    *v9 = 2;
    *a3 = 3;
    WPP_RECORDER_SF_DDDD(v16, v20, v21, 0xD1u, v30);
    v13 = a5;
    v14 = a6;
    v19 = v32;
  }
  if ( v19 < 3 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v9 = 2;
    WPP_RECORDER_SF_d(v16, 2u, 5u, 0xD3u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v22);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
    goto LABEL_48;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v9, a8, v16);
    if ( *v9 == 1 )
      goto LABEL_48;
    v28 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v28 )
    {
      *v28 = a1;
      goto LABEL_48;
    }
    WPP_RECORDER_SF_(v16, 2u, 5u, 0xD4u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    v24 = 76LL;
    goto LABEL_27;
  }
  if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, (__int64)a3, v9, v13, v14, a7, v16);
    if ( *v9 == 1 )
      goto LABEL_48;
    v27 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v27 + 8) )
    {
      *(_QWORD *)(v27 + 8) = a1;
      goto LABEL_48;
    }
    WPP_RECORDER_SF_(v16, 2u, 5u, 0xD5u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    v24 = 75LL;
    goto LABEL_27;
  }
  if ( a1[2] != 4 )
  {
    switch ( a1[2] )
    {
      case 5u:
        HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v9, v16);
        goto LABEL_48;
      case 6u:
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v9, v16);
        goto LABEL_48;
      case 0xAu:
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v9, v16);
        if ( *v9 == 1 )
          goto LABEL_48;
        v25 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v25 + 16) )
        {
          *(_QWORD *)(v25 + 16) = a1;
          goto LABEL_48;
        }
        WPP_RECORDER_SF_(v16, 2u, 5u, 0xD6u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
        v24 = 203LL;
        break;
      case 0xDu:
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v9, v16);
        if ( *v9 == 1 )
          goto LABEL_48;
        v23 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v23 + 32) )
        {
          *(_QWORD *)(v23 + 32) = a1;
          goto LABEL_48;
        }
        WPP_RECORDER_SF_(v16, 2u, 5u, 0xD8u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
        v24 = 245LL;
        break;
      default:
        goto LABEL_48;
    }
LABEL_27:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
    *v9 = 2;
LABEL_49:
    v18 = 0;
    WPP_RECORDER_SF_(v16, 2u, 5u, 0xD9u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    return v18;
  }
  HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v9, v16);
  if ( *v9 == 1 )
    goto LABEL_48;
  v26 = *(_QWORD *)(a2 + 80);
  if ( *(_QWORD *)(v26 + 24) )
  {
    WPP_RECORDER_SF_(v16, 2u, 5u, 0xD7u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    v24 = 74LL;
    goto LABEL_27;
  }
  if ( !*(_BYTE *)(v26 + 40) )
    *(_QWORD *)(v26 + 24) = a1;
LABEL_48:
  if ( *v9 )
    goto LABEL_49;
  return v18;
}
