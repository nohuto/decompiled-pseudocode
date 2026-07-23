/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x14050D1D0
 * Callers:
 *     EtwSetInformation @ 0x14050D180 (EtwSetInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14046CA90 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, const void *a2, unsigned __int16 a3)
{
  char *PoolWithTag; // rax
  signed __int64 v7; // rbx
  unsigned int v8; // ebx
  char *ProviderGroupFromTraits; // rax
  unsigned int v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, a3 + 28, 0x54777445u);
    v7 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag + 28, a2, a3);
      v8 = EtwpSetProviderTraitsCommon(a1, v7, &EtwpProviderTraitsKmMutex, (_RTL_RB_TREE *)&EtwpProviderTraitsKmTree);
      if ( !*(_QWORD *)(a1 + 40) )
      {
        ProviderGroupFromTraits = EtwpGetProviderGroupFromTraits((const char *)(*(_QWORD *)(a1 + 104) + 28LL));
        if ( ProviderGroupFromTraits )
        {
          v12 = *(_OWORD *)ProviderGroupFromTraits;
          v8 = EtwpAddRegEntryToGroup(a1, &v12, 0LL, 0, &v11);
        }
      }
      if ( !v8 )
        *(_BYTE *)(a1 + 101) = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
