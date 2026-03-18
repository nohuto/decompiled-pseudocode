/*
 * XREFs of ??_ECSharedMatrixTransformMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00F19F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CSharedMatrixTransformMarshaler *__fastcall DirectComposition::CSharedMatrixTransformMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedMatrixTransformMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
