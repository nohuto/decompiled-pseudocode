/*
 * XREFs of ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002C030
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180002AF0 (AUDIOSERVER_rundown.c)
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 *     AudioServerDisconnect @ 0x18002CD60 (AudioServerDisconnect.c)
 * Callees:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002C0E0 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComObject<CVADServer>::Release(volatile signed __int32 *lpMem)
{
  unsigned __int32 v2; // ebp
  __int64 (__fastcall *v3)(LPVOID); // rbx

  v2 = _InterlockedDecrement(lpMem + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( lpMem )
    {
      v3 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 168LL);
      if ( v3 == ATL::CComObject<CVADServer>::`vector deleting destructor' )
        ATL::CComObject<CVADServer>::`vector deleting destructor'((LPVOID)lpMem);
      else
        ((void (__fastcall *)(volatile signed __int32 *, __int64))v3)(lpMem, 1LL);
    }
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
