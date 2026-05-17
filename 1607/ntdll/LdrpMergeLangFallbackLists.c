/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x180041058
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079C00 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180013698 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpCreateLangFallbackList @ 0x180014408 (LdrpCreateLangFallbackList.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6C0 (RtlpGetSystemDefaultUILanguage.c)
 *     GetNameFromLangListNode @ 0x180043374 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180043BE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F14 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067188 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        _QWORD *a2,
        __int64 a3,
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
  int v24; // r8d
  __int64 v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r14
  __int64 *v29; // r15
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  _WORD *v33; // rdx
  bool v34; // zf
  _QWORD *v35; // rcx
  unsigned int i; // r15d
  _WORD *v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // r9
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+38h] [rbp-69h]
  _WORD v44[2]; // [rsp+3Ch] [rbp-65h] BYREF
  __int16 v45; // [rsp+40h] [rbp-61h] BYREF
  __int64 Heap; // [rsp+48h] [rbp-59h]
  _WORD v47[2]; // [rsp+50h] [rbp-51h] BYREF
  _WORD v48[2]; // [rsp+54h] [rbp-4Dh] BYREF
  __int64 *v49; // [rsp+58h] [rbp-49h]
  int v50; // [rsp+60h] [rbp-41h]
  int v51; // [rsp+68h] [rbp-39h] BYREF
  __int64 v52; // [rsp+70h] [rbp-31h]
  unsigned int v53; // [rsp+78h] [rbp-29h]
  unsigned int v54; // [rsp+7Ch] [rbp-25h]
  __int64 v55; // [rsp+80h] [rbp-21h] BYREF
  __int128 v56; // [rsp+88h] [rbp-19h] BYREF
  int v57; // [rsp+98h] [rbp-9h]
  char v58; // [rsp+E8h] [rbp+47h]

  v58 = a1;
  v56 = 0uLL;
  v11 = 0LL;
  v54 = 0;
  v12 = 0LL;
  v50 = 0;
  v44[0] = -1;
  v48[0] = -1;
  v45 = -1;
  v55 = 0LL;
  v43 = 0;
  if ( !a3 || !*(_QWORD *)a3 || !a2 || *(_WORD *)(*(_QWORD *)a3 + 4LL) )
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
  v53 = v15;
  LODWORD(v16) = a3;
  v49 = (__int64 *)a3;
  if ( (a1 & 0x10000) == 0 && (v15 & 6) != 0 )
  {
    v54 = HIWORD(v15);
    v43 = 1;
    v49 = &v55;
    appended = LdrpCreateLangFallbackList(&v55, (__int64)a2, 25, 0);
    if ( appended < 0 )
      goto LABEL_52;
    v16 = &v55;
  }
  v18 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  v19 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v33 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v33 )
      {
        v34 = *(_QWORD *)(a4 + 16) == 0LL;
        v35 = a2;
        v52 = v19;
        if ( !v34 )
          v35 = *(_QWORD **)(a4 + 16);
        v51 = 11141120;
        if ( (int)GetNameFromLangListNode(v35, v33, &v51) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode((_DWORD)v16, (_DWORD)a2, 0, (unsigned int)v44, v52);
          if ( appended < 0 )
            goto LABEL_51;
        }
        v19 = Heap;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v16) = (_DWORD)v49;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v20 = (int)v49;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = Heap )
      {
        v37 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v37 )
        {
          v34 = *(_QWORD *)(a5 + 16) == 0LL;
          v38 = a2;
          v52 = v19;
          if ( !v34 )
            v38 = *(_QWORD **)(a5 + 16);
          v51 = 11141120;
          if ( (int)GetNameFromLangListNode(v38, v37, &v51) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(v20, (_DWORD)a2, 0, (unsigned int)v44, v52);
            if ( appended < 0 )
              goto LABEL_51;
          }
        }
        ++i;
      }
    }
  }
  v57 = v58 & 0x20;
  if ( (v58 & 0x20) != 0 && ((v21 = a6) != 0 && *(_WORD *)(a6 + 4) || (v21 = a7) != 0 && *(_WORD *)(a7 + 4)) )
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
          v52 = Heap;
          v51 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v23, &v51) >= 0 )
          {
            LOBYTE(v24) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v20, (_DWORD)a2, v24, (unsigned int)v44, v52) >= 0
              && (v58 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v18 + 24);
              if ( *(_WORD *)(v25 + 6LL * v22) == 2 )
              {
                v26 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v22 + 4));
                if ( (*v26 & 7) != 0
                  && ((*v26 & 6) == 0
                   || (int)LdrpMergeParentBaseLanguagesToList(v20, (_DWORD)v26, (_DWORD)a2, v12, v40) >= 0) )
                {
                  ++v50;
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
  LODWORD(v56) = 11141120;
  *((_QWORD *)&v56 + 1) = Heap + 170;
  appended = RtlpGetSystemDefaultUILanguage(v47, (__int64)a2);
  if ( appended < 0 )
    goto LABEL_52;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v47[0], &v56) )
  {
    appended = -1073741823;
    goto LABEL_52;
  }
  LOBYTE(v27) = 1;
  appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v47[0], v27, &v45);
  if ( appended >= 0 )
  {
    v28 = *((_QWORD *)&v56 + 1);
    if ( (v58 & 0x40) != 0 || a9 && v50 )
    {
      v29 = v49;
    }
    else
    {
      v29 = v49;
      appended = LdrpLangFallbackListAppendNode((_DWORD)v49, (_DWORD)a2, 0, (unsigned int)v48, *((__int64 *)&v56 + 1));
      if ( appended >= 0 )
      {
        if ( v57 )
        {
          v30 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v45);
          if ( (*v30 & 6) != 0 )
          {
            if ( !v18 || (LODWORD(v39) = v12, !v12) )
              v39 = a2[5];
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)v29, (_DWORD)v30, (_DWORD)a2, v39, v41);
            if ( appended < 0 )
              goto LABEL_51;
          }
        }
      }
    }
    if ( v43 )
    {
      if ( v29 )
      {
        appended = RtlpFilterandReplaceConsoleLanguages(*v29, (__int64)a2, ((unsigned __int8)v53 >> 2) & 1, v54, a3);
        if ( appended >= 0 && (v58 & 0x30) == 0x30 )
        {
          appended = LdrpLangFallbackListAppendNode(a3, (_DWORD)a2, 0, (unsigned int)v48, v28);
          if ( appended >= 0 )
          {
            v31 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v45);
            if ( (*v31 & 6) != 0 )
            {
              if ( !v18 || !v12 )
                v12 = a2[5];
              appended = LdrpMergeParentBaseLanguagesToList(a3, (_DWORD)v31, (_DWORD)a2, v12, v42);
            }
          }
        }
      }
    }
LABEL_51:
    v11 = Heap;
  }
LABEL_52:
  if ( v55 )
    RtlpMuiRegFreeLanguageList(v55);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  return (unsigned int)appended;
}
