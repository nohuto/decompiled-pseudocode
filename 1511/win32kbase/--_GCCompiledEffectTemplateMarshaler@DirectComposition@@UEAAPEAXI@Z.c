/*
 * XREFs of ??_GCCompiledEffectTemplateMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00DAC00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CCompiledEffectTemplateMarshaler *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
