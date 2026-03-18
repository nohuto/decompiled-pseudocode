/*
 * XREFs of ??1CAtlasedRectsCommandList@@MEAA@XZ @ 0x180013B38
 * Callers:
 *     ??_ECAtlasedRectsCommandList@@MEAAPEAXI@Z @ 0x180013AE0 (--_ECAtlasedRectsCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsCommandList::~CAtlasedRectsCommandList(CAtlasedRectsCommandList *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CAtlasedRectsCommandList::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
