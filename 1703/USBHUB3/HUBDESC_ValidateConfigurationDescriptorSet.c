/*
 * XREFs of HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002E210
 * Callers:
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002DA8 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C00121F8 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0023774 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002B6AC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002B8B4 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C002BAD0 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C002BEF4 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002C004 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002CE54 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002D6E0 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002D9EC (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x1C002DEA8 (HUBDESC_InternalValidateIADescriptor.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

char __fastcall HUBDESC_ValidateConfigurationDescriptorSet(
        unsigned __int8 *a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  char v13; // bl
  unsigned __int8 *v14; // rbx
  char v15; // di
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23[3]; // [rsp+44h] [rbp-BCh] BYREF
  _OWORD v24[17]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a2;
  if ( a5 )
    *a5 = 0;
  memset(v24, 0, 0x108uLL);
  *((_QWORD *)&v24[13] + 1) = &v24[14];
  *(_QWORD *)&v24[6] = (char *)&v24[6] + 8;
  LODWORD(v24[13]) = 256;
  DWORD2(v24[5]) = 256;
  DWORD2(v24[8]) = 256;
  *(_QWORD *)&v24[9] = (char *)&v24[9] + 8;
  RtlClearAllBits((PRTL_BITMAP)&v24[13]);
  RtlClearAllBits((PRTL_BITMAP)((char *)&v24[5] + 8));
  RtlClearAllBits((PRTL_BITMAP)((char *)&v24[8] + 8));
  v9 = *a3;
  *((_QWORD *)&v24[3] + 1) = a1;
  v10 = a3[1];
  *(_QWORD *)&v24[4] = &a1[v5];
  v24[0] = v9;
  v11 = a3[2];
  DWORD2(v24[4]) = v5;
  v24[1] = v10;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 6);
  v24[2] = v11;
  *(_QWORD *)&v24[3] = v10;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Bu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v12 = 60LL;
LABEL_5:
    (*((void (__fastcall **)(_QWORD, __int64))a3 + 3))(*((_QWORD *)a3 + 5), v12);
LABEL_6:
    v13 = 0;
    goto LABEL_41;
  }
  if ( (unsigned int)v5 < 9 )
  {
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x7Cu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v5, 9);
    v12 = 56LL;
    goto LABEL_5;
  }
  v22 = 0;
  HUBDESC_InternalValidateConfigDescriptor(a1, (__int64)v24, v23, &v22, a4);
  if ( v22 == 1 )
    goto LABEL_6;
  v14 = a1 + 9;
  v15 = v22 != 2;
  while ( (unsigned __int64)v14 < *(_QWORD *)&v24[4] )
  {
    v23[0] = 0;
    v22 = 0;
    HUBDESC_InternalValidateCommonDescriptorHeader(v14, (__int64)v24, v23, &v22, a4);
    if ( v22 == 1 )
      goto LABEL_6;
    if ( v22 == 2 )
      v15 = LOBYTE(v24[3]) != 0 ? v15 : 0;
    v16 = v14[1];
    v22 = 0;
    v17 = v16 - 4;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 6;
        if ( v19 )
        {
          v20 = v19 - 37;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              LODWORD(v24[16]) &= 0xFFFFFFF3;
              goto LABEL_31;
            }
            HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(v14, (__int64)v24, v23, &v22, a4);
          }
          else
          {
            LODWORD(v24[16]) &= ~8u;
            HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(v14, (__int64)v24, v23, &v22, a4, a5);
          }
        }
        else
        {
          LODWORD(v24[16]) &= 0xFFFFFFF3;
          HUBDESC_InternalValidateIADescriptor(v14, (__int64)v24, v23, &v22, a4);
        }
      }
      else
      {
        LODWORD(v24[16]) &= ~8u;
        HUBDESC_InternalValidateEndpointDescriptor(v14, (__int64)v24, v23, &v22, a4);
      }
      if ( v22 == 1 )
        goto LABEL_6;
      if ( v22 == 2 )
        v15 = 0;
    }
    else
    {
      LODWORD(v24[16]) &= 0xFFFFFFF3;
      HUBDESC_InternalValidateInterfaceDescriptor(v14, (__int64)v24, v23, &v22, a4);
      if ( v22 == 1 )
        goto LABEL_6;
      if ( v22 == 2 )
        v15 = 0;
    }
LABEL_31:
    if ( !*v14 )
      break;
    v14 += v23[0];
  }
  v22 = 0;
  HUBDESC_InternalValidateLastInterface((__int64)v24, &v22, a4);
  if ( v22 == 1 )
    goto LABEL_6;
  v13 = v15;
  if ( v22 == 2 )
    v13 = 0;
  if ( WORD5(v24[12]) != a1[4] && (HUBDESC_ShouldEnforceWin8ValidationImmutable((__int64)v24) || BYTE13(v24[0])) )
    v13 = 0;
  if ( !v13 )
LABEL_41:
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Du, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  return v13;
}
