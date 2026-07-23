/*
 * XREFs of RtlpInitializeUserList @ 0x180010CD4
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180013850 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     InitializeUserOrMachineLangList @ 0x1800709F8 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080E94 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1)
{
  int updated; // r8d
  struct _TEB *v4; // rcx
  int WowTebOffset; // eax
  struct _TEB *v6; // rdx
  __int64 v7; // rax
  bool v8; // zf
  struct _TEB *v9; // rcx
  __int64 v10; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v12; // rcx
  struct _TEB *v13; // rcx
  int v14; // eax
  struct _TEB *v15; // rdx
  __int64 v16; // rax
  struct _TEB *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  struct _TEB *v20; // rcx
  int v21; // eax
  struct _TEB *v22; // rdx
  __int64 v23; // rax
  struct _TEB *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+48h] [rbp+10h] BYREF
  __int64 v27; // [rsp+50h] [rbp+18h] BYREF

  updated = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( !NtCurrentTeb()->UserPrefLanguages || !*(_QWORD *)NtCurrentTeb()->UserPrefLanguages )
  {
    if ( a1 )
    {
      updated = InitializeUserOrMachineLangList(a1, 1, (unsigned int)&v26, 3, 0);
      if ( updated >= 0 )
      {
        v4 = NtCurrentTeb();
        WowTebOffset = v4->WowTebOffset;
        if ( WowTebOffset < 0 )
          LODWORD(v4) = WowTebOffset + (_DWORD)v4;
        v6 = NtCurrentTeb();
        v7 = v6->WowTebOffset;
        if ( (int)v7 < 0 )
          v6 = (struct _TEB *)((char *)v6 + v7);
        v8 = (_DWORD)v4 == LODWORD(v6->NtTib.SubSystemTib);
        v9 = NtCurrentTeb();
        v10 = v9->WowTebOffset;
        if ( v8 )
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = HIDWORD(v9->glDispatchTable[186]);
        }
        else
        {
          if ( (int)v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = v9->MuiImpersonation;
        }
        if ( !MuiImpersonation )
          updated = RtlpLoadLanguageConfigList(8LL, &v27, a1);
        if ( updated >= 0 )
        {
          v12 = v26;
          *(_DWORD *)(v26 + 40) |= 0x10u;
          updated = RtlpUpdateTEBLanguage(v12, 0LL, 4LL);
          if ( updated >= 0 && v27 )
            updated = RtlpUpdateTEBLanguage(0LL, v27, 5LL);
          v13 = NtCurrentTeb();
          v14 = v13->WowTebOffset;
          if ( v14 < 0 )
            LODWORD(v13) = v14 + (_DWORD)v13;
          v15 = NtCurrentTeb();
          v16 = v15->WowTebOffset;
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          v8 = (_DWORD)v13 == LODWORD(v15->NtTib.SubSystemTib);
          v17 = NtCurrentTeb();
          v18 = v17->WowTebOffset;
          if ( v8 )
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            v19 = HIDWORD(v17->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            v19 = v17->MuiImpersonation;
          }
          if ( !v19 )
          {
            v20 = NtCurrentTeb();
            v21 = v20->WowTebOffset;
            if ( v21 < 0 )
              LODWORD(v20) = v21 + (_DWORD)v20;
            v22 = NtCurrentTeb();
            v23 = v22->WowTebOffset;
            if ( (int)v23 < 0 )
              v22 = (struct _TEB *)((char *)v22 + v23);
            v8 = (_DWORD)v20 == LODWORD(v22->NtTib.SubSystemTib);
            v24 = NtCurrentTeb();
            v25 = v24->WowTebOffset;
            if ( v8 )
            {
              if ( (int)v25 < 0 )
                v24 = (struct _TEB *)((char *)v24 + v25);
              HIDWORD(v24->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v25 < 0 )
                v24 = (struct _TEB *)((char *)v24 + v25);
              v24->MuiImpersonation = 1;
            }
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)updated;
}
