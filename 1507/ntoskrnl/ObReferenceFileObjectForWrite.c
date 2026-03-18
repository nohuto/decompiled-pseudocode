/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x1404BD320
 * Callers:
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400F3880 (ExSlowReplenishHandleTableEntry.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B00C (ExFastReplenishHandleTableEntry.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v7; // rbp
  _KPROCESS *Process; // rax
  unsigned int *v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned __int8 v17; // tt
  unsigned __int64 v18; // rbx
  __int16 v19; // ax
  void *v20; // rsi
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rax
  signed __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  volatile signed __int64 *v29; // rdi
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ebx
  signed __int32 v33[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  ULONG_PTR v36; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v7 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) == 0LL )
  {
    Process = CurrentThread->ApcState.Process;
    v9 = (unsigned int *)Process[1].ActiveProcessors.Bitmap[5];
    v36 = (ULONG_PTR)v9;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
      goto LABEL_3;
    return 3221225480LL;
  }
  if ( a2 || BugCheckParameter1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v9 = (unsigned int *)ObpKernelHandleTable;
  v7 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
  v36 = ObpKernelHandleTable;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v7 & 0x3FC) == 0 || (v10 = (_QWORD *)ExpLookupHandleTableEntry(v9, v7), (v11 = v10) == 0LL) )
  {
LABEL_47:
    if ( v7 )
      ExHandleLogBadReference((ULONG_PTR)v9, v7, KeGetCurrentThread()->PreviousMode);
    v18 = v36;
    v11 = 0LL;
    goto LABEL_33;
  }
  _m_prefetchw(v10);
  v12 = *v10;
  v13 = v11[1];
  *((_QWORD *)&v34 + 1) = v13;
  *(_QWORD *)&v34 = v12;
  v14 = v12;
  if ( (v12 & 0x1FFFE) == 0 )
    goto LABEL_28;
  while ( 1 )
  {
    if ( (v14 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v9, v11);
      _m_prefetchw(v11);
      v13 = v11[1];
      v9 = (unsigned int *)v36;
      *(_QWORD *)&v34 = *v11;
      v14 = v34;
      *((_QWORD *)&v34 + 1) = v13;
      goto LABEL_40;
    }
    v35 = v14 - 2;
    *(_QWORD *)&v16 = v14;
    *((_QWORD *)&v16 + 1) = v13;
    v17 = _InterlockedCompareExchange128(v11, v13, v14 - 2, (signed __int64 *)&v16);
    v15 = v16;
    v14 = v16;
    v34 = v16;
    v13 = *((_QWORD *)&v16 + 1);
    if ( v17 )
      break;
LABEL_40:
    if ( (v14 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_28:
        while ( 1 )
        {
          _m_prefetchw(v11);
          v25 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v25 )
            goto LABEL_47;
          ExpBlockOnLockedHandleEntry(v9, v11);
          v9 = (unsigned int *)v36;
        }
      }
      while ( v25 != _InterlockedCompareExchange64(v11, v25 - 1, v25) );
      v18 = ((__int64)*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v34 = *(_OWORD *)v11;
      v26 = (int)(ExSlowReplenishHandleTableEntry(v11) + 1);
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v18, v26);
      if ( v28 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v18 + 48, 0x10uLL, v26 + v28);
      _InterlockedExchangeAdd64(v11, 1uLL);
      _InterlockedOr(v33, 0);
      if ( *(_QWORD *)(v27 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v27 + 48), 0LL);
      goto LABEL_33;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v15 >> 1) != 16 )
  {
    v18 = (v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_10;
  }
  *(_QWORD *)&v34 = ((unsigned int)v14 ^ (2 * (unsigned int)((unsigned __int64)v15 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v14;
  v29 = (volatile signed __int64 *)(((__int64)v34 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = (unsigned __int64)v29;
  v30 = _InterlockedExchangeAdd64(v29, 0x7FF0uLL);
  if ( v30 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v29 + 6), 0x10uLL, v30 + 32752);
  v31 = ExFastReplenishHandleTableEntry(v11, (unsigned __int64 *)&v34, 32752);
  if ( v31 )
    _InterlockedExchangeAdd64(v29, -v31);
LABEL_33:
  LODWORD(v13) = DWORD2(v34);
  v14 = v34;
LABEL_10:
  v19 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v11 )
  {
    v32 = -1073741816;
    goto LABEL_58;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v18, 1, 1u, 1953261124);
  v20 = (void *)(v18 + 48);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18)] != IoFileObjectType )
  {
    v32 = -1073741788;
    goto LABEL_56;
  }
  v21 = (v14 >> 17) & 7;
  v22 = ((unsigned __int8)~*(_BYTE *)(v18 + 128) >> 5) & 4 | 2;
  a4[1] = v13 & 0x1FFFFFF;
  if ( (v13 & 0x2000000) != 0 )
    LOBYTE(v21) = v21 | 8;
  *a4 = v21 & 7;
  if ( (v13 & 0x1FFFFFF & (unsigned int)v22) == 0 )
  {
    v32 = -1073741790;
LABEL_56:
    PspDereferenceSiloObject(v20);
LABEL_58:
    *a3 = 0LL;
    return v32;
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
    {
      v23 = ObpInfoMaskToOffset[*(_BYTE *)(v18 + 26) & 0x7F];
      if ( v18 != v23 && *(_QWORD *)(v18 - v23 + 16) == 1LL )
      {
        v32 = -1073700858;
        goto LABEL_56;
      }
    }
  }
  if ( (*a4 & 4) != 0 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v36, v7, (_DWORD)v11, v18, v22) )
  {
    v32 = -1073741816;
    goto LABEL_56;
  }
  *a3 = v20;
  return 0LL;
}
