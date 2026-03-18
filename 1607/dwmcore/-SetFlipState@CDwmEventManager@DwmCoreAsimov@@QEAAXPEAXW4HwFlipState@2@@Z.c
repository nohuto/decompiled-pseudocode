/*
 * XREFs of ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800B4A18
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28 (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800B4E30 (-GetNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4.c)
 *     ?RemoveKey@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x1800B4E80 (-RemoveKey@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x1800B4EEC (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800B4FC8 (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?RemoveKey@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x1800B502C (-RemoveKey@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800B9C00 (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x1801629BC (--0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z.c)
 *     ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x180162B78 (--A-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 */

int __fastcall DwmCoreAsimov::CDwmEventManager::SetFlipState(__int64 *a1, __int64 a2, unsigned int a3)
{
  int *Node; // rax
  __int64 v7; // r11
  unsigned int v8; // ebx
  int v9; // r15d
  __int64 v10; // r11
  __int64 v11; // rcx
  time_t v12; // rax
  __int64 v13; // rcx
  time_t v14; // rbx
  __int64 v15; // rax
  _BYTE v17[8]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-21h] BYREF
  time_t v19; // [rsp+68h] [rbp-1h]
  _BYTE v20[8]; // [rsp+70h] [rbp+7h] BYREF
  int v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+90h] [rbp+27h]
  char v24; // [rsp+D0h] [rbp+67h] BYREF
  char v25; // [rsp+E8h] [rbp+7Fh] BYREF

  LODWORD(Node) = GetCurrentThreadId();
  if ( (_DWORD)Node != *((_DWORD *)a1 + 2) )
    return (int)Node;
  v7 = *a1;
  *((_DWORD *)a1 + 4) = 0;
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
    v11 = *a1;
    v18[3] = 0LL;
    v19 = 0LL;
    v18[0] = &DwmCoreAsimov::UsageEventData::`vftable';
    v18[2] = &unk_1801ADA80;
    if ( !(unsigned __int8)ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
                             v11 + 168,
                             a2,
                             v18)
      || v9 == 2 )
    {
      if ( a3 <= 1 )
      {
LABEL_13:
        if ( a3 )
        {
          if ( a3 != 1 )
            v8 = 10;
        }
        else
        {
          v8 = 0;
        }
        DwmCoreAsimov::UsageEventData::UsageEventData(v20, v8);
        v14 = time(0LL);
        v15 = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::operator[](
                *a1 + 168,
                a2);
        *(_DWORD *)(v15 + 8) = v21;
        *(_QWORD *)(v15 + 16) = v22;
        *(_QWORD *)(v15 + 32) = v23;
        *(_QWORD *)(v15 + 24) = v14;
      }
    }
    else
    {
      v12 = time(0LL);
      v13 = *a1;
      v19 = v12;
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(v13, v18);
      if ( a3 != 2 )
        goto LABEL_13;
    }
    Node = (int *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                    *a1 + 96,
                    a2);
    *Node = a3;
  }
  if ( a3 == 3 )
  {
    ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::RemoveKey(
      *a1 + 168,
      a2);
    LODWORD(Node) = ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::RemoveKey(
                      *a1 + 96,
                      a2);
  }
  return (int)Node;
}
