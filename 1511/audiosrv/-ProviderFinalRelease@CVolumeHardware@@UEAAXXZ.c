/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x18006E280
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // r14

  v1 = (CVolumeHardware *)((char *)this + 88);
  if ( *((_QWORD *)this + 11) && *((_DWORD *)this + 30) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        (__int64)this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(**(_QWORD **)v1 + 120LL))(*(_QWORD *)v1, this);
    *((_DWORD *)this + 30) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}
