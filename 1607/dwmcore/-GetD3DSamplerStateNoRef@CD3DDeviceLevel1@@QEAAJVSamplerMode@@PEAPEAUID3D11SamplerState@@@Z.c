/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18010F0A8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?CalculateD3DSamplerDesc@@YA?AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z @ 0x1800B7748 (-CalculateD3DSamplerDesc@@YA-AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r11
  int v8; // eax
  int v9; // eax
  __int16 v11; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v12; // [rsp+32h] [rbp-47h]
  int v13[14]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v14[3]; // [rsp+78h] [rbp-1h] BYREF
  int v15; // [rsp+A8h] [rbp+2Fh]

  v4 = 0;
  v5 = a1 + 8LL * (a2[2] + 4 * (a2[1] + 4 * (unsigned int)*a2));
  if ( *(_QWORD *)(v5 + 1632) )
    goto LABEL_17;
  v11 = *(_WORD *)a2;
  v12 = a2[2];
  v6 = CalculateD3DSamplerDesc(v13, (unsigned __int8 *)&v11);
  v14[0] = *(_OWORD *)v6;
  v14[1] = *(_OWORD *)(v6 + 16);
  v14[2] = *(_OWORD *)(v6 + 32);
  v15 = *(_DWORD *)(v6 + 48);
  if ( DWORD1(v14[0]) == 4 || DWORD2(v14[0]) == 4 || (v8 = 37120, HIDWORD(v14[0]) == 4) )
    v8 = 37632;
  if ( *(_DWORD *)(v7 + 676) >= v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(**(_QWORD **)(v7 + 568) + 184LL))(
           *(_QWORD *)(v7 + 568),
           v14,
           v5 + 1632);
    v4 = v9;
    if ( v9 < 0 )
    {
      if ( IsOOM(v9) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF8Bu);
      return v4;
    }
LABEL_17:
    *a3 = *(_QWORD *)(v5 + 1632);
    return v4;
  }
  v4 = -2147024809;
  if ( IsOOM(-2147024809) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF8Fu);
  return v4;
}
