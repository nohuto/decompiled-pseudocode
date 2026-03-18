/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@AEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18000B1CC
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18000AAFC (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(__int64 a1, const struct D2DMatrix *a2)
{
  unsigned int v2; // edi
  const struct CBaseMatrix *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[4]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( !a2 || (unsigned int)D2DMatrixIsIdentity(a2) )
  {
    *(_OWORD *)(a1 + 524) = IdentityMatrix;
    *(_OWORD *)(a1 + 540) = xmmword_18019E9C0;
    *(_OWORD *)(a1 + 556) = xmmword_18019E9D0;
    *(_OWORD *)(a1 + 572) = xmmword_18019E9E0;
    *(_OWORD *)(a1 + 588) = IdentityMatrix;
    *(_OWORD *)(a1 + 604) = xmmword_18019E9C0;
    *(_OWORD *)(a1 + 620) = xmmword_18019E9D0;
    v8 = xmmword_18019E9E0;
    *(_BYTE *)(a1 + 520) = 0;
  }
  else
  {
    if ( !CBaseMatrix::Invert((CBaseMatrix *)v10, v5) )
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x9Bu);
      return v2;
    }
    *(_OWORD *)(a1 + 524) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 540) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 556) = *((_OWORD *)a2 + 2);
    v6 = *((_OWORD *)a2 + 3);
    *(_BYTE *)(a1 + 520) = 1;
    *(_OWORD *)(a1 + 588) = v10[0];
    v7 = v10[2];
    *(_OWORD *)(a1 + 572) = v6;
    *(_OWORD *)(a1 + 604) = v10[1];
    v8 = v10[3];
    *(_OWORD *)(a1 + 620) = v7;
  }
  *(_OWORD *)(a1 + 636) = v8;
  return v2;
}
