/*
 * XREFs of ?SetBufferProperty@CPrimitiveMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D6370
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveMarshaler::SetBufferProperty(
        DirectComposition::CPrimitiveMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  __int128 v9; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    if ( a4 && a5 == 16 )
    {
      v9 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) &= ~0x40u;
      *((_OWORD *)this + 5) = v9;
      goto LABEL_18;
    }
    return (unsigned int)-1073741811;
  }
  v7 = a3 - 5;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( !a4 || a5 != 24 )
          goto LABEL_19;
        *((_OWORD *)this + 6) = *(_OWORD *)a4;
        *((_QWORD *)this + 14) = a4[2];
        goto LABEL_8;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *((_OWORD *)this + 4) = *(_OWORD *)a4;
  }
  else
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *((_OWORD *)this + 3) = *(_OWORD *)a4;
  }
LABEL_8:
  *((_DWORD *)this + 4) &= ~0x80u;
LABEL_18:
  *a6 = 1;
LABEL_19:
  Win32FreePool();
  return v6;
}
