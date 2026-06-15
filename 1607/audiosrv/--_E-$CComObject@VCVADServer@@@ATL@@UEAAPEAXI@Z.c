/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000D230
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000D380 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18000C780 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *a1, __int64 a2, bool a3)
{
  char v3; // di
  std::_Ref_count_base *v5; // rcx

  v3 = a2;
  *(_QWORD *)a1 = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)a1 + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)a1, a2, a3);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v5 = (std::_Ref_count_base *)*((_QWORD *)a1 + 43);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 28) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 27) - 24LL));
  CoTaskMemFree(*((LPVOID *)a1 + 24));
  *((_QWORD *)a1 + 24) = 0LL;
  CoTaskMemFree(*((LPVOID *)a1 + 23));
  *((_QWORD *)a1 + 23) = 0LL;
  CoTaskMemFree(*((LPVOID *)a1 + 22));
  *((_QWORD *)a1 + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 18) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 11) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 10) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 9) - 24LL));
  if ( a1[56] )
  {
    a1[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
  if ( (v3 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
