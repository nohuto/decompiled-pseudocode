/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1404A05F8
 * Callers:
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14000EC10 (RtlSidHashInitialize.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140087DB0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x140087EB4 (SeQueryMandatoryPolicyToken.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlCopySidAndAttributesArray @ 0x14040EE50 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1404A0BC4 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
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
  int v18; // r12d
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // r14
  __int64 v24; // r15
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _QWORD *v35; // rbx
  _QWORD *v36; // r15
  ULONG v37; // ecx
  _QWORD *v38; // rbx
  _QWORD *v39; // r15
  ULONG v40; // ecx
  __int64 v41; // rax
  char *v42; // rbx
  char *v43; // r15
  __int64 v44; // r15
  char *v45; // rbx
  char *v46; // rbx
  int v47; // eax
  char *v48; // rdx
  _OWORD *v50; // rcx
  __int64 v51; // rdx
  _OWORD *v52; // rax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  _OWORD *v60; // rcx
  __int64 v61; // rdx
  _OWORD *v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  unsigned int v72; // [rsp+4Ch] [rbp-B4h]
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+54h] [rbp-ACh]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  unsigned int v76; // [rsp+5Ch] [rbp-A4h]
  unsigned int v77; // [rsp+60h] [rbp-A0h]
  unsigned int v78; // [rsp+64h] [rbp-9Ch]
  int v79; // [rsp+68h] [rbp-98h]
  _QWORD v80[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v81[256]; // [rsp+80h] [rbp-80h] BYREF

  v71 = a7;
  v75 = a8;
  v73 = a9;
  v72 = a10;
  v76 = a11;
  v77 = a12;
  v78 = a13;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v79 = a4;
  v18 = a2 + a3;
  v74 = a5;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v22 = *(_QWORD *)(v21 + 1080);
  v23 = 0LL;
  if ( v22 )
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(v22 + 40);
  else
    *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  v24 = a2 + 360;
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v19 - v20,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + v20),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize(*(__int64 **)(a1 + 152), *(_DWORD *)(a1 + 124), v80);
  memset((void *)(a2 + 88), 0, 0x110uLL);
  v25 = v81;
  v26 = 2LL;
  *(_DWORD *)(a2 + 88) = v80[0];
  v27 = (_OWORD *)(a2 + 104);
  do
  {
    v28 = v25[1];
    *v27 = *v25;
    v29 = v25[2];
    v27[1] = v28;
    v30 = v25[3];
    v27[2] = v29;
    v31 = v25[4];
    v27[3] = v30;
    v32 = v25[5];
    v27[4] = v31;
    v33 = v25[6];
    v27[5] = v32;
    v34 = v25[7];
    v25 += 8;
    v27[6] = v33;
    v27 += 8;
    *(v27 - 1) = v34;
    --v26;
  }
  while ( v26 );
  *(_QWORD *)(a2 + 96) = v24;
  v35 = (_QWORD *)(v24 + v74);
  *(_DWORD *)v35 = *(_DWORD *)(a1 + 128);
  v36 = v35 + 34;
  v35[1] = v35 + 34;
  *(_QWORD *)(a2 + 8) = v35;
  v37 = *(_DWORD *)(a1 + 128);
  if ( v37 )
  {
    RtlCopySidAndAttributesArray(
      v37,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v71 - v75,
      (PSID_AND_ATTRIBUTES)v35 + 17,
      (char *)v36 + v75,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(__int64 **)(a1 + 160), *(_DWORD *)(a1 + 128), v80);
    memset(v35, 0, 0x110uLL);
    v60 = v81;
    v61 = 2LL;
    *(_DWORD *)v35 = v80[0];
    v62 = v35 + 2;
    do
    {
      v63 = v60[1];
      *v62 = *v60;
      v64 = v60[2];
      v62[1] = v63;
      v65 = v60[3];
      v62[2] = v64;
      v66 = v60[4];
      v62[3] = v65;
      v67 = v60[5];
      v62[4] = v66;
      v68 = v60[6];
      v62[5] = v67;
      v69 = v60[7];
      v60 += 8;
      v62[6] = v68;
      v62 += 8;
      *(v62 - 1) = v69;
      --v61;
    }
    while ( v61 );
    v35[1] = v36;
  }
  v38 = (_QWORD *)((char *)v36 + v71);
  *(_DWORD *)v38 = *(_DWORD *)(a1 + 800);
  v39 = v38 + 34;
  v38[1] = v38 + 34;
  *(_QWORD *)(a2 + 64) = v38;
  v40 = *(_DWORD *)(a1 + 800);
  if ( v40 )
  {
    RtlCopySidAndAttributesArray(
      v40,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v72 - v76,
      (PSID_AND_ATTRIBUTES)v38 + 17,
      (char *)v39 + v76,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(__int64 **)(a1 + 792), *(_DWORD *)(a1 + 800), v80);
    memset(v38, 0, 0x110uLL);
    v50 = v81;
    v51 = 2LL;
    *(_DWORD *)v38 = v80[0];
    v52 = v38 + 2;
    do
    {
      v53 = v50[1];
      *v52 = *v50;
      v54 = v50[2];
      v52[1] = v53;
      v55 = v50[3];
      v52[2] = v54;
      v56 = v50[4];
      v52[3] = v55;
      v57 = v50[5];
      v52[4] = v56;
      v58 = v50[6];
      v52[5] = v57;
      v59 = v50[7];
      v50 += 8;
      v52[6] = v58;
      v52 += 8;
      *(v52 - 1) = v59;
      --v51;
    }
    while ( v51 );
    v38[1] = v39;
  }
  v41 = v73;
  v42 = (char *)v39 + v72;
  v43 = 0LL;
  if ( v73 )
  {
    v43 = v42;
    memmove(v42, *(const void **)(a1 + 784), 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v41 = v73;
  }
  *(_QWORD *)(a2 + 56) = v43;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v44 = v77;
  v45 = &v42[v41];
  if ( v77 )
  {
    v23 = v45;
    memmove(v45, Src, 4 * Src[1] + 8);
  }
  v46 = &v45[v44];
  *(_QWORD *)(a2 + 72) = v23;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v46,
    (unsigned int)(v18 - (_DWORD)v46),
    &RemainingSidArea);
  v47 = v79;
  v48 = &v46[v78];
  *(_QWORD *)(a2 + 80) = v46;
  *(_DWORD *)v48 = v47;
  *(_QWORD *)(a2 + 16) = v48;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v48 + 4));
}
