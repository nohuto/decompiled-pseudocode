/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0024B78
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C001B3D0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0010194 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     HUBMISC_CheckForSharedEndpoints @ 0x1C0023F40 (HUBMISC_CheckForSharedEndpoints.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0028C54 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  KIRQL v4; // al
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // r9d
  int v8; // r8d
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r14
  int v11; // ebx
  _DWORD *v12; // rcx
  unsigned int v13; // edx
  __int16 v14; // cx
  size_t v15; // r15
  int v16; // eax
  unsigned int v17; // r15d
  char *v18; // rbx
  unsigned __int8 *v19; // r8
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r10
  _BYTE *v22; // rax
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // ax
  char v25; // cl
  __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  char *v29; // rdx
  __int64 *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 *v33; // r12
  unsigned int v34; // r12d
  unsigned int v35; // eax
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  PVOID PoolWithTag; // rax
  PVOID v40; // rax
  PVOID v41; // rax
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  char v45; // al
  __int64 v46; // r9
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  unsigned int v49; // r8d
  unsigned __int64 v50; // rax
  int v51; // ecx
  __int64 i; // r8
  unsigned int j; // r10d
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 **v56; // rcx
  __int64 **v57; // rax
  int USBDErrorFromNTStatus; // eax
  __int64 result; // rax
  __int64 v60; // [rsp+30h] [rbp-81h]
  char v61[8]; // [rsp+58h] [rbp-59h] BYREF
  void *v62; // [rsp+60h] [rbp-51h] BYREF
  __int64 v63; // [rsp+68h] [rbp-49h]
  __int64 v64; // [rsp+70h] [rbp-41h] BYREF
  __int64 v65; // [rsp+78h] [rbp-39h]
  _DWORD v66[14]; // [rsp+80h] [rbp-31h] BYREF
  _QWORD v67[5]; // [rsp+B8h] [rbp+7h] BYREF

  v61[0] = 0;
  v62 = 0LL;
  v63 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFF7FFF);
  memset(v67, 0, sizeof(v67));
  v2 = *(_QWORD *)(a1 + 440);
  LOWORD(v67[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v67);
  v3 = v67[1];
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(unsigned __int8 *)(v3 + 35);
  v8 = *(unsigned __int8 *)(v3 + 34);
  v65 = *(_QWORD *)(a1 + 48);
  v5 = v65;
  v9 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                            (int)v5 + 32,
                            (int)v5 + 32,
                            v8,
                            v7,
                            -1,
                            -1,
                            -1,
                            (__int64)v61,
                            *(_QWORD *)(v6 + 1432));
  v10 = v9;
  if ( !v9 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x22u,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
    *(_DWORD *)(a1 + 1548) = -1073725440;
    v11 = -1073741823;
    goto LABEL_122;
  }
  v12 = *(_DWORD **)(a1 + 2432);
  if ( v12 )
  {
    v13 = 0;
    if ( *v12 )
    {
      while ( *((_BYTE *)v12 + 2 * v13 + 5) != v9[3] || *((_BYTE *)v12 + 2 * v13 + 4) != v9[2] )
      {
        if ( ++v13 >= *v12 )
          goto LABEL_10;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x8000u);
    }
  }
LABEL_10:
  v14 = v9[4] + 1;
  *(_DWORD *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_WORD *)(v3 + 32) = 24 * v14;
  *(_DWORD *)(v3 + 48) = v9[4];
  memset(v66, 0, sizeof(v66));
  v66[6] = 1;
  v66[7] = 1;
  v66[0] = 56;
  v15 = ((unsigned __int64)*(unsigned int *)(v3 + 48) << 6) + 40;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          v66,
          (unsigned int)ExDefaultNonPagedPoolType,
          1681082453LL,
          v15,
          &v64,
          &v62);
  v11 = v16;
  if ( v16 < 0 )
  {
    LODWORD(v60) = v16;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x23u,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
      v60);
    goto LABEL_120;
  }
  memset(v62, 0, v15);
  *(_QWORD *)v62 = v64;
  *((_QWORD *)v62 + 4) = v10;
  *((_DWORD *)v62 + 6) = v10[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v61[0] == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v62 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v62 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v62;
  }
  *(_BYTE *)(v3 + 36) = v10[5];
  v17 = 0;
  *(_BYTE *)(v3 + 37) = v10[6];
  *(_BYTE *)(v3 + 38) = v10[7];
  v18 = (char *)v62;
  v19 = &v10[*v10];
  v20 = *(unsigned __int16 *)(v5 + 34) + v5 + 32;
  if ( *(_DWORD *)(v3 + 48) )
  {
    while ( (unsigned __int64)v19 < v20 )
    {
      v21 = (unsigned __int64)v17 << 6;
      *(_DWORD *)&v18[v21 + 64] = *(_DWORD *)(v3 + 24LL * v17 + 76);
      v22 = v19 + 1;
      *(_DWORD *)&v18[v21 + 48] = 1;
      if ( (unsigned __int64)(v19 + 1) >= v20 )
      {
        v23 = 23;
        goto LABEL_63;
      }
      while ( *v22 != 5 )
      {
        if ( !*v19 )
        {
          v23 = 24;
          goto LABEL_63;
        }
        v19 += *v19;
        if ( (unsigned __int64)v19 >= v20 )
        {
          v23 = 25;
          goto LABEL_63;
        }
        v22 = v19 + 1;
        if ( (unsigned __int64)(v19 + 1) >= v20 )
        {
          v23 = 26;
          goto LABEL_63;
        }
      }
      if ( (unsigned __int64)(v19 + 7) > v20 )
      {
        v23 = 28;
        goto LABEL_63;
      }
      if ( (*(_DWORD *)(v3 + 24LL * v17 + 76) & 1) != 0 )
        *((_WORD *)v19 + 2) = *(_WORD *)(v3 + 24LL * v17 + 56);
      *(_QWORD *)&v18[v21 + 72] = v19;
      *(_DWORD *)&v18[v21 + 80] = v20 - (_DWORD)v19;
      v24 = *((_WORD *)v19 + 2);
      if ( *(_WORD *)(a1 + 1974) < 0x250u )
        v24 = (v24 & 0x7FF) * (((v24 >> 11) & 3) + 1);
      *(_WORD *)(v3 + 24LL * v17 + 56) = v24;
      v25 = v19[6];
      if ( (unsigned __int8)v25 >= 6u )
        v25 = 6;
      *(_BYTE *)(v3 + 24LL * v17 + 59) = v25;
      *(_BYTE *)(v3 + 24LL * v17 + 58) = v19[2];
      if ( (v19[3] & 3) != 0 )
      {
        switch ( v19[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v3 + 24LL * v17 + 60) = 1;
            break;
          case 2:
            *(_DWORD *)(v3 + 24LL * v17 + 60) = 2;
            break;
          case 3:
            *(_DWORD *)(v3 + 24LL * v17 + 60) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 24LL * v17 + 60) = 0;
      }
      if ( !*(_WORD *)(v3 + 24LL * v17 + 56) )
        _InterlockedOr((volatile signed __int32 *)&v18[v21 + 52], 1u);
      if ( !*v19 )
      {
        v23 = 29;
        goto LABEL_63;
      }
      v19 += *v19;
      if ( (unsigned __int64)v19 < v20 && (unsigned __int64)(v19 + 1) < v20 && v19[1] == 48 )
      {
        if ( *v19 )
        {
          if ( (unsigned __int64)(v19 + 6) <= v20 )
          {
            v26 = *(_QWORD *)&v18[v21 + 72];
            *(_QWORD *)&v18[v21 + 88] = v19;
            if ( (*(_BYTE *)(v26 + 3) & 3) == 1 )
            {
              if ( (*(_DWORD *)&v18[v21 + 52] & 1) == 0 )
                *(_WORD *)(v3 + 24LL * v17 + 56) = *((_WORD *)v19 + 2);
              if ( (v19[3] & 0x80u) != 0 )
              {
                v19 += *v19;
                if ( (unsigned __int64)v19 < v20
                  && (unsigned __int64)(v19 + 1) < v20
                  && v19[1] == 49
                  && *v19
                  && (unsigned __int64)(v19 + 8) <= v20 )
                {
                  *(_QWORD *)&v18[v21 + 96] = v19;
                }
              }
            }
          }
        }
      }
      if ( ++v17 >= *(_DWORD *)(v3 + 48) )
        goto LABEL_64;
    }
    v23 = 22;
LABEL_63:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v23,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
    v11 = -1073741823;
    *(_DWORD *)(a1 + 1548) = -1073725440;
    goto LABEL_122;
  }
LABEL_64:
  v27 = 0;
  v28 = *((_DWORD *)v62 + 6);
  if ( v28 )
  {
    v29 = (char *)v62 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v29 + 2LL) & 0xF) != 0 )
    {
      ++v27;
      v29 += 64;
      if ( v27 >= v28 )
        goto LABEL_68;
    }
    v11 = -1073741823;
    *(_DWORD *)(a1 + 1548) = -1072693239;
    goto LABEL_122;
  }
LABEL_68:
  v30 = (__int64 *)(v5 + 16);
  *(_QWORD *)(a1 + 72) = 0LL;
  v31 = *(_QWORD *)(v5 + 16);
  v61[0] = 0;
  while ( 1 )
  {
    v32 = v31 - 8;
    v33 = (__int64 *)(v32 + 8);
    if ( v30 == (__int64 *)(v32 + 8) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(v32 + 32) + 2LL) == *(_BYTE *)(v3 + 34) )
    {
      v63 = v32;
      v61[0] = 1;
    }
    else
    {
      v11 = HUBMISC_CheckForSharedEndpoints(a1, v32, (__int64)v62);
      if ( v11 < 0 )
        goto LABEL_122;
    }
    v31 = *v33;
  }
  v34 = *(_DWORD *)(v5 + 8) + *((_DWORD *)v62 + 6);
  v35 = *(_DWORD *)(a1 + 96);
  v11 = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( v35 )
  {
    if ( v34 <= v35 )
      goto LABEL_97;
    v36 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v36 )
    {
      ExFreePoolWithTag(v36, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v37 = *(void **)(a1 + 136);
    if ( v37 )
    {
      ExFreePoolWithTag(v37, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v38 = *(void **)(a1 + 120);
    if ( v38 )
    {
      ExFreePoolWithTag(v38, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  if ( *(_DWORD *)(a1 + 96) || !v34 )
  {
LABEL_97:
    if ( v11 < 0 )
      goto LABEL_122;
    goto LABEL_98;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v34, 0x64334855u);
  *(_QWORD *)(a1 + 104) = PoolWithTag;
  if ( !PoolWithTag
    || (v40 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v34, 0x64334855u),
        (*(_QWORD *)(a1 + 136) = v40) == 0LL)
    || (v41 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v34, 0x64334855u),
        (*(_QWORD *)(a1 + 120) = v41) == 0LL) )
  {
    v42 = *(void **)(a1 + 104);
    v11 = -1073741670;
    *(_DWORD *)(a1 + 96) = 0;
    if ( v42 )
    {
      ExFreePoolWithTag(v42, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v43 = *(void **)(a1 + 136);
    if ( v43 )
    {
      ExFreePoolWithTag(v43, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v44 = *(void **)(a1 + 120);
    if ( v44 )
    {
      ExFreePoolWithTag(v44, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    LODWORD(v60) = -1073741670;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Eu,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
      v60);
    goto LABEL_97;
  }
  *(_DWORD *)(a1 + 96) = v34;
LABEL_98:
  v45 = v61[0];
  v46 = v63;
  if ( v61[0] )
    v34 -= *(_DWORD *)(v63 + 24);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v45 )
  {
    v47 = *(_QWORD *)(v46 + 8);
    v48 = *(_QWORD **)(v46 + 16);
    if ( *(_QWORD *)(v47 + 8) != v46 + 8 || *v48 != v46 + 8 )
      __fastfail(3u);
    *v48 = v47;
    v49 = 0;
    *(_QWORD *)(v47 + 8) = v48;
    for ( *(_QWORD *)(a1 + 72) = v46; v49 < *(_DWORD *)(v46 + 24); ++v49 )
    {
      v50 = (unsigned __int64)v49 << 6;
      v51 = *(_DWORD *)(v50 + v46 + 48);
      if ( v51 == 4 )
      {
        *(_DWORD *)(v50 + v46 + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v50 + v46 + 40);
      }
      else if ( v51 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v50 + v46 + 40);
      }
    }
  }
  for ( i = *v30; ; i = *(_QWORD *)(v55 + 8) )
  {
    v55 = i - 8;
    if ( v30 == (__int64 *)(v55 + 8) )
      break;
    for ( j = 0; j < *(_DWORD *)(v55 + 24); ++*(_DWORD *)(a1 + 144) )
    {
      v54 = j++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)((v54 << 6) + v55 + 40);
    }
  }
  v56 = *(__int64 ***)(v5 + 24);
  v57 = (__int64 **)((char *)v62 + 8);
  if ( *v56 != v30 )
    __fastfail(3u);
  *v57 = v30;
  v57[1] = (__int64 *)v56;
  *v56 = (__int64 *)v57;
  *(_QWORD *)(v5 + 24) = v57;
  *(_QWORD *)(a1 + 80) = v62;
  *(_DWORD *)(v65 + 8) = v34;
LABEL_120:
  if ( v11 >= 0 )
  {
    *(_QWORD *)(v3 + 40) = v62;
    goto LABEL_129;
  }
LABEL_122:
  *(_QWORD *)(v3 + 40) = -1LL;
  if ( v62 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v62);
  *(_DWORD *)(a1 + 1544) = v11;
  if ( !*(_DWORD *)(a1 + 1548) )
  {
    if ( v11 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v11);
    *(_DWORD *)(a1 + 1548) = USBDErrorFromNTStatus;
  }
LABEL_129:
  result = 4065LL;
  if ( v11 >= 0 )
    return 4077LL;
  return result;
}
