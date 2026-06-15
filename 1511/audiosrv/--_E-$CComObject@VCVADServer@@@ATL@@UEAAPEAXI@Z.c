/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002C0E0
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002C030 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *lpMem, __int64 a2, _BOOL8 a3)
{
  char v3; // bp
  HANDLE ProcessHeap; // rax

  v3 = a2;
  *(_QWORD *)lpMem = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)lpMem + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)lpMem, a2, a3);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 232));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 28) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 27) - 24LL));
  CoTaskMemFree(*((LPVOID *)lpMem + 24));
  *((_QWORD *)lpMem + 24) = 0LL;
  CoTaskMemFree(*((LPVOID *)lpMem + 23));
  *((_QWORD *)lpMem + 23) = 0LL;
  CoTaskMemFree(*((LPVOID *)lpMem + 22));
  *((_QWORD *)lpMem + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 18) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 11) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 10) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 9) - 24LL));
  if ( lpMem[56] )
  {
    lpMem[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 16));
  }
  if ( (v3 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
