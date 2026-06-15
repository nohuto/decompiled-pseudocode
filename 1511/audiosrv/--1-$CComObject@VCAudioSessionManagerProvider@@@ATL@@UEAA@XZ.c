/*
 * XREFs of ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x18007C0C8
 * Callers:
 *     ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x18007C220 (--_E-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180018C84 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x18007C374 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 i; // rbx
  void *v4; // rcx

  *(_QWORD *)a1 = &ATL::CComObject<CAudioSessionManagerProvider>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  CAudioSessionManagerProvider::FinalRelease((CAudioSessionManagerProvider *)a1);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v2 = *(_QWORD **)(a1 + 136);
  if ( v2 )
  {
    for ( i = *(_QWORD *)(a1 + 144); i; --i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(v2++);
    free(*(void **)(a1 + 136));
  }
  v4 = *(void **)(a1 + 104);
  if ( v4 )
    free(v4);
  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
}
