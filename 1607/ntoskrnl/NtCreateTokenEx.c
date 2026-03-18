/*
 * XREFs of NtCreateTokenEx @ 0x140477BDC
 * Callers:
 *     NtCreateToken @ 0x1406926DC (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x140412AE8 (SeCaptureSecurityQos.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140460358 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140460434 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140479554 (SeReleaseSid.c)
 *     SeReleaseAcl @ 0x1404797B8 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x14047ABEC (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047C21C (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047C454 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v20; // rcx
  void **v21; // r12
  int *v22; // r14
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 result; // rax
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+28h] [rbp-190h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+30h] [rbp-188h]
  int v35; // [rsp+30h] [rbp-188h]
  char v36; // [rsp+C0h] [rbp-F8h] BYREF
  char v37; // [rsp+C1h] [rbp-F7h]
  char v38; // [rsp+C2h] [rbp-F6h]
  int v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  int v41; // [rsp+D0h] [rbp-E8h]
  int v42; // [rsp+D4h] [rbp-E4h]
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v44; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-C8h] BYREF
  PSID v47; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+120h] [rbp-98h] BYREF
  __int64 v53; // [rsp+128h] [rbp-90h] BYREF
  __int64 v54; // [rsp+130h] [rbp-88h] BYREF
  int v55[2]; // [rsp+138h] [rbp-80h] BYREF
  __int64 v56; // [rsp+140h] [rbp-78h] BYREF
  _QWORD *v57; // [rsp+148h] [rbp-70h]
  __int64 v58; // [rsp+150h] [rbp-68h] BYREF
  __int64 v59; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v60[4]; // [rsp+160h] [rbp-58h] BYREF
  int v61; // [rsp+164h] [rbp-54h]
  __int64 v62[2]; // [rsp+170h] [rbp-48h] BYREF

  v18 = a1;
  v57 = a1;
  *(_QWORD *)v55 = 0LL;
  v36 = 0;
  v44 = 0LL;
  v53 = 0LL;
  Count = 0;
  v45 = 0LL;
  v40 = 0LL;
  v42 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v37 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v41 = 0;
  v50 = 0LL;
  LODWORD(v54) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v20 = (__int64)v18;
    if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (void **)a14;
    if ( a14 && (a14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a16 && (a16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a13 && (a13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (int *)a12;
    if ( a12 && (a12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = a11;
    if ( a11 && (a11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a10;
    if ( a10 && (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v21 = (void **)a14;
    v22 = (int *)a12;
    v23 = a11;
    v24 = a10;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(a3, PreviousMode, &v36, (__int64)v60);
  if ( (int)result >= 0 )
  {
    if ( a4 == 2 && !v36 )
      return 3221225637LL;
    v39 = 0;
    v59 = *(_QWORD *)a5;
    v58 = *(_QWORD *)a6;
    v27 = SeCaptureSidAndAttributesArray(Src, 0, v32, v34, (__int64)&v44, (__int64)&v53);
    v39 = v27;
    if ( v27 >= 0 )
    {
      Count = *a8;
      v30 = Count;
      v27 = SeCaptureSidAndAttributesArray(a8 + 2, 0, v33, v35, (__int64)&v45, (__int64)&v40);
      v39 = v27;
      LODWORD(v40) = (v40 - 16 * v30 + 3) & 0xFFFFFFFC;
      v18 = v57;
    }
    if ( v27 >= 0 )
    {
      v42 = *(_DWORD *)a9;
      v27 = SeCaptureLuidAndAttributesArray(
              (char *)(a9 + 4),
              v42,
              PreviousMode,
              v29,
              PoolType,
              v33,
              v35,
              &v46,
              (_DWORD *)&v53 + 1);
      v39 = v27;
    }
    if ( v21 )
    {
      if ( v27 < 0 )
      {
LABEL_50:
        if ( a16 && v27 >= 0 && *(_QWORD *)a16 )
        {
          v27 = SeCaptureAcl(*(void **)a16, NonPagedPoolNx, v33, (__int64)&v49, (__int64)&v56);
          v39 = v27;
        }
        *(_OWORD *)v62 = *(_OWORD *)a17;
        if ( v22 && v27 >= 0 )
        {
          v41 = *v22;
          v27 = SeCaptureSidAndAttributesArray(v22 + 2, 0, v33, v35, (__int64)&v50, (__int64)&v54);
          v39 = v27;
        }
        if ( v24 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v24, v26, 0LL, &v51);
          v39 = v27;
        }
        if ( v23 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v23, v26, 0LL, &v52);
          v39 = v27;
        }
        if ( a13 && v27 >= 0 )
        {
          HIDWORD(v40) = *(_DWORD *)a13;
          v37 = 1;
        }
        if ( v27 >= 0 )
          v27 = SepCreateTokenEx(
                  (HANDLE *)v55,
                  PreviousMode,
                  a2,
                  a3,
                  a4,
                  v61,
                  (__int64)&v59,
                  &v58,
                  (struct _SID_AND_ATTRIBUTES *)v44,
                  Count,
                  (struct _SID_AND_ATTRIBUTES *)v45,
                  v40,
                  v42,
                  (char **)v46,
                  v47,
                  (void *)v48,
                  (void *)v49,
                  v62,
                  v51,
                  v52,
                  v41,
                  v50,
                  (_DWORD *)(((unsigned __int64)&v40 + 4) & -(__int64)(v37 != 0)),
                  0);
        if ( v44 )
          SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
        if ( v45 )
          SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v47 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v47, v26, v28);
        }
        if ( v48 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v48, v26, v28);
        }
        if ( v49 )
        {
          LOBYTE(v26) = PreviousMode;
          SeReleaseAcl(v49, v26);
        }
        if ( v50 )
          SeReleaseLuidAndAttributesArray((void *)v50, PreviousMode);
        if ( v51 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v52 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v27 >= 0 )
          *v18 = *(_QWORD *)v55;
        return (unsigned int)v27;
      }
      v27 = SeCaptureSid(*v21, PoolType, 1, (__int64)&v47);
      v39 = v27;
    }
    if ( v27 >= 0 )
    {
      v27 = SeCaptureSid(*(void **)a15, PoolType, 1, (__int64)&v48);
      v39 = v27;
    }
    goto LABEL_50;
  }
  return result;
}
