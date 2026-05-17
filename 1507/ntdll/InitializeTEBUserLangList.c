/*
 * XREFs of InitializeTEBUserLangList @ 0x18001B7C8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180048A00 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CFE0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpUpdateTEBLanguage @ 0x180048904 (RtlpUpdateTEBLanguage.c)
 *     InitializeUserOrMachineLangList @ 0x180048B38 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadLanguageConfigList @ 0x1800493C4 (RtlpLoadLanguageConfigList.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  int updated; // ebx
  unsigned int v4; // r15d
  bool v5; // si
  bool v6; // r14
  bool v7; // bp
  _QWORD *UserPrefLanguages; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // r8
  __int64 v11; // r10
  struct _TEB *v12; // rdx
  int WowTebOffset; // eax
  struct _TEB *v14; // rcx
  __int64 v15; // rax
  struct _TEB *v16; // rcx
  __int64 v17; // rax
  unsigned int MuiImpersonation; // eax
  int v19; // r12d
  __int64 v20; // rcx
  int v21; // r8d
  bool v22; // zf
  struct _TEB *v24; // rdx
  int v25; // eax
  struct _TEB *v26; // rcx
  __int64 v27; // rax
  struct _TEB *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  struct _TEB *v31; // rax
  char v32; // di
  char v33; // al
  __int64 v34; // rcx
  unsigned int v35; // r9d
  unsigned int i; // r8d
  char v37; // cl
  int v38; // eax
  __int64 v40; // [rsp+90h] [rbp+18h] BYREF
  __int64 v41; // [rsp+98h] [rbp+20h] BYREF

  v40 = 0LL;
  updated = 0;
  v41 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    if ( v9 )
    {
      v10 = *(_WORD *)(v9 + 6);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v9 + 16);
        if ( v11 )
        {
          v12 = NtCurrentTeb();
          WowTebOffset = v12->WowTebOffset;
          if ( WowTebOffset < 0 )
            LODWORD(v12) = WowTebOffset + (_DWORD)v12;
          v14 = NtCurrentTeb();
          v15 = v14->WowTebOffset;
          if ( (int)v15 < 0 )
            v14 = (struct _TEB *)((char *)v14 + v15);
          v22 = (_DWORD)v12 == LODWORD(v14->NtTib.SubSystemTib);
          v16 = NtCurrentTeb();
          v17 = v16->WowTebOffset;
          if ( v22 )
          {
            if ( (int)v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            MuiImpersonation = HIDWORD(v16->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            MuiImpersonation = v16->MuiImpersonation;
          }
          v19 = 3;
          if ( !MuiImpersonation )
          {
            if ( v10 > 1u )
            {
              v7 = 1;
            }
            else if ( (*(_BYTE *)v11 & 1) == 0 )
            {
              v35 = 0;
              for ( i = 0; i < 3; ++i )
              {
                if ( ((*(_WORD *)(v11 + 8) >> (2 * i)) & 3) != 0 )
                  ++v35;
              }
              updated = 0;
              v7 = v35 > 1;
            }
            v24 = NtCurrentTeb();
            v25 = v24->WowTebOffset;
            if ( v25 < 0 )
              LODWORD(v24) = v25 + (_DWORD)v24;
            v26 = NtCurrentTeb();
            v27 = v26->WowTebOffset;
            if ( (int)v27 < 0 )
              v26 = (struct _TEB *)((char *)v26 + v27);
            v22 = (_DWORD)v24 == LODWORD(v26->NtTib.SubSystemTib);
            v28 = NtCurrentTeb();
            v29 = v28->WowTebOffset;
            if ( v22 )
            {
              if ( (int)v29 < 0 )
                v28 = (struct _TEB *)((char *)v28 + v29);
              HIDWORD(v28->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v29 < 0 )
                v28 = (struct _TEB *)((char *)v28 + v29);
              v28->MuiImpersonation = 1;
            }
            if ( v7 )
              goto LABEL_36;
          }
          if ( !UserPrefLanguages )
            goto LABEL_43;
          if ( *UserPrefLanguages )
          {
            v20 = *(_QWORD *)(*UserPrefLanguages + 16LL);
            if ( v20 )
            {
              if ( *(_DWORD *)(v20 + 12) < *(_DWORD *)(a2 + 12) )
              {
LABEL_36:
                if ( UserPrefLanguages )
                {
                  v30 = *UserPrefLanguages;
                  if ( *UserPrefLanguages )
                  {
                    v6 = (*(_BYTE *)(v30 + 40) & 2) != 0;
                    v5 = (*(_BYTE *)(v30 + 40) & 4) != 0;
                    if ( (*(_BYTE *)(v30 + 40) & 2) != 0 || (*(_BYTE *)(v30 + 40) & 4) != 0 )
                      v4 = *(_DWORD *)(v30 + 40) & 0xFFFF0000;
                    ((void (*)(void))RtlpMuiRegFreeLanguageList)();
                    *UserPrefLanguages = 0LL;
                  }
                }
                if ( NtCurrentTeb()->MergedPrefLanguages )
                {
                  v31 = NtCurrentTeb();
                  *((_DWORD *)v31->MergedPrefLanguages + 10) |= 0x80u;
                }
              }
            }
          }
          if ( UserPrefLanguages && *UserPrefLanguages )
          {
            v21 = *(_DWORD *)(*UserPrefLanguages + 40LL);
            if ( a1 )
              v22 = (v21 & 0x20) == 0;
            else
              v22 = (v21 & 0x10) == 0;
            if ( !v22 )
              return (unsigned int)updated;
            v37 = v6;
            if ( (v21 & 2) != 0 )
              v37 = 1;
            v6 = v37;
            if ( (v21 & 4) != 0 )
              v5 = 1;
            if ( v37 || v5 )
              v4 = v21 & 0xFFFF0000;
            RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
            *UserPrefLanguages = 0LL;
            if ( NtCurrentTeb()->MergedPrefLanguages )
            {
              RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
          }
          if ( v7 )
          {
            v32 = a1;
            goto LABEL_84;
          }
LABEL_43:
          v32 = a1;
          if ( !a1 && !v6 && !v5 )
          {
            v33 = 1;
LABEL_47:
            updated = InitializeUserOrMachineLangList(a2, 1, (unsigned int)&v40, v19, v33);
            if ( updated >= 0 )
            {
              v34 = v40;
              if ( v40 )
              {
                if ( v32 )
                  *(_DWORD *)(v40 + 40) |= 0x20u;
                else
                  *(_DWORD *)(v40 + 40) |= 0x10u;
                if ( v6 )
                  *(_DWORD *)(v34 + 40) |= 2u;
                if ( v5 )
                  *(_DWORD *)(v34 + 40) |= 4u;
                if ( v6 || v5 )
                  *(_DWORD *)(v34 + 40) |= v4;
                updated = RtlpUpdateTEBLanguage(v34, 0LL, 4LL);
              }
              if ( v7 )
              {
                v38 = RtlpLoadLanguageConfigList(8LL, &v41, a2);
                updated = v38;
                if ( v38 >= 0 )
                  return (unsigned int)RtlpUpdateTEBLanguage(0LL, v41, 5LL);
              }
            }
            return (unsigned int)updated;
          }
LABEL_84:
          v33 = 0;
          if ( v32 )
            v19 = 2;
          goto LABEL_47;
        }
      }
    }
  }
  return 3221225485LL;
}
