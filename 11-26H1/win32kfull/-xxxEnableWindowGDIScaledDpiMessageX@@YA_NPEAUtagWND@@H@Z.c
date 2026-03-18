/*
 * XREFs of ?xxxEnableWindowGDIScaledDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1402E1460
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1402B1A50 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall xxxEnableWindowGDIScaledDpiMessageX(struct tagWND *a1, int a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax

  v4 = 0;
  if ( PtiCurrent((__int64)a1)
    && *((_QWORD *)PtiCurrent(v5) + 61)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v6) + 61) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v4 = 1;
    v7 = *((_DWORD *)a1 + 95);
    v8 = v7 | 0x100000;
    v9 = v7 & 0xFFEFFFFF;
    if ( !a2 )
      v8 = v9;
    *((_DWORD *)a1 + 95) = v8;
  }
  return v4;
}
