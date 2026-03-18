/*
 * XREFs of SepAdtStagingEvent @ 0x140650CA8
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x1404BD7B8 (SeAuditHandleCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14020083C (SepCheckAndCopySelfRelativeSD.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     ObNormalizeHandleValue @ 0x14062DFC4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
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
  __int64 v14; // r13
  int v15; // ebx
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // r8d
  int v20; // r14d
  int v21; // eax
  PVOID v22; // rdi
  PVOID v23; // r15
  int v24; // eax
  int v25; // eax
  __int16 *v26; // rcx
  unsigned int v27; // r12d
  char *PoolWithTag; // rax
  char *v29; // r14
  int v30; // eax
  int v31; // r13d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v36; // [rsp+28h] [rbp-E0h] BYREF
  size_t Size; // [rsp+2Ch] [rbp-DCh] BYREF
  PVOID Src; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  const UNICODE_STRING *v43; // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v44; // [rsp+68h] [rbp-A0h]
  _QWORD v45[132]; // [rsp+78h] [rbp-90h] BYREF

  v12 = 0;
  v43 = a4;
  v44 = a3;
  v42 = 0LL;
  v14 = *(_QWORD *)(a12 + 72);
  pImageFileName = 0LL;
  Size = 0LL;
  P = 0LL;
  Src = 0LL;
  LOWORD(v36) = 0;
  if ( !v14 || !*(_BYTE *)(v14 + 216) || a1 != 116 && a1 != 128 && RtlCompareUnicodeString(a4, &SepFileTypeName, 0) )
    return 1;
  v15 = SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName);
  if ( v15 >= 0 )
  {
    if ( a6 )
    {
      v16 = *(__int64 **)(a6 + 152);
      v17 = *(_QWORD *)(a6 + 24);
    }
    else
    {
      v16 = *(__int64 **)(a7 + 152);
      v17 = v42;
    }
    v18 = *(_QWORD *)(a7 + 24);
    v41 = *v16;
    memset(v45, 0, 0x418uLL);
    v45[0] = 0x12D200000003LL;
    LOWORD(v45[2]) = 129;
    v19 = 16;
    v20 = 8;
    if ( (a8 & 0x2000000) != 0 || (WORD1(v45[2]) = 8, !a10) )
      WORD1(v45[2]) = 16;
    v45[6] = v41;
    LODWORD(v45[3]) = 4;
    v45[7] = 0x2000000001LL;
    v21 = *(unsigned __int8 *)(v41 + 1);
    v45[10] = SeSubsystemName;
    v45[11] = 0x800000005LL;
    v45[12] = v17;
    HIDWORD(v45[3]) = 4 * v21 + 8;
    if ( !a6 )
      v45[12] = v18;
    v45[18] = SeSubsystemName;
    v45[15] = 0x2000000001LL;
    LODWORD(v45[1]) = 4;
    if ( v43 )
    {
      v24 = v43->Length + 16;
      v45[22] = v43;
      LODWORD(v45[19]) = 1;
      HIDWORD(v45[19]) = v24;
      if ( a5 )
      {
        if ( a1 == 116 || (LODWORD(v45[23]) = 1, a1 == 128) )
          LODWORD(v45[23]) = 2;
        v25 = *a5;
        v45[26] = a5;
        HIDWORD(v45[23]) = v25 + 16;
      }
      v45[27] = 0x80000000BLL;
      if ( v44 )
        v45[28] = ObNormalizeHandleValue(*v44);
      else
        v45[28] = 0LL;
      v45[32] = a11;
      v45[38] = pImageFileName;
      v26 = *(__int16 **)(v14 + 56);
      HIDWORD(v45[35]) = v19 + pImageFileName->Length;
      v45[31] = 0x80000000BLL;
      LODWORD(v45[35]) = 2;
      LODWORD(v45[1]) = 9;
      v15 = SepCheckAndCopySelfRelativeSD(v26, &P, (ULONG *)&Size, (_BYTE *)&v36 + 1);
      if ( v15 >= 0 )
      {
        v15 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v14 + 64), &Src, (ULONG *)&Size + 1, &v36);
        if ( v15 >= 0 )
        {
          v23 = P;
          v22 = Src;
          if ( !P && !Src )
            v20 = 0;
          v27 = HIDWORD(Size) - v20 + Size + 152;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v27, 0x70416553u);
          v29 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v27);
            *((_DWORD *)v29 + 34) = a10;
            v30 = a8;
            if ( a10 )
              v30 = a9;
            *((_DWORD *)v29 + 33) = 4;
            *(_DWORD *)v29 = v30 & 0xFDFFFFFF;
            *(_OWORD *)(v29 + 4) = *(_OWORD *)(v14 + 88);
            *(_OWORD *)(v29 + 20) = *(_OWORD *)(v14 + 104);
            *(_OWORD *)(v29 + 36) = *(_OWORD *)(v14 + 120);
            *(_OWORD *)(v29 + 52) = *(_OWORD *)(v14 + 136);
            *(_OWORD *)(v29 + 68) = *(_OWORD *)(v14 + 152);
            *(_OWORD *)(v29 + 84) = *(_OWORD *)(v14 + 168);
            *(_OWORD *)(v29 + 100) = *(_OWORD *)(v14 + 184);
            *(_OWORD *)(v29 + 116) = *(_OWORD *)(v14 + 200);
            v31 = Size;
            if ( v23 )
              memmove(v29 + 144, v23, (unsigned int)Size);
            if ( v22 )
              memmove(&v29[v31 + 144], v22, HIDWORD(Size));
            v32 = 10LL;
            v33 = 0LL;
            LODWORD(v45[1]) = 10;
            LODWORD(v45[39]) = 29;
            HIDWORD(v45[39]) = v27;
            v45[42] = v29;
            LODWORD(v45[43]) = 30;
            HIDWORD(v45[43]) = v27;
            v45[46] = v29;
            while ( 1 )
            {
              v34 = v33 + 4 * v32;
              ++v33;
              v45[v34 + 4] = 0LL;
              if ( v33 >= 2 )
                break;
              v32 = LODWORD(v45[1]);
            }
            ++LODWORD(v45[1]);
            SepAdtLogAuditRecord(v45);
            ExFreePoolWithTag(v29, 0);
          }
          else
          {
            v15 = -1073741670;
          }
          goto LABEL_18;
        }
      }
    }
    else
    {
      v15 = -1073741811;
    }
  }
  v22 = Src;
  v23 = P;
LABEL_18:
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( BYTE1(v36) && v23 )
    ExFreePoolWithTag(v23, 0);
  if ( (_BYTE)v36 && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v15 >= 0 )
    return 1;
  SepAuditFailed((unsigned int)v15);
  return v12;
}
