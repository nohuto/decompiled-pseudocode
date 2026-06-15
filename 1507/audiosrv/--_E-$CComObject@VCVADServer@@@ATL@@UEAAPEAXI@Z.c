/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000AE40
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000AD80 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000CB5C (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *lpMem, char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)lpMem = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)lpMem + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)lpMem);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 248));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 30) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 29) - 24LL));
  CoTaskMemFree(*((LPVOID *)lpMem + 26));
  *((_QWORD *)lpMem + 26) = 0LL;
  CoTaskMemFree(*((LPVOID *)lpMem + 25));
  *((_QWORD *)lpMem + 25) = 0LL;
  CoTaskMemFree(*((LPVOID *)lpMem + 23));
  *((_QWORD *)lpMem + 23) = 0LL;
  CoTaskMemFree(*((LPVOID *)lpMem + 22));
  *((_QWORD *)lpMem + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 18) - 24LL));
  CAppAudioSessionId::~CAppAudioSessionId((CAppAudioSessionId *)(lpMem + 80));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)lpMem + 9) - 24LL));
  if ( lpMem[56] )
  {
    lpMem[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 16));
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
