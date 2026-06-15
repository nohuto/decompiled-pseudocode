/*
 * XREFs of ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800637EC
 * Callers:
 *     ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x180063960 (--_E-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x180063A9C (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 i; // rdi
  void *v5; // rcx

  *(_QWORD *)a1 = &ATL::CComObject<CAudioSessionManagerProvider>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  CAudioSessionManagerProvider::FinalRelease((CAudioSessionManagerProvider *)a1);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    for ( i = 0LL; i < v3; ++i )
      ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)(v2 + 8 * i) - 24LL));
    free(*(void **)(a1 + 136));
  }
  v5 = *(void **)(a1 + 104);
  if ( v5 )
    free(v5);
  if ( *(_BYTE *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
}
