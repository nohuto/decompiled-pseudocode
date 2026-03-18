/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0023398
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C0016AB0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C000FA0C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C002291C (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0027D24 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int16 *v3; // r12
  KIRQL v4; // al
  __int64 v5; // r13
  size_t v6; // rsi
  int v7; // eax
  int v8; // ebx
  _QWORD *v9; // r14
  _QWORD *v10; // r13
  unsigned __int16 *v11; // rbx
  _QWORD *v12; // r10
  unsigned __int8 *v13; // rcx
  unsigned __int64 v14; // rax
  bool i; // cf
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int16 *v18; // r14
  int v19; // r9d
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rsi
  _DWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  size_t v25; // r12
  _QWORD *v26; // rcx
  char *v27; // rax
  unsigned __int16 *v28; // r12
  __int64 v29; // rcx
  char *v30; // rbx
  unsigned __int8 *v31; // r8
  __int64 v32; // r9
  unsigned int v33; // esi
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r11
  _BYTE *v36; // rax
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // ax
  char v39; // cl
  __int64 v40; // rax
  int USBDErrorFromNTStatus; // eax
  __int64 v42; // r9
  __int64 j; // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  unsigned int v46; // r10d
  __int64 v47; // r8
  unsigned __int16 v48; // r10
  __int64 k; // rax
  __int64 v50; // rax
  unsigned int v51; // ebx
  unsigned int v52; // r12d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int16 *v55; // r8
  char v56; // r14
  __int64 v57; // r14
  unsigned int v58; // eax
  void *v59; // rcx
  void *v60; // rcx
  void *v61; // rcx
  PVOID PoolWithTag; // rax
  PVOID v63; // rax
  PVOID v64; // rax
  void *v65; // rcx
  void *v66; // rcx
  void *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // r8
  unsigned int m; // r9d
  unsigned __int64 v72; // rax
  int v73; // ecx
  _QWORD *v74; // rsi
  __int64 **v75; // rdi
  __int64 *v76; // rdx
  __int64 v77; // rax
  __int64 result; // rax
  int v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+30h] [rbp-D8h]
  char v81; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v82; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v83; // [rsp+60h] [rbp-A8h] BYREF
  int v84; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v85; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v87; // [rsp+78h] [rbp-90h]
  _QWORD *v88; // [rsp+80h] [rbp-88h]
  __int64 v89; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v90; // [rsp+90h] [rbp-78h]
  unsigned __int64 v91; // [rsp+98h] [rbp-70h]
  unsigned __int16 *v92; // [rsp+A0h] [rbp-68h]
  _QWORD *v93; // [rsp+A8h] [rbp-60h]
  __int64 v94; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-50h]
  _DWORD v96[14]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v97[5]; // [rsp+F8h] [rbp-10h] BYREF

  *(_DWORD *)(a1 + 112) = 0;
  memset(v97, 0, sizeof(v97));
  v2 = *(_QWORD *)(a1 + 440);
  LOWORD(v97[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v97);
  v3 = (unsigned __int16 *)v97[1];
  v87 = (unsigned __int16 *)v97[1];
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFEF);
  v5 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
  memset(v96, 0, sizeof(v96));
  v96[6] = 1;
  v96[7] = 1;
  v96[0] = 56;
  v6 = *(unsigned __int16 *)(*((_QWORD *)v3 + 3) + 2LL);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v96,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v6 + 39,
         &v89,
         a1 + 48);
  v95 = 3LL;
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD **)v5;
    v93 = v9;
    *v9 = v89;
    memmove((void *)(*(_QWORD *)v5 + 32LL), *((const void **)v3 + 3), v6);
    v10 = v9 + 2;
    v11 = v3 + 20;
    v9[3] = v9 + 2;
    v9[2] = v9 + 2;
    LODWORD(v12) = (_DWORD)v9 + 32;
    v13 = (unsigned __int8 *)(v3 + 21);
    v14 = (unsigned __int64)v3 + *v3;
    v88 = v9 + 4;
    v91 = v14;
    LODWORD(v86) = 0;
    for ( i = (unsigned __int64)(v3 + 21) < v14; i; i = (unsigned __int64)(v90 + 1) < v91 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *v13;
      v18 = v11;
      v19 = *((unsigned __int8 *)v11 + 3);
      v81 = 0;
      v20 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v17,
                                 v19,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v81,
                                 *(_QWORD *)(v16 + 1432));
      v21 = v20;
      if ( !v20 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x20u,
          (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1548) = -1073737984;
        goto LABEL_69;
      }
      v22 = *(_DWORD **)(a1 + 2432);
      if ( v22 )
      {
        v23 = 0;
        if ( *v22 )
        {
          while ( *((_BYTE *)v22 + 2 * v23 + 5) != v20[3] || *((_BYTE *)v22 + 2 * v23 + 4) != v20[2] )
          {
            if ( ++v23 >= *v22 )
              goto LABEL_13;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x8000u);
        }
      }
LABEL_13:
      *((_DWORD *)v11 + 4) = v20[4];
      LODWORD(v86) = v20[4] + (_DWORD)v86;
      v24 = *v11;
      v92 = v11 + 8;
      v90 = (unsigned __int16 *)((char *)v11 + v24);
      memset(v96, 0, sizeof(v96));
      v96[6] = 1;
      v96[7] = 1;
      v96[0] = 56;
      v25 = ((unsigned __int64)*((unsigned int *)v11 + 4) << 6) + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v96,
             (unsigned int)ExDefaultNonPagedPoolType,
             1681082453LL,
             v25,
             &v94,
             &v83);
      if ( v8 < 0 )
      {
        LODWORD(v80) = v8;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          2u,
          0x21u,
          (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
          v80);
        v5 = a1 + 48;
LABEL_74:
        v3 = v87;
        goto LABEL_75;
      }
      *((_QWORD *)v18 + 1) = v83;
      memset(v83, 0, v25);
      *(_QWORD *)v83 = v94;
      *((_QWORD *)v83 + 4) = v21;
      *((_DWORD *)v83 + 6) = v21[4];
      if ( v81 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v83 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v83 + 7, 2u);
      }
      v26 = (_QWORD *)v10[1];
      v27 = (char *)v83 + 8;
      *((_QWORD *)v83 + 1) = v10;
      *((_QWORD *)v27 + 1) = v26;
      if ( (_QWORD *)*v26 != v10 )
        __fastfail(3u);
      v28 = v92;
      v12 = v88;
      *v26 = v27;
      v10[1] = v27;
      *((_BYTE *)v18 + 4) = v21[5];
      *((_BYTE *)v18 + 5) = v21[6];
      *((_BYTE *)v18 + 6) = v21[7];
      v29 = *v21;
      v30 = (char *)v83;
      v31 = &v21[v29];
      v32 = *(unsigned __int16 *)(*((_QWORD *)v87 + 3) + 2LL) - v29 - (_QWORD)v21;
      v33 = 0;
      v34 = (unsigned __int64)&v31[v32 + (_QWORD)v12];
      if ( *(_DWORD *)v28 )
      {
        while ( (unsigned __int64)v31 < v34 )
        {
          v35 = (unsigned __int64)v33 << 6;
          *(_DWORD *)&v30[v35 + 64] = *(_DWORD *)&v18[12 * v33 + 22];
          *(_DWORD *)&v30[v35 + 48] = 1;
          v36 = v31 + 1;
          if ( (unsigned __int64)(v31 + 1) >= v34 )
          {
            v37 = 23;
            goto LABEL_67;
          }
          while ( *v36 != 5 )
          {
            if ( !*v31 )
            {
              v37 = 24;
              goto LABEL_67;
            }
            v31 += *v31;
            if ( (unsigned __int64)v31 >= v34 )
            {
              v37 = 25;
              goto LABEL_67;
            }
            v36 = v31 + 1;
            if ( (unsigned __int64)(v31 + 1) >= v34 )
            {
              v37 = 26;
              goto LABEL_67;
            }
          }
          if ( (unsigned __int64)(v31 + 7) > v34 )
          {
            v37 = 28;
            goto LABEL_67;
          }
          if ( (*(_DWORD *)&v18[12 * v33 + 22] & 1) != 0 )
            *((_WORD *)v31 + 2) = v18[12 * v33 + 12];
          *(_QWORD *)&v30[v35 + 72] = v31;
          *(_DWORD *)&v30[v35 + 80] = v34 - (_DWORD)v31;
          v38 = *((_WORD *)v31 + 2);
          if ( *(_WORD *)(a1 + 1974) < 0x250u )
            v38 = (v38 & 0x7FF) * ((v95 & (v38 >> 11)) + 1);
          v18[12 * v33 + 12] = v38;
          v39 = v31[6];
          if ( (unsigned __int8)v39 >= 6u )
            v39 = 6;
          HIBYTE(v18[12 * v33 + 13]) = v39;
          LOBYTE(v18[12 * v33 + 13]) = v31[2];
          if ( (v31[3] & 3) != 0 )
          {
            switch ( v31[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v18[12 * v33 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v18[12 * v33 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v18[12 * v33 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v18[12 * v33 + 14] = 0;
          }
          if ( !v18[12 * v33 + 12] )
            _InterlockedOr((volatile signed __int32 *)&v30[v35 + 52], 1u);
          if ( !*v31 )
          {
            v37 = 29;
            goto LABEL_67;
          }
          v31 += *v31;
          if ( (unsigned __int64)v31 < v34 && (unsigned __int64)(v31 + 1) < v34 && v31[1] == 48 )
          {
            if ( *v31 )
            {
              if ( (unsigned __int64)(v31 + 6) <= v34 )
              {
                v40 = *(_QWORD *)&v30[v35 + 72];
                *(_QWORD *)&v30[v35 + 88] = v31;
                if ( (*(_BYTE *)(v40 + 3) & 3) == 1 )
                {
                  if ( (*(_DWORD *)&v30[v35 + 52] & 1) == 0 )
                    v18[12 * v33 + 12] = *((_WORD *)v31 + 2);
                  if ( (v31[3] & 0x80u) != 0 )
                  {
                    v31 += *v31;
                    if ( (unsigned __int64)v31 < v34
                      && (unsigned __int64)(v31 + 1) < v34
                      && v31[1] == 49
                      && *v31
                      && (unsigned __int64)(v31 + 8) <= v34 )
                    {
                      *(_QWORD *)&v30[v35 + 96] = v31;
                    }
                  }
                }
              }
            }
          }
          if ( ++v33 >= *(_DWORD *)v28 )
          {
            LODWORD(v12) = (_DWORD)v88;
            goto LABEL_60;
          }
        }
        v37 = 22;
LABEL_67:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          v37,
          (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
LABEL_68:
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1548) = -1073737984;
        goto LABEL_69;
      }
LABEL_60:
      v11 = v90;
      v13 = (unsigned __int8 *)(v90 + 1);
    }
    v5 = a1 + 48;
    v42 = *(_QWORD *)(a1 + 48);
    if ( v42 )
    {
      for ( j = *(_QWORD *)(v42 + 16); ; j = *(_QWORD *)(v44 + 8) )
      {
        v44 = j - 8;
        if ( v42 + 16 == v44 + 8 )
          break;
        v45 = *(_DWORD *)(v44 + 24);
        v46 = 0;
        if ( v45 )
        {
          v47 = v44 + 72;
          while ( (*(_BYTE *)(*(_QWORD *)v47 + 2LL) & 0xF) != 0 )
          {
            ++v46;
            v47 += 64LL;
            if ( v46 >= v45 )
              goto LABEL_85;
          }
          v8 = -1073741823;
          *(_DWORD *)(a1 + 1548) = -1072693239;
          goto LABEL_69;
        }
LABEL_85:
        ;
      }
    }
    v85 = 0;
    v48 = 0;
    LOWORD(v84) = 0;
    v82 = 0;
    if ( v42 )
    {
      for ( k = *(_QWORD *)(v42 + 16); ; k = *(_QWORD *)(v50 + 8) )
      {
        v50 = k - 8;
        if ( v42 + 16 == v50 + 8 )
          break;
        v51 = 0;
        v52 = *(_DWORD *)(v50 + 24);
        if ( v52 )
        {
          v53 = v50 + 52;
          do
          {
            v54 = *(_QWORD *)(v53 + 20);
            if ( (*(_DWORD *)v53 & 1) == 0 )
            {
              if ( (*(_BYTE *)(v54 + 3) & 3) != 0 )
              {
                v55 = &v85;
                if ( *(char *)(v54 + 2) >= 0 )
                  v55 = (__int16 *)&v84;
              }
              else
              {
                v55 = (__int16 *)&v82;
              }
              v56 = *(_BYTE *)(v54 + 2);
              if ( ((v48 >> (v56 & 0xF)) & 1) != 0 || (((unsigned __int16)*v55 >> (v56 & 0xF)) & 1) != 0 )
              {
                WPP_RECORDER_SF_Dq(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                  *(unsigned __int8 *)(*(_QWORD *)(v53 + 20) + 2LL),
                  (__int64)v55,
                  v42,
                  v79);
                goto LABEL_68;
              }
              *v55 |= 1 << (v56 & 0xF);
              v48 = v82;
            }
            ++v51;
            v53 += 64LL;
          }
          while ( v51 < v52 );
        }
      }
    }
    v8 = 0;
    v57 = (unsigned int)v86;
    *((_DWORD *)v93 + 2) = v86;
    v58 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v58 )
    {
      if ( (unsigned int)v57 <= v58 )
        goto LABEL_124;
      v59 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v59 )
      {
        ExFreePoolWithTag(v59, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v60 = *(void **)(a1 + 136);
      if ( v60 )
      {
        ExFreePoolWithTag(v60, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v61 = *(void **)(a1 + 120);
      if ( v61 )
      {
        ExFreePoolWithTag(v61, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v57 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v57, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v63 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v57, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v63;
        if ( v63 )
        {
          v64 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v57, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v64;
          if ( v64 )
          {
            *(_DWORD *)(a1 + 96) = v57;
            goto LABEL_125;
          }
        }
      }
      v65 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v65 )
      {
        ExFreePoolWithTag(v65, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v66 = *(void **)(a1 + 136);
      if ( v66 )
      {
        ExFreePoolWithTag(v66, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v67 = *(void **)(a1 + 120);
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      LODWORD(v80) = -1073741670;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
        v80);
    }
LABEL_124:
    if ( v8 < 0 )
      goto LABEL_69;
LABEL_125:
    v68 = *(_QWORD *)(a1 + 56);
    if ( v68 )
    {
      v69 = (_QWORD *)(v68 + 16);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v70 = *v69 - 8LL;
      while ( v69 != (_QWORD *)(v70 + 8) )
      {
        for ( m = 0; m < *(_DWORD *)(v70 + 24); ++m )
        {
          v72 = (unsigned __int64)m << 6;
          v73 = *(_DWORD *)(v72 + v70 + 48);
          if ( v73 == 4 )
          {
            *(_DWORD *)(v72 + v70 + 48) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v72 + v70 + 40);
          }
          else if ( v73 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v72 + v70 + 40);
          }
        }
        v70 = *(_QWORD *)(v70 + 8) - 8LL;
        v69 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL);
      }
    }
    goto LABEL_74;
  }
  LODWORD(v80) = v7;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x1Fu,
    (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
    v80);
LABEL_75:
  if ( v8 < 0 )
  {
LABEL_69:
    *(_DWORD *)(a1 + 1544) = v8;
    if ( !*(_DWORD *)(a1 + 1548) )
    {
      if ( v8 == -1073741667 )
        USBDErrorFromNTStatus = -1073713152;
      else
        USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v8);
      *(_DWORD *)(a1 + 1548) = USBDErrorFromNTStatus;
    }
    v74 = *(_QWORD **)(a1 + 48);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x10u);
    if ( v74 )
    {
      v75 = (__int64 **)(v74 + 2);
      while ( *v75 != (__int64 *)v75 )
      {
        v76 = *v75;
        v77 = **v75;
        if ( (__int64 **)(*v75)[1] != v75 || *(__int64 **)(v77 + 8) != v76 )
          __fastfail(3u);
        *v75 = (__int64 *)v77;
        *(_QWORD *)(v77 + 8) = v75;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v76 - 1));
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v74);
    }
    *((_QWORD *)v87 + 4) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 4) = *(_QWORD *)v5;
  }
  result = 4065LL;
  if ( v8 >= 0 )
    return 4077LL;
  return result;
}
