/*
 * XREFs of ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180029BD4
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180014954 (--1CAudioSession@@MEAA@XZ.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::ForEachEntry_::_1_::dtor$0 @ 0x18003A0E0 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--ForEachEntry_--_1_--dtor$0.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UISessionInternalEvents@@@2@_K@Z @ 0x180029C04 (-CallDestructors@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CCom.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
