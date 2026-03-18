/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C01DD7BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0217FF0 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01DD37C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct tagKL *result; // rax
  struct tagWINDOWSTATION *v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v8 = (__int64)result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(v7, result);
    v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v12;
    v12[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v9 = xxxInternalActivateKeyboardLayout(v8, a3, a4);
    ThreadUnlock1(v11, v10);
    return (struct tagKL *)v9;
  }
  return result;
}
