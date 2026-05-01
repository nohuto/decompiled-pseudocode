/*
 * XREFs of ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x1800036B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x180002EF0 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetProcessMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IProcessMemoryReport **a2)
{
  int v3; // eax
  int v4; // ebx
  void *v5; // rsi
  signed int v7; // eax
  void *v8; // [rsp+30h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-90h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v11[8]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+A0h] [rbp-28h] BYREF

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
    v5 = v8;
    v4 = v7;
    if ( v7 > 0 )
      v4 = (unsigned __int16)v7 | 0x80070000;
  }
  else
  {
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
           &v8,
           &v12,
           v11);
    if ( v4 < 0 )
    {
      v5 = v8;
    }
    else
    {
      v5 = 0LL;
      *a2 = (struct Windows::System::IProcessMemoryReport *)v8;
    }
  }
  if ( v5 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
