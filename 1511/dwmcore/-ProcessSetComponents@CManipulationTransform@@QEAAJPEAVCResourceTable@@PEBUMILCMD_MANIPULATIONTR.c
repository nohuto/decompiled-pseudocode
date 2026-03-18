/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180067ED0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800680F8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180068290 (-SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+38h] [rbp-28h]
  unsigned __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]

  v11 = *((_DWORD *)a3 + 4);
  v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 2), (__m128)*((unsigned int *)a3 + 3)).m128_u64[0];
  v16 = v11;
  v5 = CManipulationTransform::SetProperty(this, 0LL, 52LL, &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Eu);
  }
  else
  {
    v12 = *((_DWORD *)a3 + 7);
    v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)*((unsigned int *)a3 + 6)).m128_u64[0];
    v16 = v12;
    v7 = CManipulationTransform::SetProperty(this, 1LL, 52LL, &v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x71u);
    }
    else
    {
      v13 = *((_DWORD *)a3 + 10);
      v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 8), (__m128)*((unsigned int *)a3 + 9)).m128_u64[0];
      v16 = v13;
      v8 = CManipulationTransform::SetProperty(this, 2LL, 52LL, &v15);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x74u);
      }
      else
      {
        v14 = *((_DWORD *)a3 + 13);
        v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 11), (__m128)*((unsigned int *)a3 + 12)).m128_u64[0];
        v16 = v14;
        v9 = CManipulationTransform::SetProperty(this, 3LL, 52LL, &v15);
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x77u);
        }
        else
        {
          if ( *((_BYTE *)this + 232) )
            CManipulationTransform::CalculateMatrix(this, (CManipulationTransform *)((char *)this + 168));
          return 0;
        }
      }
    }
  }
  return v6;
}
