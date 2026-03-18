/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180068330
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800680F8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
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

  if ( *((_BYTE *)this + 232) )
    CManipulationTransform::CalculateMatrix(this, (CManipulationTransform *)((char *)this + 168), (__int64)a3);
  v5 = (const GUID *)((char *)this + 168);
  v6 = *(_OWORD *)((char *)this + 184);
  v7 = *(_OWORD *)((char *)this + 200);
  v8 = *(_OWORD *)((char *)this + 216);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)a3 + 1) = v6;
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  v9 = (const GUID *)(unsigned int)pRelatedActivityId;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v10 = qword_18019E950;
    v11 = qword_18019E958;
    if ( (qword_18019E950 & 1) != 0 && (qword_18019E958 & 1) == qword_18019E958 )
    {
      v13 = (char *)this + 168;
      v15 = (char *)this + 172;
      v17 = (char *)this + 176;
      v19 = (char *)this + 180;
      v21 = (char *)this + 184;
      v23 = (char *)this + 188;
      v25 = (char *)this + 192;
      v27 = (char *)this + 196;
      v29 = (char *)this + 200;
      v31 = (char *)this + 204;
      v33 = (char *)this + 208;
      v35 = (char *)this + 212;
      v37 = (char *)this + 216;
      v39 = (char *)this + 220;
      v41 = (char *)this + 224;
      v43 = (char *)this + 228;
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
        &unk_18017D9BB,
        v5,
        (LPCGUID)(unsigned int)pRelatedActivityId,
        0x12u,
        &pData);
      v11 = qword_18019E958;
      v10 = qword_18019E950;
      v9 = (const GUID *)(unsigned int)pRelatedActivityId;
    }
    if ( (unsigned int)v9 > 4 && (v10 & 1) != 0 && (v11 & 1) == v11 )
    {
      v14 = 4LL;
      v13 = (char *)this + 120;
      v15 = (char *)this + 124;
      v17 = (char *)this + 128;
      v19 = (char *)this + 132;
      v21 = (char *)this + 136;
      v23 = (char *)this + 140;
      v25 = (char *)this + 144;
      v27 = (char *)this + 148;
      v29 = (char *)this + 152;
      v31 = (char *)this + 156;
      v33 = (char *)this + 160;
      v35 = (char *)this + 164;
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
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D93C, v5, v9, 0xEu, &pData);
    }
  }
}
