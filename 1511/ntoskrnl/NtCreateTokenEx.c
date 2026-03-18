/*
 * XREFs of NtCreateTokenEx @ 0x1403C35AC
 * Callers:
 *     NtCreateToken @ 0x140653400 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     SeReleaseAcl @ 0x1403C1B10 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1403C2594 (SeCaptureAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1403C3368 (SeCaptureLuidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1403C404C (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1403C5388 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityQos @ 0x140478794 (SeCaptureSecurityQos.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        ULONG *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  _QWORD *v18; // rbx
  char PreviousMode; // si
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  void **v22; // r12
  char **v23; // r13
  _DWORD *v24; // r14
  __int64 v25; // r15
  __int64 result; // rax
  __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG v31; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+28h] [rbp-190h]
  int v35; // [rsp+30h] [rbp-188h]
  int v36; // [rsp+30h] [rbp-188h]
  char v37; // [rsp+C0h] [rbp-F8h]
  _BYTE v38[2]; // [rsp+C2h] [rbp-F6h] BYREF
  int v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  int v41; // [rsp+D0h] [rbp-E8h]
  int v42; // [rsp+D4h] [rbp-E4h] BYREF
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v44; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-C0h] BYREF
  PSID v48; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+120h] [rbp-98h] BYREF
  __int64 v53; // [rsp+128h] [rbp-90h] BYREF
  __int64 v54; // [rsp+130h] [rbp-88h] BYREF
  int v55[2]; // [rsp+138h] [rbp-80h] BYREF
  _QWORD *v56; // [rsp+140h] [rbp-78h]
  __int64 v57; // [rsp+148h] [rbp-70h] BYREF
  __int64 v58; // [rsp+150h] [rbp-68h] BYREF
  __int64 v59; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v60[4]; // [rsp+160h] [rbp-58h] BYREF
  int v61; // [rsp+164h] [rbp-54h]
  __int64 v62[2]; // [rsp+170h] [rbp-48h] BYREF

  v18 = a1;
  v56 = a1;
  *(_QWORD *)v55 = 0LL;
  v38[0] = 0;
  v44 = 0LL;
  Count = 0;
  v49 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v47 = 0LL;
  LODWORD(v54) = 0;
  v48 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v42 = 0;
  v37 = 0;
  v52 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v53 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v21 = v18;
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v21 = (_QWORD *)MmUserProbeAddress;
    *v21 = *v21;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (void **)a14;
    if ( a14 && (a14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (char **)a16;
    if ( a16 && (a16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a13 && (a13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = (_DWORD *)a12;
    if ( a12 && (a12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = a11;
    if ( a11 && (a11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = a10;
    if ( a10 && (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v23 = (char **)a16;
    v22 = (void **)a14;
    v24 = (_DWORD *)a12;
    v25 = a10;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225640LL;
  LOBYTE(v20) = PreviousMode;
  result = SeCaptureSecurityQos(a3, v20, v38, v60);
  if ( (int)result >= 0 )
  {
    if ( a4 == 2 && !v38[0] )
      return 3221225637LL;
    v39 = 0;
    v57 = *(_QWORD *)a5;
    v59 = *(_QWORD *)a6;
    v28 = SeCaptureSidAndAttributesArray(Src, 0, v33, v35, (__int64)&v44, (__int64)&v53 + 4);
    v39 = v28;
    if ( v28 >= 0 )
    {
      Count = *a8;
      v31 = Count;
      v28 = SeCaptureSidAndAttributesArray(a8 + 2, 0, v34, v36, (__int64)&v49, (__int64)&v40);
      v39 = v28;
      LODWORD(v40) = (v40 - 16 * v31 + 3) & 0xFFFFFFFC;
      v18 = v56;
    }
    if ( v28 >= 0 )
    {
      v41 = *(_DWORD *)a9;
      v28 = SeCaptureLuidAndAttributesArray((char *)(a9 + 4), v41, PreviousMode, v30, PoolType, v34, v36, &v47, &v54);
      v39 = v28;
    }
    if ( v22 )
    {
      if ( v28 < 0 )
      {
LABEL_50:
        if ( v23 && v28 >= 0 && *v23 )
        {
          v28 = SeCaptureAcl(*v23, PreviousMode, v29, v30, NonPagedPoolNx, v34, (PVOID *)&v45, (unsigned int *)&v58);
          v39 = v28;
        }
        *(_OWORD *)v62 = *(_OWORD *)a17;
        if ( v24 && v28 >= 0 )
        {
          HIDWORD(v40) = *v24;
          v28 = SeCaptureSidAndAttributesArray(v24 + 2, 0, v34, v36, (__int64)&v46, (__int64)&v53);
          v39 = v28;
        }
        if ( v25 && v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCaptureTokenSecurityAttributesInformation(v25, v27, 0LL, &v52);
          v39 = v28;
        }
        if ( a11 && v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCaptureTokenSecurityAttributesInformation(a11, v27, 0LL, &v51);
          v39 = v28;
        }
        if ( a13 && v28 >= 0 )
        {
          v42 = *(_DWORD *)a13;
          v37 = 1;
        }
        if ( v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCreateTokenEx(
                  (HANDLE *)v55,
                  v27,
                  a2,
                  a3,
                  a4,
                  v61,
                  (__int64)&v57,
                  &v59,
                  (struct _SID_AND_ATTRIBUTES *)v44,
                  Count,
                  (struct _SID_AND_ATTRIBUTES *)v49,
                  v40,
                  v41,
                  v47,
                  v48,
                  (void *)v50,
                  (void *)v45,
                  (struct _SID_AND_ATTRIBUTES *)v62,
                  v52,
                  v51,
                  SHIDWORD(v40),
                  v46,
                  (_DWORD *)((unsigned __int64)&v42 & -(__int64)(v37 != 0)),
                  0);
        }
        if ( v44 )
          SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
        if ( v49 )
          SeReleaseLuidAndAttributesArray((void *)v49, PreviousMode);
        if ( v47 )
          SeReleaseLuidAndAttributesArray((void *)v47, PreviousMode);
        if ( v48 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v27) = PreviousMode;
          SeReleaseSid(v48, v27, v29);
        }
        if ( v50 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v27) = PreviousMode;
          SeReleaseSid(v50, v27, v29);
        }
        if ( v45 )
          SeReleaseAcl((void *)v45, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v52 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v51 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v28 >= 0 )
          *v18 = *(_QWORD *)v55;
        return (unsigned int)v28;
      }
      v28 = SeCaptureSid(*v22, PoolType, 1, (__int64)&v48);
      v39 = v28;
    }
    if ( v28 >= 0 )
    {
      v28 = SeCaptureSid(*(void **)a15, PoolType, 1, (__int64)&v50);
      v39 = v28;
    }
    goto LABEL_50;
  }
  return result;
}
