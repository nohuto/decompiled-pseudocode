/*
 * XREFs of ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18000AD80
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180005290 (AUDIOSERVER_rundown.c)
 *     AudioServerDisconnect @ 0x180009790 (AudioServerDisconnect.c)
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 * Callees:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000AE40 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CVADServer>::Release(char *lpMem, volatile int *a2)
{
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(LPVOID); // rbx

  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(lpMem + 8), a2);
  if ( !v3 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( lpMem )
    {
      v4 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 136LL);
      if ( v4 == ATL::CComObject<CVADServer>::`vector deleting destructor' )
        ATL::CComObject<CVADServer>::`vector deleting destructor'(lpMem);
      else
        ((void (__fastcall *)(char *, __int64))v4)(lpMem, 1LL);
    }
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v3;
}
