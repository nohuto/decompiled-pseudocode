/*
 * XREFs of ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180015F70
 * Callers:
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180018598 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetProcess(CAudioSession *this, struct IAudioProcess **a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 8LL))(*((_QWORD *)this + 108));
  result = 0LL;
  *a2 = (struct IAudioProcess *)*((_QWORD *)this + 108);
  return result;
}
