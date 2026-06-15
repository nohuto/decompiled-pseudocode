/*
 * XREFs of ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180074D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::DestroyStream(
        CExclusiveStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease((__int64 *)&v12);
    if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v2 + 56LL))(v2, &v12) >= 0 )
    {
      v5 = v12;
      v6 = *v12;
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
      (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 80))(v5, v7);
    }
    Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease((__int64 *)&v12);
  }
  v8 = (__int64 *)*((_QWORD *)this + 8);
  v9 = *v8;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 40))(v8, v10);
}
