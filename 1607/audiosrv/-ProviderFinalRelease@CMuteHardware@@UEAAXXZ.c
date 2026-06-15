/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x180056080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) && *((_DWORD *)this + 14) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
        (__int64)this);
    }
    (*(void (__fastcall **)(_QWORD, CMuteHardware *))(*(_QWORD *)*v1 + 120LL))(*v1, this);
    *((_DWORD *)this + 14) = 0;
  }
  ATL::CComPtrBase<IPart>::Release(v1);
}
