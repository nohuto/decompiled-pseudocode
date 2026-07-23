/*
 * XREFs of IopDeleteFileObjectExtension @ 0x1400990A0
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCleanupNotifications @ 0x140130814 (IopCleanupNotifications.c)
 *     PsReleaseSiloHardReference @ 0x14020F458 (PsReleaseSiloHardReference.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D7A0 (PspAdjustKeepAliveCountProcess.c)
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
  _QWORD **v8; // r14
  _QWORD *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  _BYTE *v13; // rbp
  _QWORD *v14; // r15
  KIRQL v15; // r12
  unsigned __int8 v16; // r13
  ULONG v17; // edx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  void *v22; // rcx
  _DWORD *v24; // [rsp+68h] [rbp+10h]

  v1 = *(_DWORD **)(a1 + 208);
  v24 = v1;
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 8; ++i )
  {
    if ( !*(_QWORD *)&v1[2 * i + 2] )
      continue;
    if ( i == 4 )
    {
      v8 = (_QWORD **)*((_QWORD *)v1 + 5);
      v9 = *v8;
      while ( v9 != v8 )
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        ExFreePoolWithTag(v10, 0);
      }
      goto LABEL_16;
    }
    if ( !i )
    {
      v11 = *((_QWORD *)v1 + 1);
      if ( v11 )
      {
        v12 = *(void **)(v11 + 8);
        if ( v12 )
          ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
      }
      goto LABEL_16;
    }
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
            v15 = KeAcquireSpinLockRaiseToDpc(&qword_140320C50);
            v16 = v13[18];
            if ( v13[16] == 1 )
              v13[17] = 1;
            else
              ExFreePoolWithTag(v13, 0);
            KeReleaseSpinLock(&qword_140320C50, v15);
            if ( *((_DWORD *)v14 + 4) )
            {
              PspAdjustKeepAliveCountProcess(v14[1], 0xFFFFFFFFLL, a1, v16);
              ObfDereferenceObjectWithTag((PVOID)v14[1], 0x746C6644u);
            }
            ExFreePoolWithTag(v14, 0);
          }
          while ( v5 );
          v1 = v24;
        }
        v6 = (void *)v3[1];
        if ( v6 )
        {
          v17 = 1953261124;
          goto LABEL_45;
        }
        goto LABEL_16;
      }
      if ( i != 6 )
      {
        if ( i == 2 )
        {
          v18 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
          if ( v18 )
          {
            do
            {
              v19 = (_QWORD *)v18[5];
              ExFreePoolWithTag(v18, 0);
              v18 = v19;
            }
            while ( v19 );
          }
        }
        else if ( i == 7 )
        {
          v20 = *((_QWORD *)v1 + 8);
          v21 = *(_DWORD *)(v20 + 4);
          if ( (v21 & 1) != 0 )
          {
            v22 = *(void **)(v20 + 8);
            *(_DWORD *)(v20 + 4) = v21 & 0xFFFFFFFE;
            PsReleaseSiloHardReference(v22);
          }
          v6 = *(void **)(v20 + 8);
          v17 = 1884516169;
LABEL_45:
          ObfDereferenceObjectWithTag(v6, v17);
        }
LABEL_16:
        ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
        continue;
      }
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
    }
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
