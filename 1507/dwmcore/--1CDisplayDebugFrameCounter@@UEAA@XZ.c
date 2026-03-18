/*
 * XREFs of ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x1800E71C4
 * Callers:
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x1800E154C (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x1800E18A0 (--_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(CDisplayDebugFrameCounter *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &CDisplayDebugFrameCounter::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
