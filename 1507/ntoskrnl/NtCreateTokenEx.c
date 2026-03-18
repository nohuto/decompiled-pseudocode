/*
 * XREFs of NtCreateTokenEx @ 0x14046EF1C
 * Callers:
 *     NtCreateToken @ 0x1406D5128 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x140436EA8 (SeCaptureSecurityQos.c)
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046BEE0 (SeReleaseAcl.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140553FE0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD *v20; // rcx
  void **v21; // r12
  char **v22; // r13
  _DWORD *v23; // r14
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
  char v36; // [rsp+C0h] [rbp-F8h]
  _BYTE v37[2]; // [rsp+C2h] [rbp-F6h] BYREF
  int v38; // [rsp+C4h] [rbp-F4h]
  __int64 v39; // [rsp+C8h] [rbp-F0h] BYREF
  int v40; // [rsp+D0h] [rbp-E8h]
  int v41; // [rsp+D4h] [rbp-E4h] BYREF
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v43; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+100h] [rbp-B8h] BYREF
  PSID_AND_ATTRIBUTES v48; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+120h] [rbp-98h] BYREF
  __int64 v52; // [rsp+128h] [rbp-90h] BYREF
  __int64 v53; // [rsp+130h] [rbp-88h] BYREF
  int v54[2]; // [rsp+138h] [rbp-80h] BYREF
  _QWORD *v55; // [rsp+140h] [rbp-78h]
  __int64 v56; // [rsp+148h] [rbp-70h] BYREF
  __int64 v57; // [rsp+150h] [rbp-68h] BYREF
  __int64 v58; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v59[4]; // [rsp+160h] [rbp-58h] BYREF
  int v60; // [rsp+164h] [rbp-54h]
  __int64 v61[2]; // [rsp+170h] [rbp-48h] BYREF

  v18 = a1;
  v55 = a1;
  *(_QWORD *)v54 = 0LL;
  v37[0] = 0;
  v43 = 0LL;
  Count = 0;
  v48 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v46 = 0LL;
  LODWORD(v53) = 0;
  v47 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v41 = 0;
  v36 = 0;
  v51 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v52 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v20 = v18;
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    *v20 = *v20;
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
    v22 = (char **)a16;
    if ( a16 && (a16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a13 && (a13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (_DWORD *)a12;
    if ( a12 && (a12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a11 && (a11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a10;
    if ( a10 && (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v22 = (char **)a16;
    v21 = (void **)a14;
    v23 = (_DWORD *)a12;
    v24 = a10;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(a3, PreviousMode, v37, (__int64)v59);
  if ( (int)result >= 0 )
  {
    if ( !v37[0] && a4 == 2 )
      return 3221225637LL;
    v38 = 0;
    v56 = *(_QWORD *)a5;
    v58 = *(_QWORD *)a6;
    v27 = SeCaptureSidAndAttributesArray(Src, 0, v32, v34, (__int64)&v43, (__int64)&v52 + 4);
    v38 = v27;
    if ( v27 >= 0 )
    {
      Count = *a8;
      v30 = Count;
      v27 = SeCaptureSidAndAttributesArray(a8 + 2, 0, v33, v35, (__int64)&v48, (__int64)&v39);
      v38 = v27;
      LODWORD(v39) = (v39 - 16 * v30 + 3) & 0xFFFFFFFC;
      v18 = v55;
    }
    if ( v27 >= 0 )
    {
      v40 = *(_DWORD *)a9;
      v27 = SeCaptureLuidAndAttributesArray((char *)(a9 + 4), v40, PreviousMode, v29, PoolType, v33, v35, &v46, &v53);
      v38 = v27;
    }
    if ( v21 )
    {
      if ( v27 < 0 )
      {
LABEL_50:
        if ( v22 && v27 >= 0 && *v22 )
        {
          v27 = SeCaptureAcl(*v22, PreviousMode, v28, v29, NonPagedPoolNx, v33, (PVOID *)&v44, (unsigned int *)&v57);
          v38 = v27;
        }
        *(_OWORD *)v61 = *(_OWORD *)a17;
        if ( v23 && v27 >= 0 )
        {
          HIDWORD(v39) = *v23;
          v27 = SeCaptureSidAndAttributesArray(v23 + 2, 0, v33, v35, (__int64)&v45, (__int64)&v52);
          v38 = v27;
        }
        if ( v24 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v24, v26, 0LL, &v51);
          v38 = v27;
        }
        if ( a11 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(a11, v26, 0LL, &v50);
          v38 = v27;
        }
        if ( a13 && v27 >= 0 )
        {
          v41 = *(_DWORD *)a13;
          v36 = 1;
        }
        if ( v27 >= 0 )
          v27 = SepCreateTokenEx(
                  (HANDLE *)v54,
                  PreviousMode,
                  a2,
                  a3,
                  a4,
                  v60,
                  (__int64)&v56,
                  &v58,
                  (struct _SID_AND_ATTRIBUTES *)v43,
                  Count,
                  v48,
                  v39,
                  v40,
                  v46,
                  (void *)v47,
                  (void *)v49,
                  (void *)v44,
                  v61,
                  v51,
                  v50,
                  SHIDWORD(v39),
                  v45,
                  (_DWORD *)((unsigned __int64)&v41 & -(__int64)(v36 != 0)),
                  0);
        if ( v43 )
          SeReleaseLuidAndAttributesArray((void *)v43, PreviousMode);
        if ( v48 )
          SeReleaseLuidAndAttributesArray(v48, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v47 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v47, v26, v28);
        }
        if ( v49 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v49, v26, v28);
        }
        if ( v44 )
          SeReleaseAcl((void *)v44, PreviousMode);
        if ( v45 )
          SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
        if ( v51 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v50 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v27 >= 0 )
          *v18 = *(_QWORD *)v54;
        return (unsigned int)v27;
      }
      v27 = SeCaptureSid(*v21, PoolType, 1, (__int64)&v47);
      v38 = v27;
    }
    if ( v27 >= 0 )
    {
      v27 = SeCaptureSid(*(void **)a15, PoolType, 1, (__int64)&v49);
      v38 = v27;
    }
    goto LABEL_50;
  }
  return result;
}
