/*
 * XREFs of DwmAsyncIconChange @ 0x1C007EDD0
 * Callers:
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmAsyncIconChange(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  _DWORD v10[20]; // [rsp+20h] [rbp-58h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset((char *)v10 + 2, 0, 0x42uLL);
    v10[0] = 4456476;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741832;
    *(_QWORD *)&v10[11] = a2;
    *(_QWORD *)&v10[13] = a3;
    *(_QWORD *)&v10[15] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
