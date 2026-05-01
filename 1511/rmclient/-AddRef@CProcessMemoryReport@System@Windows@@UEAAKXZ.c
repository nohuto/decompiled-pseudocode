/*
 * XREFs of ?AddRef@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x1800030D0
 * Callers:
 *     ?QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002F30 (-QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800098D0 (-AddRef@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x1800098E0 (-AddRef@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIProcessMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000BBA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIProcessMemoryReport@System@Window_ea_18000BBA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::AddRef(Windows::System::CProcessMemoryReport *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
