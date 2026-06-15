/*
 * XREFs of ?StartStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z @ 0x18008FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::StartStream(CExclusiveStreamGroupProxy *this, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 64LL))(v6, a2);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
  return (unsigned int)v4;
}
