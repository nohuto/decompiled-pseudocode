/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x18001678C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800164B8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180016630 (-SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
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
  __int64 v10; // r8
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-28h]
  unsigned __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+48h] [rbp-18h]

  v12 = *((_DWORD *)a3 + 4);
  v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 2), (__m128)*((unsigned int *)a3 + 3)).m128_u64[0];
  v17 = v12;
  v5 = CManipulationTransform::SetProperty((__int64)this, 0, 51, (__int64)&v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Du);
  }
  else
  {
    v13 = *((_DWORD *)a3 + 7);
    v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)*((unsigned int *)a3 + 6)).m128_u64[0];
    v17 = v13;
    v7 = CManipulationTransform::SetProperty((__int64)this, 1, 51, (__int64)&v16);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x70u);
    }
    else
    {
      v14 = *((_DWORD *)a3 + 10);
      v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 8), (__m128)*((unsigned int *)a3 + 9)).m128_u64[0];
      v17 = v14;
      v8 = CManipulationTransform::SetProperty((__int64)this, 2, 51, (__int64)&v16);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x73u);
      }
      else
      {
        v15 = *((_DWORD *)a3 + 13);
        v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 11), (__m128)*((unsigned int *)a3 + 12)).m128_u64[0];
        v17 = v15;
        v9 = CManipulationTransform::SetProperty((__int64)this, 3, 51, (__int64)&v16);
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x76u);
        }
        else
        {
          if ( *((_BYTE *)this + 224) )
            CManipulationTransform::CalculateMatrix(this, (CManipulationTransform *)((char *)this + 160), v10);
          return 0;
        }
      }
    }
  }
  return v6;
}
