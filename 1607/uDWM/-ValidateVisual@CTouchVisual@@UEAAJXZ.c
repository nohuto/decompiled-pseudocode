/*
 * XREFs of ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18008BCD0
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800896A0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchVisual::ValidateVisual(CTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    (*(void (__fastcall **)(CTouchVisual *))(*(_QWORD *)this + 208LL))(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x24u);
  return v3;
}
