/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x1800134AC
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857A0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
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
  NTSTATUS ThreadPreferredUILanguages; // eax
  struct _TEB *v13; // rcx
  int v14; // eax
  struct _TEB *v15; // rdx
  __int64 v16; // rax
  struct _TEB *v17; // rcx
  __int64 v18; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF
  __int64 v21; // [rsp+40h] [rbp+18h] BYREF

  v0 = 1;
  if ( !NtCurrentTeb()->MergedPrefLanguages || *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 )
    goto LABEL_20;
  v21 = 0LL;
  v1 = RtlpCreateProcessRegistryInfo(&v21);
  v2 = 0LL;
  if ( v1 >= 0 )
    v2 = v21;
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
        v13 = NtCurrentTeb();
        v14 = v13->WowTebOffset;
        if ( v14 < 0 )
          LODWORD(v13) = v14 + (_DWORD)v13;
        v15 = NtCurrentTeb();
        v16 = v15->WowTebOffset;
        if ( (int)v16 < 0 )
          v15 = (struct _TEB *)((char *)v15 + v16);
        v7 = (_DWORD)v13 == LODWORD(v15->NtTib.SubSystemTib);
        v17 = NtCurrentTeb();
        v18 = v17->WowTebOffset;
        if ( v7 )
        {
          if ( (int)v18 < 0 )
            v17 = (struct _TEB *)((char *)v17 + v18);
          HIDWORD(v17->glDispatchTable[186]) = 1;
        }
        else
        {
          if ( (int)v18 < 0 )
            v17 = (struct _TEB *)((char *)v17 + v18);
          v17->MuiImpersonation = 1;
        }
        return v0;
      }
    }
    else
    {
      *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
    }
LABEL_20:
    ReturnLength = 0;
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
    if ( (int)(ThreadPreferredUILanguages + 0x80000000) >= 0 && ThreadPreferredUILanguages != -1073741789
      || !NtCurrentTeb()->MergedPrefLanguages )
    {
      return 0;
    }
    return v0;
  }
  return 0;
}
