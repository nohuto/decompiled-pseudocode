/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008B980
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180064978 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x1800666B8 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v7; // ebx
  RPC_STATUS v8; // eax
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v13; // [rsp+D0h] [rbp+50h]

  v13 = a3;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v12);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v12);
  if ( v7 >= 0 )
  {
    v10 = *(_OWORD *)(a4 + 32);
    v11 = *(_OWORD *)(a4 + 48);
    v8 = RpcImpersonateClient(0LL);
    v7 = v8;
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v12 + 72LL))(
             v12,
             a1 + 160,
             0LL,
             *(_QWORD *)(a1 + 312),
             a4);
      RpcRevertToSelf();
      *(_QWORD *)(a4 + 56) = *((_QWORD *)&v11 + 1);
      *(_QWORD *)(a4 + 40) = *((_QWORD *)&v10 + 1);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 64LL))(
               *(_QWORD *)(a1 + 64),
               v12,
               v13);
        if ( v7 >= 0 )
        {
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 72), a2);
          CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v12);
  return (unsigned int)v7;
}
