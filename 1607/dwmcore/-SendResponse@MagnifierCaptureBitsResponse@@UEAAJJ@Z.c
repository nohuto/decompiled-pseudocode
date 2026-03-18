/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180121160
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180121100 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xxq @ 0x1801205A0 (Template_xxq.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10[0] = 17;
  v10[1] = 0;
  v11 = 0LL;
  v12 = 0LL;
  v10[2] = a2;
  if ( a2 >= 0 )
  {
    a3 = *(unsigned int *)(*((_QWORD *)this + 20) + 672LL);
    LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 20) + 672LL);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CConnection ***)this + 6), (const struct MIL_MESSAGE *)v10, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Eu);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LODWORD(v9) = a2;
    Template_xxq(
      v6,
      &EVTDESC_ETWGUID_METABITMAPRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 20) + 336LL),
      *((_QWORD *)this + 21),
      v9);
  }
  return v7;
}
