/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002C6F8
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D690 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001F7BC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0028778 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1C0028A74 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // r14
  int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r13
  int v16; // edx
  int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // r11
  int v20; // ecx
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // r8
  unsigned int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // r8d
  int v28; // r8d
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-A8h]
  __int64 v31; // [rsp+28h] [rbp-A0h]
  __int64 v32; // [rsp+30h] [rbp-98h]
  __int64 v33; // [rsp+38h] [rbp-90h]
  unsigned int v34; // [rsp+70h] [rbp-58h]
  int v35; // [rsp+74h] [rbp-54h] BYREF
  __int64 v36; // [rsp+78h] [rbp-50h]
  char v37; // [rsp+D0h] [rbp+8h]
  int v38; // [rsp+D8h] [rbp+10h]
  int v40; // [rsp+E8h] [rbp+20h]

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v35;
    v35 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x10u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL, 0LL);
    if ( v10 < 0x10 )
    {
      *v6 = 1;
      WPP_RECORDER_SF_DDD(a5, 2u, v12, 0xA8u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v9, *a1, 16);
      goto LABEL_80;
    }
    *v6 = 2;
    *a3 = 16;
    WPP_RECORDER_SF_DDDD(a5, v11, v12, 0xA7u, v30);
  }
  v34 = *((_DWORD *)a1 + 1) & 0x1F;
  if ( *a1 != 4LL * v34 + 16 )
  {
    if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      0LL,
      0xA9u,
      (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids,
      v9,
      *a1,
      4 * v34 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
  }
  if ( *a3 <= v10 )
  {
    if ( (*((_DWORD *)a1 + 1) & 0xFFFFFE00) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v6 = 2;
      LODWORD(v31) = *((_DWORD *)a1 + 1);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xABu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
    }
    if ( (a1[8] & 0xF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v6 = 2;
      LODWORD(v31) = *((unsigned __int16 *)a1 + 4);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xACu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
    }
    if ( a1[3] )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v6 = 2;
      LODWORD(v31) = a1[3];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xADu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
    }
    if ( *((_WORD *)a1 + 5) )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v6 = 2;
      LODWORD(v31) = *((unsigned __int16 *)a1 + 5);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAEu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
    }
    v14 = v34;
    LODWORD(v15) = 0;
    v40 = 0;
    v38 = 0;
    v37 = 0;
    do
    {
      v16 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
      if ( (v16 & 0x80u) != 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v31) = v15;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAFu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
        v13 = 220LL;
        goto LABEL_79;
      }
      if ( (_DWORD)v15 == v14 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v31) = v15 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB0u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
        v13 = 222LL;
        goto LABEL_79;
      }
      v17 = *(_DWORD *)&a1[4 * (unsigned int)(v15 + 1) + 12];
      v18 = (unsigned int)(v15 + 1);
      v36 = v18;
      if ( (v17 & 0x80u) == 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v31) = v15 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB1u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
        v13 = 221LL;
        goto LABEL_79;
      }
      if ( (((unsigned __int8)v16 ^ (unsigned __int8)v17) & 0xF) != 0
        || (((unsigned __int8)v16 ^ (unsigned __int8)v17) & 0x40) != 0
        || (((unsigned __int16)v16 ^ (unsigned __int16)v17) & 0xC000) != 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        WPP_RECORDER_SF_dDDDdDDD(
          a5,
          (*(_DWORD *)&a1[4 * v19 + 12] >> 6) & 1,
          *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF,
          0xB2u,
          v30);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
        v18 = v36;
      }
      v20 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
      if ( (v20 & 0x40) == 0
        && ((((unsigned __int8)v20 ^ a1[4 * v18 + 12]) & 0x30) != 0
         || *(_WORD *)&a1[4 * (unsigned int)v15 + 14] != *(_WORD *)&a1[4 * v18 + 14]) )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        WPP_RECORDER_SF_dDDDdDDD(
          a5,
          (*(_DWORD *)&a1[4 * v21 + 12] >> 4) & 3,
          (*(_DWORD *)&a1[4 * (unsigned int)v15 + 12] >> 4) & 3,
          0xB3u,
          v30);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
      }
      v22 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
      if ( (((unsigned __int8)v22 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
      {
        v37 = 1;
        if ( (v22 & 0x40) == 0 && (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
            *v6 = 2;
          v24 = *((unsigned __int16 *)a1 + 4);
          LODWORD(v33) = v24 >> 12;
          LODWORD(v32) = (v24 >> 8) & 0xF;
          LODWORD(v31) = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF;
          WPP_RECORDER_SF_DDD(
            a5,
            2u,
            v23,
            0xB4u,
            (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids,
            v31,
            v32,
            v33);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
        }
      }
      v25 = v40;
      v26 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF;
      if ( _bittest(&v25, v26) )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v32) = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF;
        LODWORD(v31) = v15;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xB5u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31, v32);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
        v27 = v38;
      }
      else
      {
        v27 = v38 + 1;
        v40 |= 1 << v26;
        ++v38;
      }
      v14 = v34;
      v15 = (unsigned int)(v15 + 2);
    }
    while ( (unsigned int)v15 <= v34 );
    if ( ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1 != v27 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v6 = 2;
      LODWORD(v32) = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
      LODWORD(v31) = v28;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xB6u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31, v32);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
    }
    if ( !v37 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v6 = 2;
      LODWORD(v31) = *(_DWORD *)&a1[4 * v15 + 12] & 0xF;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB7u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
      v13 = 228LL;
      goto LABEL_79;
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v6 = 2;
    LODWORD(v31) = v9;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAAu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v31);
    v13 = 217LL;
LABEL_79:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
  }
LABEL_80:
  result = 0LL;
  if ( *v6 )
    return WPP_RECORDER_SF_(a5, 2u, 5u, 0xB8u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
  return result;
}
