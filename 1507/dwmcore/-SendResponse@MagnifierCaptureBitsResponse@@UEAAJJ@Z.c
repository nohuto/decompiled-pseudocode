/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1800F0E30
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1800F0DD0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     Template_xxq @ 0x1800F0158 (Template_xxq.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2)
{
  _DWORD *v4; // rdi
  int v5; // ebp
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v14; // [rsp+20h] [rbp-38h]
  _DWORD v15[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-1Ch]
  __int64 v17; // [rsp+44h] [rbp-14h]

  v15[0] = 17;
  v15[1] = 0;
  v16 = 0LL;
  v17 = 0LL;
  v15[2] = a2;
  if ( a2 >= 0 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 25);
    if ( v4 )
    {
      v5 = 160;
      memset_0(*((void **)this + 25), 0, 0xA0uLL);
      v6 = 0LL;
      v7 = *(_DWORD *)(*((_QWORD *)this + 20) + 352LL);
      *v4 = v7;
      v4[1] = *(_DWORD *)(*((_QWORD *)this + 20) + 356LL);
      v4[2] = *((_DWORD *)this + 46);
      v4[3] = *((_DWORD *)this + 47);
      if ( v7 )
      {
        do
        {
          v8 = 3 * v6;
          v6 = (unsigned int)(v6 + 1);
          v4[2 * v8 + 4] = v5;
          *(_QWORD *)&v4[2 * v8 + 6] = 0x100000001LL;
          *(_QWORD *)&v4[2 * v8 + 8] = 1LL;
          v5 += *((_DWORD *)this + 37) * *((_DWORD *)this + 47);
        }
        while ( (unsigned int)v6 < *v4 );
      }
      v17 = *((_QWORD *)this + 25);
      HIDWORD(v16) = *((_DWORD *)this + 52);
      v9 = *((_QWORD *)this + 20);
    }
    else
    {
      v9 = *((_QWORD *)this + 20);
    }
    LODWORD(v16) = *(_DWORD *)(v9 + 624);
  }
  v10 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 6), (const struct MIL_MESSAGE *)v15);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE2u);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LODWORD(v14) = a2;
    Template_xxq(
      v11,
      &EVTDESC_ETWGUID_METABITMAPRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 20) + 288LL),
      *((_QWORD *)this + 22),
      v14);
  }
  return v12;
}
