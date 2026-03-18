/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180065018
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
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
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x4Eu);
  else
    *((_DWORD *)this + 11) = *((_DWORD *)v9 + 13);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v7;
}
