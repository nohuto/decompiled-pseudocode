/*
 * XREFs of ?GetNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800B4E30
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800B4A18 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?RemoveKey@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x1800B4E80 (-RemoveKey@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x1800B4EEC (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::GetNode(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  *a4 = a2;
  v5 = (unsigned int)a2 % *((_DWORD *)a1 + 4);
  *a3 = v5;
  v6 = *a1;
  if ( *a1 )
  {
    v7 = 0LL;
    result = *(_QWORD *)(v6 + 8 * v5);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 24) == (_DWORD)a2 && *(_QWORD *)result == a2 )
      {
        *a5 = v7;
        return result;
      }
      v7 = result;
      result = *(_QWORD *)(result + 16);
    }
  }
  return 0LL;
}
