/*
 * XREFs of ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800B442C
 * Callers:
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180024218 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18003988C (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800399D0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::FlushCallbackId(
        CMessageConversationHost *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  LOBYTE(a4) = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 5) + 72LL))(
             *((_QWORD *)this + 5),
             a2,
             a3,
             a4);
  if ( (_DWORD)result == -2018375675 )
    return 0LL;
  return result;
}
