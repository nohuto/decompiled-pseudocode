/*
 * XREFs of SepAdtStagingEvent @ 0x14069037C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
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
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     ObNormalizeHandleValue @ 0x140666180 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

char __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        unsigned __int64 *a3,
        const UNICODE_STRING *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  char v12; // si
  void *v14; // r14
  void *v15; // r15
  __int64 v16; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // ebx
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  int v22; // r8d
  int v23; // r12d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r13
  int v28; // eax
  __int16 *v29; // rcx
  int v30; // eax
  SIZE_T v31; // r12
  char *PoolWithTag; // rax
  char *v33; // rdi
  int v34; // eax
  ULONG v35; // r13d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _WORD v40[2]; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size; // [rsp+2Ch] [rbp-DCh] BYREF
  __int16 Size_4; // [rsp+30h] [rbp-D8h]
  ULONG v43; // [rsp+34h] [rbp-D4h] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  void *v45; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+58h] [rbp-B0h]
  const UNICODE_STRING *v49; // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v50; // [rsp+68h] [rbp-A0h]
  __int64 v51; // [rsp+70h] [rbp-98h]
  _QWORD v52[132]; // [rsp+78h] [rbp-90h] BYREF

  v12 = 0;
  Size_4 = a1;
  v49 = a4;
  v14 = 0LL;
  v50 = a3;
  v15 = 0LL;
  v16 = *(_QWORD *)(a12 + 72);
  v47 = 0LL;
  P = 0LL;
  Size = 0;
  v43 = 0;
  Src = 0LL;
  v45 = 0LL;
  v40[0] = 0;
  v51 = v16;
  if ( !v16 || !*(_BYTE *)(v16 + 216) || a1 != 117 && a1 != 129 && RtlCompareUnicodeString(a4, &SepFileTypeName, 0) )
    return 1;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
    {
      v19 = *(__int64 **)(a6 + 152);
      v20 = *(_QWORD *)(a6 + 24);
    }
    else
    {
      v19 = *(__int64 **)(a7 + 152);
      v20 = v47;
    }
    v21 = *(_QWORD *)(a7 + 24);
    v48 = *v19;
    memset(v52, 0, 0x418uLL);
    v52[0] = 0x12D200000003LL;
    LOWORD(v52[2]) = 130;
    v22 = 16;
    v23 = 8;
    if ( (a8 & 0x2000000) != 0 || (WORD1(v52[2]) = 8, !a10) )
      WORD1(v52[2]) = 16;
    v52[6] = v48;
    LODWORD(v52[3]) = 4;
    v52[7] = 0x2000000001LL;
    v24 = *(unsigned __int8 *)(v48 + 1);
    v52[10] = &SeSubsystemName;
    v52[11] = 0x800000005LL;
    v52[12] = v20;
    HIDWORD(v52[3]) = 4 * v24 + 8;
    if ( !a6 )
      v52[12] = v21;
    v52[18] = &SeSubsystemName;
    v52[15] = 0x2000000001LL;
    LODWORD(v52[1]) = 4;
    if ( v49 )
    {
      v25 = v49->Length + 16;
      v52[22] = v49;
      LODWORD(v52[19]) = 1;
      HIDWORD(v52[19]) = v25;
      if ( a5 )
      {
        if ( Size_4 == 117 || (LODWORD(v52[23]) = 1, Size_4 == 129) )
          LODWORD(v52[23]) = 2;
        v26 = *a5;
        v52[26] = a5;
        HIDWORD(v52[23]) = v26 + 16;
      }
      v52[27] = 0x80000000BLL;
      if ( v50 )
        v52[28] = ObNormalizeHandleValue(*v50);
      else
        v52[28] = 0LL;
      v27 = v51;
      v52[32] = a11;
      v28 = v22 + *(unsigned __int16 *)P;
      v52[38] = P;
      v29 = *(__int16 **)(v51 + 56);
      HIDWORD(v52[35]) = v28;
      v52[31] = 0x80000000BLL;
      LODWORD(v52[35]) = 2;
      LODWORD(v52[1]) = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(v29, &Src, &Size, v40);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v14 = Src;
      }
      else
      {
        v30 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v27 + 64), &v45, &v43, (_BYTE *)v40 + 1);
        v15 = v45;
        AllocatedFullProcessImageName = v30;
        v14 = Src;
        if ( v30 >= 0 )
        {
          if ( !Src && !v45 )
            v23 = 0;
          v31 = v43 - v23 + Size + 152;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x70416553u);
          v33 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)v31);
            *((_DWORD *)v33 + 34) = a10;
            v34 = a8;
            if ( a10 )
              v34 = a9;
            *((_DWORD *)v33 + 33) = 4;
            *(_DWORD *)v33 = v34 & 0xFDFFFFFF;
            *(_OWORD *)(v33 + 4) = *(_OWORD *)(v27 + 88);
            *(_OWORD *)(v33 + 20) = *(_OWORD *)(v27 + 104);
            *(_OWORD *)(v33 + 36) = *(_OWORD *)(v27 + 120);
            *(_OWORD *)(v33 + 52) = *(_OWORD *)(v27 + 136);
            *(_OWORD *)(v33 + 68) = *(_OWORD *)(v27 + 152);
            *(_OWORD *)(v33 + 84) = *(_OWORD *)(v27 + 168);
            *(_OWORD *)(v33 + 100) = *(_OWORD *)(v27 + 184);
            *(_OWORD *)(v33 + 116) = *(_OWORD *)(v27 + 200);
            v35 = Size;
            if ( v14 )
              memmove(v33 + 144, v14, Size);
            if ( v15 )
              memmove(&v33[v35 + 144], v15, v43);
            v36 = 10LL;
            v37 = 0LL;
            LODWORD(v52[1]) = 10;
            LODWORD(v52[39]) = 29;
            HIDWORD(v52[39]) = v31;
            v52[42] = v33;
            LODWORD(v52[43]) = 30;
            HIDWORD(v52[43]) = v31;
            v52[46] = v33;
            while ( 1 )
            {
              v38 = v37 + 4 * v36;
              ++v37;
              v52[v38 + 4] = 0LL;
              if ( v37 >= 2 )
                break;
              v36 = LODWORD(v52[1]);
            }
            ++LODWORD(v52[1]);
            SepAdtLogAuditRecord(v52);
            ExFreePoolWithTag(v33, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( LOBYTE(v40[0]) && v14 )
    ExFreePoolWithTag(v14, 0);
  if ( HIBYTE(v40[0]) && v15 )
    ExFreePoolWithTag(v15, 0);
  if ( AllocatedFullProcessImageName >= 0 )
    return 1;
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return v12;
}
