/*
 * XREFs of SepCopyTokenAccessInformation @ 0x140526F7C
 * Callers:
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010DA00 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x14010DD44 (SeQueryMandatoryPolicyToken.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140527690 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        char a14,
        unsigned __int8 *Src)
{
  __int64 v18; // rbx
  __int64 v19; // rcx
  char *v20; // rsi
  unsigned int v21; // r8d
  __int64 v22; // r15
  int v23; // eax
  ULONG v24; // edx
  __int64 v25; // r12
  _SID_AND_ATTRIBUTES *v26; // rcx
  unsigned __int64 *Hash; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  _SID_AND_ATTRIBUTES_HASH *v37; // rbx
  _SID_AND_ATTRIBUTES *v38; // r15
  ULONG v39; // ecx
  int v40; // eax
  ULONG v41; // edx
  _SID_AND_ATTRIBUTES *v42; // rcx
  unsigned __int64 *v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 *v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  _SID_AND_ATTRIBUTES_HASH *v53; // rbx
  _SID_AND_ATTRIBUTES *v54; // r15
  ULONG v55; // ecx
  int v56; // eax
  ULONG v57; // edx
  _SID_AND_ATTRIBUTES *v58; // rcx
  unsigned __int64 *v59; // rcx
  unsigned __int64 *v60; // rax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int64 v68; // rax
  char *v69; // rbx
  char *v70; // r15
  __int64 v71; // r15
  char *v72; // rbx
  int v73; // r8d
  char *v74; // rbx
  int v75; // eax
  char *v76; // rdx
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v79; // [rsp+48h] [rbp-B8h]
  unsigned int v80; // [rsp+4Ch] [rbp-B4h]
  unsigned int v81; // [rsp+50h] [rbp-B0h]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  unsigned int v83; // [rsp+58h] [rbp-A8h]
  int v84; // [rsp+5Ch] [rbp-A4h]
  unsigned int v85; // [rsp+60h] [rbp-A0h]
  unsigned int v86; // [rsp+64h] [rbp-9Ch]
  unsigned int v87; // [rsp+68h] [rbp-98h]
  __int64 v88; // [rsp+70h] [rbp-90h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+80h] [rbp-80h] BYREF

  v82 = a5;
  v81 = a7;
  v85 = a8;
  v80 = a9;
  v79 = a10;
  v83 = a11;
  v87 = a12;
  v86 = a13;
  v84 = a4;
  v18 = a3;
  EvaluateCurrentState((int **)&g_Feature_3914897721_58329124_FeatureDescriptorDetails);
  v88 = a2 + v18;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v19 = *(_QWORD *)(a1 + 1080);
  v20 = 0LL;
  if ( v19 )
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(v19 + 40);
  else
    *(_DWORD *)(a2 + 48) = 0;
  v21 = v82;
  v22 = a2 + 360;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v21 - a6,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + a6),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  LOBYTE(v23) = EvaluateCurrentState((int **)&g_Feature_3914897721_58329124_FeatureDescriptorDetails);
  v24 = *(_DWORD *)(a1 + 124);
  v25 = 2LL;
  v26 = *(_SID_AND_ATTRIBUTES **)(a1 + 152);
  if ( v23 )
  {
    RtlSidHashInitialize(v26, v24, &SidAttrHash);
    memset((void *)(a2 + 88), 0, 0x110uLL);
    Hash = SidAttrHash.Hash;
    *(_DWORD *)(a2 + 88) = SidAttrHash.SidCount;
    v28 = (_OWORD *)(a2 + 104);
    v29 = 2LL;
    do
    {
      v30 = *((_OWORD *)Hash + 1);
      *v28 = *(_OWORD *)Hash;
      v31 = *((_OWORD *)Hash + 2);
      v28[1] = v30;
      v32 = *((_OWORD *)Hash + 3);
      v28[2] = v31;
      v33 = *((_OWORD *)Hash + 4);
      v28[3] = v32;
      v34 = *((_OWORD *)Hash + 5);
      v28[4] = v33;
      v35 = *((_OWORD *)Hash + 6);
      v28[5] = v34;
      v36 = *((_OWORD *)Hash + 7);
      Hash += 16;
      v28[6] = v35;
      v28 += 8;
      *(v28 - 1) = v36;
      --v29;
    }
    while ( v29 );
  }
  else
  {
    RtlSidHashInitialize(v26, v24, (PSID_AND_ATTRIBUTES_HASH)(a2 + 88));
  }
  *(_QWORD *)(a2 + 96) = v22;
  v37 = (_SID_AND_ATTRIBUTES_HASH *)(v22 + v82);
  v37->SidCount = *(_DWORD *)(a1 + 128);
  v38 = (_SID_AND_ATTRIBUTES *)&v37[1];
  v37->SidAttr = (_SID_AND_ATTRIBUTES *)&v37[1];
  *(_QWORD *)(a2 + 8) = v37;
  v39 = *(_DWORD *)(a1 + 128);
  if ( v39 )
  {
    RtlCopySidAndAttributesArray(
      v39,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v81 - v85,
      (PSID_AND_ATTRIBUTES)&v37[1],
      (char *)v38 + v85,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    LOBYTE(v40) = EvaluateCurrentState((int **)&g_Feature_3914897721_58329124_FeatureDescriptorDetails);
    v41 = *(_DWORD *)(a1 + 128);
    v42 = *(_SID_AND_ATTRIBUTES **)(a1 + 160);
    if ( v40 )
    {
      RtlSidHashInitialize(v42, v41, &SidAttrHash);
      memset(v37, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
      v43 = SidAttrHash.Hash;
      v37->SidCount = SidAttrHash.SidCount;
      v44 = 2LL;
      v45 = v37->Hash;
      do
      {
        v46 = *((_OWORD *)v43 + 1);
        *(_OWORD *)v45 = *(_OWORD *)v43;
        v47 = *((_OWORD *)v43 + 2);
        *((_OWORD *)v45 + 1) = v46;
        v48 = *((_OWORD *)v43 + 3);
        *((_OWORD *)v45 + 2) = v47;
        v49 = *((_OWORD *)v43 + 4);
        *((_OWORD *)v45 + 3) = v48;
        v50 = *((_OWORD *)v43 + 5);
        *((_OWORD *)v45 + 4) = v49;
        v51 = *((_OWORD *)v43 + 6);
        *((_OWORD *)v45 + 5) = v50;
        v52 = *((_OWORD *)v43 + 7);
        v43 += 16;
        *((_OWORD *)v45 + 6) = v51;
        v45 += 16;
        *((_OWORD *)v45 - 1) = v52;
        --v44;
      }
      while ( v44 );
    }
    else
    {
      RtlSidHashInitialize(v42, v41, v37);
    }
    v37->SidAttr = v38;
  }
  v53 = (_SID_AND_ATTRIBUTES_HASH *)((char *)v38 + v81);
  v53->SidCount = *(_DWORD *)(a1 + 800);
  v54 = (_SID_AND_ATTRIBUTES *)&v53[1];
  v53->SidAttr = (_SID_AND_ATTRIBUTES *)&v53[1];
  *(_QWORD *)(a2 + 64) = v53;
  v55 = *(_DWORD *)(a1 + 800);
  if ( v55 )
  {
    RtlCopySidAndAttributesArray(
      v55,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v79 - v83,
      (PSID_AND_ATTRIBUTES)&v53[1],
      (char *)v54 + v83,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    LOBYTE(v56) = EvaluateCurrentState((int **)&g_Feature_3914897721_58329124_FeatureDescriptorDetails);
    v57 = *(_DWORD *)(a1 + 800);
    v58 = *(_SID_AND_ATTRIBUTES **)(a1 + 792);
    if ( v56 )
    {
      RtlSidHashInitialize(v58, v57, &SidAttrHash);
      memset(v53, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
      v59 = SidAttrHash.Hash;
      v53->SidCount = SidAttrHash.SidCount;
      v60 = v53->Hash;
      do
      {
        v61 = *((_OWORD *)v59 + 1);
        *(_OWORD *)v60 = *(_OWORD *)v59;
        v62 = *((_OWORD *)v59 + 2);
        *((_OWORD *)v60 + 1) = v61;
        v63 = *((_OWORD *)v59 + 3);
        *((_OWORD *)v60 + 2) = v62;
        v64 = *((_OWORD *)v59 + 4);
        *((_OWORD *)v60 + 3) = v63;
        v65 = *((_OWORD *)v59 + 5);
        *((_OWORD *)v60 + 4) = v64;
        v66 = *((_OWORD *)v59 + 6);
        *((_OWORD *)v60 + 5) = v65;
        v67 = *((_OWORD *)v59 + 7);
        v59 += 16;
        *((_OWORD *)v60 + 6) = v66;
        v60 += 16;
        *((_OWORD *)v60 - 1) = v67;
        --v25;
      }
      while ( v25 );
    }
    else
    {
      RtlSidHashInitialize(v58, v57, v53);
    }
    v53->SidAttr = v54;
  }
  v68 = v80;
  v69 = (char *)v54 + v79;
  v70 = 0LL;
  if ( v80 )
  {
    v70 = v69;
    memmove(v69, *(const void **)(a1 + 784), 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v68 = v80;
  }
  *(_QWORD *)(a2 + 56) = v70;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v71 = v87;
  v72 = &v69[v68];
  if ( v87 )
  {
    v20 = v72;
    memmove(v72, Src, 4 * Src[1] + 8);
  }
  v73 = v88;
  v74 = &v72[v71];
  *(_QWORD *)(a2 + 72) = v20;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v74,
    (unsigned int)(v73 - (_DWORD)v74),
    &RemainingSidArea);
  v75 = v84;
  v76 = &v74[v86];
  *(_QWORD *)(a2 + 80) = v74;
  *(_DWORD *)v76 = v75;
  *(_QWORD *)(a2 + 16) = v76;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v76 + 4));
}
