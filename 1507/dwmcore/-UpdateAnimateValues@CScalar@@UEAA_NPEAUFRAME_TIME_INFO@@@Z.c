/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180107C10
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x180107AC8 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CCD0 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this, struct FRAME_TIME_INFO *a2)
{
  unsigned int i; // r15d

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * i) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i),
      *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
      17LL,
      (char *)this + 48);
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 5);
  return 1;
}
