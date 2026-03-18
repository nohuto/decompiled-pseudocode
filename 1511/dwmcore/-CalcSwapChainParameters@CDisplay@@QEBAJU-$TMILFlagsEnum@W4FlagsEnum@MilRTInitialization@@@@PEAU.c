/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x1800705AC
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180070458 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x18007052C (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        bool *a7)
{
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v11; // eax
  int v12; // eax
  __int16 v13; // dx
  CDisplay *v14; // rcx
  int HasTripleBufferCriteria; // eax
  int v16; // ecx
  int v18; // ecx
  __int64 v19; // rax
  __int16 v20; // [rsp+58h] [rbp+10h]
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v20 = a2;
  v7 = a5;
  v8 = 0;
  LOBYTE(v21) = 0;
  *(_DWORD *)(a5 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 20) = *((_DWORD *)this + 71);
  v11 = *((_DWORD *)this + 72);
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 24) = v11;
  if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(v7 + 56) = 0;
    if ( (a2 & 0x4000) != 0 )
    {
      *(_DWORD *)v7 = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
      v12 = *((_DWORD *)this + 29) - *((_DWORD *)this + 27);
    }
    else
    {
      *(_DWORD *)v7 = *((_DWORD *)this + 66);
      v12 = *((_DWORD *)this + 67);
    }
    *(_DWORD *)(v7 + 4) = v12;
    if ( (a2 & 0x10000000) != 0 )
    {
      v18 = *(_DWORD *)v7;
      *(_DWORD *)v7 = *(_DWORD *)(v7 + 4);
      *(_DWORD *)(v7 + 4) = v18;
    }
    *(_QWORD *)(v7 + 8) = *((_QWORD *)this + 34);
    *(_DWORD *)(v7 + 16) = *((_DWORD *)this + 70);
  }
  else
  {
    *(_DWORD *)(v7 + 56) = 1;
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 4) = 1;
    if ( (a2 & 0x20) != 0 )
    {
      *(_DWORD *)(v7 + 16) = 10;
    }
    else if ( *((_DWORD *)this + 70) == 24 && (a2 & 0xC0) == 0x80 )
    {
      *(_DWORD *)(v7 + 16) = 24;
    }
    else
    {
      *(_DWORD *)(v7 + 16) = 87;
    }
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 12) = 1;
  }
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 28) = 1;
  if ( (unsigned __int8)CDisplay::IsOffscreenRenderTarget(this) || (v13 & 0x4000) != 0 )
    goto LABEL_22;
  if ( (v13 & 0x400) == 0 )
  {
    if ( (v13 & 8) == 0 )
    {
      *(_DWORD *)(v7 + 60) = 0;
      goto LABEL_23;
    }
LABEL_22:
    *(_DWORD *)(v7 + 60) = 1;
LABEL_23:
    *(_DWORD *)(v7 + 40) = 1;
    goto LABEL_13;
  }
  *(_DWORD *)(v7 + 60) = 1;
  HasTripleBufferCriteria = CDisplay::HasTripleBufferCriteria(v14, (bool *)&v21);
  v8 = HasTripleBufferCriteria;
  if ( HasTripleBufferCriteria < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, HasTripleBufferCriteria, 0x228u);
  *(_DWORD *)(v7 + 40) = ((_BYTE)v21 != 0) + 2;
  v13 = v20;
LABEL_13:
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 36) = 96;
  if ( *(int *)(a4 + 612) >= 40960
    || (v19 = *(_QWORD *)(a4 + 576), *(_DWORD *)(v19 + 296) == 1297040209) && *(int *)(v19 + 344) >= 1200 )
  {
    *(_DWORD *)(v7 + 36) = 112;
  }
  if ( (v13 & 0x800) != 0 )
  {
    v16 = *(_DWORD *)(v7 + 64);
    if ( (v13 & 0x4000) == 0 )
      v16 = 1;
    *(_DWORD *)(v7 + 64) = v16;
  }
  *a6 = (unsigned __int8)(~(_BYTE)v13 & 4) >> 2;
  *a7 = (v13 & 0x2000) != 0 && (v13 & 0x10) != 0 && *((_BYTE *)this + 296);
  return v8;
}
