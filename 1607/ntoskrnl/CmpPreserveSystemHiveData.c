/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140609204
 * Callers:
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x14014D97C (_strnicmp.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r14d
  const WCHAR **p_DestinationString; // r15
  unsigned int v12; // eax
  const WCHAR *v13; // r8
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  WCHAR *v18; // r12
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 *v21; // r14
  void *v22; // rcx
  unsigned int ValueByName; // ebx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  _WORD *v28; // r14
  unsigned int v29; // ebx
  size_t v30; // rbx
  char v31; // r13
  unsigned int v32; // r15d
  __int64 *v33; // rbx
  unsigned int v34; // eax
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rcx
  unsigned int v40; // r15d
  __int64 v41; // rax
  const char *v42; // rcx
  int v43; // eax
  bool v44; // bl
  int *v45; // r14
  unsigned int v46; // r12d
  unsigned int v47; // eax
  __int64 v48; // rax
  int v49; // ebx
  unsigned int v50; // ebx
  __int64 v51; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  _DWORD v54[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v55[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v57[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v58; // [rsp+60h] [rbp-A0h]
  _DWORD v59[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  const wchar_t *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  int v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  _DWORD v66[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v68[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h] BYREF
  int v70; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+DCh] [rbp-24h] BYREF
  _BYTE v72[4]; // [rsp+E4h] [rbp-1Ch] BYREF
  const wchar_t *v73; // [rsp+E8h] [rbp-18h]
  const wchar_t *v74; // [rsp+F0h] [rbp-10h]
  int v75; // [rsp+F8h] [rbp-8h]
  __int64 v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+10Ch] [rbp+Ch]
  int v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+120h] [rbp+20h]
  int v82; // [rsp+124h] [rbp+24h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+134h] [rbp+34h]
  char v86; // [rsp+13Ch] [rbp+3Ch]
  unsigned int v87; // [rsp+190h] [rbp+90h] BYREF
  WCHAR *PoolWithTag; // [rsp+198h] [rbp+98h]
  int v89; // [rsp+1A0h] [rbp+A0h] BYREF
  int v90; // [rsp+1A4h] [rbp+A4h]
  int v91; // [rsp+1A8h] [rbp+A8h] BYREF
  int v92; // [rsp+1ACh] [rbp+ACh]

  *(_QWORD *)&DestinationString.Length = L"WPA";
  v90 = 0;
  v62 = L"Control\\FastCache";
  v59[1] = 0;
  v89 = -1;
  v73 = L"Control\\ProductOptions";
  v74 = L"ProductPolicy";
  v4 = *(_QWORD *)(a1 + 64);
  v59[0] = -1;
  v56[0] = -1;
  v56[1] = 0;
  v54[0] = -1;
  v54[1] = 0;
  v55[0] = -1;
  v55[1] = 0;
  v57[0] = -1;
  v57[1] = 0;
  v91 = -1;
  v92 = 0;
  v63 = 0LL;
  v64 = -1;
  v65 = 0LL;
  v66[0] = -1;
  v66[1] = 0;
  v66[2] = -1;
  v67 = 0LL;
  v68[0] = -1;
  v68[1] = 0;
  v69 = 0LL;
  v70 = -1;
  v71 = 0LL;
  v72[0] = 0;
  v75 = -1;
  v76 = 0LL;
  v77 = -1;
  v78 = 0;
  v79 = -1;
  v80 = 0LL;
  v81 = -1;
  v82 = 0;
  v83 = 0LL;
  v84 = -1;
  v85 = 0LL;
  v86 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v6 = *(_QWORD *)(a2 + 64);
  PoolWithTag = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v7 = *(_DWORD *)(v6 + 36);
  if ( v5 == -1 || v7 == -1 )
  {
    v15 = -1073741492;
    v18 = 0LL;
    goto LABEL_15;
  }
  v60 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v5, v57);
  v8 = v60;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v7, v59);
  v58 = (_DWORD *)v9;
  if ( !v8 || !v9 )
  {
    v15 = -1073741670;
    v18 = 0LL;
    goto LABEL_15;
  }
  v10 = 0;
  p_DestinationString = (const WCHAR **)&DestinationString;
  do
  {
    v12 = CmpWalkPath(a1, v5, *p_DestinationString);
    v13 = *p_DestinationString;
    v87 = v12;
    v14 = CmpWalkPath(a2, v7, v13);
    if ( v87 == -1 || v14 == -1 || (v15 = 0, !CmpCopySyncTree(a1, v87, a2, v14, 2, 1)) )
    {
LABEL_44:
      v15 = -1073741492;
      goto LABEL_14;
    }
    ++v10;
    ++p_DestinationString;
  }
  while ( !v10 );
  v16 = CmpWalkPath(a1, v5, L"CurrentControlSet");
  v17 = v16;
  if ( v16 == -1 )
  {
    v18 = 0LL;
    goto LABEL_15;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v16, v55);
  if ( !v19 )
  {
LABEL_13:
    v15 = -1073741670;
    goto LABEL_14;
  }
  ValueByName = CmpFindValueByName(a1, v19, (int)&CmSymbolicLinkValueName);
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v55);
  if ( ValueByName == -1 )
    goto LABEL_37;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, ValueByName, &v91);
  v25 = v24;
  if ( !v24 )
    goto LABEL_37;
  if ( *(_DWORD *)(v24 + 12) != 6 )
  {
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v91);
    goto LABEL_37;
  }
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v24 + 8), v54);
  v18 = 0LL;
  v27 = v26;
  if ( v26 )
  {
    v28 = (_WORD *)(v26 - 2 + *(unsigned int *)(v25 + 4));
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v91);
    v29 = 0;
    while ( *v28 != 92 && (unsigned __int64)v28 >= v27 )
    {
      ++v29;
      --v28;
    }
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v29 + 1), 0x68504D43u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
      v15 = -1073741801;
      goto LABEL_15;
    }
    v30 = v29;
    memmove(PoolWithTag, v28 + 1, v30 * 2);
    v18[v30] = 0;
    v17 = CmpWalkPath(a1, v5, v18);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
    if ( v17 == -1 )
    {
      v15 = 0;
      goto LABEL_14;
    }
LABEL_37:
    v31 = 0;
    v32 = 0;
    v33 = &v63;
    do
    {
      v34 = CmpWalkPath(a1, v17, (const WCHAR *)*(v33 - 1));
      *((_DWORD *)v33 + 2) = v34;
      if ( v34 != -1 )
      {
        if ( *v33 )
        {
          v35 = 88LL * v32;
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v34, &v66[v35 / 4]);
          v33[2] = v36;
          if ( !v36 )
            goto LABEL_13;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*v33);
          v37 = CmpFindValueByName(a1, v33[2], (int)&DestinationString);
          *((_DWORD *)v33 + 8) = v37;
          if ( v37 != -1 )
          {
            v31 = 1;
            v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v37, &v68[v35 / 4]);
            v33[5] = v38;
            if ( !v38 )
              goto LABEL_13;
            if ( !CmpGetValueData(
                    a1,
                    *((unsigned int *)v33 + 8),
                    v38,
                    (unsigned int *)&v72[v35 - 4],
                    (__int64)&v69 + v35,
                    (__int64)&v72[v35],
                    (__int64)&v70 + v35) )
              goto LABEL_44;
          }
        }
        else
        {
          v31 = 1;
        }
      }
      ++v32;
      v33 += 11;
    }
    while ( v32 < 2 );
    v15 = 0;
    if ( v31 )
    {
      v39 = v58;
      v40 = 0;
      if ( v58[5] )
      {
        do
        {
          CmpFindSubKeyByNumber(a2, v39, v40, &v87);
          v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v87, &v89);
          if ( !v41 )
            goto LABEL_13;
          if ( *(_WORD *)(v41 + 72) == 13 )
          {
            v42 = (const char *)(v41 + 76);
            if ( (*(_BYTE *)(v41 + 2) & 0x20) != 0 )
              v43 = strnicmp(v42, "ControlSet000", 0xAuLL);
            else
              v43 = wcsnicmp((const wchar_t *)v42, L"ControlSet000", 0xAuLL);
            v44 = v43 == 0;
            (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v89);
            if ( v44 )
            {
              v15 = 0;
              v45 = &v64;
              v46 = 0;
              while ( 1 )
              {
                if ( *v45 != -1 && (!*((_QWORD *)v45 - 1) || v45[6] != -1) )
                {
                  v47 = CmpWalkPath(a2, v87, *((const WCHAR **)v45 - 2));
                  if ( v47 != -1 )
                  {
                    if ( *((_QWORD *)v45 - 1) )
                    {
                      v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v47, &v89);
                      v49 = v48;
                      if ( !v48 )
                        goto LABEL_13;
                      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v45 - 1));
                      v50 = CmpFindValueByName(a2, v49, (int)&DestinationString);
                      (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v89);
                      if ( v50 != -1 )
                      {
                        v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v50, v56);
                        if ( !v51 )
                          goto LABEL_13;
                        LODWORD(Size) = v45[16];
                        v15 = CmpSetValueKeyExisting(
                                a2,
                                v50,
                                v51,
                                *(_DWORD *)(*((_QWORD *)v45 + 4) + 12LL),
                                *((char **)v45 + 6),
                                Size,
                                v50 >> 31);
                        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v56);
                        if ( v15 < 0 )
                          goto LABEL_14;
                      }
                      v15 = 0;
                    }
                    else
                    {
                      CmpCopySyncTree(a1, *v45, a2, v47, 2, 1);
                    }
                  }
                }
                ++v46;
                v45 += 22;
                if ( v46 >= 2 )
                  goto LABEL_71;
              }
            }
            v15 = 0;
          }
          else
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v89);
          }
LABEL_71:
          v39 = v58;
        }
        while ( ++v40 < v58[5] );
      }
    }
LABEL_14:
    v18 = PoolWithTag;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v91);
  v15 = -1073741670;
LABEL_15:
  v20 = 0;
  v21 = &v67;
  do
  {
    if ( *(v21 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v66[22 * v20]);
    if ( *v21 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v68[22 * v20]);
    v22 = (void *)v21[2];
    if ( v22 )
    {
      if ( *((_BYTE *)v21 + 36) )
        ExFreePoolWithTag(v22, 0);
      else
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v70 + 22 * v20);
    }
    ++v20;
    v21 += 11;
  }
  while ( v20 < 2 );
  if ( v60 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v57);
  if ( v58 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v59);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v15;
}
