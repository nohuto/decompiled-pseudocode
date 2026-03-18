/*
 * XREFs of ??_GCAnalogExclusiveViewMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E42F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CAnalogExclusiveViewMarshaler *__fastcall DirectComposition::CAnalogExclusiveViewMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnalogExclusiveViewMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CAnalogExclusiveViewMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
