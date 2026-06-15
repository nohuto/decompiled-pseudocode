/*
 * XREFs of ?GetFrequencyForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K@Z @ 0x18008CA90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetFrequencyForOffload(CBaseStreamGroupProxy *this, unsigned __int64 *a2)
{
  __int64 v2; // rsi
  int v3; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
    if ( v3 >= 0 && v6 )
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
    if ( v3 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, v3);
    }
  }
  return (unsigned int)v3;
}
