/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140033110
 * Callers:
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopCleanupNotifications @ 0x14011C4BC (IopCleanupNotifications.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406C00C8 (PspAdjustKeepAliveCountProcess.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 i; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // r14
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  void *v12; // rcx
  _BYTE *v13; // rbp
  _QWORD *v14; // r15
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v16; // r12
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v21; // [rsp+68h] [rbp+10h]

  v1 = *(_DWORD **)(a1 + 208);
  v21 = v1;
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 7; ++i )
  {
    if ( !*(_QWORD *)&v1[2 * i + 2] )
      continue;
    if ( i == 4 )
    {
      v10 = (_QWORD **)*((_QWORD *)v1 + 5);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        ExFreePoolWithTag(v12, 0);
      }
      goto LABEL_17;
    }
    if ( i )
    {
      if ( i == 5 )
      {
        FsRtlFreeExtraCreateParameter(*((PVOID *)v1 + 6));
      }
      else
      {
        if ( i == 1 )
        {
          v3 = (_QWORD *)*((_QWORD *)v1 + 2);
          v4 = (_QWORD *)v3[2];
          while ( v4 )
          {
            v7 = v4;
            v4 = (_QWORD *)*v4;
            ExFreePoolWithTag(v7, 0);
          }
          v5 = (_QWORD *)v3[3];
          if ( v5 )
          {
            do
            {
              v13 = (_BYTE *)v5[3];
              v14 = v5;
              v5 = (_QWORD *)*v5;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireSpinLockInstrumented(qword_14034BB50);
              }
              else if ( _interlockedbittestandset64((volatile signed __int32 *)qword_14034BB50, 0LL) )
              {
                KxWaitForSpinLockAndAcquire(qword_14034BB50);
              }
              v16 = v13[18];
              if ( v13[16] == 1 )
                v13[17] = 1;
              else
                ExFreePoolWithTag(v13, 0);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
              else
                _InterlockedAnd64(qword_14034BB50, 0LL);
              __writecr8(CurrentIrql);
              if ( *((_DWORD *)v14 + 4) )
              {
                PspAdjustKeepAliveCountProcess(v14[1], 0xFFFFFFFFLL, a1, v16);
                ObfDereferenceObjectWithTag((PVOID)v14[1], 0x746C6644u);
              }
              ExFreePoolWithTag(v14, 0);
            }
            while ( v5 );
            v1 = v21;
          }
          v6 = (void *)v3[1];
          if ( v6 )
            ObfDereferenceObjectWithTag(v6, 0x746C6644u);
LABEL_17:
          ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
          continue;
        }
        if ( i != 6 )
        {
          if ( i == 2 )
          {
            v17 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
            if ( v17 )
            {
              do
              {
                v18 = (_QWORD *)v17[5];
                ExFreePoolWithTag(v17, 0);
                v17 = v18;
              }
              while ( v18 );
            }
          }
          goto LABEL_17;
        }
        ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
      }
    }
    else
    {
      v8 = *((_QWORD *)v1 + 1);
      if ( !v8 )
        goto LABEL_17;
      v9 = *(void **)(v8 + 8);
      if ( !v9 )
        goto LABEL_17;
      ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
      ExFreePoolWithTag(*((PVOID *)v1 + 1), 0);
    }
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  ExFreePoolWithTag(v1, 0);
}
