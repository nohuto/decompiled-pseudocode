/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140637B88
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     PiDevCfgCompareDrivers @ 0x1401CE878 (PiDevCfgCompareDrivers.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401CEB38 (PiDevCfgMatchDriverConfigurationId.c)
 *     PnpMultiSzContainsString @ 0x1401CF258 (PnpMultiSzContainsString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406E3484 (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, const wchar_t *a2, __int64 *a3)
{
  int v4; // r14d
  int v5; // edi
  const wchar_t *v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // eax
  PVOID PoolWithTag; // rax
  __int64 v11; // r11
  _WORD *v12; // r12
  const WCHAR **v13; // rcx
  unsigned int v14; // eax
  const WCHAR *v15; // rsi
  SIZE_T v16; // rbx
  int ObjectProperty; // eax
  PVOID v18; // rax
  const wchar_t *v19; // rdi
  wchar_t *v20; // rax
  wchar_t *v21; // rbx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  const WCHAR *v25; // r10
  char v26; // bl
  int v27; // edx
  int DriverNode; // eax
  __int64 v29; // rdi
  const WCHAR *v30; // rsi
  PCWSTR *v31; // rbx
  unsigned int v32; // r12d
  PCWSTR *v33; // r15
  PCWSTR v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rax
  bool matched; // al
  __int64 *v38; // rax
  bool v39; // sf
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  wchar_t *v43; // rax
  wchar_t *v44; // rbx
  wchar_t *v45; // rax
  int v46; // eax
  __int64 *v47; // rax
  __int64 *v48; // rcx
  __int64 **v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  const wchar_t *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 i; // rdi
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 *v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 *v65; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v66; // [rsp+68h] [rbp-51h]
  int v67; // [rsp+70h] [rbp-49h]
  unsigned int v68; // [rsp+74h] [rbp-45h]
  __int64 v69; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v70; // [rsp+80h] [rbp-39h]
  int v71; // [rsp+88h] [rbp-31h] BYREF
  int v72; // [rsp+8Ch] [rbp-2Dh]
  const WCHAR *v73; // [rsp+90h] [rbp-29h]
  const wchar_t *v74; // [rsp+98h] [rbp-21h]
  __int64 v75; // [rsp+A0h] [rbp-19h] BYREF
  PVOID P; // [rsp+A8h] [rbp-11h]
  int v77; // [rsp+B0h] [rbp-9h]
  const wchar_t *v78; // [rsp+B8h] [rbp-1h]
  const WCHAR **v79; // [rsp+C0h] [rbp+7h]
  __int64 v80; // [rsp+C8h] [rbp+Fh]
  const wchar_t *v81; // [rsp+D0h] [rbp+17h]
  PCWSTR *v82; // [rsp+D8h] [rbp+1Fh]
  SIZE_T NumberOfBytes; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v84; // [rsp+130h] [rbp+77h]
  int v85; // [rsp+138h] [rbp+7Fh]

  v84 = a3;
  v66 = (__int64 *)&v65;
  v65 = (__int64 *)&v65;
  v70 = &v69;
  v69 = (__int64)&v69;
  v72 = 0;
  v78 = 0LL;
  v4 = 0;
  v81 = 0LL;
  v5 = 0;
  v71 = 1;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v7 = 0LL;
  v75 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    v78 = a2;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v81 = (const wchar_t *)((unsigned __int64)&a2[v8 + 1] & -(__int64)(a2[v8 + 1] != 0));
  }
  v9 = 1;
  if ( PnpSetupInProgress )
    v9 = 3;
  v80 = 520LL;
  v77 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v11 = 0LL;
  P = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_143;
  }
  v13 = (const WCHAR **)(a1 + 32);
  v14 = 0;
  v68 = 0;
  v82 = (PCWSTR *)(a1 + 32);
  v79 = (const WCHAR **)(a1 + 32);
  do
  {
    v15 = *v13;
    v73 = v15;
    if ( v15 )
    {
      v67 = v11;
      if ( *v15 != (_WORD)v11 )
      {
        do
        {
          LODWORD(v16) = v80;
          v71 = 1;
          LODWORD(NumberOfBytes) = v11;
          while ( 1 )
          {
            ObjectProperty = PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v15,
                               0xAu,
                               -1LL,
                               v11,
                               (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                               (__int64)&v71,
                               (__int64)v12,
                               v16,
                               (__int64)&NumberOfBytes,
                               v11);
            v11 = 0LL;
            v4 = ObjectProperty;
            if ( ObjectProperty != -1073741789 )
              break;
            if ( (unsigned int)NumberOfBytes <= (unsigned int)v16 )
              goto LABEL_28;
            v16 = (unsigned int)NumberOfBytes;
            v80 = (unsigned int)NumberOfBytes;
            if ( v12 )
              ExFreePoolWithTag(v12, 0);
            v18 = ExAllocatePoolWithTag(PagedPool, v16, 0x63647050u);
            v11 = 0LL;
            P = v18;
            v12 = v18;
            if ( !v18 )
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
              v72 = v5;
            }
            else if ( v4 == -1073741772 )
            {
              v72 = -1073741772;
            }
LABEL_28:
            v4 = 0;
            goto LABEL_80;
          }
          if ( v71 == 8210 )
          {
            v19 = v12;
            if ( *v12 )
            {
              while ( 1 )
              {
                v20 = wcschr(v19, 0x5Cu);
                v11 = 0LL;
                v21 = v20;
                if ( !v20 )
                  goto LABEL_77;
                v22 = DrvDbSplitDeviceIdDriverInfMatch(v19, 0LL, 0LL);
                v11 = 0LL;
                v4 = v22;
                if ( v22 < 0 )
                  goto LABEL_80;
                v23 = v68;
                v24 = v77;
                v25 = v19;
                *v21 = 0;
                v19 = v21 + 1;
                v26 = v85;
                v27 = v24;
                v74 = v19;
                if ( v23 == 2 )
                {
                  if ( (_BYTE)v85 != 3 )
                    goto LABEL_77;
                  v27 = v24 | 8;
                }
                if ( (_BYTE)v85 != 1 && (_BYTE)v85 != 2 && (_BYTE)v85 != 3 )
                  goto LABEL_77;
                DriverNode = PiDevCfgQueryDriverNode(v25, v15, v27, (__int64)&v75);
                v11 = 0LL;
                v4 = DriverNode;
                if ( DriverNode < 0 )
                {
                  v4 = 0;
                  goto LABEL_77;
                }
                v29 = v75;
                v30 = *(const WCHAR **)(v75 + 152);
                if ( v30 )
                {
                  if ( *v30 )
                  {
                    v31 = v82;
                    do
                    {
                      v32 = 0;
                      v33 = v31;
                      while ( 1 )
                      {
                        if ( *v33 )
                        {
                          v34 = PnpMultiSzContainsString(*v33, v30);
                          v11 = 0LL;
                          if ( v34 )
                            break;
                        }
                        ++v32;
                        v33 += 2;
                        if ( v32 >= 3 )
                          goto LABEL_50;
                      }
                      *(_QWORD *)(v29 + 160) = v30;
LABEL_50:
                      if ( *(_QWORD *)(v29 + 160) )
                        break;
                      v35 = -1LL;
                      do
                        ++v35;
                      while ( v30[v35] );
                      v30 += v35 + 1;
                    }
                    while ( *v30 );
                    v26 = v85;
                  }
                  if ( *(_QWORD *)(v29 + 160) )
                    *(_DWORD *)(v29 + 108) |= 0xFFFFu;
                }
                if ( v26 == 3 )
                {
                  v36 = v70;
                  if ( (__int64 *)*v70 != &v69 )
                    __fastfail(3u);
                  v6 = v78;
                  *(_QWORD *)v29 = &v69;
                  *(_QWORD *)(v29 + 8) = v36;
                  *v36 = v29;
                  v70 = (__int64 *)v29;
                  goto LABEL_76;
                }
                v6 = v78;
                if ( v78 )
                {
                  matched = PiDevCfgMatchDriverConfigurationId(v29, v78);
                  v11 = 0LL;
                  if ( !matched )
                    break;
                }
                if ( *(_QWORD *)(v29 + 160) )
                {
                  v38 = v66;
                  if ( (__int64 **)*v66 != &v65 )
                    __fastfail(3u);
                  goto LABEL_75;
                }
                if ( v7 )
                {
                  v39 = (int)PiDevCfgCompareDrivers(v29, v7) < 0;
                  v38 = v66;
                  if ( !v39 )
                  {
                    if ( (__int64 **)*v66 != &v65 )
                      __fastfail(3u);
                    goto LABEL_75;
                  }
                  if ( (__int64 **)*v66 != &v65 )
                    __fastfail(3u);
                  *(_QWORD *)(v7 + 8) = v66;
                  *(_QWORD *)v7 = &v65;
                  *v38 = v7;
                  v66 = (__int64 *)v7;
                  if ( (*(_DWORD *)(v7 + 168) & 0xC) != 0 )
                  {
                    v40 = *(_DWORD *)(v29 + 168);
                    if ( (v40 & 4) == 0 )
                      *(_DWORD *)(v29 + 168) = v40 | 8;
                  }
                }
                v7 = v29;
LABEL_76:
                v15 = v73;
                v19 = v74;
LABEL_77:
                v41 = -1LL;
                do
                  ++v41;
                while ( v19[v41] != (_WORD)v11 );
                v19 += v41 + 1;
                if ( *v19 == (_WORD)v11 )
                  goto LABEL_80;
              }
              v38 = v66;
              if ( (__int64 **)*v66 != &v65 )
                __fastfail(3u);
LABEL_75:
              *(_QWORD *)v29 = &v65;
              *(_QWORD *)(v29 + 8) = v38;
              *v38 = v29;
              v66 = (__int64 *)v29;
              goto LABEL_76;
            }
          }
LABEL_80:
          v42 = -1LL;
          do
            ++v42;
          while ( v15[v42] != (_WORD)v11 );
          ++v67;
          v5 = v72;
          v15 += v42 + 1;
          v12 = P;
          v73 = v15;
        }
        while ( *v15 != (_WORD)v11 );
        v13 = v79;
        v14 = v68;
      }
      if ( v4 < 0 )
        goto LABEL_143;
      v12 = P;
    }
    ++v14;
    v13 += 2;
    v68 = v14;
    v79 = v13;
  }
  while ( v14 < 3 );
  if ( v6 )
  {
    if ( v7 )
      goto LABEL_102;
    v43 = wcschr(v6, 0x3Au);
    v44 = v43;
    if ( !v43 || (*v43 = 0, (v45 = wcschr(v43 + 1, 0x2Cu)) == 0LL) )
    {
      v4 = -1073741773;
      goto LABEL_143;
    }
    *v45 = 0;
    v46 = PiDevCfgQueryDriverNode(v6, v44 + 1, 4, (__int64)&v75);
    v11 = 0LL;
    if ( v46 < 0 )
      goto LABEL_98;
    v7 = v75;
  }
  if ( v7 )
  {
LABEL_102:
    while ( 1 )
    {
      v47 = v65;
      if ( v65 == (__int64 *)&v65 )
        break;
      v48 = (__int64 *)*v65;
      if ( (__int64 **)v65[1] != &v65 || (__int64 *)v48[1] != v65 )
        __fastfail(3u);
      v65 = (__int64 *)*v65;
      v48[1] = (__int64)&v65;
      v49 = *(__int64 ***)(v7 + 216);
      if ( *v49 != (__int64 *)(v7 + 208) )
        __fastfail(3u);
      *v47 = v7 + 208;
      v47[1] = (__int64)v49;
      *v49 = v47;
      *(_QWORD *)(v7 + 216) = v47;
    }
    while ( 1 )
    {
      v50 = v69;
      if ( (__int64 *)v69 == &v69 )
      {
        *v84 = v7;
        v7 = v11;
        goto LABEL_143;
      }
      v51 = *(_QWORD *)v69;
      if ( *(__int64 **)(v69 + 8) != &v69 || *(_QWORD *)(v51 + 8) != v69 )
        __fastfail(3u);
      v69 = *(_QWORD *)v69;
      *(_QWORD *)(v51 + 8) = &v69;
      if ( PnpIsNullGuid((void *)(v50 + 172)) || *(_QWORD *)(v50 + 160) )
        goto LABEL_120;
      if ( !v81 )
        goto LABEL_121;
      v52 = v81;
      if ( !*v81 )
      {
LABEL_120:
        PiDevCfgFreeDriverNode(v50);
        v11 = 0LL;
      }
      else
      {
        while ( !PiDevCfgMatchDriverConfigurationId(v50, v52) )
        {
          v53 = -1LL;
          do
            ++v53;
          while ( v52[v53] );
          v52 += v53 + 1;
          if ( !*v52 )
            goto LABEL_120;
        }
LABEL_121:
        v54 = v7 + 192;
        for ( i = *(_QWORD *)(v7 + 192); i != v54; i = *(_QWORD *)i )
        {
          v56 = *(_QWORD *)(i + 172) - *(_QWORD *)(v50 + 172);
          if ( !v56 )
            v56 = *(_QWORD *)(i + 180) - *(_QWORD *)(v50 + 180);
          if ( !v56 && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 72), (PCUNICODE_STRING)(v50 + 72), 1u) )
          {
            if ( (int)PiDevCfgCompareDrivers(v50, i) >= 0 )
            {
              i = v50;
              v50 = 0LL;
            }
            else
            {
              v57 = *(_QWORD *)i;
              v58 = *(__int64 **)(i + 8);
              if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v58 != i )
                __fastfail(3u);
              *v58 = v57;
              *(_QWORD *)(v57 + 8) = v58;
            }
            if ( i )
              PiDevCfgFreeDriverNode(i);
            break;
          }
        }
        v11 = 0LL;
        if ( v50 )
        {
          v59 = *(__int64 **)(v7 + 200);
          if ( *v59 != v54 )
            __fastfail(3u);
          *(_QWORD *)v50 = v54;
          *(_QWORD *)(v50 + 8) = v59;
          *v59 = v50;
          *(_QWORD *)(v7 + 200) = v50;
        }
      }
    }
  }
LABEL_98:
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_143:
  while ( 1 )
  {
    v60 = v65;
    if ( v65 == (__int64 *)&v65 )
      break;
    v61 = *v65;
    if ( (__int64 **)v65[1] != &v65 || *(__int64 **)(v61 + 8) != v65 )
      __fastfail(3u);
    v65 = (__int64 *)*v65;
    *(_QWORD *)(v61 + 8) = &v65;
    PiDevCfgFreeDriverNode(v60);
  }
  while ( 1 )
  {
    v62 = v69;
    if ( (__int64 *)v69 == &v69 )
      break;
    v63 = *(_QWORD *)v69;
    if ( *(__int64 **)(v69 + 8) != &v69 || *(_QWORD *)(v63 + 8) != v69 )
      __fastfail(3u);
    v69 = *(_QWORD *)v69;
    *(_QWORD *)(v63 + 8) = &v69;
    PiDevCfgFreeDriverNode(v62);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
