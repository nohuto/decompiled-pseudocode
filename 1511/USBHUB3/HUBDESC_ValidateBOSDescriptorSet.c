/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C002DB98
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0020B24 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0028680 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0028BF8 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D434 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C002D888 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        int *a8,
        _DWORD *a9,
        __int64 a10)
{
  int v11; // r12d
  __int128 v12; // xmm1
  char *v13; // rbx
  __int128 v15; // xmm0
  __int64 v17; // xmm1_8
  __int64 v18; // r14
  bool v19; // bl
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  unsigned __int8 *v23; // rdi
  bool v24; // al
  unsigned __int8 v25; // al
  char *v26; // r15
  _DWORD *v27; // rdi
  int v29; // [rsp+20h] [rbp-C9h]
  __int64 v30; // [rsp+28h] [rbp-C1h]
  __int64 v31; // [rsp+30h] [rbp-B9h]
  _OWORD v32[3]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v33; // [rsp+80h] [rbp-69h]
  __int64 v34; // [rsp+88h] [rbp-61h]
  unsigned __int64 v35; // [rsp+90h] [rbp-59h]
  unsigned int v36; // [rsp+98h] [rbp-51h]
  char *v37; // [rsp+A0h] [rbp-49h]
  char v38; // [rsp+B0h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+130h] [rbp+47h] BYREF
  int v40; // [rsp+138h] [rbp+4Fh] BYREF

  v11 = 0;
  v12 = *(_OWORD *)(a3 + 16);
  v13 = &v38;
  v32[0] = *(_OWORD *)a3;
  v15 = *(_OWORD *)(a3 + 32);
  if ( a4 )
    v13 = a4;
  v32[1] = v12;
  v17 = *(_QWORD *)(a3 + 48);
  v35 = a1 + a2;
  v36 = a2;
  v34 = a1;
  v32[2] = v15;
  v33 = v17;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  memset(v13, 0, 0x40uLL);
  v37 = v13;
  if ( a2 < 5 )
  {
    v18 = a10;
    WPP_RECORDER_SF_dD(a10, 2u, 5u, 0xE2u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, a2, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 23LL);
LABEL_9:
    v19 = 0;
LABEL_40:
    WPP_RECORDER_SF_(v18, 2u, 5u, 0xE8u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    return v19;
  }
  v18 = a10;
  v40 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a1, (__int64)v32, &v39, &v40, a10);
  if ( v40 == 1 )
    goto LABEL_9;
  v19 = v40 != 2;
  if ( a2 < *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 23LL);
    WPP_RECORDER_SF_ddd(v18, v20, v21, 0xE3u, v29);
    v19 = 0;
  }
  if ( a2 > *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 22LL);
    WPP_RECORDER_SF_dD(
      v18,
      2u,
      5u,
      0xE4u,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      a2,
      *(unsigned __int16 *)(a1 + 2));
  }
  v22 = v35;
  v23 = (unsigned __int8 *)(a1 + v39);
  if ( (unsigned __int64)v23 < v35 )
  {
    while ( 1 )
    {
      v40 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v23, (__int64)v32, &v39, &v40, v18);
      if ( v40 == 1 )
        break;
      v24 = v19;
      if ( v40 == 2 )
        v24 = 0;
      v40 = 0;
      v19 = v24;
      v25 = v23[1];
      if ( v25 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(v23, (__int64)v32, &v39, &v40, a5, a6, a7, a8, v18);
        if ( v40 == 1 )
        {
          v19 = 0;
          goto LABEL_40;
        }
        v22 = v35;
        if ( v40 == 2 )
          v19 = 0;
      }
      else
      {
        LODWORD(v31) = v25;
        LODWORD(v30) = (_DWORD)v23 - a1;
        WPP_RECORDER_SF_dD(v18, 2u, 5u, 0xE5u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v30, v31);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 28LL);
      }
      ++v11;
      v23 += v39;
      if ( (unsigned __int64)v23 >= v22 )
        goto LABEL_25;
    }
    v19 = 0;
    goto LABEL_40;
  }
LABEL_25:
  if ( *(unsigned __int8 *)(a1 + 4) != v11 )
  {
    LODWORD(v31) = *(unsigned __int8 *)(a1 + 4);
    LODWORD(v30) = v11;
    WPP_RECORDER_SF_dD(v18, 2u, 5u, 0xE6u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v30, v31);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 25LL);
    v19 = 0;
  }
  v26 = v37;
  v27 = a9;
  if ( *((_QWORD *)v37 + 1) )
  {
    if ( !a9 )
      goto LABEL_39;
    *a9 |= 0x800u;
  }
  else if ( DWORD1(v32[0]) == 3 )
  {
    WPP_RECORDER_SF_(v18, 2u, 5u, 0xE7u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 26LL);
    v19 = 0;
  }
  if ( v27 )
  {
    if ( *((_QWORD *)v26 + 2) )
      *v27 |= 0x1000u;
    if ( v26[41] )
      *v27 |= 0x10000u;
  }
LABEL_39:
  if ( !v19 )
    goto LABEL_40;
  return v19;
}
