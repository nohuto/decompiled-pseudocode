/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C00D0990
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  unsigned __int64 v4; // rax

  v3 = MEMORY[0xFFFFF78000000004];
  v4 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 620) = 1;
  *(_DWORD *)(a1 + 632) = (v4 >> 24) + 250;
  *(_QWORD *)(a1 + 624) = a3;
  LOBYTE(v3) = 3;
  return WPP_RECORDER_SF_dd(
           WPP_GLOBAL_Control->DeviceExtension,
           v3,
           5,
           10,
           (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
           *(_DWORD *)(a1 + 624),
           *(_DWORD *)(a1 + 628));
}
