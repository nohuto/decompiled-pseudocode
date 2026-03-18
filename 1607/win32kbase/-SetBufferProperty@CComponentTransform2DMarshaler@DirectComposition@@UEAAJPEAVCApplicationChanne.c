/*
 * XREFs of ?SetBufferProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00EE3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1006 && a5 == 24 )
  {
    v7 = *(_QWORD *)((char *)this + 76) - *a4;
    if ( !v7 )
    {
      v7 = *(_QWORD *)((char *)this + 84) - a4[1];
      if ( !v7 )
        v7 = *(_QWORD *)((char *)this + 92) - a4[2];
    }
    if ( v7 )
    {
      *(_OWORD *)((char *)this + 76) = *(_OWORD *)a4;
      *(_QWORD *)((char *)this + 92) = a4[2];
    }
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  else
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v8 = a3 - 1000;
    if ( !v8 )
    {
      *((_DWORD *)this + 10) = *(_DWORD *)a4;
      *((_DWORD *)this + 11) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x40u;
      return v6;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      *((_DWORD *)this + 12) = *(_DWORD *)a4;
      *((_DWORD *)this + 13) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x20u;
      return v6;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *((_DWORD *)this + 14) = *(_DWORD *)a4;
      *((_DWORD *)this + 15) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x80u;
      return v6;
    }
    if ( v10 != 3 )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 17) = *(_DWORD *)a4;
    *((_DWORD *)this + 18) = *((_DWORD *)a4 + 1);
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  return v6;
}
