/*
 * XREFs of BiExportBcdObjects @ 0x14070FD0C
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140710114 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x14070DE6C (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14070E78C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14070F68C (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14070FB3C (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140711014 (BiUpdateEfiEntry.c)
 */

__int64 __fastcall BiExportBcdObjects(void *a1, const GUID **a2)
{
  const GUID *v2; // rbx
  unsigned int i; // edi
  int v6; // eax
  int v7; // eax
  int EfiEntry; // esi
  bool IsPortableWorkspaceBoot; // bp
  int updated; // eax

  v2 = *a2;
  for ( i = 0; v2 != (const GUID *)a2; v2 = *(const GUID **)&v2->Data1 )
  {
    v6 = v2[3].Data1 & 5;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = BiDeleteBootEntry((PUNICODE_STRING)v2[2].Data1);
        if ( v7 < 0 )
          i = v7;
      }
      else if ( v6 == 4 )
      {
        EfiEntry = 0;
        IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
        if ( (v2[3].Data1 & 8) != 0 || !IsPortableWorkspaceBoot )
          EfiEntry = BiCreateEfiEntry(a1, v2);
        if ( (v2[3].Data1 & 8) == 0 && !IsPortableWorkspaceBoot )
        {
          if ( EfiEntry < 0 )
            EfiEntry = 0;
          else
            BiAddBootEntryToEfiBootManagerDisplayOrder(a1, (__int64)v2);
        }
        if ( EfiEntry < 0 )
          i = -2143748095;
      }
      else
      {
        updated = BiUpdateEfiEntry(a1, v2);
        if ( updated < 0 )
        {
          i = updated;
          if ( (v2[3].Data1 & 8) != 0 )
            i = -2143748093;
        }
      }
    }
  }
  return i;
}
