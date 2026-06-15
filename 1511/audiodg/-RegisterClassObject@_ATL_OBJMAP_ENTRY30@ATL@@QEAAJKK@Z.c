/*
 * XREFs of ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x140004F40
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140001ACC (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140004E50 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140008440 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(ATL::_ATL_OBJMAP_ENTRY30 *this)
{
  __int64 (__fastcall *v2)(__int64, __int64, LPUNKNOWN *); // rdi
  int v3; // eax
  unsigned int v4; // edi
  ULONG (__stdcall *Release)(IUnknown *); // rsi
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = 0LL;
  v2 = (__int64 (__fastcall *)(__int64, __int64, LPUNKNOWN *))*((_QWORD *)this + 2);
  if ( !v2 )
    return 0LL;
  if ( (char *)v2 == (char *)ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance )
    v3 = ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
           *((_QWORD *)this + 3),
           (__int64)&GUID_00000000_0000_0000_c000_000000000046,
           &pUnk);
  else
    v3 = v2(*((_QWORD *)this + 3), (__int64)&GUID_00000000_0000_0000_c000_000000000046, &pUnk);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = CoRegisterClassObject(*(const IID *const *)this, pUnk, 4u, 5u, (LPDWORD)this + 10);
  if ( pUnk )
  {
    Release = pUnk->lpVtbl->Release;
    if ( (char *)Release == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::Release )
      ATL::CComObjectCached<ATL::CComClassFactory>::Release(pUnk);
    else
      ((void (__fastcall *)(LPUNKNOWN))Release)(pUnk);
  }
  return v4;
}
