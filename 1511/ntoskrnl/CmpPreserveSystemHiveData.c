/*
 * XREFs of CmpPreserveSystemHiveData @ 0x1405E8C58
 * Callers:
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x140143FEC (_strnicmp.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 *     CmpWalkPath @ 0x140523E0C (CmpWalkPath.c)
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
  unsigned int v17; // r13d
  void *v18; // r12
  __int64 v19; // rax
  unsigned int ValueByName; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  _WORD *v25; // r14
  unsigned int v26; // ebx
  size_t v27; // rbx
  unsigned int v28; // edx
  __int64 *v29; // rbx
  unsigned int i; // r15d
  unsigned int v31; // eax
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 *v37; // r14
  void *v38; // rcx
  _DWORD *v39; // rcx
  unsigned int v40; // r15d
  __int64 v41; // rax
  const char *v42; // rcx
  int v43; // eax
  bool v44; // bl
  int *v45; // r14
  unsigned int v46; // r12d
  unsigned int v47; // eax
  __int64 v48; // rbx
  unsigned int v49; // ebx
  _DWORD *v50; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  char *PoolWithTag; // [rsp+40h] [rbp-C0h]
  unsigned int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD *v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  const wchar_t *v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  _DWORD v66[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  int v70; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v72[8]; // [rsp+C8h] [rbp-38h] BYREF
  const wchar_t *v73; // [rsp+D0h] [rbp-30h]
  const wchar_t *v74; // [rsp+D8h] [rbp-28h]
  int v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F4h] [rbp-Ch]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+100h] [rbp+0h]
  int v81; // [rsp+104h] [rbp+4h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  int v83; // [rsp+110h] [rbp+10h]
  int v84; // [rsp+114h] [rbp+14h]
  char v85; // [rsp+118h] [rbp+18h]
  int v86; // [rsp+170h] [rbp+70h] BYREF
  int v87; // [rsp+178h] [rbp+78h] BYREF
  int v88; // [rsp+180h] [rbp+80h] BYREF
  int v89; // [rsp+188h] [rbp+88h] BYREF

  *(_QWORD *)&DestinationString.Length = L"WPA";
  v63 = 0LL;
  v62 = L"Control\\FastCache";
  v65 = 0LL;
  v86 = -1;
  v68[1] = 0;
  v73 = L"Control\\ProductOptions";
  v74 = L"ProductPolicy";
  v81 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v57 = -1;
  v56 = -1;
  v88 = -1;
  v89 = -1;
  v55 = -1;
  v87 = -1;
  v64 = -1;
  v66[0] = -1;
  v66[1] = -1;
  v67 = 0LL;
  v68[0] = -1;
  v69 = 0LL;
  v70 = -1;
  v71 = 0;
  v72[0] = 0;
  v75 = -1;
  v76 = 0LL;
  v77 = -1;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v82 = 0LL;
  v83 = -1;
  v84 = 0;
  v85 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v6 = *(_QWORD *)(a2 + 64);
  PoolWithTag = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  v7 = *(_DWORD *)(v6 + 36);
  v59 = v5;
  if ( v5 == -1 || v7 == -1 )
  {
    v15 = -1073741492;
    v18 = 0LL;
  }
  else
  {
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v5, &v55);
    v8 = v61;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v7, &v57);
    v58 = (_DWORD *)v9;
    if ( v8 && v9 )
    {
      v10 = 0;
      p_DestinationString = (const WCHAR **)&DestinationString;
      do
      {
        v12 = CmpWalkPath(a1, v5, *p_DestinationString);
        v13 = *p_DestinationString;
        v54 = v12;
        v14 = CmpWalkPath(a2, v7, v13);
        if ( v54 == -1 || v14 == -1 || (v15 = 0, !CmpCopySyncTree(a1, v54, a2, v14, 2, 1)) )
        {
LABEL_36:
          v15 = -1073741492;
          goto LABEL_37;
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
        goto LABEL_38;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v16, &v89);
      v18 = 0LL;
      if ( !v19 )
        goto LABEL_13;
      ValueByName = CmpFindValueByName(a1, v19);
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v89);
      if ( ValueByName != -1 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, ValueByName, &v87);
        v22 = v21;
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 12) == 6 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v21 + 8), &v88);
            v24 = v23;
            if ( !v23 )
            {
              (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v87);
LABEL_13:
              v15 = -1073741670;
              goto LABEL_38;
            }
            v25 = (_WORD *)(*(unsigned int *)(v22 + 4) + v23 - 2);
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v87);
            v26 = 0;
            while ( *v25 != 92 && (unsigned __int64)v25 >= v24 )
            {
              ++v26;
              --v25;
            }
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * (v26 + 1), 0x68504D43u);
            v18 = PoolWithTag;
            if ( !PoolWithTag )
            {
              (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v88);
              v15 = -1073741801;
              goto LABEL_38;
            }
            v27 = 2LL * v26;
            memmove(PoolWithTag, v25 + 1, v27);
            v28 = v59;
            *(_WORD *)&PoolWithTag[v27] = 0;
            v17 = CmpWalkPath(a1, v28, (const WCHAR *)PoolWithTag);
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v88);
            if ( v17 == -1 )
            {
              v15 = 0;
              goto LABEL_38;
            }
            LOBYTE(v18) = 0;
          }
          else
          {
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v87);
          }
        }
      }
      v29 = &v63;
      for ( i = 0; i < 2; ++i )
      {
        v31 = CmpWalkPath(a1, v17, (const WCHAR *)*(v29 - 1));
        *((_DWORD *)v29 + 2) = v31;
        if ( v31 != -1 )
        {
          if ( *v29 )
          {
            v32 = 80LL * i;
            v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v31, &v66[v32 / 4]);
            v29[2] = v33;
            if ( !v33 )
              goto LABEL_53;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)*v29);
            v34 = CmpFindValueByName(a1, v29[2]);
            *((_DWORD *)v29 + 7) = v34;
            if ( v34 != -1 )
            {
              LOBYTE(v18) = 1;
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v34, &v68[v32 / 4]);
              v29[4] = v35;
              if ( !v35 )
                goto LABEL_53;
              if ( !CmpGetValueData(
                      a1,
                      *((unsigned int *)v29 + 7),
                      v35,
                      (unsigned int *)&v72[v32 - 4],
                      (__int64 *)((char *)&v69 + v32),
                      &v72[v32],
                      (__int64)&v70 + v32) )
                goto LABEL_36;
            }
          }
          else
          {
            LOBYTE(v18) = 1;
          }
        }
        v29 += 10;
      }
      v15 = 0;
      if ( (_BYTE)v18 )
      {
        v39 = v58;
        v40 = 0;
        if ( v58[5] )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(a2, v39, v40, &v54);
            v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v54, &v86);
            if ( !v41 )
              break;
            if ( *(_WORD *)(v41 + 72) == 13 )
            {
              v42 = (const char *)(v41 + 76);
              if ( (*(_BYTE *)(v41 + 2) & 0x20) != 0 )
                v43 = strnicmp(v42, "ControlSet000", 0xAuLL);
              else
                v43 = wcsnicmp((const wchar_t *)v42, L"ControlSet000", 0xAuLL);
              v44 = v43 == 0;
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v86);
              if ( v44 )
              {
                v15 = 0;
                v45 = &v64;
                v46 = 0;
                while ( 1 )
                {
                  if ( *v45 != -1 && (!*((_QWORD *)v45 - 1) || v45[5] != -1) )
                  {
                    v47 = CmpWalkPath(a2, v54, *((const WCHAR **)v45 - 2));
                    if ( v47 != -1 )
                    {
                      if ( *((_QWORD *)v45 - 1) )
                      {
                        v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v47, &v86);
                        if ( !v48 )
                          goto LABEL_53;
                        RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v45 - 1));
                        v49 = CmpFindValueByName(a2, v48);
                        (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v86);
                        if ( v49 != -1 )
                        {
                          v50 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v49, &v56);
                          if ( !v50 )
                            goto LABEL_53;
                          LODWORD(Size) = v45[13];
                          v15 = CmpSetValueKeyExisting(
                                  a2,
                                  v49,
                                  v50,
                                  *(_DWORD *)(*((_QWORD *)v45 + 3) + 12LL),
                                  *((void **)v45 + 5),
                                  Size,
                                  v49 >> 31);
                          (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v56);
                          if ( v15 < 0 )
                            goto LABEL_37;
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
                  v45 += 20;
                  if ( v46 >= 2 )
                    goto LABEL_73;
                }
              }
              v15 = 0;
            }
            else
            {
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v86);
            }
LABEL_73:
            v39 = v58;
            if ( ++v40 >= v58[5] )
              goto LABEL_37;
          }
LABEL_53:
          v15 = -1073741670;
        }
      }
LABEL_37:
      v18 = PoolWithTag;
    }
    else
    {
      v15 = -1073741670;
      v18 = 0LL;
    }
  }
LABEL_38:
  v36 = 0LL;
  v37 = &v67;
  do
  {
    if ( *(v37 - 2) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v66[20 * v36]);
    if ( *v37 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v68[20 * v36]);
    v38 = (void *)v37[2];
    if ( v38 )
    {
      if ( *((_BYTE *)v37 + 32) )
        ExFreePoolWithTag(v38, 0);
      else
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v70 + 20 * v36);
    }
    v36 = (unsigned int)(v36 + 1);
    v37 += 10;
  }
  while ( (unsigned int)v36 < 2 );
  if ( v61 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v55);
  if ( v58 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v57);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v15;
}
