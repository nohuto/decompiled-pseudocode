/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C00264E4
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C0018F10 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00111F4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C00258B0 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002B70C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
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
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int16 *v29; // r12
  __int64 v30; // rcx
  char *v31; // rbx
  unsigned __int8 *v32; // r8
  __int64 v33; // r9
  unsigned int v34; // esi
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r11
  _BYTE *v37; // rax
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // ax
  char v40; // cl
  __int64 v41; // rax
  int USBDErrorFromNTStatus; // eax
  __int64 v43; // r9
  __int64 j; // rax
  __int64 v45; // rax
  unsigned int v46; // ebx
  unsigned int v47; // r10d
  __int64 v48; // r8
  unsigned __int16 v49; // r10
  __int64 k; // rax
  __int64 v51; // rax
  unsigned int v52; // ebx
  unsigned int v53; // r12d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int16 *v56; // r8
  char v57; // r14
  __int64 v58; // r14
  unsigned int v59; // eax
  void *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  PVOID PoolWithTag; // rax
  PVOID v64; // rax
  PVOID v65; // rax
  void *v66; // rcx
  void *v67; // rcx
  void *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned int m; // r9d
  unsigned __int64 v72; // rax
  int v73; // ecx
  _QWORD *v74; // rsi
  __int64 **v75; // rdi
  __int64 *v76; // rdx
  __int64 v77; // rax
  PWDF_DRIVER_GLOBALS v78; // rcx
  int v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+30h] [rbp-D8h]
  char v82; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v83; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v84; // [rsp+60h] [rbp-A8h] BYREF
  int v85; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v86; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v87; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v88; // [rsp+78h] [rbp-90h]
  _QWORD *v89; // [rsp+80h] [rbp-88h]
  __int64 v90; // [rsp+88h] [rbp-80h] BYREF
  __int64 v91; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 *v92; // [rsp+98h] [rbp-70h]
  __int64 v93; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v94; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v95; // [rsp+B0h] [rbp-58h]
  _QWORD *v96; // [rsp+B8h] [rbp-50h]
  _DWORD v97[14]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v98[5]; // [rsp+F8h] [rbp-10h] BYREF

  *(_DWORD *)(a1 + 112) = 0;
  memset(v98, 0, sizeof(v98));
  v2 = *(_QWORD *)(a1 + 440);
  LOWORD(v98[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v98);
  v3 = (unsigned __int16 *)v98[1];
  v88 = (unsigned __int16 *)v98[1];
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFEF);
  v5 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
  memset(v97, 0, sizeof(v97));
  v97[6] = 1;
  v97[7] = 1;
  v97[0] = 56;
  v6 = *(unsigned __int16 *)(*((_QWORD *)v3 + 3) + 2LL);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v97,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v6 + 39,
         &v90,
         a1 + 48);
  v93 = 3LL;
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD **)v5;
    v96 = v9;
    *v9 = v90;
    memmove((void *)(*(_QWORD *)v5 + 32LL), *((const void **)v3 + 3), v6);
    v10 = v9 + 2;
    v11 = v3 + 20;
    v9[3] = v9 + 2;
    v9[2] = v9 + 2;
    LODWORD(v12) = (_DWORD)v9 + 32;
    v13 = (unsigned __int8 *)(v3 + 21);
    v14 = (unsigned __int64)v3 + *v3;
    v89 = v9 + 4;
    v95 = v14;
    LODWORD(v87) = 0;
    for ( i = (unsigned __int64)(v3 + 21) < v14; i; i = (unsigned __int64)(v94 + 1) < v95 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *v13;
      v18 = v11;
      v19 = *((unsigned __int8 *)v11 + 3);
      v82 = 0;
      v20 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v17,
                                 v19,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v82,
                                 *(_QWORD *)(v16 + 1432));
      v21 = v20;
      if ( !v20 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x20u,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
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
      LODWORD(v87) = v20[4] + (_DWORD)v87;
      v24 = *v11;
      v92 = v11 + 8;
      v94 = (unsigned __int16 *)((char *)v11 + v24);
      memset(v97, 0, sizeof(v97));
      v97[6] = 1;
      v97[7] = 1;
      v97[0] = 56;
      v25 = ((unsigned __int64)*((unsigned int *)v11 + 4) << 6) + 40;
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
              WdfDriverGlobals,
              v97,
              (unsigned int)ExDefaultNonPagedPoolType,
              1681082453LL,
              v25,
              &v91,
              &v84);
      v8 = v26;
      if ( v26 < 0 )
      {
        LODWORD(v81) = v26;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          2u,
          0x21u,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
          v81);
        v5 = a1 + 48;
LABEL_132:
        v3 = v88;
        goto LABEL_133;
      }
      *((_QWORD *)v18 + 1) = v84;
      memset(v84, 0, v25);
      *(_QWORD *)v84 = v91;
      *((_QWORD *)v84 + 4) = v21;
      *((_DWORD *)v84 + 6) = v21[4];
      if ( v82 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v84 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v84 + 7, 2u);
      }
      v27 = (_QWORD *)v10[1];
      v28 = (char *)v84 + 8;
      if ( (_QWORD *)*v27 != v10 )
        __fastfail(3u);
      v29 = v92;
      v12 = v89;
      *v28 = v10;
      v28[1] = v27;
      *v27 = v28;
      v10[1] = v28;
      *((_BYTE *)v18 + 4) = v21[5];
      *((_BYTE *)v18 + 5) = v21[6];
      *((_BYTE *)v18 + 6) = v21[7];
      v30 = *v21;
      v31 = (char *)v84;
      v32 = &v21[v30];
      v33 = *(unsigned __int16 *)(*((_QWORD *)v88 + 3) + 2LL) - v30 - (_QWORD)v21;
      v34 = 0;
      v35 = (unsigned __int64)&v32[v33 + (_QWORD)v12];
      if ( *(_DWORD *)v29 )
      {
        while ( (unsigned __int64)v32 < v35 )
        {
          v36 = (unsigned __int64)v34 << 6;
          *(_DWORD *)&v31[v36 + 64] = *(_DWORD *)&v18[12 * v34 + 22];
          *(_DWORD *)&v31[v36 + 48] = 1;
          v37 = v32 + 1;
          if ( (unsigned __int64)(v32 + 1) >= v35 )
          {
            v38 = 23;
            goto LABEL_67;
          }
          while ( *v37 != 5 )
          {
            if ( !*v32 )
            {
              v38 = 24;
              goto LABEL_67;
            }
            v32 += *v32;
            if ( (unsigned __int64)v32 >= v35 )
            {
              v38 = 25;
              goto LABEL_67;
            }
            v37 = v32 + 1;
            if ( (unsigned __int64)(v32 + 1) >= v35 )
            {
              v38 = 26;
              goto LABEL_67;
            }
          }
          if ( (unsigned __int64)(v32 + 7) > v35 )
          {
            v38 = 28;
            goto LABEL_67;
          }
          if ( (*(_DWORD *)&v18[12 * v34 + 22] & 1) != 0 )
            *((_WORD *)v32 + 2) = v18[12 * v34 + 12];
          *(_QWORD *)&v31[v36 + 72] = v32;
          *(_DWORD *)&v31[v36 + 80] = v35 - (_DWORD)v32;
          v39 = *((_WORD *)v32 + 2);
          if ( *(_WORD *)(a1 + 1974) < 0x250u )
            v39 = (v39 & 0x7FF) * ((v93 & (v39 >> 11)) + 1);
          v18[12 * v34 + 12] = v39;
          v40 = v32[6];
          if ( (unsigned __int8)v40 >= 6u )
            v40 = 6;
          HIBYTE(v18[12 * v34 + 13]) = v40;
          LOBYTE(v18[12 * v34 + 13]) = v32[2];
          if ( (v32[3] & 3) != 0 )
          {
            switch ( v32[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v18[12 * v34 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v18[12 * v34 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v18[12 * v34 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v18[12 * v34 + 14] = 0;
          }
          if ( !v18[12 * v34 + 12] )
            _InterlockedOr((volatile signed __int32 *)&v31[v36 + 52], 1u);
          if ( !*v32 )
          {
            v38 = 29;
            goto LABEL_67;
          }
          v32 += *v32;
          if ( (unsigned __int64)v32 < v35 && (unsigned __int64)(v32 + 1) < v35 && v32[1] == 48 )
          {
            if ( *v32 )
            {
              if ( (unsigned __int64)(v32 + 6) <= v35 )
              {
                v41 = *(_QWORD *)&v31[v36 + 72];
                *(_QWORD *)&v31[v36 + 88] = v32;
                if ( (*(_BYTE *)(v41 + 3) & 3) == 1 )
                {
                  if ( (*(_DWORD *)&v31[v36 + 52] & 1) == 0 )
                    v18[12 * v34 + 12] = *((_WORD *)v32 + 2);
                  if ( v32[3] >= 0x80u )
                  {
                    v32 += *v32;
                    if ( (unsigned __int64)v32 < v35
                      && (unsigned __int64)(v32 + 1) < v35
                      && v32[1] == 49
                      && *v32
                      && (unsigned __int64)(v32 + 8) <= v35 )
                    {
                      *(_QWORD *)&v31[v36 + 96] = v32;
                    }
                  }
                }
              }
            }
          }
          if ( ++v34 >= *(_DWORD *)v29 )
          {
            LODWORD(v12) = (_DWORD)v89;
            goto LABEL_60;
          }
        }
        v38 = 22;
LABEL_67:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          v38,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
LABEL_68:
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1548) = -1073737984;
        goto LABEL_69;
      }
LABEL_60:
      v11 = v94;
      v13 = (unsigned __int8 *)(v94 + 1);
    }
    v5 = a1 + 48;
    v43 = *(_QWORD *)(a1 + 48);
    if ( v43 )
    {
      for ( j = *(_QWORD *)(v43 + 16); ; j = *(_QWORD *)(v45 + 8) )
      {
        v45 = j - 8;
        if ( v43 + 16 == v45 + 8 )
          break;
        v46 = *(_DWORD *)(v45 + 24);
        v47 = 0;
        if ( v46 )
        {
          v48 = v45 + 72;
          while ( (*(_BYTE *)(*(_QWORD *)v48 + 2LL) & 0xF) != 0 )
          {
            ++v47;
            v48 += 64LL;
            if ( v47 >= v46 )
              goto LABEL_82;
          }
          v8 = -1073741823;
          *(_DWORD *)(a1 + 1548) = -1072693239;
          goto LABEL_69;
        }
LABEL_82:
        ;
      }
    }
    LOWORD(v85) = 0;
    v49 = 0;
    v86 = 0;
    v83 = 0;
    if ( v43 )
    {
      for ( k = *(_QWORD *)(v43 + 16); ; k = *(_QWORD *)(v51 + 8) )
      {
        v51 = k - 8;
        if ( v43 + 16 == v51 + 8 )
          break;
        v52 = 0;
        v53 = *(_DWORD *)(v51 + 24);
        if ( v53 )
        {
          v54 = v51 + 52;
          do
          {
            v55 = *(_QWORD *)(v54 + 20);
            if ( (*(_DWORD *)v54 & 1) == 0 )
            {
              if ( (*(_BYTE *)(v55 + 3) & 3) != 0 )
              {
                v56 = (__int16 *)&v85;
                if ( *(char *)(v55 + 2) >= 0 )
                  v56 = &v86;
              }
              else
              {
                v56 = (__int16 *)&v83;
              }
              v57 = *(_BYTE *)(v55 + 2);
              if ( ((v49 >> (v57 & 0xF)) & 1) != 0 || (((unsigned __int16)*v56 >> (v57 & 0xF)) & 1) != 0 )
              {
                WPP_RECORDER_SF_Dq(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                  *(unsigned __int8 *)(*(_QWORD *)(v54 + 20) + 2LL),
                  (__int64)v56,
                  v43,
                  v80);
                goto LABEL_68;
              }
              *v56 |= 1 << (v57 & 0xF);
              v49 = v83;
            }
            ++v52;
            v54 += 64LL;
          }
          while ( v52 < v53 );
        }
      }
    }
    v8 = 0;
    v58 = (unsigned int)v87;
    *((_DWORD *)v96 + 2) = v87;
    v59 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v59 )
    {
      if ( (unsigned int)v58 <= v59 )
        goto LABEL_121;
      v60 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v60 )
      {
        ExFreePoolWithTag(v60, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v61 = *(void **)(a1 + 136);
      if ( v61 )
      {
        ExFreePoolWithTag(v61, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v62 = *(void **)(a1 + 120);
      if ( v62 )
      {
        ExFreePoolWithTag(v62, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v58 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v64 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v64;
        if ( v64 )
        {
          v65 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v65;
          if ( v65 )
          {
            *(_DWORD *)(a1 + 96) = v58;
LABEL_122:
            v69 = *(_QWORD *)(a1 + 56);
            if ( v69 )
            {
              *(_DWORD *)(a1 + 144) = 0;
              *(_DWORD *)(a1 + 128) = 0;
              v70 = *(_QWORD *)(v69 + 16) - 8LL;
              if ( v69 != *(_QWORD *)(v69 + 16) - 16LL )
              {
                do
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
                }
                while ( *(_QWORD *)(a1 + 56) != v70 - 8 );
              }
            }
            goto LABEL_132;
          }
        }
      }
      v66 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v66 )
      {
        ExFreePoolWithTag(v66, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v67 = *(void **)(a1 + 136);
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v68 = *(void **)(a1 + 120);
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      LODWORD(v81) = -1073741670;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
        v81);
    }
LABEL_121:
    if ( v8 < 0 )
      goto LABEL_69;
    goto LABEL_122;
  }
  LODWORD(v81) = v7;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x1Fu,
    (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
    v81);
LABEL_133:
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
        v78 = WdfDriverGlobals;
        *v75 = (__int64 *)v77;
        *(_QWORD *)(v77 + 8) = v75;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(v78, *(v76 - 1));
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v74);
    }
    *((_QWORD *)v88 + 4) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 4) = *(_QWORD *)v5;
  }
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
