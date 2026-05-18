/*
 * XREFs of sub_180002C4C @ 0x180002C4C
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180002CD0 (DwmpCreateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool sub_180002C4C()
{
  char v0; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  if ( GetModuleHandleA("wininit.exe") )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"OneCoreNoBootDWM",
      0x20000010u,
      0LL,
      &pvData,
      &pcbData);
    return pvData != 0;
  }
  return v0;
}
