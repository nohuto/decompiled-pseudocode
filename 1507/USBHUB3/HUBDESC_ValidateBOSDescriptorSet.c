/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C002CE74
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C001FF0C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002794C (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0027F20 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002C71C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C002CB64 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        int *a7,
        _DWORD *a8,
        __int64 a9)
{
  int v10; // r12d
  __int128 v11; // xmm1
  char *v12; // rbx
  __int128 v14; // xmm0
  __int64 v16; // xmm1_8
  __int64 v17; // r14
  bool v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r13
  unsigned __int8 *v22; // rdi
  bool v23; // al
  unsigned __int8 v24; // al
  char *v25; // r15
  _DWORD *v26; // rdi
  int v28; // [rsp+20h] [rbp-B9h]
  __int64 v29; // [rsp+28h] [rbp-B1h]
  __int64 v30; // [rsp+30h] [rbp-A9h]
  _OWORD v31[3]; // [rsp+40h] [rbp-99h] BYREF
  __int64 v32; // [rsp+70h] [rbp-69h]
  __int64 v33; // [rsp+78h] [rbp-61h]
  unsigned __int64 v34; // [rsp+80h] [rbp-59h]
  unsigned int v35; // [rsp+88h] [rbp-51h]
  char *v36; // [rsp+90h] [rbp-49h]
  char v37; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+120h] [rbp+47h] BYREF
  int v39; // [rsp+128h] [rbp+4Fh] BYREF

  v10 = 0;
  v11 = *(_OWORD *)(a3 + 16);
  v12 = &v37;
  v31[0] = *(_OWORD *)a3;
  v14 = *(_OWORD *)(a3 + 32);
  if ( a4 )
    v12 = a4;
  v31[1] = v11;
  v16 = *(_QWORD *)(a3 + 48);
  v34 = a1 + a2;
  v35 = a2;
  v33 = a1;
  v31[2] = v14;
  v32 = v16;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  memset(v12, 0, 0x40uLL);
  v36 = v12;
  if ( a2 < 5 )
  {
    v17 = a9;
    WPP_RECORDER_SF_dD(a9, 2u, 5u, 0xE4u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, a2, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 23LL);
LABEL_9:
    v18 = 0;
LABEL_40:
    WPP_RECORDER_SF_(v17, 2u, 5u, 0xEAu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    return v18;
  }
  v17 = a9;
  v39 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a1, (__int64)v31, &v38, &v39, a9);
  if ( v39 == 1 )
    goto LABEL_9;
  v18 = v39 != 2;
  if ( a2 < *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 23LL);
    WPP_RECORDER_SF_ddd(v17, v19, v20, 0xE5u, v28);
    v18 = 0;
  }
  if ( a2 > *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 22LL);
    WPP_RECORDER_SF_dD(
      v17,
      2u,
      5u,
      0xE6u,
      (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids,
      a2,
      *(unsigned __int16 *)(a1 + 2));
  }
  v21 = v34;
  v22 = (unsigned __int8 *)(a1 + v38);
  if ( (unsigned __int64)v22 < v34 )
  {
    while ( 1 )
    {
      v39 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v22, (__int64)v31, &v38, &v39, v17);
      if ( v39 == 1 )
        break;
      v23 = v18;
      if ( v39 == 2 )
        v23 = 0;
      v39 = 0;
      v18 = v23;
      v24 = v22[1];
      if ( v24 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(v22, (__int64)v31, &v38, &v39, a5, a6, a7, v17);
        if ( v39 == 1 )
        {
          v18 = 0;
          goto LABEL_40;
        }
        v21 = v34;
        if ( v39 == 2 )
          v18 = 0;
      }
      else
      {
        LODWORD(v30) = v24;
        LODWORD(v29) = (_DWORD)v22 - a1;
        WPP_RECORDER_SF_dD(v17, 2u, 5u, 0xE7u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v29, v30);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 28LL);
      }
      ++v10;
      v22 += v38;
      if ( (unsigned __int64)v22 >= v21 )
        goto LABEL_25;
    }
    v18 = 0;
    goto LABEL_40;
  }
LABEL_25:
  if ( *(unsigned __int8 *)(a1 + 4) != v10 )
  {
    LODWORD(v30) = *(unsigned __int8 *)(a1 + 4);
    LODWORD(v29) = v10;
    WPP_RECORDER_SF_dD(v17, 2u, 5u, 0xE8u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v29, v30);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 25LL);
    v18 = 0;
  }
  v25 = v36;
  v26 = a8;
  if ( *((_QWORD *)v36 + 1) )
  {
    if ( !a8 )
      goto LABEL_39;
    *a8 |= 0x800u;
  }
  else if ( DWORD1(v31[0]) == 3 )
  {
    WPP_RECORDER_SF_(v17, 2u, 5u, 0xE9u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 26LL);
    v18 = 0;
  }
  if ( v26 )
  {
    if ( *((_QWORD *)v25 + 2) )
      *v26 |= 0x1000u;
    if ( v25[41] )
      *v26 |= 0x10000u;
  }
LABEL_39:
  if ( !v18 )
    goto LABEL_40;
  return v18;
}
