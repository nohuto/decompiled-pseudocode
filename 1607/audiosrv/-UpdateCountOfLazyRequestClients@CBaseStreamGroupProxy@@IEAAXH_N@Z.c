/*
 * XREFs of ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075B28
 * Callers:
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180024350 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180024440 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(CBaseStreamGroupProxy *this, int a2)
{
  int v2; // r8d
  __int64 v3; // r9
  int v4; // eax

  v2 = *((_DWORD *)this + 32);
  v3 = *((_QWORD *)this + 9);
  v4 = v2 + a2;
  *((_DWORD *)this + 32) = v2 + a2;
  if ( v3 && v2 != v4 && (!v2 || !v4) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 192LL))(v3, this);
}
