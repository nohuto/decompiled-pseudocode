/*
 * XREFs of DwmAsyncChildClipRgnChange @ 0x1C0061B9C
 * Callers:
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     OffsetChildren @ 0x1C010F838 (OffsetChildren.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncChildClipRgnChange(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD v6[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x32uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741847;
    *(_QWORD *)&v6[11] = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
