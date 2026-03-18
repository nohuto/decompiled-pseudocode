/*
 * XREFs of ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18009546C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180094360 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Channel_DuplicateHandleOnSource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE *a4)
{
  int AttachedChannel; // eax
  CResourceTable *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  struct CChannelContext *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a4 + 2), &v11);
  v8 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xABFu);
  }
  else
  {
    v9 = CResourceTable::DuplicateHandle(v7, a2, *((_DWORD *)a4 + 1), v11, *((_DWORD *)a4 + 3));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAC7u);
  }
  if ( v11 )
    CMILRefCountBase::Release(v11);
  return v8;
}
