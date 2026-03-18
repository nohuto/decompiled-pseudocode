/*
 * XREFs of DwmAsyncRegisterSharedVirtualDesktopVisual @ 0x1C025C7E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncRegisterSharedVirtualDesktopVisual(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  _DWORD v10[20]; // [rsp+20h] [rbp-58h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset((char *)v10 + 2, 0, 0x42uLL);
    v10[0] = 4456476;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741905;
    *(_QWORD *)&v10[11] = a2;
    *(_QWORD *)&v10[13] = a3;
    *(_QWORD *)&v10[15] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
