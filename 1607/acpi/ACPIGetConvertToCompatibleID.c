/*
 * XREFs of ACPIGetConvertToCompatibleID @ 0x1C0023648
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00034A0 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00236A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIWideStringToAnsiHelper @ 0x1C0023A9C (ACPIWideStringToAnsiHelper.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleID(int a1, int a2, int a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  unsigned int v7; // r11d
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToCompatibleIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)v9);
  if ( v6 >= 0 )
  {
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
