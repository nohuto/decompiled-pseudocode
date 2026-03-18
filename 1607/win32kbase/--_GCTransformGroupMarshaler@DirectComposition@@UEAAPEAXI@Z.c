/*
 * XREFs of ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0048060
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CTransformGroupMarshaler *__fastcall DirectComposition::CTransformGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CTransformGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CTransformGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
