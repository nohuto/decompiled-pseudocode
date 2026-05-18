/*
 * XREFs of sub_1800022FC @ 0x1800022FC
 * Callers:
 *     sub_1800026B4 @ 0x1800026B4 (sub_1800026B4.c)
 * Callees:
 *     <none>
 */

bool sub_1800022FC()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  v1 = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"DisableSessionTermination",
    0x20000010u,
    0LL,
    &v1,
    &v2);
  return v1 == 1;
}
