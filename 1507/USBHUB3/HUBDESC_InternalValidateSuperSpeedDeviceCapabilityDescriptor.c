/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002BF00
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002C71C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001EAFC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027848 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0027CD0 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        __int64 a7)
{
  int *v8; // r14
  int v11; // r12d
  __int64 v12; // rbp
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // bl
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned __int8 v22; // al
  unsigned __int16 v23; // ax
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v29; // [rsp+A0h] [rbp+18h]

  v29 = a3;
  v8 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v8 = &v28;
    v28 = 0;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = a7;
  v13 = *(_DWORD *)(a2 + 72) - v11;
  if ( *a1 < 0xAu )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 136LL);
    if ( v13 < 0xA )
    {
      v17 = 1;
      *v8 = 1;
      WPP_RECORDER_SF_DDD(v12, 2u, v15, 0xBAu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v11, *a1, 10);
      goto LABEL_55;
    }
    *v8 = 2;
    *a3 = 10;
    WPP_RECORDER_SF_DDDD(v12, v14, v15, 0xB9u, v25);
  }
  if ( *a1 > 0xAu )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v8 = 2;
    WPP_RECORDER_SF_DDD(
      v12,
      2u,
      (__int64)a3,
      0xBBu,
      (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids,
      v11,
      *a1,
      10);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL);
  }
  if ( *v29 > v13 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v8 = 2;
    LODWORD(v26) = v11;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xBCu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    v16 = 140LL;
    goto LABEL_21;
  }
  if ( (a1[3] & 0xFD) != 0 )
  {
    if ( *(_BYTE *)(a2 + 15) )
      *v8 = 2;
    LODWORD(v26) = a1[3];
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xBDu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL);
  }
  if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
  {
    if ( *(_BYTE *)(a2 + 15) )
      *v8 = 2;
    LODWORD(v26) = *((unsigned __int16 *)a1 + 2);
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xBEu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL);
  }
  if ( !*((_WORD *)a1 + 2) )
  {
    *v8 = 2;
    WPP_RECORDER_SF_(v12, 2u, 5u, 0xBFu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL);
  }
  v18 = a1[6];
  if ( v18 > 3u )
  {
    if ( *(_BYTE *)(a2 + 15) )
      *v8 = 2;
    LODWORD(v26) = a1[6];
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xC0u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    v19 = 142LL;
    goto LABEL_39;
  }
  v20 = v18;
  v21 = *((unsigned __int16 *)a1 + 2);
  if ( !_bittest(&v21, v20) )
  {
    *v8 = 2;
    LODWORD(v27) = *((unsigned __int16 *)a1 + 2);
    LODWORD(v26) = a1[6];
    WPP_RECORDER_SF_dD(v12, 2u, 5u, 0xC1u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26, v27);
    v19 = 141LL;
LABEL_39:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19);
  }
  v22 = a1[7];
  if ( v22 < 0xBu )
  {
    if ( a5 )
    {
      *a5 = v22;
      LODWORD(v26) = a1[7];
      WPP_RECORDER_SF_d(v12, 4u, 5u, 0xC3u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v8 = 2;
    LODWORD(v26) = a1[7];
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xC2u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL);
  }
  v23 = *((_WORD *)a1 + 4);
  if ( v23 < 0x800u )
  {
    if ( a6 )
    {
      *a6 = v23;
      LODWORD(v26) = *((unsigned __int16 *)a1 + 4);
      WPP_RECORDER_SF_d(v12, 4u, 5u, 0xC5u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
    }
    goto LABEL_54;
  }
  if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
    *v8 = 2;
  LODWORD(v26) = *((unsigned __int16 *)a1 + 4);
  WPP_RECORDER_SF_d(v12, 2u, 5u, 0xC4u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v26);
  v16 = 139LL;
LABEL_21:
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
LABEL_54:
  v17 = 1;
LABEL_55:
  if ( *v8 )
  {
    v17 = 0;
    WPP_RECORDER_SF_(v12, 2u, 5u, 0xC6u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
  }
  return v17;
}
