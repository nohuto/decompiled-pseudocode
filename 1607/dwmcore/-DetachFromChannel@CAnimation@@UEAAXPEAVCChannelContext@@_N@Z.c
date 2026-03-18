/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800399D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800B442C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2)
{
  unsigned int v4; // r8d

  if ( *((struct CChannelContext **)this + 20) == a2 )
  {
    v4 = *((_DWORD *)this + 90);
    if ( v4 )
    {
      CMessageConversationHost::FlushCallbackId(
        *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1232LL),
        *((_DWORD *)this + 91),
        v4);
      *((_DWORD *)this + 90) = 0;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( a2 == *((struct CChannelContext **)this + 20) )
    *((_QWORD *)this + 20) = 0LL;
}
