/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180083A58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETCALLBACKID *a3)
{
  int v3; // eax
  int AttachedChannel; // eax
  CMILRefCountBase *v6; // rbx
  unsigned int v7; // edi
  CMILRefCountBase *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v9 = 0LL;
  *((_DWORD *)this + 70) = v3;
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 2), *((_DWORD *)a2 + 12), &v9);
  v6 = v9;
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x216u);
  else
    *((_DWORD *)this + 71) = *((_DWORD *)v9 + 15);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v7;
}
