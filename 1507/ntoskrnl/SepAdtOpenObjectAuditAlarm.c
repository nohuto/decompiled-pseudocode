/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x1405867E8
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x140554E5C (SeAuditHandleCreation.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405BCDE4 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14024F73C (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x140587094 (ObNormalizeHandleValue.c)
 *     SepSDContainsAttributeACE @ 0x1406D7ED8 (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x1406D7F28 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

char __fastcall SepAdtOpenObjectAuditAlarm(
        unsigned __int16 a1,
        unsigned __int16 *a2,
        _QWORD *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        void *a6,
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
  int *v21; // rax
  int v22; // r15d
  __int64 *v23; // rax
  PVOID v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rdi
  int v27; // eax
  int v28; // r10d
  unsigned __int16 *v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  PVOID v33; // r12
  PVOID v34; // r13
  int v35; // eax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // ecx
  size_t v41; // rdi
  size_t v42; // rbx
  char *PoolWithTag; // rax
  size_t v44; // r8
  char *v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50; // r9d
  int v51; // r10d
  unsigned int v52; // ecx
  unsigned int v53; // edx
  _WORD *v54; // r8
  char *v55; // rax
  _DWORD *v56; // r10
  _OWORD *v57; // r9
  unsigned __int16 v58; // r11
  unsigned int v59; // edx
  unsigned int i; // r8d
  __int64 v61; // rcx
  PUNICODE_STRING v62; // rdx
  int Length; // ecx
  int v64; // ecx
  unsigned int v65; // edi
  int v66; // ecx
  __int16 *v67; // rbx
  PVOID v68; // rbx
  PVOID v69; // rcx
  int v70; // eax
  __int16 v71; // [rsp+28h] [rbp-E0h] BYREF
  char v72[2]; // [rsp+2Ah] [rbp-DEh] BYREF
  ULONG v73; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 v74; // [rsp+30h] [rbp-D8h]
  PVOID v75; // [rsp+38h] [rbp-D0h] BYREF
  size_t Size; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Src; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v78; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v81; // [rsp+68h] [rbp-A0h]
  __int64 v82; // [rsp+70h] [rbp-98h]
  _QWORD *v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v85; // [rsp+88h] [rbp-80h]
  unsigned __int16 *v86; // [rsp+90h] [rbp-78h]
  int *v87; // [rsp+98h] [rbp-70h]
  _QWORD v88[5]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v89[132]; // [rsp+C8h] [rbp-40h] BYREF
  int v90; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int64 v91; // [rsp+4ECh] [rbp+3E4h]
  int v92; // [rsp+4F4h] [rbp+3ECh]

  v19 = 0;
  P = a6;
  v82 = a19;
  v85 = a4;
  v83 = a3;
  v86 = a2;
  v74 = a1;
  v84 = a8;
  v78 = 0LL;
  v81 = 0LL;
  pImageFileName = 0LL;
  v88[1] = 0LL;
  v88[3] = 0LL;
  v90 = 0;
  v91 = 0LL;
  v92 = 0;
  LODWORD(Size) = 0;
  v73 = 0;
  Src = 0LL;
  v75 = 0LL;
  v71 = 0;
  v72[0] = 0;
  v88[0] = a7;
  v88[2] = a8;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(123LL, a12, a12 == 0, (__int64)v88) )
    return 1;
  v21 = &v90;
  if ( a18 )
    v21 = a18;
  v87 = v21;
  v22 = SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName);
  if ( v22 < 0 )
    goto LABEL_19;
  if ( a7 )
  {
    v23 = *(__int64 **)(a7 + 152);
    v24 = *(PVOID *)(a7 + 24);
  }
  else
  {
    v23 = *(__int64 **)(a8 + 152);
    v24 = v78;
  }
  v25 = *v23;
  v26 = *(_QWORD *)(a8 + 24);
  memset(v89, 0, 0x418uLL);
  v27 = 8;
  HIDWORD(v89[0]) = 4656;
  LOWORD(v89[2]) = v74;
  WORD1(v89[2]) = 8;
  if ( a14 == 2 )
    v27 = 3;
  v28 = 16;
  LODWORD(v89[0]) = v27;
  if ( !a12 )
    WORD1(v89[2]) = 16;
  v29 = SeSubsystemName;
  v89[6] = v25;
  v30 = 4LL;
  LODWORD(v89[7]) = 1;
  if ( v86 )
    v29 = v86;
  LODWORD(v89[3]) = 4;
  v31 = *(unsigned __int8 *)(v25 + 1);
  v89[10] = v29;
  v89[11] = 0x800000005LL;
  v89[12] = v24;
  HIDWORD(v89[3]) = 4 * v31 + 8;
  v32 = *v29 + 16;
  HIDWORD(v89[7]) = v32;
  if ( !a7 )
    v89[12] = v26;
  v89[18] = v29;
  LODWORD(v89[15]) = 1;
  HIDWORD(v89[15]) = v32;
  LODWORD(v89[1]) = 4;
  if ( v85 )
  {
    v35 = *v85 + 16;
    v89[22] = v85;
    HIDWORD(v89[19]) = v35;
    LODWORD(v89[19]) = 1;
    if ( a5 )
    {
      if ( v74 == 116 || (LODWORD(v89[23]) = 1, v74 == 128) )
        LODWORD(v89[23]) = 2;
      v36 = *a5;
      v89[26] = a5;
      HIDWORD(v89[23]) = v36 + 16;
    }
    v89[27] = 0x80000000BLL;
    if ( v83 )
      v89[28] = ObNormalizeHandleValue(*v83);
    else
      v89[28] = 0LL;
    v89[34] = v87;
    v37 = a10;
    LODWORD(v89[31]) = 13;
    HIDWORD(v89[31]) = v28;
    LODWORD(v89[35]) = 7;
    HIDWORD(v89[35]) = v30;
    v89[37] = v30;
    if ( !a12 )
      v37 = a9;
    v38 = v82;
    v89[36] = v37;
    LODWORD(v89[1]) = 9;
    if ( v82 && (v39 = *(_QWORD *)(v82 + 72)) != 0 )
    {
      v22 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v39 + 56), &Src, (ULONG *)&Size, &v71);
      if ( v22 < 0 )
        goto LABEL_19;
      v22 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(*(_QWORD *)(v38 + 72) + 64LL), &v75, &v73, v72);
      if ( v22 < 0 )
        goto LABEL_19;
      v34 = Src;
      v33 = v75;
      if ( Src || v75 )
      {
        v40 = 8;
        goto LABEL_52;
      }
    }
    else
    {
      v34 = Src;
      v33 = v75;
    }
    v40 = 0;
LABEL_52:
    v41 = (unsigned int)Size;
    LODWORD(v75) = Size + v73 - v40 + 152;
    v42 = (unsigned int)v75;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v75, 0x70416553u);
    v78 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v22 = -1073741670;
      goto LABEL_20;
    }
    v44 = v42;
    v45 = PoolWithTag;
    memset(PoolWithTag, 0, v44);
    *((_DWORD *)v45 + 34) = a12;
    v46 = a9;
    if ( a12 )
      v46 = a10;
    *((_DWORD *)v45 + 33) = 4;
    *(_DWORD *)v45 = v46 & 0xFDFFFFFF;
    if ( v82 )
    {
      v47 = *(_QWORD *)(v82 + 72);
      if ( v47 )
      {
        *(_OWORD *)(v45 + 4) = *(_OWORD *)(v47 + 88);
        *(_OWORD *)(v45 + 20) = *(_OWORD *)(v47 + 104);
        *(_OWORD *)(v45 + 36) = *(_OWORD *)(v47 + 120);
        *(_OWORD *)(v45 + 52) = *(_OWORD *)(v47 + 136);
        *(_OWORD *)(v45 + 68) = *(_OWORD *)(v47 + 152);
        *(_OWORD *)(v45 + 84) = *(_OWORD *)(v47 + 168);
        *(_OWORD *)(v45 + 100) = *(_OWORD *)(v47 + 184);
        *(_OWORD *)(v45 + 116) = *(_OWORD *)(v47 + 200);
      }
    }
    if ( v34 )
      memmove(v45 + 144, v34, v41);
    if ( v33 )
      memmove(&v45[v41 + 144], v33, v73);
    HIDWORD(v89[39]) = (_DWORD)v75;
    v48 = a10;
    LODWORD(v89[39]) = 29;
    v89[42] = v45;
    v89[43] = 0x40000000ALL;
    if ( !a12 )
      v48 = a9;
    v89[44] = v48;
    if ( a11 )
    {
      v49 = *a11;
      if ( *a11 )
      {
        LODWORD(v89[47]) = 8;
        v89[50] = a11;
        HIDWORD(v89[47]) = 12 * (v49 - 1) + 20;
      }
    }
    v50 = 12;
    LODWORD(v89[1]) = 12;
    if ( a16 )
    {
      v51 = a12 ? 1 : 2;
      v73 = v51;
      v52 = 0;
      v53 = 0;
      v54 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v53 || ((unsigned __int16)v51 & *v54) != 0 )
          ++v52;
        ++v53;
        v54 += 24;
      }
      while ( v53 < a16 );
      if ( v52 )
      {
        v55 = (char *)ExAllocatePoolWithTag(PagedPool, 24LL * v52, 0x70416553u);
        v81 = v55;
        if ( !v55 )
        {
          v22 = -1073741670;
LABEL_101:
          ExFreePoolWithTag(v78, 0);
          goto LABEL_20;
        }
        v56 = a17;
        v57 = (_OWORD *)(a15 + 4);
        v58 = v73;
        v59 = 0;
        for ( i = 0; i < a16; ++i )
        {
          if ( !i || (v58 & *((_WORD *)v57 - 1)) != 0 )
          {
            v61 = 3LL * v59;
            *(_OWORD *)&v55[8 * v61] = *v57;
            *(_WORD *)&v55[8 * v61 + 18] = *((_WORD *)v57 - 2);
            if ( i )
            {
              *(_WORD *)&v55[24 * v59 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v55[24 * v59 + 20] = *v56;
            }
            else
            {
              *(_WORD *)&v55[24 * v59 + 16] = 1;
              *(_DWORD *)&v55[24 * v59 + 20] = 0;
            }
            ++v59;
          }
          v57 += 3;
          ++v56;
        }
        v89[54] = v55;
        v34 = Src;
        v50 = 13;
        HIDWORD(v89[51]) = 24 * v59;
        LODWORD(v89[51]) = 9;
        v89[53] = 4LL;
        LODWORD(v89[1]) = 13;
        HIDWORD(v89[0]) = 4661;
      }
    }
    v62 = pImageFileName;
    LODWORD(v89[4 * v50 + 3]) = 27;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = 4;
    v89[4 * LODWORD(v89[1]) + 4] = *(unsigned int *)(v84 + 128);
    ++LODWORD(v89[1]);
    LODWORD(v89[4 * LODWORD(v89[1]) + 3]) = 11;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = 8;
    v89[4 * LODWORD(v89[1]) + 4] = a13;
    Length = v62->Length;
    ++LODWORD(v89[1]);
    LODWORD(v89[4 * LODWORD(v89[1]) + 3]) = 2;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = Length + 16;
    v64 = v74;
    v89[4 * LODWORD(v89[1]) + 6] = v62;
    v65 = ++LODWORD(v89[1]);
    v66 = v64 - 116;
    if ( !v66 || v66 == 12 )
    {
      v67 = (__int16 *)P;
      if ( P )
      {
        if ( HIDWORD(v89[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(P) )
        {
          v22 = SepCheckAndCopySelfRelativeSD(v67, &P, (ULONG *)&Size, (_BYTE *)&v71 + 1);
          if ( v22 < 0 )
            goto LABEL_99;
          v68 = P;
          v69 = P;
          LODWORD(v89[4 * v65 + 3]) = 31;
          v70 = SepSecurityDescriptorStrictLength(v69);
          HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = v70;
          v89[4 * LODWORD(v89[1]) + 6] = v68;
          v89[4 * LODWORD(v89[1]) + 4] = 32LL;
          v89[4 * LODWORD(v89[1]) + 5] = 0LL;
          v65 = v89[1];
        }
      }
    }
    LODWORD(v89[1]) = v65 + 1;
    SepAdtLogAuditRecord(v89);
LABEL_99:
    if ( v81 )
      ExFreePoolWithTag(v81, 0);
    goto LABEL_101;
  }
  v22 = -1073741811;
LABEL_19:
  v33 = v75;
  v34 = Src;
LABEL_20:
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( HIBYTE(v71) && P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v71 && v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v72[0] && v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v22 >= 0 )
    return 1;
  SepAuditFailed((unsigned int)v22);
  return v19;
}
