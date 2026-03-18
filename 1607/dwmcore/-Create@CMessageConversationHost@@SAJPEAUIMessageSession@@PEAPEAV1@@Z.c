/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B43B0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800B445C (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B458C (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x18011B9A4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
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
      CMessageConversationHost::Disconnect(v5);
      CMILCOMBase::InternalRelease(v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v7;
}
