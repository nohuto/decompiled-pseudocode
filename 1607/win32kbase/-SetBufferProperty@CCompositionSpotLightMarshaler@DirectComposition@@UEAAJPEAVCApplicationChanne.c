/*
 * XREFs of ?SetBufferProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00EDAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetBufferProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int128 v10; // xmm0
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 5;
  if ( !v7 )
  {
    if ( a5 == 12 )
    {
      *(_QWORD *)((char *)this + 92) = *(_QWORD *)a4;
      v13 = a4[2];
      *((_DWORD *)this + 4) |= 0x400u;
      *((_DWORD *)this + 25) = v13;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v12 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x1000u;
      *((_OWORD *)this + 7) = v12;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a5 == 12 )
    {
      *((_QWORD *)this + 10) = *(_QWORD *)a4;
      v11 = a4[2];
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_DWORD *)this + 22) = v11;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 3 || a5 != 16 )
    return (unsigned int)-1073741811;
  v10 = *(_OWORD *)a4;
  *((_DWORD *)this + 4) |= 0x8000u;
  *((_OWORD *)this + 8) = v10;
LABEL_13:
  *a6 = 1;
  return v6;
}
