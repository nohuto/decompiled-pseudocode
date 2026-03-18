/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140660170
 * Callers:
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x14017206C (_strnicmp.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpWalkPath @ 0x140591164 (CmpWalkPath.c)
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
  __int64 v48; // rax
  int v49; // ebx
  unsigned int v50; // ebx
  _DWORD *v51; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  char *PoolWithTag; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+4Ch] [rbp-B4h] BYREF
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  int v58; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD *v59; // [rsp+58h] [rbp-A8h]
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  const wchar_t *v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  int v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h]
  _DWORD v67[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v69[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  int v71; // [rsp+C0h] [rbp-40h] BYREF
  int v72; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v73[8]; // [rsp+C8h] [rbp-38h] BYREF
  const wchar_t *v74; // [rsp+D0h] [rbp-30h]
  const wchar_t *v75; // [rsp+D8h] [rbp-28h]
  int v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F4h] [rbp-Ch]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+100h] [rbp+0h]
  int v82; // [rsp+104h] [rbp+4h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+110h] [rbp+10h]
  int v85; // [rsp+114h] [rbp+14h]
  char v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+170h] [rbp+70h] BYREF
  int v88; // [rsp+178h] [rbp+78h] BYREF
  int v89; // [rsp+180h] [rbp+80h] BYREF
  int v90; // [rsp+188h] [rbp+88h] BYREF

  *(_QWORD *)&DestinationString.Length = L"WPA";
  v64 = 0LL;
  v63 = L"Control\\FastCache";
  v66 = 0LL;
  v87 = -1;
  v69[1] = 0;
  v74 = L"Control\\ProductOptions";
  v75 = L"ProductPolicy";
  v82 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v58 = -1;
  v57 = -1;
  v89 = -1;
  v90 = -1;
  v56 = -1;
  v88 = -1;
  v65 = -1;
  v67[0] = -1;
  v67[1] = -1;
  v68 = 0LL;
  v69[0] = -1;
  v70 = 0LL;
  v71 = -1;
  v72 = 0;
  v73[0] = 0;
  v76 = -1;
  v77 = 0LL;
  v78 = -1;
  v79 = -1;
  v80 = 0LL;
  v81 = -1;
  v83 = 0LL;
  v84 = -1;
  v85 = 0;
  v86 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v6 = *(_QWORD *)(a2 + 64);
  PoolWithTag = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  v7 = *(_DWORD *)(v6 + 36);
  v60 = v5;
  if ( v5 == -1 || v7 == -1 )
  {
    v15 = -1073741492;
    v18 = 0LL;
  }
  else
  {
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v5, &v56);
    v8 = v62;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v7, &v58);
    v59 = (_DWORD *)v9;
    if ( v8 && v9 )
    {
      v10 = 0;
      p_DestinationString = (const WCHAR **)&DestinationString;
      do
      {
        v12 = CmpWalkPath(a1, v5, *p_DestinationString);
        v13 = *p_DestinationString;
        v55 = v12;
        v14 = CmpWalkPath(a2, v7, v13);
        if ( v55 == -1 || v14 == -1 || (v15 = 0, !CmpCopySyncTree(a1, v55, a2, v14, 2, 1)) )
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
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v16, &v90);
      v18 = 0LL;
      if ( !v19 )
        goto LABEL_13;
      ValueByName = CmpFindValueByName(a1, v19, (int)&CmSymbolicLinkValueName);
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v90);
      if ( ValueByName != -1 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, ValueByName, &v88);
        v22 = v21;
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 12) == 6 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v21 + 8), &v89);
            v24 = v23;
            if ( !v23 )
            {
              (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v88);
LABEL_13:
              v15 = -1073741670;
              goto LABEL_38;
            }
            v25 = (_WORD *)(*(unsigned int *)(v22 + 4) + v23 - 2);
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v88);
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
              (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v89);
              v15 = -1073741801;
              goto LABEL_38;
            }
            v27 = 2LL * v26;
            memmove(PoolWithTag, v25 + 1, v27);
            v28 = v60;
            *(_WORD *)&PoolWithTag[v27] = 0;
            v17 = CmpWalkPath(a1, v28, (const WCHAR *)PoolWithTag);
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v89);
            if ( v17 == -1 )
            {
              v15 = 0;
              goto LABEL_38;
            }
            LOBYTE(v18) = 0;
          }
          else
          {
            (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v88);
          }
        }
      }
      v29 = &v64;
      for ( i = 0; i < 2; ++i )
      {
        v31 = CmpWalkPath(a1, v17, (const WCHAR *)*(v29 - 1));
        *((_DWORD *)v29 + 2) = v31;
        if ( v31 != -1 )
        {
          if ( *v29 )
          {
            v32 = 80LL * i;
            v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v31, &v67[v32 / 4]);
            v29[2] = v33;
            if ( !v33 )
              goto LABEL_53;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)*v29);
            v34 = CmpFindValueByName(a1, v29[2], (int)&DestinationString);
            *((_DWORD *)v29 + 7) = v34;
            if ( v34 != -1 )
            {
              LOBYTE(v18) = 1;
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v34, &v69[v32 / 4]);
              v29[4] = v35;
              if ( !v35 )
                goto LABEL_53;
              if ( !CmpGetValueData(
                      a1,
                      *((unsigned int *)v29 + 7),
                      v35,
                      (unsigned int *)&v73[v32 - 4],
                      (__int64 *)((char *)&v70 + v32),
                      &v73[v32],
                      (__int64)&v71 + v32) )
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
        v39 = v59;
        v40 = 0;
        if ( v59[5] )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(a2, v39, v40, &v55);
            v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v55, &v87);
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
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v87);
              if ( v44 )
              {
                v15 = 0;
                v45 = &v65;
                v46 = 0;
                while ( 1 )
                {
                  if ( *v45 != -1 && (!*((_QWORD *)v45 - 1) || v45[5] != -1) )
                  {
                    v47 = CmpWalkPath(a2, v55, *((const WCHAR **)v45 - 2));
                    if ( v47 != -1 )
                    {
                      if ( *((_QWORD *)v45 - 1) )
                      {
                        v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v47, &v87);
                        v49 = v48;
                        if ( !v48 )
                          goto LABEL_53;
                        RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v45 - 1));
                        v50 = CmpFindValueByName(a2, v49, (int)&DestinationString);
                        (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v87);
                        if ( v50 != -1 )
                        {
                          v51 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v50, &v57);
                          if ( !v51 )
                            goto LABEL_53;
                          LODWORD(Size) = v45[13];
                          v15 = CmpSetValueKeyExisting(
                                  a2,
                                  v50,
                                  v51,
                                  *(_DWORD *)(*((_QWORD *)v45 + 3) + 12LL),
                                  *((void **)v45 + 5),
                                  Size,
                                  v50 >> 31);
                          (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v57);
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
              (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v87);
            }
LABEL_73:
            v39 = v59;
            if ( ++v40 >= v59[5] )
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
  v37 = &v68;
  do
  {
    if ( *(v37 - 2) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v67[20 * v36]);
    if ( *v37 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, &v69[20 * v36]);
    v38 = (void *)v37[2];
    if ( v38 )
    {
      if ( *((_BYTE *)v37 + 32) )
        ExFreePoolWithTag(v38, 0);
      else
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v71 + 20 * v36);
    }
    v36 = (unsigned int)(v36 + 1);
    v37 += 10;
  }
  while ( (unsigned int)v36 < 2 );
  if ( v62 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v56);
  if ( v59 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v58);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v15;
}
