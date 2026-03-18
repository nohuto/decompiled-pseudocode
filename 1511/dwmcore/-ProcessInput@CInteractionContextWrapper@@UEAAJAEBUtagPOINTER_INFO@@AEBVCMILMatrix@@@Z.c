/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@@Z @ 0x1800B8560
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A80A4 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800A8310 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1800FE2A0 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z @ 0x1800FE494 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *Buf2)
{
  struct InteractionOutput *v6; // rdx
  bool *v7; // r8
  const GUID *v8; // r9
  int updated; // ebx
  _OWORD *v10; // r14
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionContextWrapper *v26; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _DWORD v31[8]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  CInteractionContextWrapper **v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  const struct CMILMatrix *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  char *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  char *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  char *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  char *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  char *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  char *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  char *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  char *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  char *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  char *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  char *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  char *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]
  char *v73; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+238h] [rbp+138h]
  char *v75; // [rsp+240h] [rbp+140h]
  __int64 v76; // [rsp+248h] [rbp+148h]
  char *v77; // [rsp+250h] [rbp+150h]
  __int64 v78; // [rsp+258h] [rbp+158h]
  int *v79; // [rsp+260h] [rbp+160h]
  __int64 v80; // [rsp+268h] [rbp+168h]

  v21 = CInteractionContextWrapper::EnsureInteractionContext(this);
  updated = v21;
  if ( v21 >= 0 )
  {
    if ( *((_DWORD *)a2 + 2) != *((_DWORD *)this + 33) )
    {
      LOBYTE(v6) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v6);
      *((_DWORD *)this + 33) = *((_DWORD *)a2 + 2);
    }
    v10 = (_OWORD *)((char *)this + 144);
    if ( memcmp_0((char *)this + 144, Buf2, 0x40uLL) )
    {
      *v10 = *(_OWORD *)Buf2;
      *((_OWORD *)this + 10) = *((_OWORD *)Buf2 + 1);
      *((_OWORD *)this + 11) = *((_OWORD *)Buf2 + 2);
      *((_OWORD *)this + 12) = *((_OWORD *)Buf2 + 3);
      v11 = *((_DWORD *)this + 37);
      v31[0] = *(_DWORD *)v10;
      v12 = *((_DWORD *)this + 40);
      v31[1] = v11;
      v13 = *((_DWORD *)this + 41);
      v31[2] = v12;
      v14 = *((_DWORD *)this + 48);
      v31[3] = v13;
      v15 = *((_DWORD *)this + 49);
      v31[4] = v14;
      v31[5] = v15;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 208),
                  (const struct D2D1::Matrix3x2F *)v31,
                  v7);
      v21 = updated;
    }
  }
  v16 = *((_OWORD *)a2 + 1);
  v27[0] = *(_OWORD *)a2;
  v27[1] = v16;
  v17 = *((_OWORD *)a2 + 3);
  v27[2] = *((_OWORD *)a2 + 2);
  v28 = v17;
  v18 = *((_OWORD *)a2 + 5);
  v29 = *((_OWORD *)a2 + 4);
  v30 = v18;
  if ( updated >= 0 )
  {
    v21 = CInteractionContextTransformHelper::TransformInput(
            (CInteractionContextWrapper *)((char *)this + 208),
            a2,
            (struct tagPOINTER_INFO *)v27);
    updated = v21;
    if ( v21 >= 0 )
    {
      v19 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 17) = *((_QWORD *)a2 + 2);
      updated = ProcessPointerFramesInteractionContext(v19, 1LL, 1LL, v27);
      v21 = updated;
    }
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v26 = this;
    v33 = &v26;
    v35 = (char *)a2 + 4;
    v37 = (char *)a2 + 8;
    v25 = *((_DWORD *)a2 + 14);
    v39 = &v25;
    v24 = *((_DWORD *)a2 + 15);
    v41 = &v24;
    v23 = DWORD2(v28);
    v43 = &v23;
    v22 = HIDWORD(v28);
    v45 = &v22;
    v49 = (char *)Buf2 + 4;
    v51 = (char *)Buf2 + 8;
    v53 = (char *)Buf2 + 12;
    v55 = (char *)Buf2 + 16;
    v57 = (char *)Buf2 + 20;
    v59 = (char *)Buf2 + 24;
    v61 = (char *)Buf2 + 28;
    v63 = (char *)Buf2 + 32;
    v65 = (char *)Buf2 + 36;
    v67 = (char *)Buf2 + 40;
    v69 = (char *)Buf2 + 44;
    v71 = (char *)Buf2 + 48;
    v73 = (char *)Buf2 + 52;
    v75 = (char *)Buf2 + 56;
    v77 = (char *)Buf2 + 60;
    v79 = &v21;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v47 = Buf2;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017EC76, (LPCGUID)v7, v8, 0x1Au, &pData);
    return (unsigned int)v21;
  }
  return (unsigned int)updated;
}
