/*
 * XREFs of ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140013370
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400134A0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140013830 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::AtlComModuleRegisterClassObjects(IUnknown *a1)
{
  __int64 *v1; // rdi
  HRESULT v2; // esi
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, LPUNKNOWN *); // rsi
  int v6; // eax
  ULONG (__stdcall *Release)(IUnknown *); // rbp
  LPUNKNOWN pUnk; // [rsp+60h] [rbp+8h] BYREF

  pUnk = a1;
  v1 = (__int64 *)qword_140055C70;
  v2 = 1;
  v3 = qword_140055C78;
  if ( qword_140055C70 >= (unsigned __int64)qword_140055C78 )
    return 1LL;
  do
  {
    if ( v2 < 0 )
      break;
    v4 = *v1;
    if ( *v1 )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD, GUID *, LPUNKNOWN *))(v4 + 16);
      pUnk = 0LL;
      if ( v5 )
      {
        if ( (char *)v5 == (char *)ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance )
          v6 = ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
                 *(_QWORD *)(v4 + 24),
                 &GUID_00000000_0000_0000_c000_000000000046,
                 &pUnk);
        else
          v6 = v5(*(_QWORD *)(v4 + 24), &GUID_00000000_0000_0000_c000_000000000046, &pUnk);
        v2 = v6;
        if ( v6 >= 0 )
          v2 = CoRegisterClassObject(*(const IID *const *)v4, pUnk, 4u, 5u, (LPDWORD)(v4 + 40));
        if ( pUnk )
        {
          Release = pUnk->lpVtbl->Release;
          if ( (char *)Release == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::Release )
            ATL::CComObjectCached<ATL::CComClassFactory>::Release(pUnk);
          else
            ((void (__fastcall *)(LPUNKNOWN))Release)(pUnk);
        }
        v3 = qword_140055C78;
      }
      else
      {
        v2 = 0;
      }
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return (unsigned int)v2;
}
