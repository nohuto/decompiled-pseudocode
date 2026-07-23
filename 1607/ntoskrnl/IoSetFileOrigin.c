/*
 * XREFs of IoSetFileOrigin @ 0x140134224
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetFileOrigin(PFILE_OBJECT FileObject, BOOLEAN Remote)
{
  ULONG Flags; // eax
  NTSTATUS v3; // r8d
  ULONG v4; // eax

  Flags = FileObject->Flags;
  v3 = -1073741776;
  if ( !Remote )
  {
    if ( (Flags & 0x1000000) == 0 )
      return v3;
    v4 = Flags & 0xFEFFFFFF;
    goto LABEL_4;
  }
  if ( (Flags & 0x1000000) == 0 )
  {
    v4 = Flags | 0x1000000;
LABEL_4:
    v3 = 0;
    FileObject->Flags = v4;
  }
  return v3;
}
