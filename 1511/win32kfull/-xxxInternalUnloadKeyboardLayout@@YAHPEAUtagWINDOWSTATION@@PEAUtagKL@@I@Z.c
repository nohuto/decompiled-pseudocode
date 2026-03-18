/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0099BB8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0097694 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221720 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0098598 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
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
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  ++*((_DWORD *)a2 + 2);
  v12[1] = a2;
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(gspklGlobalActive);
  HMMarkObjectDestroy(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *(struct tagKL **)(gptiCurrent + 392LL) == a2 )
  {
    v9 = HKLtoPKL(gptiCurrent, 1LL);
    if ( v9 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      v13[1] = v9;
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
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
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
  {
    xxxCallHook(8u, 0LL, 0LL, 0xAu);
    gLCIDSentToShell = 0LL;
  }
  return 1LL;
}
