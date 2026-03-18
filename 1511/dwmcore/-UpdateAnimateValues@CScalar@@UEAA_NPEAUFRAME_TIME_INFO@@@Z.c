/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180124E50
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x180124D64 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB04 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this, struct FRAME_TIME_INFO *a2)
{
  unsigned int i; // r15d

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * i) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i),
      *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
      18LL,
      (char *)this + 48);
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 5);
  return 1;
}
