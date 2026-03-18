/*
 * XREFs of ??_ECCompiledEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D87D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1C00D922C (--1CEffectInputSet@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CCompiledEffectMarshaler *__fastcall DirectComposition::CCompiledEffectMarshaler::`vector deleting destructor'(
        DirectComposition::CCompiledEffectMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompiledEffectMarshaler::`vftable';
  DirectComposition::CEffectInputSet::~CEffectInputSet((DirectComposition::CCompiledEffectMarshaler *)((char *)this + 56));
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
