/*
 * XREFs of AllocateHidData @ 0x1C004B99C
 * Callers:
 *     ?PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C004A774 (-PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C004B55C (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D2970 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateHidData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rax

  if ( a5 )
  {
    v8 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v14 )
      v8 = *(_QWORD *)(v14 + 16);
    else
      v8 = *(_QWORD *)(gpqForeground + 56LL);
  }
  v9 = (unsigned int)(a3 + 56);
  if ( (unsigned int)v9 < (unsigned int)a3 )
    return 0LL;
  v10 = a3 + 24;
  if ( (int)a3 + 24 < (unsigned int)a3 )
    return 0LL;
  LOBYTE(a3) = 18;
  v11 = HMAllocObject(v8, 0LL, a3, v9);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 24) = 0LL;
    HMAssignmentLock(v11 + 24, a5);
    *(_DWORD *)(v12 + 36) = v10;
    *(_DWORD *)(v12 + 32) = a2;
    *(_QWORD *)(v12 + 40) = a1;
    *(_QWORD *)(v12 + 48) = a4;
  }
  return v12;
}
