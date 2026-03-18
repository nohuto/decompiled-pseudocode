/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180047FB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
