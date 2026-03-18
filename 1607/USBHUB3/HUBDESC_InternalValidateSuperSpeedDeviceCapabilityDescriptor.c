/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002CE30
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D690 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F7BC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0028778 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // r14
  _BYTE *v11; // r13
  int v12; // r12d
  __int64 v13; // rbp
  unsigned int v14; // r15d
  bool v15; // cf
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  char v19; // bl
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned __int8 v24; // al
  unsigned __int16 v25; // ax
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v31; // [rsp+A0h] [rbp+18h]

  v31 = (_DWORD *)a3;
  v9 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v30;
    v30 = 0;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = a8;
  v14 = *(_DWORD *)(a2 + 72) - v12;
  v15 = *a1 < 0xAu;
  LODWORD(a7) = v14;
  if ( v15 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 136LL);
    if ( v14 < 0xA )
    {
      v19 = 1;
      *v9 = 1;
      WPP_RECORDER_SF_DDD(v13, 2u, v17, 0xBAu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v12, *a1, 10);
      goto LABEL_59;
    }
    v18 = v31;
    *v9 = 2;
    *v18 = 10;
    WPP_RECORDER_SF_DDDD(v13, v16, v17, 0xB9u, v27);
  }
  if ( *a1 > 0xAu )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v9 = 2;
    WPP_RECORDER_SF_DDD(v13, 2u, a3, 0xBBu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v12, *a1, 10);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL);
  }
  if ( *v31 <= (unsigned int)a7 )
  {
    if ( (a1[3] & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      LODWORD(v28) = a1[3];
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xBDu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      LODWORD(v28) = *((unsigned __int16 *)a1 + 2);
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xBEu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      WPP_RECORDER_SF_(v13, 2u, 5u, 0xBFu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL);
    }
    v20 = a1[6];
    if ( v20 <= 3u )
    {
      v22 = v20;
      v23 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v23, v22) )
      {
LABEL_44:
        v24 = a1[7];
        if ( v24 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v24;
            LODWORD(v28) = a1[7];
            WPP_RECORDER_SF_d(v13, 4u, 5u, 0xC3u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          LODWORD(v28) = a1[7];
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC2u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL);
        }
        v25 = *((_WORD *)a1 + 4);
        if ( v25 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v25;
            LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
            WPP_RECORDER_SF_d(v13, 4u, 5u, 0xC5u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC4u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 139LL);
        }
        goto LABEL_58;
      }
      *v9 = 2;
      LODWORD(v29) = *((unsigned __int16 *)a1 + 2);
      LODWORD(v28) = a1[6];
      WPP_RECORDER_SF_dD(v13, 2u, 5u, 0xC1u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28, v29);
      v21 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      LODWORD(v28) = a1[6];
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC0u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
      v21 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v21);
    goto LABEL_44;
  }
  if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
    *v9 = 2;
  LODWORD(v28) = v12;
  WPP_RECORDER_SF_d(v13, 2u, 5u, 0xBCu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v28);
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 140LL);
LABEL_58:
  v19 = 1;
LABEL_59:
  if ( *v9 )
  {
    v19 = 0;
    WPP_RECORDER_SF_(v13, 2u, 5u, 0xC6u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
  }
  return v19;
}
