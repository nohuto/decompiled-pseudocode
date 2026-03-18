/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B2E2C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800B2EC4 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B3010 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180105498 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CMessageConversationHost *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 16LL))(
                                     WPF::g_pProcessHeap,
                                     64LL);
  if ( v4 )
    v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = CMessageConversationHost::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1Fu);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
    {
      CMessageConversationHost::Disconnect(v5);
      CMILCOMBase::InternalRelease(v5);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v7;
}
