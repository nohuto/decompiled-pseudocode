/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180141760
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x18014168C (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B041C (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this, struct FRAME_TIME_INFO *a2)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * i) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i),
      *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
      18LL,
      (char *)this + 56);
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 14);
  return 1;
}
