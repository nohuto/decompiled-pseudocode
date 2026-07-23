/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14068F610
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14057FEDC (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140219F5C (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     ObNormalizeHandleValue @ 0x140666180 (ObNormalizeHandleValue.c)
 *     SepSDContainsAttributeACE @ 0x140695848 (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x140695898 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

char __fastcall SepAdtOpenObjectAuditAlarm(
        unsigned __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        int *a18,
        __int64 a19)
{
  char v19; // si
  __int16 *v20; // rdi
  void *v21; // rbx
  void *v22; // r12
  int *v24; // rax
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // r14d
  __int64 *v27; // rax
  PVOID v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rdi
  int v31; // eax
  int v32; // r10d
  const int *v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // ecx
  size_t v42; // rdi
  char *PoolWithTag; // rax
  char *v44; // rbx
  unsigned int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r9d
  __int16 v49; // r12
  unsigned int v50; // ecx
  unsigned int v51; // edx
  _WORD *v52; // r8
  _WORD *v53; // r13
  _DWORD *v54; // r10
  _OWORD *v55; // r9
  unsigned int v56; // edx
  unsigned int i; // r8d
  __int64 v58; // rcx
  unsigned __int16 *v59; // rdx
  int v60; // ecx
  int v61; // ecx
  unsigned int v62; // ebx
  int v63; // ecx
  int v64; // eax
  __int16 *v65; // rcx
  int v66; // eax
  __int16 v67; // [rsp+28h] [rbp-E0h] BYREF
  char v68; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v69; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  void *v72; // [rsp+40h] [rbp-C8h] BYREF
  size_t v73; // [rsp+48h] [rbp-C0h] BYREF
  __int16 *v74; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h]
  __int64 v76; // [rsp+60h] [rbp-A8h]
  __int16 *v77; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v78; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79; // [rsp+78h] [rbp-90h]
  const int *v80; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v81; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v82; // [rsp+90h] [rbp-78h]
  int *v83; // [rsp+98h] [rbp-70h]
  _QWORD v84[5]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v85[132]; // [rsp+C8h] [rbp-40h] BYREF
  int v86; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int64 v87; // [rsp+4ECh] [rbp+3E4h]
  int v88; // [rsp+4F4h] [rbp+3ECh]

  v19 = 0;
  v20 = a6;
  v21 = 0LL;
  v22 = 0LL;
  v69 = a1;
  v79 = a19;
  v81 = a4;
  v82 = a3;
  v80 = a2;
  v76 = a8;
  v84[2] = a8;
  v74 = a6;
  v77 = a6;
  P = 0LL;
  v78 = 0LL;
  v84[1] = 0LL;
  v84[3] = 0LL;
  v86 = 0;
  v87 = 0LL;
  v88 = 0;
  LODWORD(Size) = 0;
  LODWORD(v73) = 0;
  Src = 0LL;
  v72 = 0LL;
  v68 = 0;
  v67 = 0;
  v84[0] = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, (__int64)v84) )
    return 1;
  v24 = &v86;
  if ( a18 )
    v24 = a18;
  v83 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v78);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v27 = *(__int64 **)(a7 + 152);
      v28 = *(PVOID *)(a7 + 24);
    }
    else
    {
      v27 = *(__int64 **)(v76 + 152);
      v28 = P;
    }
    v29 = *v27;
    v30 = *(_QWORD *)(v76 + 24);
    memset(v85, 0, 0x418uLL);
    v31 = 8;
    HIDWORD(v85[0]) = 4656;
    LOWORD(v85[2]) = v69;
    WORD1(v85[2]) = 8;
    if ( a14 == 2 )
      v31 = 3;
    v32 = 16;
    LODWORD(v85[0]) = v31;
    if ( !a12 )
      WORD1(v85[2]) = 16;
    v33 = &SeSubsystemName;
    v85[6] = v29;
    v34 = 4LL;
    LODWORD(v85[7]) = 1;
    if ( v80 )
      v33 = v80;
    LODWORD(v85[3]) = 4;
    v35 = *(unsigned __int8 *)(v29 + 1);
    v85[10] = v33;
    v85[11] = 0x800000005LL;
    v85[12] = v28;
    HIDWORD(v85[3]) = 4 * v35 + 8;
    v36 = *(unsigned __int16 *)v33 + 16;
    HIDWORD(v85[7]) = v36;
    if ( !a7 )
      v85[12] = v30;
    v85[18] = v33;
    LODWORD(v85[15]) = 1;
    HIDWORD(v85[15]) = v36;
    LODWORD(v85[1]) = 4;
    if ( !v81 )
    {
      AllocatedFullProcessImageName = -1073741811;
LABEL_19:
      v20 = v74;
LABEL_91:
      v21 = Src;
      v22 = v72;
      goto LABEL_92;
    }
    v37 = *v81 + 16;
    v85[22] = v81;
    HIDWORD(v85[19]) = v37;
    LODWORD(v85[19]) = 1;
    if ( a5 )
    {
      if ( v69 == 117 || (LODWORD(v85[23]) = 1, v69 == 129) )
        LODWORD(v85[23]) = 2;
      v38 = *a5;
      v85[26] = a5;
      HIDWORD(v85[23]) = v38 + 16;
    }
    v85[27] = 0x80000000BLL;
    if ( v82 )
      v85[28] = ObNormalizeHandleValue(*v82);
    else
      v85[28] = 0LL;
    v85[34] = v83;
    v85[36] = a10;
    LODWORD(v85[31]) = 13;
    HIDWORD(v85[31]) = v32;
    LODWORD(v85[35]) = 7;
    HIDWORD(v85[35]) = v34;
    v85[37] = v34;
    if ( !a12 )
      v85[36] = a9;
    v39 = v79;
    LODWORD(v85[1]) = 9;
    if ( !v79 )
      goto LABEL_37;
    v40 = *(_QWORD *)(v79 + 72);
    if ( !v40 )
      goto LABEL_37;
    AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                      *(__int16 **)(v40 + 56),
                                      &Src,
                                      (ULONG *)&Size,
                                      (_BYTE *)&v67 + 1);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_19;
    AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                      *(__int16 **)(*(_QWORD *)(v39 + 72) + 64LL),
                                      &v72,
                                      (ULONG *)&v73,
                                      &v68);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_19;
    if ( Src || v72 )
      v41 = 8;
    else
LABEL_37:
      v41 = 0;
    v42 = (unsigned int)(v73 - v41 + Size + 152);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v42, 0x70416553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_19;
    }
    v44 = PoolWithTag;
    memset(PoolWithTag, 0, v42);
    *((_DWORD *)v44 + 34) = a12;
    v45 = a9;
    if ( a12 )
      v45 = a10;
    *((_DWORD *)v44 + 33) = 4;
    *(_DWORD *)v44 = v45 & 0xFDFFFFFF;
    if ( v79 )
    {
      v46 = *(_QWORD *)(v79 + 72);
      if ( v46 )
      {
        *(_OWORD *)(v44 + 4) = *(_OWORD *)(v46 + 88);
        *(_OWORD *)(v44 + 20) = *(_OWORD *)(v46 + 104);
        *(_OWORD *)(v44 + 36) = *(_OWORD *)(v46 + 120);
        *(_OWORD *)(v44 + 52) = *(_OWORD *)(v46 + 136);
        *(_OWORD *)(v44 + 68) = *(_OWORD *)(v46 + 152);
        *(_OWORD *)(v44 + 84) = *(_OWORD *)(v46 + 168);
        *(_OWORD *)(v44 + 100) = *(_OWORD *)(v46 + 184);
        *(_OWORD *)(v44 + 116) = *(_OWORD *)(v46 + 200);
      }
    }
    if ( Src )
      memmove(v44 + 144, Src, (unsigned int)Size);
    if ( v72 )
      memmove(&v44[(unsigned int)Size + 144], v72, (unsigned int)v73);
    LODWORD(v85[39]) = 29;
    HIDWORD(v85[39]) = v42;
    v85[42] = v44;
    v85[43] = 0x40000000ALL;
    v85[44] = a10;
    if ( !a12 )
      v85[44] = a9;
    if ( a11 )
    {
      v47 = *a11;
      if ( *a11 )
      {
        LODWORD(v85[47]) = 8;
        v85[50] = a11;
        HIDWORD(v85[47]) = 12 * (v47 - 1) + 20;
      }
    }
    v48 = 12;
    LODWORD(v85[1]) = 12;
    if ( !a16 )
      goto LABEL_78;
    v49 = a12 ? 1 : 2;
    v50 = 0;
    v51 = 0;
    v52 = (_WORD *)(a15 + 2);
    do
    {
      if ( !v51 || ((unsigned __int16)v49 & *v52) != 0 )
        ++v50;
      ++v51;
      v52 += 24;
    }
    while ( v51 < a16 );
    if ( v50 )
    {
      v53 = ExAllocatePoolWithTag(PagedPool, 24LL * v50, 0x70416553u);
      if ( !v53 )
      {
        v20 = v74;
        AllocatedFullProcessImageName = -1073741670;
LABEL_90:
        ExFreePoolWithTag(P, 0);
        goto LABEL_91;
      }
      v54 = a17;
      v55 = (_OWORD *)(a15 + 4);
      v56 = 0;
      for ( i = 0; i < a16; ++i )
      {
        if ( !i || ((unsigned __int16)v49 & *((_WORD *)v55 - 1)) != 0 )
        {
          v58 = 3LL * v56;
          *(_OWORD *)&v53[4 * v58] = *v55;
          v53[4 * v58 + 9] = *((_WORD *)v55 - 2);
          if ( i )
          {
            v53[12 * v56 + 8] = 0;
            if ( a17 && a12 )
              *(_DWORD *)&v53[12 * v56 + 10] = *v54;
          }
          else
          {
            v53[12 * v56 + 8] = 1;
            *(_DWORD *)&v53[12 * v56 + 10] = 0;
          }
          ++v56;
        }
        v55 += 3;
        ++v54;
      }
      LODWORD(v85[51]) = 9;
      v48 = 13;
      HIDWORD(v85[51]) = 24 * v56;
      v85[54] = v53;
      v85[53] = 4LL;
      LODWORD(v85[1]) = 13;
      HIDWORD(v85[0]) = 4661;
    }
    else
    {
LABEL_78:
      v53 = 0LL;
    }
    v59 = (unsigned __int16 *)v78;
    LODWORD(v85[4 * v48 + 3]) = 27;
    HIDWORD(v85[4 * LODWORD(v85[1]) + 3]) = 4;
    v85[4 * LODWORD(v85[1]) + 4] = *(unsigned int *)(v76 + 128);
    ++LODWORD(v85[1]);
    LODWORD(v85[4 * LODWORD(v85[1]) + 3]) = 11;
    HIDWORD(v85[4 * LODWORD(v85[1]) + 3]) = 8;
    v85[4 * LODWORD(v85[1]) + 4] = a13;
    v60 = *v59;
    ++LODWORD(v85[1]);
    LODWORD(v85[4 * LODWORD(v85[1]) + 3]) = 2;
    HIDWORD(v85[4 * LODWORD(v85[1]) + 3]) = v60 + 16;
    v61 = v69;
    v85[4 * LODWORD(v85[1]) + 6] = v59;
    v62 = ++LODWORD(v85[1]);
    v63 = v61 - 117;
    if ( v63 && v63 != 12 )
    {
      v20 = v74;
    }
    else
    {
      v20 = v74;
      if ( v74 && HIDWORD(v85[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v74) )
      {
        v64 = SepCheckAndCopySelfRelativeSD(v20, (PVOID *)&v77, (ULONG *)&Size, &v67);
        v20 = v77;
        AllocatedFullProcessImageName = v64;
        if ( v64 < 0 )
          goto LABEL_88;
        v65 = v77;
        LODWORD(v85[4 * v62 + 3]) = 31;
        v66 = SepSecurityDescriptorStrictLength(v65);
        HIDWORD(v85[4 * LODWORD(v85[1]) + 3]) = v66;
        v85[4 * LODWORD(v85[1]) + 6] = v20;
        v85[4 * LODWORD(v85[1]) + 4] = 32LL;
        v85[4 * LODWORD(v85[1]) + 5] = 0LL;
        v62 = v85[1];
      }
    }
    LODWORD(v85[1]) = v62 + 1;
    SepAdtLogAuditRecord(v85);
LABEL_88:
    if ( v53 )
      ExFreePoolWithTag(v53, 0);
    goto LABEL_90;
  }
LABEL_92:
  if ( v78 )
    ExFreePoolWithTag(v78, 0);
  if ( (_BYTE)v67 && v20 )
    ExFreePoolWithTag(v20, 0);
  if ( HIBYTE(v67) && v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v68 && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( AllocatedFullProcessImageName >= 0 )
    return 1;
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return v19;
}
