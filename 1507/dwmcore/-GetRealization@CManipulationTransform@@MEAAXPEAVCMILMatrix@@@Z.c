/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x1800166D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800164B8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CManipulationTransform::GetRealization(CManipulationTransform *this, struct CMILMatrix *a2, __int64 a3)
{
  const GUID *v5; // r8
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  const GUID *v9; // r9
  char v10; // dl
  __int64 v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-D0h] BYREF
  char *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  char *v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  char *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  char *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  char *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  char *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  char *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]

  if ( *((_BYTE *)this + 224) )
    CManipulationTransform::CalculateMatrix(this, (CManipulationTransform *)((char *)this + 160), a3);
  v5 = (const GUID *)((char *)this + 160);
  v6 = *((_OWORD *)this + 11);
  v7 = *((_OWORD *)this + 12);
  v8 = *((_OWORD *)this + 13);
  *(_OWORD *)a2 = *((_OWORD *)this + 10);
  *((_OWORD *)a2 + 1) = v6;
  *((_OWORD *)a2 + 2) = v7;
  *((_OWORD *)a2 + 3) = v8;
  v9 = (const GUID *)(unsigned int)pRelatedActivityId;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v10 = qword_180190AC0;
    v11 = qword_180190AC8;
    if ( (qword_180190AC0 & 1) != 0 && (qword_180190AC8 & 1) == qword_180190AC8 )
    {
      v13 = (char *)this + 160;
      v15 = (char *)this + 164;
      v17 = (char *)this + 168;
      v19 = (char *)this + 172;
      v21 = (char *)this + 176;
      v23 = (char *)this + 180;
      v25 = (char *)this + 184;
      v27 = (char *)this + 188;
      v29 = (char *)this + 192;
      v31 = (char *)this + 196;
      v33 = (char *)this + 200;
      v35 = (char *)this + 204;
      v37 = (char *)this + 208;
      v39 = (char *)this + 212;
      v41 = (char *)this + 216;
      v43 = (char *)this + 220;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      TlgWrite(
        (TraceLoggingHProvider)&pRelatedActivityId,
        &unk_18016E86F,
        v5,
        (LPCGUID)(unsigned int)pRelatedActivityId,
        0x12u,
        &pData);
      v11 = qword_180190AC8;
      v10 = qword_180190AC0;
      v9 = (const GUID *)(unsigned int)pRelatedActivityId;
    }
    if ( (unsigned int)v9 > 4 && (v10 & 1) != 0 && (v11 & 1) == v11 )
    {
      v14 = 4LL;
      v13 = (char *)this + 112;
      v15 = (char *)this + 116;
      v17 = (char *)this + 120;
      v19 = (char *)this + 124;
      v21 = (char *)this + 128;
      v23 = (char *)this + 132;
      v25 = (char *)this + 136;
      v27 = (char *)this + 140;
      v29 = (char *)this + 144;
      v31 = (char *)this + 148;
      v33 = (char *)this + 152;
      v35 = (char *)this + 156;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E7F0, v5, v9, 0xEu, &pData);
    }
  }
}
