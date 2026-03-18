/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140588230
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405894BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  __int64 v3; // r14
  int ObjectProperty; // esi
  int v5; // edi
  wchar_t *v6; // r15
  __int64 v7; // r13
  int v8; // eax
  SIZE_T v9; // rbx
  wchar_t *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r12d
  const WCHAR *v13; // r14
  const wchar_t *i; // rdi
  wchar_t *v15; // rbx
  int v16; // eax
  const WCHAR *v17; // r10
  char v18; // bl
  int v19; // edx
  __int64 v20; // rdi
  const WCHAR *v21; // r15
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v36; // rax
  unsigned int v37; // r13d
  const WCHAR **v38; // r12
  const WCHAR *v39; // r14
  __int64 v40; // rax
  __int64 *v41; // rax
  unsigned __int16 v42; // bx
  const wchar_t *v43; // rbx
  size_t v44; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rax
  int v50; // eax
  wchar_t *v51; // rax
  wchar_t *v52; // rbx
  wchar_t *v53; // rax
  __int64 v54; // rax
  wchar_t *v55; // rdi
  unsigned __int16 v56; // r14
  const wchar_t *v57; // r14
  size_t v58; // r15
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 j; // rdi
  __int64 v62; // rcx
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rcx
  __int64 *v66; // rax
  __int64 *v67; // rax
  unsigned int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h] BYREF
  const wchar_t *v83; // [rsp+90h] [rbp-70h]
  wchar_t *Str; // [rsp+98h] [rbp-68h]
  unsigned int v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t *Str1; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+D0h] [rbp-30h]
  wchar_t *v92; // [rsp+D8h] [rbp-28h]
  const WCHAR *v93; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING String2; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+168h] [rbp+68h] BYREF
  __int64 *v98; // [rsp+170h] [rbp+70h]
  int v99; // [rsp+178h] [rbp+78h]

  v98 = a3;
  v82 = 1;
  v81 = 0;
  v77 = &v76;
  v76 = (__int64)&v76;
  v80 = &v79;
  v79 = (__int64)&v79;
  v3 = a1;
  Str1 = 0LL;
  ObjectProperty = 0;
  v92 = 0LL;
  v5 = 0;
  LODWORD(NumberOfBytes) = 0;
  v6 = 0LL;
  v86 = 0LL;
  v7 = 0LL;
  v90 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    Str1 = a2;
    v36 = -1LL;
    do
      ++v36;
    while ( a2[v36] );
    v92 = (wchar_t *)((unsigned __int64)&a2[v36 + 1] & -(__int64)(a2[v36 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  v89 = 520LL;
  if ( PnpSetupInProgress )
    v8 = 3;
  v91 = v8;
  Str = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = Str;
  if ( !Str )
  {
    ObjectProperty = -1073741670;
    goto LABEL_63;
  }
  v11 = 0LL;
  v85 = 0;
  v88 = 0LL;
  v12 = 0;
  while ( 1 )
  {
    v13 = *(const WCHAR **)(v3 + 16 * (v11 + 2));
    v93 = v13;
    if ( v13 )
    {
      v78 = 0;
      if ( *v13 )
      {
        do
        {
          v82 = 1;
          LODWORD(NumberOfBytes) = 0;
          do
          {
            ObjectProperty = PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v13,
                               0xAu,
                               -1LL,
                               0LL,
                               (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                               (__int64)&v82,
                               (__int64)v10,
                               v9,
                               (__int64)&NumberOfBytes,
                               0);
            if ( ObjectProperty != -1073741789 )
            {
              v10 = Str;
              goto LABEL_11;
            }
            if ( (unsigned int)NumberOfBytes <= (unsigned int)v9 )
              goto LABEL_58;
            v9 = (unsigned int)NumberOfBytes;
            v89 = (unsigned int)NumberOfBytes;
            if ( Str )
              ExFreePoolWithTag(Str, 0);
            Str = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
            v10 = Str;
          }
          while ( Str );
          ObjectProperty = -1073741670;
LABEL_11:
          if ( ObjectProperty == -1073741670 )
            break;
          if ( ObjectProperty < 0 )
          {
            if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
            {
              if ( !v5 || v5 == -1073741772 )
                v81 = ObjectProperty;
            }
            else if ( ObjectProperty == -1073741772 )
            {
              v81 = -1073741772;
            }
LABEL_58:
            ObjectProperty = 0;
          }
          else if ( v82 == 8210 )
          {
            for ( i = v10; *i; i += v27 + 1 )
            {
              v15 = wcschr(i, 0x5Cu);
              if ( !v15 )
                goto LABEL_35;
              ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(i, 0LL, 0LL);
              if ( ObjectProperty < 0 )
                break;
              v16 = v91;
              v17 = i;
              *v15 = 0;
              i = v15 + 1;
              v18 = v99;
              v19 = v16;
              v83 = i;
              if ( v12 == 2 )
              {
                if ( (_BYTE)v99 != 3 )
                  goto LABEL_35;
                v19 = v16 | 8;
              }
              if ( (_BYTE)v99 != 1 && (_BYTE)v99 != 2 && (_BYTE)v99 != 3 )
                goto LABEL_35;
              ObjectProperty = PiDevCfgQueryDriverNode(v17, v13, v19, (__int64)&v86);
              if ( ObjectProperty >= 0 )
              {
                v20 = v86;
                v21 = *(const WCHAR **)(v86 + 152);
                if ( v21 )
                {
                  if ( *v21 )
                  {
                    do
                    {
                      v37 = 0;
                      v38 = (const WCHAR **)(a1 + 32);
                      do
                      {
                        v39 = *v38;
                        if ( *v38 )
                        {
                          RtlInitUnicodeString(&DestinationString, v21);
                          while ( *v39 )
                          {
                            RtlInitUnicodeString(&String2, v39);
                            if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
                            {
                              *(_QWORD *)(v20 + 160) = v21;
                              goto LABEL_100;
                            }
                            v39 += ((unsigned __int64)String2.Length >> 1) + 1;
                          }
                        }
                        ++v37;
                        v38 += 2;
                      }
                      while ( v37 < 3 );
LABEL_100:
                      if ( *(_QWORD *)(v20 + 160) )
                        break;
                      v40 = -1LL;
                      do
                        ++v40;
                      while ( v21[v40] );
                      v21 += v40 + 1;
                    }
                    while ( *v21 );
                    v18 = v99;
                    v7 = v90;
                    v12 = v85;
                  }
                  if ( *(_QWORD *)(v20 + 160) )
                    *(_DWORD *)(v20 + 108) |= 0xFFFFu;
                }
                if ( v18 == 3 )
                {
                  v41 = v80;
                  *(_QWORD *)v20 = &v79;
                  *(_QWORD *)(v20 + 8) = v41;
                  if ( (__int64 *)*v41 != &v79 )
                    __fastfail(3u);
                  v6 = Str1;
                  *v41 = v20;
                  v80 = (__int64 *)v20;
                  goto LABEL_34;
                }
                v6 = Str1;
                if ( Str1 )
                {
                  v42 = *(_WORD *)(v20 + 40) >> 1;
                  if ( wcsnicmp(Str1, *(const wchar_t **)(v20 + 48), v42)
                    || v6[v42] != 58
                    || (v43 = &v6[v42 + 1],
                        v44 = *(_WORD *)(v20 + 72) >> 1,
                        wcsnicmp(v43, *(const wchar_t **)(v20 + 80), v44))
                    || v43[v44] != 44 )
                  {
                    v26 = v77;
                    *(_QWORD *)v20 = &v76;
                    *(_QWORD *)(v20 + 8) = v26;
                    if ( (__int64 *)*v26 != &v76 )
                      __fastfail(3u);
                    goto LABEL_33;
                  }
                }
                if ( *(_QWORD *)(v20 + 160) )
                {
                  v26 = v77;
                  *(_QWORD *)v20 = &v76;
                  *(_QWORD *)(v20 + 8) = v26;
                  if ( (__int64 *)*v26 != &v76 )
                    __fastfail(3u);
                }
                else
                {
                  if ( !v7 )
                    goto LABEL_60;
                  v22 = *(_DWORD *)(v20 + 168);
                  v23 = *(_DWORD *)(v7 + 168);
                  if ( (v22 & 4) == 0 )
                  {
                    if ( (v23 & 4) == 0 )
                      goto LABEL_28;
LABEL_127:
                    v49 = v77;
                    *(_QWORD *)v7 = &v76;
                    *(_QWORD *)(v7 + 8) = v49;
                    if ( (__int64 *)*v49 != &v76 )
                      __fastfail(3u);
                    *v49 = v7;
                    v77 = (__int64 *)v7;
                    if ( (*(_DWORD *)(v7 + 168) & 0xC) != 0 )
                    {
                      v50 = *(_DWORD *)(v20 + 168);
                      if ( (v50 & 4) == 0 )
                        *(_DWORD *)(v20 + 168) = v50 | 8;
                    }
LABEL_60:
                    v90 = v20;
                    v7 = v20;
LABEL_34:
                    i = v83;
                    goto LABEL_35;
                  }
                  if ( (v23 & 4) != 0 )
                  {
LABEL_28:
                    if ( (v22 & 2) != 0 )
                    {
                      if ( (v23 & 2) == 0 )
                        goto LABEL_127;
                      goto LABEL_30;
                    }
                    if ( (v23 & 2) == 0 )
                    {
LABEL_30:
                      v24 = *(_DWORD *)(v20 + 108);
                      v25 = *(_DWORD *)(v7 + 108);
                      if ( v24 < v25 )
                        goto LABEL_127;
                      if ( v24 == v25 )
                      {
                        v45 = *(_QWORD *)(v20 + 112);
                        v46 = *(_QWORD *)(v7 + 112);
                        if ( v45 > v46 )
                          goto LABEL_127;
                        if ( v45 == v46 )
                        {
                          v47 = *(_QWORD *)(v20 + 120);
                          v48 = *(_QWORD *)(v7 + 120);
                          if ( v47 > v48 || v47 == v48 && *(_QWORD *)(v20 + 136) && !*(_QWORD *)(v7 + 136) )
                            goto LABEL_127;
                        }
                      }
                    }
                  }
                  v26 = v77;
                  *(_QWORD *)v20 = &v76;
                  *(_QWORD *)(v20 + 8) = v26;
                  if ( (__int64 *)*v26 != &v76 )
                    __fastfail(3u);
                }
LABEL_33:
                *v26 = v20;
                v77 = (__int64 *)v20;
                goto LABEL_34;
              }
              ObjectProperty = 0;
LABEL_35:
              v27 = -1LL;
              do
                ++v27;
              while ( i[v27] );
              v13 = v93;
            }
          }
          v28 = -1LL;
          do
            ++v28;
          while ( v13[v28] );
          ++v78;
          v5 = v81;
          v13 += v28 + 1;
          LODWORD(v9) = v89;
          v10 = Str;
          v93 = v13;
        }
        while ( *v13 );
        v11 = v88;
      }
      if ( ObjectProperty < 0 )
        goto LABEL_63;
      LODWORD(v9) = v89;
    }
    ++v12;
    ++v11;
    v85 = v12;
    v88 = v11;
    if ( v12 >= 3 )
      break;
    v3 = a1;
  }
  if ( !v6 )
    goto LABEL_47;
  if ( v7 )
  {
LABEL_48:
    while ( 1 )
    {
      v29 = (_QWORD *)v76;
      if ( (__int64 *)v76 == &v76 )
        break;
      v30 = *(_QWORD *)v76;
      if ( *(__int64 **)(v76 + 8) != &v76 || *(_QWORD *)(v30 + 8) != v76 )
        __fastfail(3u);
      v76 = *(_QWORD *)v76;
      *(_QWORD *)(v30 + 8) = &v76;
      v31 = *(_QWORD **)(v7 + 216);
      *v29 = v7 + 208;
      v29[1] = v31;
      if ( *v31 != v7 + 208 )
        __fastfail(3u);
      *v31 = v29;
      *(_QWORD *)(v7 + 216) = v29;
    }
    while ( 1 )
    {
      v32 = v79;
      if ( (__int64 *)v79 == &v79 )
      {
        *v98 = v7;
        v7 = 0LL;
        goto LABEL_63;
      }
      v54 = *(_QWORD *)v79;
      if ( *(__int64 **)(v79 + 8) != &v79 || *(_QWORD *)(v54 + 8) != v79 )
        __fastfail(3u);
      v79 = *(_QWORD *)v79;
      *(_QWORD *)(v54 + 8) = &v79;
      if ( PnpIsNullGuid((void *)(v32 + 172)) || *(_QWORD *)(v32 + 160) )
        goto LABEL_155;
      if ( !v92 )
        goto LABEL_156;
      v55 = v92;
      if ( !*v92 )
      {
LABEL_155:
        PiDevCfgFreeDriverNode(v32);
      }
      else
      {
        while ( 1 )
        {
          v56 = *(_WORD *)(v32 + 40) >> 1;
          if ( !wcsnicmp(v55, *(const wchar_t **)(v32 + 48), v56) && v55[v56] == 58 )
          {
            v57 = &v55[v56 + 1];
            v58 = *(_WORD *)(v32 + 72) >> 1;
            if ( !wcsnicmp(v57, *(const wchar_t **)(v32 + 80), v58) && v57[v58] == 44 )
              break;
          }
          v59 = -1LL;
          do
            ++v59;
          while ( v55[v59] );
          v55 += v59 + 1;
          if ( !*v55 )
            goto LABEL_155;
        }
LABEL_156:
        v60 = v7 + 192;
        for ( j = *(_QWORD *)(v7 + 192); j != v60; j = *(_QWORD *)j )
        {
          v62 = *(_QWORD *)(j + 172) - *(_QWORD *)(v32 + 172);
          if ( !v62 )
            v62 = *(_QWORD *)(j + 180) - *(_QWORD *)(v32 + 180);
          if ( !v62 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v32 + 72), 1u) )
          {
            v63 = *(_DWORD *)(v32 + 168);
            v64 = *(_DWORD *)(j + 168);
            if ( (v63 & 4) != 0 )
            {
              if ( (v64 & 4) == 0 )
                goto LABEL_187;
LABEL_168:
              if ( (v63 & 2) != 0 )
              {
                if ( (v64 & 2) == 0 )
                  goto LABEL_170;
              }
              else if ( (v64 & 2) != 0 )
              {
                goto LABEL_187;
              }
              v68 = *(_DWORD *)(v32 + 108);
              v69 = *(_DWORD *)(j + 108);
              if ( v68 >= v69 )
              {
                if ( v68 != v69
                  || (v70 = *(_QWORD *)(v32 + 112), v71 = *(_QWORD *)(j + 112), v70 <= v71)
                  && (v70 != v71
                   || (v72 = *(_QWORD *)(v32 + 120), v73 = *(_QWORD *)(j + 120), v72 <= v73)
                   && (v72 != v73 || !*(_QWORD *)(v32 + 136) || *(_QWORD *)(j + 136))) )
                {
LABEL_187:
                  j = v32;
                  v32 = 0LL;
LABEL_173:
                  if ( j )
                    PiDevCfgFreeDriverNode(j);
                  break;
                }
              }
            }
            else if ( (v64 & 4) == 0 )
            {
              goto LABEL_168;
            }
LABEL_170:
            v65 = *(_QWORD *)j;
            v66 = *(__int64 **)(j + 8);
            if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j || *v66 != j )
              __fastfail(3u);
            *v66 = v65;
            *(_QWORD *)(v65 + 8) = v66;
            goto LABEL_173;
          }
        }
        if ( v32 )
        {
          v67 = *(__int64 **)(v7 + 200);
          *(_QWORD *)v32 = v60;
          *(_QWORD *)(v32 + 8) = v67;
          if ( *v67 != v60 )
            __fastfail(3u);
          *v67 = v32;
          *(_QWORD *)(v7 + 200) = v32;
        }
      }
    }
  }
  v51 = wcschr(v6, 0x3Au);
  v52 = v51;
  if ( !v51 || (*v51 = 0, (v53 = wcschr(v51 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_63;
  }
  *v53 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v6, v52 + 1, 4, (__int64)&v86) >= 0 )
  {
    v7 = v86;
LABEL_47:
    if ( v7 )
      goto LABEL_48;
  }
  ObjectProperty = -1073741772;
  if ( v5 )
    ObjectProperty = v5;
LABEL_63:
  while ( 1 )
  {
    v33 = v76;
    if ( (__int64 *)v76 == &v76 )
      break;
    v74 = *(_QWORD *)v76;
    if ( *(__int64 **)(v76 + 8) != &v76 || *(_QWORD *)(v74 + 8) != v76 )
      __fastfail(3u);
    v76 = *(_QWORD *)v76;
    *(_QWORD *)(v74 + 8) = &v76;
    PiDevCfgFreeDriverNode(v33);
  }
  while ( 1 )
  {
    v34 = v79;
    if ( (__int64 *)v79 == &v79 )
      break;
    v75 = *(_QWORD *)v79;
    if ( *(__int64 **)(v79 + 8) != &v79 || *(_QWORD *)(v75 + 8) != v79 )
      __fastfail(3u);
    v79 = *(_QWORD *)v79;
    *(_QWORD *)(v75 + 8) = &v79;
    PiDevCfgFreeDriverNode(v34);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( Str )
    ExFreePoolWithTag(Str, 0);
  return (unsigned int)ObjectProperty;
}
