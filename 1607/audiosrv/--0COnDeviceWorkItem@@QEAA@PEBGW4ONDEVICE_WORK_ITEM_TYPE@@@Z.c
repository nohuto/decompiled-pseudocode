/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180051E30
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18005352C (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, char *a2, int a3)
{
  int v3; // edi
  _QWORD *v5; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(a1 + 1);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v5 + 1, a2);
  }
  catch ( ATL::CAtlException *v7 )
  {
    if ( *(_DWORD *)v7 == -1073741571 )
      _o__resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
