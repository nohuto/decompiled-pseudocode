/*
 * XREFs of ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180105498
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B2E2C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??_GCMessageConversationHost@@UEAAPEAXI@Z @ 0x180105420 (--_GCMessageConversationHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CMessageConversationHost::Disconnect(CMessageConversationHost *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
}
