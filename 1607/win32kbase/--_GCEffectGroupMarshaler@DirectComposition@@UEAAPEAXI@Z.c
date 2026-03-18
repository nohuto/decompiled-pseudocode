/*
 * XREFs of ??_GCEffectGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C007AEF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CEffectGroupMarshaler *__fastcall DirectComposition::CEffectGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CEffectGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CEffectGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
