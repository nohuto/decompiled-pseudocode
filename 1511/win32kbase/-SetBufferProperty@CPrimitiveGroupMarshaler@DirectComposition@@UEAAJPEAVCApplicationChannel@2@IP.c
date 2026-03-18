/*
 * XREFs of ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0018AA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetBufferProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // r8d

  v6 = 0;
  *a6 = 0;
  v9 = a3 - 5;
  if ( v9 )
  {
    if ( v9 == 1 && Size == 16 )
    {
      *(_OWORD *)((char *)this + 172) = *a4;
      Win32FreePool(a4);
      *((_DWORD *)this + 4) |= 0x200u;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size - 1 > 0x3F || (Size & 0xF) != 0 )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 42) = Size >> 4;
  memmove((char *)this + 104, a4, Size);
  Win32FreePool(a4);
LABEL_5:
  *a6 = 1;
  return v6;
}
