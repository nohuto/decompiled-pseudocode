/*
 * XREFs of MiDeleteSubsection @ 0x14012DB70
 * Callers:
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiMarkFileExtentsDeleted @ 0x140230CE4 (MiMarkFileExtentsDeleted.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  void *v2; // rax

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) != 0 )
  {
    v2 = (void *)MiMarkFileExtentsDeleted(a1);
    if ( v2 )
      MiDeleteFileExtents(v2);
  }
  ExFreePoolWithTag(a1, 0);
}
