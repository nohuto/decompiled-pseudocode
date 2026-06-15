/*
 * XREFs of ??$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@Z @ 0x1800A708C
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A7CF0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022BB0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180043A28 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008ECDC (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     _lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator() @ 0x1800A7780 (_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_--operator().c)
 *     ?GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A85E8 (-GetComputedDefaultFormat@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>(
        struct IMMDevice **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6)
{
  struct tWAVEFORMATEX *v8; // rbx
  int v9; // r14d
  void *v10; // rdi
  int ComputedDefaultFormat; // eax
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r13d
  int *v17; // rax
  DWORD *v18; // rcx
  DWORD v19; // r8d
  int *v20; // r12
  int v21; // eax
  int v22; // ecx
  int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+2Ch] [rbp-DCh]
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  int *v27; // [rsp+38h] [rbp-D0h]
  int v28; // [rsp+40h] [rbp-C8h]
  DWORD v29; // [rsp+44h] [rbp-C4h]
  struct tWAVEFORMATEX *v30; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h]
  void *v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h]
  struct tWAVEFORMATEX v35; // [rsp+80h] [rbp-88h] BYREF
  __int16 v36; // [rsp+92h] [rbp-76h]
  int v37; // [rsp+94h] [rbp-74h]
  GUID v38; // [rsp+98h] [rbp-70h]
  _DWORD v39[14]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v40[2]; // [rsp+E0h] [rbp-28h] BYREF
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  _DWORD v43[2]; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int128 v45; // [rsp+118h] [rbp+10h]
  __int128 v46; // [rsp+128h] [rbp+20h]
  int v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int128 v49; // [rsp+148h] [rbp+40h]
  int v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int128 v52; // [rsp+168h] [rbp+60h]
  int v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int128 v55; // [rsp+188h] [rbp+80h]

  v34 = -2LL;
  v32 = a6;
  pv = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v9 = 0;
  v39[0] = 8000;
  v39[1] = 11025;
  v39[2] = 16000;
  v39[3] = 22050;
  v39[4] = 24000;
  v39[5] = 32000;
  v39[6] = 44100;
  v39[7] = 48000;
  v39[8] = 88200;
  v39[9] = 96000;
  v39[10] = 176400;
  v39[11] = 192000;
  v39[12] = 384000;
  v40[0] = _mm_load_si128((const __m128i *)&_xmm);
  v40[1] = _mm_load_si128((const __m128i *)&_xmm);
  v41 = 32;
  v42 = 32;
  v43[0] = 0;
  v44 = 0LL;
  v45 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>'::`2'::s_ChannelMaskEntry_1;
  v46 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>'::`2'::s_ChannelMaskEntry_2;
  v47 = 0;
  v48 = 0LL;
  v49 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>'::`2'::s_ChannelMaskEntry_4;
  v50 = 0;
  v51 = 0LL;
  v52 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>'::`2'::s_ChannelMaskEntry_6;
  v53 = 0;
  v54 = 0LL;
  v55 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v33 = 0LL;
  *(_OWORD *)&v31[1] = *a5;
  if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
              (CEndpointCharacteristics *)this,
              a2,
              (struct _GUID *)&v31[1],
              (struct tWAVEFORMATEX **)&pv) < 0
    || (v9 = lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator()(a6, pv), v9 >= 0) )
  {
    ComputedDefaultFormat = GetComputedDefaultFormat(this[2], a2, &v30);
    v8 = v30;
    if ( ComputedDefaultFormat < 0 || (v9 = lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator()(a6, v30), v9 >= 0) )
    {
      v10 = operator new[](0LL, (const struct std::nothrow_t *)&std::nothrow);
      v33 = v10;
      if ( v10 )
      {
        v12 = 0;
        v13 = 0LL;
        while ( 1 )
        {
          v14 = 2 * v13;
          v15 = v43[2 * v14];
          v28 = v15;
          if ( v15 )
          {
            v16 = 0;
            if ( v15 > 0 )
              break;
          }
LABEL_24:
          v13 = ++v12;
          if ( (unsigned __int64)v12 >= 9 )
            goto LABEL_25;
        }
        v17 = (int *)*(&v44 + v14);
        v27 = v17;
LABEL_11:
        v24 = 0;
        v18 = v39;
        v31[1] = v39;
LABEL_12:
        v25 = 0;
        v19 = *v18;
        v29 = *v18;
        v20 = (int *)v40 + 1;
        while ( 1 )
        {
          v21 = *v17;
          v22 = *v20;
          if ( !v21 && v12 <= 2 )
            v21 = 4 - (v12 != 1);
          v36 = *(v20 - 1);
          v37 = v21;
          v38 = GUID_00000001_0000_0010_8000_00aa00389b71;
          v35.wFormatTag = -2;
          v35.wBitsPerSample = v22;
          v35.cbSize = 22;
          v35.nChannels = v12;
          v35.nSamplesPerSec = v19;
          v35.nBlockAlign = v12 * ((unsigned __int16)v22 >> 3);
          v35.nAvgBytesPerSec = v19 * v35.nBlockAlign;
          if ( (!pv || !(unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)pv, &v35))
            && (!v8 || !(unsigned int)CompareWaveFormat(v8, &v35)) )
          {
            v9 = lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator()(v32, &v35);
            if ( v9 < 0 )
              break;
          }
          ++v25;
          v20 += 2;
          v17 = v27;
          v19 = v29;
          if ( (unsigned __int64)v25 >= 5 )
          {
            ++v24;
            v18 = (DWORD *)(v31[1] + 4LL);
            v31[1] += 4LL;
            v17 = v27;
            if ( (unsigned __int64)v24 < 0xD )
              goto LABEL_12;
            ++v16;
            v17 = ++v27;
            if ( v16 < v28 )
              goto LABEL_11;
            goto LABEL_24;
          }
        }
      }
      else
      {
        v9 = -2147024882;
      }
    }
  }
LABEL_25:
  operator delete(v10);
  CoTaskMemFree(v8);
  CoTaskMemFree(pv);
  return (unsigned int)v9;
}
