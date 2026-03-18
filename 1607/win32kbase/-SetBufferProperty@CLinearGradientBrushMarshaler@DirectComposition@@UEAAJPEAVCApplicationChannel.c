/*
 * XREFs of ?SetBufferProperty@CLinearGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00EBC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearGradientBrushMarshaler::SetBufferProperty(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // xmm1_8
  __int64 v13; // xmm1_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 6;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 && a4 && a5 == 8 )
        {
          v10 = *a4;
          *((_DWORD *)this + 4) |= 0x100u;
          *((_QWORD *)this + 13) = v10;
LABEL_17:
          *a6 = 1;
          return result;
        }
      }
      else if ( a4 && a5 == 8 )
      {
        v11 = *a4;
        *((_DWORD *)this + 4) |= 0x80u;
        *((_QWORD *)this + 12) = v11;
        goto LABEL_17;
      }
    }
    else if ( a4 && a5 == 24 )
    {
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)a4;
      v12 = a4[2];
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 11) = v12;
      goto LABEL_17;
    }
  }
  else if ( a4 && a5 == 24 )
  {
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a4;
    v13 = a4[2];
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 7) = v13;
    goto LABEL_17;
  }
  return 3221225485LL;
}
