/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x1800FA1D0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1801186D0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateD3DSamplerDesc@@YA?AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z @ 0x1800B3F44 (-CalculateD3DSamplerDesc@@YA-AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int16 v11; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int8 v12; // [rsp+32h] [rbp-57h]
  int v13[14]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v14[3]; // [rsp+78h] [rbp-11h] BYREF
  int v15; // [rsp+A8h] [rbp+1Fh]

  v4 = 0;
  v6 = a1 + 8LL * (a2[2] + 4 * (a2[1] + 4 * (unsigned int)*a2));
  if ( *(_QWORD *)(v6 + 1360) )
    goto LABEL_11;
  v11 = *(_WORD *)a2;
  v12 = a2[2];
  v7 = CalculateD3DSamplerDesc(v13, (unsigned __int8 *)&v11);
  v14[0] = *(_OWORD *)v7;
  v14[1] = *(_OWORD *)(v7 + 16);
  v14[2] = *(_OWORD *)(v7 + 32);
  v15 = *(_DWORD *)(v7 + 48);
  if ( DWORD1(v14[0]) == 4 || DWORD2(v14[0]) == 4 || (v8 = 37120, HIDWORD(v14[0]) == 4) )
    v8 = 37632;
  if ( *(_DWORD *)(a1 + 612) < v8 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF7Au);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(**(_QWORD **)(a1 + 552) + 184LL))(
         *(_QWORD *)(a1 + 552),
         v14,
         v6 + 1360);
  v4 = v9;
  if ( v9 >= 0 )
LABEL_11:
    *a3 = *(_QWORD *)(v6 + 1360);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF76u);
  return v4;
}
