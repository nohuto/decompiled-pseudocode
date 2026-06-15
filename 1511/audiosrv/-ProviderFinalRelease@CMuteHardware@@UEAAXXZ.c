/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x18006C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // r14

  v1 = (CMuteHardware *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) && *((_DWORD *)this + 14) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        (__int64)this);
    }
    (*(void (__fastcall **)(_QWORD, CMuteHardware *))(**(_QWORD **)v1 + 120LL))(*(_QWORD *)v1, this);
    *((_DWORD *)this + 14) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}
