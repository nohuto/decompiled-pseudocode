/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18001C3DC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18001C9AC (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x18001CC90 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180070DA0 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v11; // r14
  __int64 v12; // rsi
  bool v13; // r15
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 *v16; // rbx
  int appended; // ebx
  __int64 v18; // r12
  __int64 v19; // r8
  int v20; // r13d
  __int64 v21; // rax
  unsigned int v22; // ebx
  _WORD *v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 *v28; // r15
  _BYTE *v29; // rdx
  _BYTE *v30; // rdx
  _WORD *v32; // rdx
  bool v33; // zf
  _QWORD *v34; // rcx
  unsigned int i; // r15d
  _WORD *v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // r9
  char v39; // [rsp+28h] [rbp-79h]
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+38h] [rbp-69h]
  _WORD v43[2]; // [rsp+3Ch] [rbp-65h] BYREF
  __int16 v44; // [rsp+40h] [rbp-61h] BYREF
  __int64 Heap; // [rsp+48h] [rbp-59h]
  _WORD v46[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v47; // [rsp+54h] [rbp-4Dh] BYREF
  __int64 *v48; // [rsp+58h] [rbp-49h]
  int v49; // [rsp+60h] [rbp-41h]
  int v50; // [rsp+68h] [rbp-39h] BYREF
  __int64 v51; // [rsp+70h] [rbp-31h]
  unsigned int v52; // [rsp+78h] [rbp-29h]
  unsigned int v53; // [rsp+7Ch] [rbp-25h]
  __int64 v54; // [rsp+80h] [rbp-21h] BYREF
  __int128 v55; // [rsp+88h] [rbp-19h] BYREF
  int v56; // [rsp+98h] [rbp-9h]
  char v57; // [rsp+E8h] [rbp+47h]

  v57 = a1;
  v55 = 0uLL;
  v11 = 0LL;
  v53 = 0;
  v12 = 0LL;
  v49 = 0;
  v43[0] = -1;
  v46[0] = -1;
  v44 = -1;
  v54 = 0LL;
  v42 = 0;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
    return 3221225485LL;
  v13 = (a1 & 0x10000) != 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 40);
  else
    v15 = 0;
  v52 = v15;
  LODWORD(v16) = (_DWORD)a3;
  v48 = a3;
  if ( (a1 & 0x10000) == 0 && (v15 & 6) != 0 )
  {
    v53 = HIWORD(v15);
    v42 = 1;
    v48 = &v54;
    appended = LdrpCreateLangFallbackList(&v54, (__int64)a2, 25, 0);
    if ( appended < 0 )
      goto LABEL_52;
    v16 = &v54;
  }
  v18 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 340LL);
  v19 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v32 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6LL * (unsigned int)v11);
      if ( *v32 )
      {
        v33 = *(_QWORD *)(a4 + 16) == 0LL;
        v34 = a2;
        v51 = v19;
        if ( !v33 )
          v34 = *(_QWORD **)(a4 + 16);
        v50 = 11141120;
        if ( (int)GetNameFromLangListNode(v34, v32, &v50, 0LL) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode((_DWORD)v16, (_DWORD)a2, 0, (unsigned int)v43, v51);
          if ( appended < 0 )
            goto LABEL_51;
        }
        v19 = Heap;
      }
      LODWORD(v11) = v11 + 1;
      LODWORD(v16) = (_DWORD)v48;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v20 = (int)v48;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = Heap )
      {
        v36 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v36 )
        {
          v33 = *(_QWORD *)(a5 + 16) == 0LL;
          v37 = a2;
          v51 = v19;
          if ( !v33 )
            v37 = *(_QWORD **)(a5 + 16);
          v50 = 11141120;
          if ( (int)GetNameFromLangListNode(v37, v36, &v50, 0LL) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(v20, (_DWORD)a2, 0, (unsigned int)v43, v51);
            if ( appended < 0 )
              goto LABEL_51;
          }
        }
        ++i;
      }
    }
  }
  v56 = v57 & 0x20;
  if ( (v57 & 0x20) != 0 && ((v21 = a6) != 0 && *(_WORD *)(a6 + 4) || (v21 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v18 = v21;
    if ( *(_BYTE *)(v21 + 8) )
    {
      v12 = a2[5];
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = a2[6];
    }
    v22 = 0;
    if ( *(_WORD *)(v21 + 4) )
    {
      do
      {
        v23 = (_WORD *)(*(_QWORD *)(v18 + 24) + 6LL * v22);
        if ( *v23 )
        {
          v51 = Heap;
          v50 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v23, &v50, 0LL) >= 0 )
          {
            LOBYTE(v19) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v20, (_DWORD)a2, v19, (unsigned int)v43, v51) >= 0
              && (v57 & 0x10) != 0 )
            {
              v24 = *(_QWORD *)(v18 + 24);
              if ( *(_WORD *)(v24 + 6LL * v22) == 2 )
              {
                v25 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * *(__int16 *)(v24 + 6LL * v22 + 4));
                if ( (*v25 & 7) != 0
                  && ((*v25 & 6) == 0
                   || (int)LdrpMergeParentBaseLanguagesToList(v20, (_DWORD)v25, (_DWORD)a2, v12, v39) >= 0) )
                {
                  ++v49;
                }
              }
            }
          }
        }
        ++v22;
      }
      while ( v22 < *(unsigned __int16 *)(v18 + 4) );
    }
  }
  v11 = Heap;
  LODWORD(v55) = 11141120;
  *((_QWORD *)&v55 + 1) = Heap + 170;
  appended = RtlpGetSystemDefaultUILanguage(&v47, a2, v19, 0LL);
  if ( appended < 0 )
    goto LABEL_52;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v47, &v55) )
  {
    appended = -1073741823;
    goto LABEL_52;
  }
  LOBYTE(v26) = 1;
  appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v47, v26, &v44);
  if ( appended >= 0 )
  {
    v27 = *((_QWORD *)&v55 + 1);
    if ( (v57 & 0x40) != 0 || a9 && v49 )
    {
      v28 = v48;
    }
    else
    {
      v28 = v48;
      appended = LdrpLangFallbackListAppendNode((_DWORD)v48, (_DWORD)a2, 0, (unsigned int)v46, *((__int64 *)&v55 + 1));
      if ( appended >= 0 )
      {
        if ( v56 )
        {
          v29 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v44);
          if ( (*v29 & 6) != 0 )
          {
            if ( !v18 || (LODWORD(v38) = v12, !v12) )
              v38 = a2[5];
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)v28, (_DWORD)v29, (_DWORD)a2, v38, v40);
            if ( appended < 0 )
              goto LABEL_51;
          }
        }
      }
    }
    if ( v42 )
    {
      if ( v28 )
      {
        appended = RtlpFilterandReplaceConsoleLanguages(*v28, a2, ((unsigned __int8)v52 >> 2) & 1, v53, a3);
        if ( appended >= 0 && (v57 & 0x30) == 0x30 )
        {
          appended = LdrpLangFallbackListAppendNode((_DWORD)a3, (_DWORD)a2, 0, (unsigned int)v46, v27);
          if ( appended >= 0 )
          {
            v30 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v44);
            if ( (*v30 & 6) != 0 )
            {
              if ( !v18 || !v12 )
                v12 = a2[5];
              appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v30, (_DWORD)a2, v12, v41);
            }
          }
        }
      }
    }
LABEL_51:
    v11 = Heap;
  }
LABEL_52:
  if ( v54 )
    RtlpMuiRegFreeLanguageList(v54);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  return (unsigned int)appended;
}
