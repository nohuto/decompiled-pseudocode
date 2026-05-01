/*
 * XREFs of InitDPI @ 0x18002D8B8
 * Callers:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180027124 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

int InitDPI()
{
  HDC ProcAddress; // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC v3; // rbx

  ProcAddress = (HDC)qword_18004C300;
  v1 = 1;
  if ( qword_18004C300 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (HDC)GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_18004C300 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (HDC)qword_18004C300;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ((__int64 (*)(void))ProcAddress)();
    v1 = (int)ProcAddress;
  }
  if ( dword_18004C308 == -1 || dword_18004CBDC != v1 )
  {
    dword_18004CBDC = v1;
    ProcAddress = GetDC(0LL);
    v3 = ProcAddress;
    if ( ProcAddress )
    {
      dword_18004C308 = GetDeviceCaps(ProcAddress, 88);
      GetDeviceCaps(v3, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v3);
    }
    else
    {
      dword_18004C308 = 96;
    }
  }
  return (int)ProcAddress;
}
