/*
 * XREFs of ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x180093EB0
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180093CCC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::CMessageConversationHost(
        CMessageConversationHost *this,
        struct IMessageSession *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMessageConversationHost::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CMessageConversationHost::`vftable'{for `IMessageConversationHost'};
  CBitmapOfDeviceBitmaps::AddRef(this);
  *((_QWORD *)this + 3) = a2;
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
