/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140091B50
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopCleanupNotifications @ 0x1400D0F40 (IopCleanupNotifications.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14063F054 (PspAdjustKeepAliveCountProcess.c)
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
  KIRQL v15; // r12
  unsigned __int8 v16; // r13
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  _DWORD *v20; // [rsp+68h] [rbp+10h]

  v1 = *(_DWORD **)(a1 + 208);
  v20 = v1;
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 8; ++i )
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
      goto LABEL_16;
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
              v15 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
              v16 = v13[18];
              if ( v13[16] == 1 )
                v13[17] = 1;
              else
                ExFreePoolWithTag(v13, 0);
              KeReleaseSpinLock(&qword_1402FB6D0, v15);
              if ( *((_DWORD *)v14 + 4) )
              {
                PspAdjustKeepAliveCountProcess(v14[1], 0xFFFFFFFFLL, a1, v16);
                ObfDereferenceObjectWithTag((PVOID)v14[1], 0x746C6644u);
              }
              ExFreePoolWithTag(v14, 0);
            }
            while ( v5 );
            v1 = v20;
          }
          v6 = (void *)v3[1];
          if ( v6 )
LABEL_42:
            ObfDereferenceObjectWithTag(v6, 0x746C6644u);
          goto LABEL_16;
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
          else if ( i == 7 )
          {
            v6 = *(void **)(*((_QWORD *)v1 + 8) + 8LL);
            if ( v6 )
              goto LABEL_42;
          }
LABEL_16:
          ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
          continue;
        }
        ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
      }
    }
    else
    {
      v8 = *((_QWORD *)v1 + 1);
      if ( !v8 )
        goto LABEL_16;
      v9 = *(void **)(v8 + 8);
      if ( !v9 )
        goto LABEL_16;
      ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
      ExFreePoolWithTag(*((PVOID *)v1 + 1), 0);
    }
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
