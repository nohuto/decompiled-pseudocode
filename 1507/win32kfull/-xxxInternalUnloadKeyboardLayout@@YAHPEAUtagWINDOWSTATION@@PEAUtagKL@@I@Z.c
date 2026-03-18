/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C013B2F0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221700 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagKL **a1, struct tagKL *a2, signed int a3)
{
  struct tagKL *v6; // rdx
  char *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v12;
  ++*((_DWORD *)a2 + 2);
  v12[1] = a2;
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *(struct tagKL **)(gptiCurrent + 400LL) == a2 )
  {
    v9 = HKLtoPKL(gptiCurrent, 1LL);
    if ( v9 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
      v13[1] = v9;
      *(_QWORD *)(gptiCurrent + 376LL) = v13;
      ++*(_DWORD *)(v9 + 8);
      xxxInternalActivateKeyboardLayout(v9, a3, 0LL);
      ThreadUnlock1(v11, v10);
    }
  }
  v7 = (char *)(a1 + 5);
  if ( a1[5] == a2 )
  {
    v6 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v6 )
      HMAssignmentLock(v7, v6);
  }
  ThreadUnlock1(v7, v6);
  xxxWindowEvent(0x80000000, 0LL, 0, 0, 0);
  if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
  {
    xxxCallHook(8, 0, 0LL, 0xAu);
    gLCIDSentToShell = 0LL;
  }
  return 1LL;
}
