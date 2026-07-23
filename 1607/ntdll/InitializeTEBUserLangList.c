/*
 * XREFs of InitializeTEBUserLangList @ 0x180012650
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708C0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079BF0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x1800709F8 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080E94 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  int updated; // ebx
  unsigned int v4; // r15d
  bool v5; // si
  bool v6; // r14
  bool v7; // bp
  PVOID *UserPrefLanguages; // rdi
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
  int v21; // ecx
  bool v22; // zf
  struct _TEB *v24; // rdx
  int v25; // eax
  struct _TEB *v26; // rcx
  __int64 v27; // rax
  struct _TEB *v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rcx
  char v31; // di
  char v32; // al
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int i; // r8d
  char v36; // al
  int v37; // eax
  __int64 v39; // [rsp+78h] [rbp+10h] BYREF
  __int64 v40; // [rsp+80h] [rbp+18h] BYREF

  v39 = 0LL;
  updated = 0;
  v40 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
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
              v34 = 0;
              for ( i = 0; i < 3; ++i )
              {
                if ( ((*(_WORD *)(v11 + 8) >> (2 * i)) & 3) != 0 )
                  ++v34;
              }
              v7 = v34 > 1;
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
            v20 = *((_QWORD *)*UserPrefLanguages + 2);
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
                    v6 = (v30[40] & 2) != 0;
                    v5 = (v30[40] & 4) != 0;
                    if ( (v30[40] & 2) != 0 || (v30[40] & 4) != 0 )
                      v4 = *((_DWORD *)v30 + 10) & 0xFFFF0000;
                    RtlpMuiRegFreeLanguageList(v30);
                    *UserPrefLanguages = 0LL;
                  }
                }
                if ( NtCurrentTeb()->MergedPrefLanguages )
                  *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages
                                                                          + 10) | 0x80;
              }
            }
          }
          if ( UserPrefLanguages && *UserPrefLanguages )
          {
            v21 = *((_DWORD *)*UserPrefLanguages + 10);
            if ( a1 )
              v22 = (v21 & 0x20) == 0;
            else
              v22 = (v21 & 0x10) == 0;
            if ( !v22 )
              return (unsigned int)updated;
            v36 = v6;
            if ( (v21 & 2) != 0 )
              v36 = 1;
            v6 = v36;
            if ( (v21 & 4) != 0 )
              v5 = 1;
            if ( v36 || v5 )
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
            v31 = a1;
            goto LABEL_84;
          }
LABEL_43:
          v31 = a1;
          if ( !a1 && !v6 && !v5 )
          {
            v32 = 1;
LABEL_47:
            updated = InitializeUserOrMachineLangList(a2, 1, (unsigned int)&v39, v19, v32);
            if ( updated >= 0 )
            {
              v33 = v39;
              if ( v39 )
              {
                if ( v31 )
                  *(_DWORD *)(v39 + 40) |= 0x20u;
                else
                  *(_DWORD *)(v39 + 40) |= 0x10u;
                if ( v6 )
                  *(_DWORD *)(v33 + 40) |= 2u;
                if ( v5 )
                  *(_DWORD *)(v33 + 40) |= 4u;
                if ( v6 || v5 )
                  *(_DWORD *)(v33 + 40) |= v4;
                updated = RtlpUpdateTEBLanguage(v33, 0LL, 4LL);
              }
              if ( v7 )
              {
                v37 = RtlpLoadLanguageConfigList(8LL, &v40, a2);
                updated = v37;
                if ( v37 >= 0 )
                  return (unsigned int)RtlpUpdateTEBLanguage(0LL, v40, 5LL);
              }
            }
            return (unsigned int)updated;
          }
LABEL_84:
          v32 = 0;
          if ( v31 )
            v19 = 2;
          goto LABEL_47;
        }
      }
    }
  }
  return 3221225485LL;
}
