/*
 * XREFs of DwmAsyncCreateDCompositionHwndTarget @ 0x1C000AD10
 * Callers:
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C000AC30 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateDCompositionHwndTarget(PVOID Object, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[64]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v10[2], 0, 0x3EuLL);
    *(_DWORD *)v10 = 4194328;
    *(_WORD *)&v10[4] = 0x8000;
    *(_DWORD *)&v10[40] = 1073741892;
    *(_QWORD *)&v10[44] = a2;
    *(_DWORD *)&v10[52] = a3;
    *(_QWORD *)&v10[56] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
