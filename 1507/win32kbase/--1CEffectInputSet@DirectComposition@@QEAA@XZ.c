/*
 * XREFs of ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1C00D922C
 * Callers:
 *     ??_ECCompiledEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D87D0 (--_ECCompiledEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00D8B50 (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CEffectInputSet::~CEffectInputSet(DirectComposition::CEffectInputSet *this)
{
  if ( *((_QWORD *)this + 2) )
    Win32FreePool();
  if ( *((_QWORD *)this + 3) )
    Win32FreePool();
}
