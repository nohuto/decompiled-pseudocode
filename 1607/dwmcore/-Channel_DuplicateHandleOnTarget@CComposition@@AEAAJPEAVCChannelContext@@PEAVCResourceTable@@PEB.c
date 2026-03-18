/*
 * XREFs of ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003BB4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x18003AC78 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18003B8E4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CComposition::Channel_DuplicateHandleOnTarget(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_DUPLICATEHANDLEONTARGET *a4)
{
  int AttachedChannel; // eax
  CResourceTable *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  struct CChannelContext *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a4 + 1), &v11);
  v8 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0x9BEu);
  }
  else
  {
    v9 = CResourceTable::DuplicateHandle(v7, v11, *((_DWORD *)a4 + 2), a2, *((_DWORD *)a4 + 3));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9C6u);
  }
  if ( v11 )
    CMILRefCountBase::Release(v11);
  return v8;
}
