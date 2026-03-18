/*
 * XREFs of ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x180061308
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042840 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18008BE04 (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x18000FF18 (--A-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 *     ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x180010228 (--0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x18005FEA0 (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800612B0 (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?GetNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x180061474 (-GetNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4.c)
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x180061604 (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 *     ?RemoveKey@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x18008D998 (-RemoveKey@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 *     ?RemoveKey@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x18008DE38 (-RemoveKey@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 */

int __fastcall DwmCoreAsimov::CDwmEventManager::SetFlipState(__int64 a1, __int64 a2, unsigned int a3)
{
  int *Node; // rax
  _QWORD *v7; // r11
  int v8; // ebx
  int v9; // r15d
  __int64 v10; // r11
  _QWORD *v11; // rcx
  time_t v12; // rbx
  __int64 v13; // rax
  time_t v14; // rax
  _QWORD *v15; // rcx
  char v17[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v18[4])(_QWORD, _QWORD); // [rsp+48h] [rbp-21h] BYREF
  time_t v19; // [rsp+68h] [rbp-1h]
  char v20[8]; // [rsp+70h] [rbp+7h] BYREF
  int v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+90h] [rbp+27h]
  char v24; // [rsp+D0h] [rbp+67h] BYREF
  char v25; // [rsp+E8h] [rbp+7Fh] BYREF

  LODWORD(Node) = GetCurrentThreadId();
  if ( (_DWORD)Node != *(_DWORD *)(a1 + 8) )
    return (int)Node;
  v7 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 16) = 0;
  v8 = 2;
  v9 = 2;
  Node = (int *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::GetNode(
                  (int)v7 + 96,
                  a2,
                  (unsigned int)&v25,
                  (unsigned int)&v24,
                  (__int64)v17);
  if ( Node )
  {
    Node = (int *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                    v10 + 96,
                    a2);
    v9 = *Node;
  }
  if ( a3 != v9 )
  {
    v11 = *(_QWORD **)a1;
    v18[3] = 0LL;
    v19 = 0LL;
    v18[0] = (__int64 (__fastcall **)(_QWORD, _QWORD))&DwmCoreAsimov::UsageEventData::`vftable';
    v18[2] = (__int64 (__fastcall **)(_QWORD, _QWORD))&unk_180167798;
    if ( ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
           v11 + 21,
           a2,
           (__int64)v18)
      && v9 != 2 )
    {
      v14 = time(0LL);
      v15 = *(_QWORD **)a1;
      v19 = v14;
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(v15, v18);
      if ( a3 != 2 )
        goto LABEL_10;
    }
    else if ( a3 <= 1 )
    {
LABEL_10:
      if ( a3 )
      {
        if ( a3 != 1 )
          v8 = 10;
      }
      else
      {
        v8 = 0;
      }
      DwmCoreAsimov::UsageEventData::UsageEventData((__int64)v20, v8);
      v12 = time(0LL);
      v13 = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::operator[](
              *(_QWORD *)a1 + 168LL,
              a2);
      *(_DWORD *)(v13 + 8) = v21;
      *(_QWORD *)(v13 + 16) = v22;
      *(_QWORD *)(v13 + 32) = v23;
      *(_QWORD *)(v13 + 24) = v12;
    }
    Node = (int *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                    *(_QWORD *)a1 + 96LL,
                    a2);
    *Node = a3;
  }
  if ( a3 == 3 )
  {
    ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::RemoveKey(
      *(_QWORD *)a1 + 168LL,
      a2);
    LODWORD(Node) = ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::RemoveKey(
                      *(_QWORD *)a1 + 96LL,
                      a2);
  }
  return (int)Node;
}
