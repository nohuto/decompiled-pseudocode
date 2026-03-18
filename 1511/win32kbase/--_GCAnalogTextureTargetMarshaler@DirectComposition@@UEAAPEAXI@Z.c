/*
 * XREFs of ??_GCAnalogTextureTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6C90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CAnalogTextureTargetMarshaler *__fastcall DirectComposition::CAnalogTextureTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnalogTextureTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CAnalogTextureTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
