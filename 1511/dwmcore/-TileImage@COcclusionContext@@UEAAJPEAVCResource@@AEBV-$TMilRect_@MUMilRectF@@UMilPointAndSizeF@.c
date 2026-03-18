/*
 * XREFs of ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::TileImage(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 56LL) )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(a1 + 504);
    v4 = *(unsigned int *)(a1 + 752);
    *((_QWORD *)&v10 + 1) = a2 - 16;
    LOBYTE(v11) = 1;
    v5 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v5 <= *(_DWORD *)(a1 + 748) )
    {
      v8 = 5 * v4;
      v9 = *(_QWORD *)(a1 + 728);
      *(_OWORD *)(v9 + 8 * v8) = v10;
      *(_OWORD *)(v9 + 8 * v8 + 16) = v11;
      *(_QWORD *)(v9 + 8 * v8 + 32) = v12;
      *(_DWORD *)(a1 + 752) = v5;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 728, 40LL, 1LL, &v10);
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
  }
  return 0LL;
}
