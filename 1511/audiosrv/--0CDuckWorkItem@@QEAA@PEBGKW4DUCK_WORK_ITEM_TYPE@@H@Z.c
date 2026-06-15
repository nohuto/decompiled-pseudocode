/*
 * XREFs of ??0CDuckWorkItem@@QEAA@PEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A1478
 * Callers:
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A350C (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CDuckWorkItem::CDuckWorkItem(_QWORD *a1, _WORD *a2, int a3, int a4, int a5)
{
  int v5; // esi
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  ATL::CAtlException *v12; // [rsp+28h] [rbp-20h] BYREF

  v5 = a4;
  v8 = a1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(a1);
  *((_DWORD *)v8 + 2) = a3;
  *((_DWORD *)v8 + 4) = a5;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v8, a2, v9, v10);
  }
  catch ( ATL::CAtlException *v12 )
  {
    if ( *(_DWORD *)v12 == -1073741571 )
      _resetstkoflw();
    v8 = a1;
    v5 = a4;
  }
  *((_DWORD *)v8 + 3) = v5;
  return v8;
}
