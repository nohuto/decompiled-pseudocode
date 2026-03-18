/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180111840
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  int v3; // eax
  int AttachedChannel; // eax
  CMILRefCountBase *v6; // rbx
  unsigned int v7; // edi
  CMILRefCountBase *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v9 = 0LL;
  *((_DWORD *)this + 10) = v3;
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 2), *((_DWORD *)a2 + 12), &v9);
  v6 = v9;
  v7 = AttachedChannel;
  if ( AttachedChannel >= 0 )
    *((_DWORD *)this + 11) = *((_DWORD *)v9 + 13);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x4Eu);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v7;
}
