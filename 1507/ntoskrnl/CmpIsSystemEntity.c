/*
 * XREFs of CmpIsSystemEntity @ 0x140481E04
 * Callers:
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x140481D80 (CmpIsVirtEnabled.c)
 */

bool __fastcall CmpIsSystemEntity(int *a1)
{
  bool v2; // di
  int v3; // eax
  int v4; // eax

  v2 = 1;
  if ( !CmpVEEnabled )
    return 1;
  if ( a1 && (*a1 & 1) != 0 )
    return (*a1 & 2) != 0;
  if ( KeGetCurrentThread()->PreviousMode )
    v2 = (unsigned __int8)CmpIsVirtEnabled() == 0;
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
