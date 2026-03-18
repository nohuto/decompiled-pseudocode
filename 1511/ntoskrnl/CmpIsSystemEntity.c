/*
 * XREFs of CmpIsSystemEntity @ 0x1403FBD30
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 */

bool __fastcall CmpIsSystemEntity(int *a1)
{
  char v2; // di
  int v3; // eax
  int v4; // eax

  v2 = 1;
  if ( !CmpVEEnabled )
    return 1;
  if ( a1 && (*a1 & 1) != 0 )
    return (*a1 & 2) != 0;
  if ( KeGetCurrentThread()->PreviousMode && (unsigned __int8)CmpIsVirtEnabled() )
    v2 = 0;
  if ( a1 )
  {
    *a1 |= 1u;
    v3 = *a1;
    if ( v2 )
      v4 = v3 | 2;
    else
      v4 = v3 | 4;
    *a1 = v4;
  }
  return v2;
}
