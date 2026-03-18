/*
 * XREFs of DwmAsyncMagnSetWindowSlicer @ 0x1C025F648
 * Callers:
 *     MagSlicerControl @ 0x1C01FE734 (MagSlicerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSlicer(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // xmm1_8
  _DWORD v11[24]; // [rsp+20h] [rbp-98h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset((char *)v11 + 2, 0, 0x52uLL);
    v9 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v11[15] = *(_OWORD *)a4;
    v11[0] = 5505068;
    LOWORD(v11[1]) = 0x8000;
    v11[10] = 1073741928;
    *(_QWORD *)&v11[11] = a2;
    *(_QWORD *)&v11[13] = a3;
    *(_QWORD *)&v11[19] = v9;
    EtwUpdateEvent(a2);
    v8 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v8;
}
