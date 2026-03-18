/*
 * XREFs of ??_ECSnapshotMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6E30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CSnapshotMarshaler *__fastcall DirectComposition::CSnapshotMarshaler::`vector deleting destructor'(
        DirectComposition::CSnapshotMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSnapshotMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
