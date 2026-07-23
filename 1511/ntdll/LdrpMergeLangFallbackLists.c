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
        __int64 a2,
        PVOID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int16 *v11; // r14
  __int64 v12; // rsi
  bool v13; // r15
  __int64 v14; // rax
  unsigned int v15; // eax
  PVOID *v16; // rbx
  int LangFallbackList; // ebx
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
  unsigned __int16 *Buffer; // r14
  PVOID *v29; // r15
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  _WORD *v33; // rdx
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int i; // r15d
  _WORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+38h] [rbp-69h]
  _WORD v44[2]; // [rsp+3Ch] [rbp-65h] BYREF
  __int16 v45; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int16 *Heap; // [rsp+48h] [rbp-59h]
  _WORD v47[2]; // [rsp+50h] [rbp-51h] BYREF
  LANGID DefaultUILanguageId; // [rsp+54h] [rbp-4Dh] BYREF
  PVOID *p_BaseAddress; // [rsp+58h] [rbp-49h]
  int v50; // [rsp+60h] [rbp-41h]
  int v51; // [rsp+68h] [rbp-39h] BYREF
  __int64 v52; // [rsp+70h] [rbp-31h]
  unsigned int v53; // [rsp+78h] [rbp-29h]
  unsigned int v54; // [rsp+7Ch] [rbp-25h]
  PVOID BaseAddress; // [rsp+80h] [rbp-21h] BYREF
  _UNICODE_STRING String; // [rsp+88h] [rbp-19h] BYREF
  int v57; // [rsp+98h] [rbp-9h]
  char v58; // [rsp+E8h] [rbp+47h]

  v58 = a1;
  *(_QWORD *)&String.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String.Buffer + 2) = 0;
  HIWORD(String.Buffer) = 0;
  v11 = 0LL;
  String.Length = 0;
  v54 = 0;
  v12 = 0LL;
  v50 = 0;
  v44[0] = -1;
  v47[0] = -1;
  v45 = -1;
  BaseAddress = 0LL;
  v43 = 0;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
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
  LODWORD(v16) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( (a1 & 0x10000) == 0 && (v15 & 6) != 0 )
  {
    v54 = HIWORD(v15);
    v43 = 1;
    p_BaseAddress = &BaseAddress;
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, a2, 25, 0);
    if ( LangFallbackList < 0 )
      goto LABEL_52;
    v16 = &BaseAddress;
  }
  v18 = 0LL;
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  v19 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v33 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6LL * (unsigned int)v11);
      if ( *v33 )
      {
        v34 = *(_QWORD *)(a4 + 16) == 0LL;
        v35 = a2;
        v52 = v19;
        if ( !v34 )
          v35 = *(_QWORD *)(a4 + 16);
        v51 = 11141120;
        if ( (int)GetNameFromLangListNode(v35, v33, &v51, 0LL) >= 0 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)v16, a2, 0, (unsigned int)v44, v52);
          if ( LangFallbackList < 0 )
            goto LABEL_51;
        }
        v19 = (__int64)Heap;
      }
      LODWORD(v11) = (_DWORD)v11 + 1;
      LODWORD(v16) = (_DWORD)p_BaseAddress;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v20 = (int)p_BaseAddress;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = (__int64)Heap )
      {
        v37 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v37 )
        {
          v34 = *(_QWORD *)(a5 + 16) == 0LL;
          v38 = a2;
          v52 = v19;
          if ( !v34 )
            v38 = *(_QWORD *)(a5 + 16);
          v51 = 11141120;
          if ( (int)GetNameFromLangListNode(v38, v37, &v51, 0LL) >= 0 )
          {
            LangFallbackList = LdrpLangFallbackListAppendNode(v20, a2, 0, (unsigned int)v44, v52);
            if ( LangFallbackList < 0 )
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
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v22 = 0;
    if ( *(_WORD *)(v21 + 4) )
    {
      do
      {
        v23 = (_WORD *)(*(_QWORD *)(v18 + 24) + 6LL * v22);
        if ( *v23 )
        {
          v52 = (__int64)Heap;
          v51 = 11141120;
          if ( (int)GetNameFromLangListNode(a2, v23, &v51, 0LL) >= 0 )
          {
            LOBYTE(v24) = 1;
            if ( (int)LdrpLangFallbackListAppendNode(v20, a2, v24, (unsigned int)v44, v52) >= 0 && (v58 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v18 + 24);
              if ( *(_WORD *)(v25 + 6LL * v22) == 2 )
              {
                v26 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v22 + 4));
                if ( (*v26 & 7) != 0
                  && ((*v26 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v20, (_DWORD)v26, a2, v12, v40) >= 0) )
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
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  LangFallbackList = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, (PLCID)a2);
  if ( LangFallbackList < 0 )
    goto LABEL_52;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    LangFallbackList = -1073741823;
    goto LABEL_52;
  }
  LOBYTE(v27) = 1;
  LangFallbackList = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, DefaultUILanguageId, v27, &v45);
  if ( LangFallbackList >= 0 )
  {
    Buffer = String.Buffer;
    if ( (v58 & 0x40) != 0 || a9 && v50 )
    {
      v29 = p_BaseAddress;
    }
    else
    {
      v29 = p_BaseAddress;
      LangFallbackList = LdrpLangFallbackListAppendNode(
                           (_DWORD)p_BaseAddress,
                           a2,
                           0,
                           (unsigned int)v47,
                           (__int64)String.Buffer);
      if ( LangFallbackList >= 0 )
      {
        if ( v57 )
        {
          v30 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v45);
          if ( (*v30 & 6) != 0 )
          {
            if ( !v18 || (LODWORD(v39) = v12, !v12) )
              v39 = *(_QWORD *)(a2 + 40);
            LangFallbackList = LdrpMergeParentBaseLanguagesToList((_DWORD)v29, (_DWORD)v30, a2, v39, v41);
            if ( LangFallbackList < 0 )
              goto LABEL_51;
          }
        }
      }
    }
    if ( v43 )
    {
      if ( v29 )
      {
        LangFallbackList = RtlpFilterandReplaceConsoleLanguages(*v29, a2, ((unsigned __int8)v53 >> 2) & 1, v54, a3);
        if ( LangFallbackList >= 0 && (v58 & 0x30) == 0x30 )
        {
          LangFallbackList = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)v47, (__int64)Buffer);
          if ( LangFallbackList >= 0 )
          {
            v31 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v45);
            if ( (*v31 & 6) != 0 )
            {
              if ( !v18 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              LangFallbackList = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v31, a2, v12, v42);
            }
          }
        }
      }
    }
LABEL_51:
    v11 = Heap;
  }
LABEL_52:
  if ( BaseAddress )
    RtlpMuiRegFreeLanguageList(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)LangFallbackList;
}
