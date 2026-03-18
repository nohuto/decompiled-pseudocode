/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18003988C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18003B8E4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800B442C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETCALLBACKID *a3)
{
  unsigned int v4; // r8d
  CComposition *v7; // rcx
  int AttachedChannel; // eax
  struct CChannelContext *v9; // rdi
  unsigned int v10; // esi
  struct CChannelContext *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = *((_DWORD *)this + 90);
  if ( v4 )
    CMessageConversationHost::FlushCallbackId(
      *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1232LL),
      *((_DWORD *)this + 91),
      v4);
  v7 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 90) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v7, *((_DWORD *)a2 + 12), &v12);
  v9 = v12;
  v10 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x224u);
  else
    *((_DWORD *)this + 91) = *((_DWORD *)v12 + 15);
  if ( v9 )
    CMILRefCountBase::Release(v9);
  return v10;
}
