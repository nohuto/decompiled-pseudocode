/*
 * XREFs of ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18008C850
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::DestroyStream(
        CExclusiveStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v12);
    if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v2 + 56LL))(v2, &v12) >= 0 )
    {
      v5 = v12;
      v6 = *v12;
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
      (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 80))(v5, v7);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v12);
  }
  v8 = (__int64 *)*((_QWORD *)this + 8);
  v9 = *v8;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 40))(v8, v10);
}
