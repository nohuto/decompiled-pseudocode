/*
 * XREFs of ??0CChannelContext@@IEAA@IPEAUIMilNotificationTransport@@@Z @ 0x180062CA8
 * Callers:
 *     ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x180062AD8 (-Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        struct IMilNotificationTransport *a3)
{
  CChannelContext *result; // rax

  *((_QWORD *)this + 4) = a3;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CChannelContext::`vftable';
  *((_DWORD *)this + 2) = 0;
  if ( a3 )
    (*(void (__fastcall **)(struct IMilNotificationTransport *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 2) = 1;
  return result;
}
