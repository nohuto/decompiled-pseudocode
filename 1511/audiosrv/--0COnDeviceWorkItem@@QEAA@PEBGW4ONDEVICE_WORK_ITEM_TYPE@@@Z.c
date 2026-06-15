/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800678A0
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800691AC (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, _WORD *a2, int a3)
{
  int v3; // edi
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(a1 + 1);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v5 + 1, a2, v6, v7);
  }
  catch ( ATL::CAtlException *v9 )
  {
    if ( *(_DWORD *)v9 == -1073741571 )
      _resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
