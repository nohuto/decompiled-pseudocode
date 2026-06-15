/*
 * XREFs of ?GetVpoContext@CBaseStreamGroupProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800019B0
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x1800016A0 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000B180 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetVpoContext(CBaseStreamGroupProxy *this, struct IVpoContext **a2)
{
  HRESULT v4; // eax
  int v5; // esi
  __int64 (__fastcall *v6)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rdi
  int DeviceGraph; // eax
  struct IVpoContext *v8; // rax
  LPVOID v9; // rbx
  LPVOID ppv; // [rsp+70h] [rbp+40h] BYREF
  struct IAudioDeviceGraph *v12; // [rsp+78h] [rbp+48h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
         0LL,
         0x17u,
         &GUID_b0729dd3_bbc2_4fe5_86a6_290835baf80c,
         &ppv);
  v12 = 0LL;
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(**((_QWORD **)this + 9) + 56LL);
    if ( v6 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(*((CSaDeviceProxy **)this + 9), &v12);
    else
      DeviceGraph = v6(*((CSaDeviceProxy **)this + 9), &v12);
    v5 = DeviceGraph;
    if ( DeviceGraph < 0
      || (v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IAudioDeviceGraph *))(*(_QWORD *)ppv + 24LL))(
                 ppv,
                 *((_QWORD *)this + 8),
                 v12),
          v5 < 0) )
    {
      v9 = ppv;
    }
    else
    {
      v8 = (struct IVpoContext *)ppv;
      v9 = 0LL;
      ppv = 0LL;
      *a2 = v8;
    }
    if ( !v12 )
      goto LABEL_10;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9 = ppv;
LABEL_10:
  if ( v9 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v5;
}
