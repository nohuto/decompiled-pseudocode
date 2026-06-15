/*
 * XREFs of ?GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z @ 0x18008C9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetEndpointBufferSize(
        CBaseStreamGroupProxy *this,
        unsigned int *a2,
        float *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
    if ( v4 >= 0 && v8 )
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v8 + 40LL))(v8, a2, a3);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
    if ( v4 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, v4);
    }
  }
  return (unsigned int)v4;
}
