/*
 * XREFs of CmpParseKey @ 0x14043ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpDoesParseEnterRegistryA @ 0x14043A130 (CmpDoesParseEnterRegistryA.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        POBJECT_TYPE *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  struct _PRIVILEGE_SET *v13; // r15
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __int64 v17; // rcx
  _WORD *v18; // rdx
  bool v19; // zf
  __int16 v20; // ax
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  unsigned int v22; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r8d
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 *v30; // rcx
  int v31; // r8d
  __int64 v32; // rdi
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  int v35; // [rsp+38h] [rbp-C8h]
  __int128 v36; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  _WORD v39[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  _QWORD v41[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  _QWORD v46[18]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47[4]; // [rsp+150h] [rbp+50h] BYREF
  char v48; // [rsp+1A8h] [rbp+A8h]

  v48 = 0;
  v38 = 0LL;
  v13 = 0LL;
  v36 = *a7;
  memset(v46, 0, 0x88uLL);
  v14 = a8;
  v37[1] = v37;
  v15 = 0;
  LODWORD(a7) = 0;
  v37[0] = v37;
  *a10 = 0LL;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  v17 = (unsigned __int16)v36;
  if ( (_WORD)v36 )
  {
    v18 = (_WORD *)*((_QWORD *)&v36 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v36 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v17 >> 1) - 2) == 92 )
    {
      v19 = (_WORD)v17 == 2;
      LOWORD(v17) = v17 - 2;
      LOWORD(v36) = v17;
      if ( v19 )
        goto LABEL_12;
    }
    if ( (_WORD)v17 )
    {
      v20 = WORD1(v36);
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        LOWORD(v17) = v17 - 2;
        v20 -= 2;
        *((_QWORD *)&v36 + 1) = v18;
        LOWORD(v36) = v17;
        WORD1(v36) = v20;
      }
      while ( (_WORD)v17 );
    }
  }
LABEL_12:
  if ( !v14 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v17, 0xE8uLL, 0x34364D43u);
    v13 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0xE8uLL);
    v14 = (__int64)v13;
  }
  if ( !CmpDoesParseEnterRegistryA(a1, (__int64)&v36) || (*(_DWORD *)v14 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v14 & 0x800) != 0 && !CmpDoesParseEnterRegistryA(a1, (__int64)&v36) )
    {
      v22 = -1073741790;
      goto LABEL_57;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      goto LABEL_31;
    v46[13] = 1LL;
    LOBYTE(v24) = 1;
    LODWORD(v46[15]) = *(_DWORD *)(v14 + 28);
    HIDWORD(v46[15]) = a5;
    v46[14] = &v36;
    LOBYTE(v46[16]) = a4;
    LODWORD(v46[3]) = *(_DWORD *)(v14 + 24);
    v46[2] = CmKeyObjectType;
    LODWORD(v46[7]) = *(_DWORD *)(a3 + 16);
    v46[9] = a10;
    v46[0] = a6;
    v46[1] = a1;
    v46[12] = *(_QWORD *)(v14 + 80);
    if ( (*(_DWORD *)v14 & 1) != 0 )
    {
      v25 = 27;
      v39[0] = *(_WORD *)(v14 + 4);
      v39[1] = v39[0];
      v40 = *(_QWORD *)(v14 + 8);
      v26 = 26;
      v46[8] = v14 + 32;
      v46[4] = v39;
      v46[5] = *(_QWORD *)(a3 + 64);
      v46[6] = a9;
    }
    else
    {
      v25 = 29;
      v26 = 28;
    }
    v27 = CmpCallCallBacks(v26, (unsigned int)v46, v24, v25, a1, (__int64)v37);
    v22 = v27;
    if ( v27 < 0 )
    {
      if ( v27 == -1073740541 )
      {
        v28 = HIDWORD(v46[7]);
        *(_DWORD *)(a3 + 20) |= HIDWORD(v46[7]);
        *(_DWORD *)(a3 + 16) &= ~(v28 | 0x2000000);
        v22 = 0;
      }
LABEL_53:
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v33);
      }
      goto LABEL_57;
    }
    LODWORD(a1) = v46[1];
    v48 = 1;
    while ( 1 )
    {
LABEL_31:
      while ( 1 )
      {
        v47[0] = v36;
        v29 = CmpDoParseKey(a1, a3, a4, a5, a6, (__int64)v47, v14, v35, (__int64)&v38);
        v22 = v29;
        if ( v29 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_1402F2CF0 + 152 * *(unsigned int *)(v14 + 144), Executive, 0, 0, 0LL);
        *(_DWORD *)v14 &= ~0x100u;
      }
      if ( v29 != -1073741267 )
        break;
      if ( v15 >= 0x40 )
      {
        v22 = -1073741772;
LABEL_39:
        v30 = a10;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(v14 + 104) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v14 + 128), *(_QWORD *)(v14 + 136), 0LL, &a7);
        *(_DWORD *)(v14 + 104) &= ~4u;
        *(_DWORD *)(v14 + 128) = 0;
        *(_QWORD *)(v14 + 136) = 0LL;
      }
      ++v15;
    }
    if ( v29 < 0 )
      goto LABEL_39;
    v30 = a10;
    *a10 = v38;
LABEL_40:
    if ( !v48 )
      goto LABEL_53;
    v31 = *(_DWORD *)(a3 + 20);
    HIDWORD(v46[7]) = v31;
    if ( (*(_DWORD *)v14 & 1) != 0 )
    {
      v22 = CmPostCallbackNotification(27, *v30, v22, (__int64)v46, v37);
    }
    else
    {
      v32 = *v30;
      if ( !CmpCallBackCount )
      {
LABEL_50:
        if ( (v22 & 0x80000000) == 0 && v31 != *(_DWORD *)(a3 + 20) )
        {
          *(_DWORD *)(a3 + 20) = v31;
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v31 | 0x2000000);
        }
        goto LABEL_53;
      }
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v37[0] != v37 )
      {
        v41[0] = v32;
        v43 = 0LL;
        v44 = 0LL;
        v45 = 0LL;
        v41[2] = v46;
        v41[1] = v22;
        v42 = v22;
        CmpCallCallBacks(29, (unsigned int)v41, 0, 29, v32, (__int64)v37);
        v22 = v42;
      }
    }
    v31 = HIDWORD(v46[7]);
    goto LABEL_50;
  }
  v22 = -1073741790;
LABEL_57:
  if ( v13 )
  {
    CmpCleanupParseContext(v13, 0LL);
    MiDeleteSubsection(v13);
  }
  return v22;
}
