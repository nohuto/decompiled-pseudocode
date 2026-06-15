/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180057A70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 200);
  if ( *((_QWORD *)this + 25) && *((_DWORD *)this + 58) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
        (__int64)this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(*(_QWORD *)*v1 + 120LL))(*v1, this);
    *((_DWORD *)this + 58) = 0;
  }
  ATL::CComPtrBase<IPart>::Release(v1);
}
