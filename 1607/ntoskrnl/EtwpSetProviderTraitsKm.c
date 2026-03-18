/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x140548B34
 * Callers:
 *     EtwSetInformation @ 0x140548AE4 (EtwSetInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1404098DC (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x140409934 (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, const void *a2, unsigned __int16 a3)
{
  __int16 v3; // ax
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
  char *ProviderGroupFromTraits; // rax
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  if ( (v3 & 8) != 0 || (v3 & 1) == 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 104) )
      return (unsigned int)-1073741823;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, a3 + 28, 0x54777445u);
    v9 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag + 28, a2, a3);
    v7 = EtwpSetProviderTraitsCommon(a1, v9, &EtwpProviderTraitsKmMutex, (unsigned __int64 *)&EtwpProviderTraitsKmTree);
    if ( !*(_QWORD *)(a1 + 40) )
    {
      ProviderGroupFromTraits = EtwpGetProviderGroupFromTraits((const char *)(*(_QWORD *)(a1 + 104) + 28LL));
      if ( ProviderGroupFromTraits )
      {
        v13 = *(_OWORD *)ProviderGroupFromTraits;
        v7 = EtwpAddRegEntryToGroup(a1, (__int64)&v13, 0LL, 0, &v12);
      }
    }
  }
  if ( !v7 )
    *(_BYTE *)(a1 + 102) = 1;
  return v7;
}
