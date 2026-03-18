/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D88FC
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01D79B8 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     InternalMapVirtualKeyEx @ 0x1C00D715C (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GetCurrentKbdTables @ 0x1C01D9CA0 (GetCurrentKbdTables.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  __int64 CurrentKbdTables; // rax
  unsigned int v3; // r8d
  __int16 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+32h] [rbp-2Eh]
  __int64 v6; // [rsp+3Ah] [rbp-26h]
  __int64 v7; // [rsp+42h] [rbp-1Eh]
  int v8; // [rsp+4Ah] [rbp-16h]
  __int16 v9; // [rsp+4Eh] [rbp-12h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v4 = 0;
  v5 = (unsigned __int16)a1 | 0x4000u;
  if ( a2 )
    LOWORD(v5) = a1 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v4) = InternalMapVirtualKeyEx(v3, 0, CurrentKbdTables);
  xxxProcessKeyEvent((struct tagKE *)&v4, 0LL, 1u, 0, 0LL);
}
