/*
 * XREFs of ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXW4GetPoseAtTimePurpose@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@_J3333W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@I@Z @ 0x18008F2D0
 * Callers:
 *     _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C (_lambda_f8380620b3870a98be7ea388687506c5_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // rbx
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  struct HolographicDriverClientContinuousTrace *v19; // rax
  __int64 v20; // r10
  const char *v21; // rax
  __int64 v22; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  float v25; // [rsp+3Ch] [rbp-CCh] BYREF
  float v26; // [rsp+40h] [rbp-C8h] BYREF
  float v27; // [rsp+44h] [rbp-C4h] BYREF
  float v28; // [rsp+48h] [rbp-C0h] BYREF
  float v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  int *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  float *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  float *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  float *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  float *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  float *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  const char *v49; // [rsp+F8h] [rbp-10h]
  int v50; // [rsp+100h] [rbp-8h]
  int v51; // [rsp+104h] [rbp-4h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  __int64 v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  __int64 v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  __int64 v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  __int64 v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int64 v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  int *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h] BYREF

  v70 = a2;
  v12 = a11;
  v15 = (double)(1000 * ((int)a6 - (int)a5)) / (double)(int)qword_1800D3928;
  v25 = v15;
  v16 = (double)((int)a6 - (int)a7) / (double)(int)qword_1800D3928;
  v26 = v16;
  v17 = (double)((int)a8 - (int)a6) / (double)(int)qword_1800D3928;
  v27 = v17;
  v18 = (double)((int)a8 - (int)a7) / (double)(int)qword_1800D3928;
  v28 = v18;
  v31 = a12 ^ *(_DWORD *)(a11 + 16);
  v29 = (double)(1000 * ((int)a9 - (int)a7)) / (double)(int)qword_1800D3928;
  v19 = HolographicDriverClientContinuousTrace::Instance();
  v20 = *((_QWORD *)v19 + 1);
  if ( *(_DWORD *)v20 > 5u && (*(_BYTE *)(v20 + 16) & 2) != 0 )
  {
    v19 = (struct HolographicDriverClientContinuousTrace *)(*(_QWORD *)(v20 + 24) & 2LL);
    if ( v19 == *(struct HolographicDriverClientContinuousTrace **)(v20 + 24) )
    {
      v33 = &v70;
      v34 = 8LL;
      v35 = &v24;
      v39 = &v25;
      v41 = &v26;
      v43 = &v27;
      v45 = &v28;
      v47 = &v29;
      v24 = a3;
      v36 = 4LL;
      v37 = a4;
      v38 = 16LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      if ( a10 )
      {
        if ( a10 == 1 )
        {
          v21 = "Interpolation";
        }
        else if ( a10 == 2 )
        {
          v21 = "NoPrediction";
        }
        else
        {
          v21 = "(unknown)";
        }
      }
      else
      {
        v21 = "Extrapolation";
      }
      v22 = -1LL;
      do
        ++v22;
      while ( v21[v22] );
      v49 = v21;
      v50 = v22 + 1;
      v54 = v12 + 8;
      v56 = v12 + 36;
      v58 = v12 + 84;
      v60 = v12 + 96;
      v62 = v12 + 108;
      v64 = v12 + 120;
      v30 = *(_DWORD *)(v12 + 16);
      v66 = &v30;
      v68 = &v31;
      v51 = 0;
      v52 = v12;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 48LL;
      v59 = 12LL;
      v61 = 12LL;
      v63 = 12LL;
      v65 = 12LL;
      v67 = 4LL;
      v69 = 4LL;
      LODWORD(v19) = TlgWrite((TraceLoggingHProvider)v20, &unk_1800BB087, 0LL, 0LL, 0x14u, &pData);
    }
  }
  return (int)v19;
}
