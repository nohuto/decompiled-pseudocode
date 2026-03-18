/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01DD37C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C01DD7BC (xxxActivateKeyboardLayout.c)
 * Callees:
 *     <none>
 */

void __fastcall ReorderKeyboardLayouts(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 v2; // r10

  v2 = *((_QWORD *)a1 + 5);
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 && a2 != (struct tagKL *)v2 )
  {
    *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 2) = v2;
    *((_QWORD *)a2 + 3) = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL) = a2;
    *(_QWORD *)(v2 + 24) = a2;
    HMAssignmentLock((char *)a1 + 40, a2);
  }
}
