/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x1800134BC
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857B0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 */

char LdrpSetThreadPreferredLangList()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r8
  struct _TEB *v3; // rcx
  int WowTebOffset; // eax
  struct _TEB *v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  struct _TEB *v8; // rcx
  __int64 v9; // rax
  unsigned int MuiImpersonation; // eax
  struct _TEB *v12; // rax
  int ThreadPreferredUILanguages; // eax
  struct _TEB *v14; // rcx
  int v15; // eax
  struct _TEB *v16; // rdx
  __int64 v17; // rax
  struct _TEB *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+30h] [rbp+8h] BYREF
  char v21; // [rsp+38h] [rbp+10h] BYREF
  __int64 v22; // [rsp+40h] [rbp+18h] BYREF

  v0 = 1;
  if ( !NtCurrentTeb()->MergedPrefLanguages || *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 )
    goto LABEL_20;
  v22 = 0LL;
  v1 = RtlpCreateProcessRegistryInfo(&v22);
  v2 = 0LL;
  if ( v1 >= 0 )
    v2 = v22;
  if ( v2 )
  {
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v2 + 16) )
    {
      v3 = NtCurrentTeb();
      WowTebOffset = v3->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v3) = WowTebOffset + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib);
      v8 = NtCurrentTeb();
      v9 = v8->WowTebOffset;
      if ( v7 )
      {
        if ( (int)v9 < 0 )
          v8 = (struct _TEB *)((char *)v8 + v9);
        MuiImpersonation = HIDWORD(v8->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v9 < 0 )
          v8 = (struct _TEB *)((char *)v8 + v9);
        MuiImpersonation = v8->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
      if ( *(_WORD *)(*(_QWORD *)(v2 + 24) + 6LL) == 1 )
      {
        v14 = NtCurrentTeb();
        v15 = v14->WowTebOffset;
        if ( v15 < 0 )
          LODWORD(v14) = v15 + (_DWORD)v14;
        v16 = NtCurrentTeb();
        v17 = v16->WowTebOffset;
        if ( (int)v17 < 0 )
          v16 = (struct _TEB *)((char *)v16 + v17);
        v7 = (_DWORD)v14 == LODWORD(v16->NtTib.SubSystemTib);
        v18 = NtCurrentTeb();
        v19 = v18->WowTebOffset;
        if ( v7 )
        {
          if ( (int)v19 < 0 )
            v18 = (struct _TEB *)((char *)v18 + v19);
          HIDWORD(v18->glDispatchTable[186]) = 1;
        }
        else
        {
          if ( (int)v19 < 0 )
            v18 = (struct _TEB *)((char *)v18 + v19);
          v18->MuiImpersonation = 1;
        }
        return v0;
      }
    }
    else
    {
      v12 = NtCurrentTeb();
      *((_DWORD *)v12->MergedPrefLanguages + 10) |= 0x80u;
    }
LABEL_20:
    v20 = 0;
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48LL, &v21, 0LL, &v20);
    if ( (int)(ThreadPreferredUILanguages + 0x80000000) >= 0 && ThreadPreferredUILanguages != -1073741789
      || !NtCurrentTeb()->MergedPrefLanguages )
    {
      return 0;
    }
    return v0;
  }
  return 0;
}
