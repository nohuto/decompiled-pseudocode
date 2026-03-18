/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180090A30
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800583CC (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x1800909B0 (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(__int64 a1, int a2, __int64 a3, __int64 a4, int *a5, bool *a6)
{
  unsigned int v6; // esi
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  CDisplay *v12; // rcx
  __int64 v13; // r9
  int HasTripleBufferCriteria; // eax
  int v15; // ecx
  __int16 v17; // [rsp+58h] [rbp+10h]
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v6 = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 12) = 0;
  LOBYTE(v18) = 0;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 888);
  v9 = *(_DWORD *)(a1 + 892);
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 24) = v9;
  if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a4 + 56) = 0;
    if ( (a2 & 0x10000000) != 0 )
    {
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 872);
      v10 = *(_DWORD *)(a1 + 868);
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 868);
      v10 = *(_DWORD *)(a1 + 872);
    }
    *(_DWORD *)(a4 + 4) = v10;
    *(_QWORD *)(a4 + 8) = *(_QWORD *)(a1 + 876);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 884);
  }
  else
  {
    *(_DWORD *)(a4 + 56) = 1;
    *(_DWORD *)a4 = 1;
    *(_DWORD *)(a4 + 4) = 1;
    if ( (a2 & 0x20) != 0 )
    {
      *(_DWORD *)(a4 + 16) = 10;
    }
    else if ( *(_DWORD *)(a1 + 884) == 24 && (a2 & 0xC0) == 0x80 )
    {
      *(_DWORD *)(a4 + 16) = 24;
    }
    else
    {
      *(_DWORD *)(a4 + 16) = 87;
    }
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 12) = 1;
  }
  *(_QWORD *)(a4 + 28) = 1LL;
  if ( (unsigned __int8)CDisplay::IsOffscreenRenderTarget((CDisplay *)a1) || (v11 & 0x4000) != 0 )
    goto LABEL_20;
  if ( (v11 & 0x400) == 0 )
  {
    if ( (v11 & 8) == 0 )
    {
      *(_DWORD *)(v13 + 60) = 0;
      goto LABEL_21;
    }
LABEL_20:
    *(_DWORD *)(v13 + 60) = 1;
LABEL_21:
    *(_DWORD *)(v13 + 40) = 1;
    goto LABEL_11;
  }
  *(_DWORD *)(v13 + 60) = 1;
  HasTripleBufferCriteria = CDisplay::HasTripleBufferCriteria(v12, (bool *)&v18);
  v6 = HasTripleBufferCriteria;
  if ( HasTripleBufferCriteria < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, HasTripleBufferCriteria, 0x294u);
  *(_DWORD *)(a4 + 40) = ((_BYTE)v18 != 0) + 2;
  v11 = v17;
LABEL_11:
  *(_DWORD *)(a4 + 64) = 0;
  *(_DWORD *)(a4 + 36) = 96;
  if ( *(int *)(a1 + 828) >= 40960 || *(_DWORD *)(a1 + 860) == 1297040209 && *(int *)(a1 + 856) >= 1200 )
    *(_DWORD *)(a4 + 36) = 112;
  if ( (v11 & 0x800) != 0 )
  {
    v15 = *(_DWORD *)(a4 + 64);
    if ( (v11 & 0x4000) == 0 )
      v15 = 1;
    *(_DWORD *)(a4 + 64) = v15;
  }
  *a5 = (unsigned __int8)(~(_BYTE)v11 & 4) >> 2;
  *a6 = (v11 & 0x2000) != 0 && (v11 & 0x10) != 0 && *(_BYTE *)(a1 + 900);
  return v6;
}
