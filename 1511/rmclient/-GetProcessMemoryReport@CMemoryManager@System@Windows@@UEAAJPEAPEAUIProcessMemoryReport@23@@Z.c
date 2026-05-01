/*
 * XREFs of ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x180001BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180001364 (-InternalRelease@-$ComPtr@UIModernResourceManagerProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x1800031A8 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetProcessMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IProcessMemoryReport **a2)
{
  int v3; // eax
  signed int v4; // ebx
  struct Windows::System::IProcessMemoryReport *v5; // rcx
  signed int v7; // eax
  void *v8; // [rsp+30h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-90h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-88h] BYREF

  v8 = 0LL;
  v3 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessVmCounters,
         ProcessInformation,
         0x70u,
         &ReturnLength);
  if ( v3 < 0 )
  {
    v7 = RtlNtStatusToDosError(v3);
    v4 = v7;
    if ( v7 > 0 )
      v4 = (unsigned __int16)v7 | 0x80070000;
  }
  else
  {
    Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)&v8);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(&v8);
    if ( v4 >= 0 )
    {
      v5 = (struct Windows::System::IProcessMemoryReport *)v8;
      v8 = 0LL;
      *a2 = v5;
    }
  }
  Microsoft::WRL::ComPtr<IModernResourceManagerProxy>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
