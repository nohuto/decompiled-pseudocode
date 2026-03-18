/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140510680
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x14012C0A0 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x14012C0F0 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401C0458 (PiDevCfgMatchDriverConfigurationId.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     PiDevCfgQueryDriverNode @ 0x140510B28 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405112BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x140514E48 (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, const wchar_t *a2, __int64 *a3)
{
  int v4; // r14d
  int v5; // edi
  const wchar_t *v6; // r15
  __int64 v7; // r13
  int v8; // eax
  PVOID PoolWithTag; // rax
  __int64 v10; // r11
  _WORD *v11; // r12
  const WCHAR **v12; // rcx
  unsigned int v13; // eax
  const WCHAR *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  SIZE_T v20; // rbx
  int ObjectProperty; // eax
  const wchar_t *v22; // rdi
  wchar_t *v23; // rax
  wchar_t *v24; // rbx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  const WCHAR *v28; // r10
  char v29; // bl
  int v30; // edx
  int DriverNode; // eax
  __int64 v32; // rdi
  const WCHAR *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  PCWSTR *v36; // rbx
  unsigned int v37; // r12d
  PCWSTR *v38; // r15
  PCWSTR v39; // rax
  __int64 v40; // rax
  bool v41; // sf
  __int64 *v42; // rax
  __int64 *v43; // rcx
  __int64 **v44; // rdx
  __int64 v45; // rax
  PVOID v46; // rax
  __int64 *v47; // rax
  bool matched; // al
  int v49; // eax
  wchar_t *v50; // rax
  wchar_t *v51; // rbx
  wchar_t *v52; // rax
  int v53; // eax
  __int64 v54; // rax
  const wchar_t *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 i; // rdi
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 *v65; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v66; // [rsp+68h] [rbp-51h]
  unsigned int v67; // [rsp+70h] [rbp-49h]
  int v68; // [rsp+74h] [rbp-45h]
  __int64 v69; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v70; // [rsp+80h] [rbp-39h]
  int v71; // [rsp+88h] [rbp-31h]
  int v72; // [rsp+8Ch] [rbp-2Dh] BYREF
  const WCHAR *v73; // [rsp+90h] [rbp-29h]
  const wchar_t *v74; // [rsp+98h] [rbp-21h]
  __int64 v75; // [rsp+A0h] [rbp-19h] BYREF
  PVOID P; // [rsp+A8h] [rbp-11h]
  const WCHAR **v77; // [rsp+B0h] [rbp-9h]
  const wchar_t *v78; // [rsp+B8h] [rbp-1h]
  int v79; // [rsp+C0h] [rbp+7h]
  const wchar_t *v80; // [rsp+C8h] [rbp+Fh]
  __int64 v81; // [rsp+D0h] [rbp+17h]
  PCWSTR *v82; // [rsp+D8h] [rbp+1Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v84; // [rsp+130h] [rbp+77h]
  int v85; // [rsp+138h] [rbp+7Fh]

  v84 = a3;
  v66 = (__int64 *)&v65;
  v65 = (__int64 *)&v65;
  v70 = &v69;
  v69 = (__int64)&v69;
  v71 = 0;
  v78 = 0LL;
  v4 = 0;
  v80 = 0LL;
  v5 = 0;
  v72 = 1;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v7 = 0LL;
  v75 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    v78 = a2;
    v45 = -1LL;
    do
      ++v45;
    while ( a2[v45] );
    v80 = (const wchar_t *)((unsigned __int64)&a2[v45 + 1] & -(__int64)(a2[v45 + 1] != 0));
  }
  v8 = 1;
  if ( PnpSetupInProgress )
    v8 = 3;
  v81 = 520LL;
  v79 = v8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = 0LL;
  P = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_13;
  }
  v12 = (const WCHAR **)(a1 + 32);
  v13 = 0;
  v67 = 0;
  v82 = (PCWSTR *)(a1 + 32);
  v77 = (const WCHAR **)(a1 + 32);
  do
  {
    v14 = *v12;
    v73 = v14;
    if ( !v14 )
      goto LABEL_7;
    v68 = v10;
    if ( *v14 != (_WORD)v10 )
    {
      do
      {
        LODWORD(v20) = v81;
        v72 = 1;
        LODWORD(NumberOfBytes) = v10;
        while ( 1 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v14,
                             0xAu,
                             -1LL,
                             v10,
                             (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                             (__int64)&v72,
                             (__int64)v11,
                             v20,
                             (__int64)&NumberOfBytes,
                             v10);
          v10 = 0LL;
          v4 = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( (unsigned int)NumberOfBytes <= (unsigned int)v20 )
            goto LABEL_87;
          v20 = (unsigned int)NumberOfBytes;
          v81 = (unsigned int)NumberOfBytes;
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          v46 = ExAllocatePoolWithTag(PagedPool, v20, 0x63647050u);
          v10 = 0LL;
          P = v46;
          v11 = v46;
          if ( !v46 )
          {
            v4 = -1073741670;
            break;
          }
        }
        if ( v4 == -1073741670 )
          break;
        if ( v4 < 0 )
        {
          if ( v4 == -1073741790 || v4 == -1073740697 )
          {
            if ( v5 != -1073741772 )
              v5 = v4;
            v71 = v5;
          }
          else if ( v4 == -1073741772 )
          {
            v71 = -1073741772;
          }
LABEL_87:
          v4 = 0;
        }
        else if ( v72 == 8210 )
        {
          v22 = v11;
          if ( *v11 )
          {
            do
            {
              v23 = wcschr(v22, 0x5Cu);
              v10 = 0LL;
              v24 = v23;
              if ( !v23 )
                goto LABEL_39;
              v25 = DrvDbSplitDeviceIdDriverInfMatch(v22, 0LL, 0LL);
              v10 = 0LL;
              v4 = v25;
              if ( v25 < 0 )
                break;
              v26 = v67;
              v27 = v79;
              v28 = v22;
              *v24 = 0;
              v22 = v24 + 1;
              v29 = v85;
              v30 = v27;
              v74 = v22;
              if ( v26 == 2 )
              {
                if ( (_BYTE)v85 != 3 )
                  goto LABEL_39;
                v30 = v27 | 8;
              }
              if ( (_BYTE)v85 != 1 && (_BYTE)v85 != 2 && (_BYTE)v85 != 3 )
                goto LABEL_39;
              DriverNode = PiDevCfgQueryDriverNode(v28, v14, v30, (__int64)&v75);
              v10 = 0LL;
              v4 = DriverNode;
              if ( DriverNode >= 0 )
              {
                v32 = v75;
                v33 = *(const WCHAR **)(v75 + 152);
                if ( v33 )
                {
                  if ( *v33 )
                  {
                    v36 = v82;
                    do
                    {
                      v37 = 0;
                      v38 = v36;
                      while ( 1 )
                      {
                        if ( *v38 )
                        {
                          v39 = PnpMultiSzContainsString(*v38, v33);
                          v10 = 0LL;
                          if ( v39 )
                            break;
                        }
                        ++v37;
                        v38 += 2;
                        if ( v37 >= 3 )
                          goto LABEL_54;
                      }
                      *(_QWORD *)(v32 + 160) = v33;
LABEL_54:
                      if ( *(_QWORD *)(v32 + 160) )
                        break;
                      v40 = -1LL;
                      do
                        ++v40;
                      while ( v33[v40] );
                      v33 += v40 + 1;
                    }
                    while ( *v33 );
                    v29 = v85;
                  }
                  if ( *(_QWORD *)(v32 + 160) )
                    *(_DWORD *)(v32 + 108) |= 0xFFFFu;
                }
                if ( v29 == 3 )
                {
                  v47 = v70;
                  *(_QWORD *)v32 = &v69;
                  *(_QWORD *)(v32 + 8) = v47;
                  if ( (__int64 *)*v47 != &v69 )
                    __fastfail(3u);
                  v6 = v78;
                  *v47 = v32;
                  v70 = (__int64 *)v32;
                }
                else
                {
                  v6 = v78;
                  if ( v78 )
                  {
                    matched = PiDevCfgMatchDriverConfigurationId(v32, v78);
                    v10 = 0LL;
                    if ( !matched )
                    {
                      v42 = v66;
                      *(_QWORD *)v32 = &v65;
                      *(_QWORD *)(v32 + 8) = v42;
                      if ( (__int64 **)*v42 != &v65 )
                        __fastfail(3u);
                      goto LABEL_63;
                    }
                  }
                  if ( *(_QWORD *)(v32 + 160) )
                  {
                    v42 = v66;
                    *(_QWORD *)v32 = &v65;
                    *(_QWORD *)(v32 + 8) = v42;
                    if ( (__int64 **)*v42 != &v65 )
                      __fastfail(3u);
LABEL_63:
                    *v42 = v32;
                    v66 = (__int64 *)v32;
                  }
                  else
                  {
                    if ( !v7 )
                      goto LABEL_37;
                    v41 = (int)PiDevCfgCompareDrivers(v32, v7) < 0;
                    v42 = v66;
                    if ( !v41 )
                    {
                      *(_QWORD *)v32 = &v65;
                      *(_QWORD *)(v32 + 8) = v42;
                      if ( (__int64 **)*v42 != &v65 )
                        __fastfail(3u);
                      goto LABEL_63;
                    }
                    *(_QWORD *)v7 = &v65;
                    *(_QWORD *)(v7 + 8) = v42;
                    if ( (__int64 **)*v42 != &v65 )
                      __fastfail(3u);
                    *v42 = v7;
                    v66 = (__int64 *)v7;
                    if ( (*(_DWORD *)(v7 + 168) & 0xC) != 0 )
                    {
                      v49 = *(_DWORD *)(v32 + 168);
                      if ( (v49 & 4) == 0 )
                        *(_DWORD *)(v32 + 168) = v49 | 8;
                    }
LABEL_37:
                    v7 = v32;
                  }
                }
                v14 = v73;
                v22 = v74;
                goto LABEL_39;
              }
              v4 = 0;
LABEL_39:
              v34 = -1LL;
              do
                ++v34;
              while ( v22[v34] != (_WORD)v10 );
              v22 += v34 + 1;
            }
            while ( *v22 != (_WORD)v10 );
          }
        }
        v35 = -1LL;
        do
          ++v35;
        while ( v14[v35] != (_WORD)v10 );
        ++v68;
        v5 = v71;
        v14 += v35 + 1;
        v11 = P;
        v73 = v14;
      }
      while ( *v14 != (_WORD)v10 );
      v12 = v77;
      v13 = v67;
    }
    if ( v4 < 0 )
      goto LABEL_13;
    v11 = P;
LABEL_7:
    ++v13;
    v12 += 2;
    v67 = v13;
    v77 = v12;
  }
  while ( v13 < 3 );
  if ( !v6 )
    goto LABEL_9;
  if ( v7 )
  {
LABEL_10:
    while ( 1 )
    {
      v15 = v65;
      if ( v65 == (__int64 *)&v65 )
        break;
      v43 = (__int64 *)*v65;
      if ( (__int64 **)v65[1] != &v65 || (__int64 *)v43[1] != v65 )
        __fastfail(3u);
      v65 = (__int64 *)*v65;
      v43[1] = (__int64)&v65;
      v44 = *(__int64 ***)(v7 + 216);
      *v15 = v7 + 208;
      v15[1] = (__int64)v44;
      if ( *v44 != (__int64 *)(v7 + 208) )
        __fastfail(3u);
      *v44 = v15;
      *(_QWORD *)(v7 + 216) = v15;
    }
    while ( 1 )
    {
      v16 = v69;
      if ( (__int64 *)v69 == &v69 )
      {
        *v84 = v7;
        v7 = v10;
        goto LABEL_13;
      }
      v54 = *(_QWORD *)v69;
      if ( *(__int64 **)(v69 + 8) != &v69 || *(_QWORD *)(v54 + 8) != v69 )
        __fastfail(3u);
      v69 = *(_QWORD *)v69;
      *(_QWORD *)(v54 + 8) = &v69;
      if ( PnpIsNullGuid((void *)(v16 + 172)) || *(_QWORD *)(v16 + 160) )
        goto LABEL_128;
      if ( !v80 )
        goto LABEL_129;
      v55 = v80;
      if ( !*v80 )
      {
LABEL_128:
        PiDevCfgFreeDriverNode(v16);
        v10 = 0LL;
      }
      else
      {
        while ( !PiDevCfgMatchDriverConfigurationId(v16, v55) )
        {
          v56 = -1LL;
          do
            ++v56;
          while ( v55[v56] );
          v55 += v56 + 1;
          if ( !*v55 )
            goto LABEL_128;
        }
LABEL_129:
        v57 = v7 + 192;
        for ( i = *(_QWORD *)(v7 + 192); i != v57; i = *(_QWORD *)i )
        {
          v59 = *(_QWORD *)(i + 172) - *(_QWORD *)(v16 + 172);
          if ( !v59 )
            v59 = *(_QWORD *)(i + 180) - *(_QWORD *)(v16 + 180);
          if ( !v59 && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 72), (PCUNICODE_STRING)(v16 + 72), 1u) )
          {
            if ( (int)PiDevCfgCompareDrivers(v16, i) >= 0 )
            {
              i = v16;
              v16 = 0LL;
            }
            else
            {
              v60 = *(_QWORD *)i;
              v61 = *(__int64 **)(i + 8);
              if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v61 != i )
                __fastfail(3u);
              *v61 = v60;
              *(_QWORD *)(v60 + 8) = v61;
            }
            if ( i )
              PiDevCfgFreeDriverNode(i);
            break;
          }
        }
        v10 = 0LL;
        if ( v16 )
        {
          v62 = *(__int64 **)(v7 + 200);
          *(_QWORD *)v16 = v57;
          *(_QWORD *)(v16 + 8) = v62;
          if ( *v62 != v57 )
            __fastfail(3u);
          *v62 = v16;
          *(_QWORD *)(v7 + 200) = v16;
        }
      }
    }
  }
  v50 = wcschr(v6, 0x3Au);
  v51 = v50;
  if ( !v50 || (*v50 = 0, (v52 = wcschr(v50 + 1, 0x2Cu)) == 0LL) )
  {
    v4 = -1073741773;
    goto LABEL_13;
  }
  *v52 = 0;
  v53 = PiDevCfgQueryDriverNode(v6, v51 + 1, 4, (__int64)&v75);
  v10 = 0LL;
  if ( v53 >= 0 )
  {
    v7 = v75;
LABEL_9:
    if ( v7 )
      goto LABEL_10;
  }
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_13:
  while ( 1 )
  {
    v17 = v65;
    if ( v65 == (__int64 *)&v65 )
      break;
    v63 = *v65;
    if ( (__int64 **)v65[1] != &v65 || *(__int64 **)(v63 + 8) != v65 )
      __fastfail(3u);
    v65 = (__int64 *)*v65;
    *(_QWORD *)(v63 + 8) = &v65;
    PiDevCfgFreeDriverNode(v17);
  }
  while ( 1 )
  {
    v18 = v69;
    if ( (__int64 *)v69 == &v69 )
      break;
    v64 = *(_QWORD *)v69;
    if ( *(__int64 **)(v69 + 8) != &v69 || *(_QWORD *)(v64 + 8) != v69 )
      __fastfail(3u);
    v69 = *(_QWORD *)v69;
    *(_QWORD *)(v64 + 8) = &v69;
    PiDevCfgFreeDriverNode(v18);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
