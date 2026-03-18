/*
 * XREFs of SepRmGlobalSaclSetWrkr @ 0x1405A774C
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 *     SepRmFetchGlobalSacl @ 0x1405A77D8 (SepRmFetchGlobalSacl.c)
 */

void __fastcall SepRmGlobalSaclSetWrkr(__int64 a1, __int64 a2)
{
  char v3; // si
  int GlobalSacl; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rbx
  void *v7; // rcx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *PoolWithTag; // rbx
  unsigned __int16 MaximumLength; // r14
  size_t v14; // r15
  PVOID v15; // rax
  wchar_t *Buffer; // rdx
  UNICODE_STRING v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+80h] [rbp+48h] BYREF
  PVOID P; // [rsp+88h] [rbp+50h] BYREF
  PVOID v20; // [rsp+90h] [rbp+58h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+60h] BYREF

  v17.MaximumLength = *(_WORD *)(a1 + 44);
  v17.Length = v17.MaximumLength;
  v20 = 0LL;
  v17.Buffer = (wchar_t *)(a1 + 46);
  v21 = 0LL;
  v18 = 0;
  v3 = 0;
  P = 0LL;
  GlobalSacl = SepRmFetchGlobalSacl(&v17, &v18, &P);
  if ( GlobalSacl >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = 1;
    ExAcquireResourceExclusiveLite(&SepRmGlobalSaclLock, 1u);
    GlobalSacl = SepRmGlobalSaclFind((__int64 **)&v20, &v21, &v17, 0);
    if ( GlobalSacl < 0 )
    {
      if ( !v18 )
        goto LABEL_2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C635347u);
      if ( PoolWithTag )
      {
        MaximumLength = v17.MaximumLength;
        v14 = v17.MaximumLength;
        v15 = ExAllocatePoolWithTag(PagedPool, v17.MaximumLength, 0x6C635347u);
        PoolWithTag[2] = v15;
        if ( v15 )
        {
          Buffer = v17.Buffer;
          *((_WORD *)PoolWithTag + 5) = MaximumLength;
          *((_WORD *)PoolWithTag + 4) = MaximumLength;
          memmove(v15, Buffer, v14);
          PoolWithTag[3] = P;
          *PoolWithTag = SepRmGlobalSaclHead;
          P = 0LL;
          SepRmGlobalSaclHead = (__int64)PoolWithTag;
          goto LABEL_2;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      GlobalSacl = -1073741801;
      goto LABEL_2;
    }
    v6 = v20;
    if ( v18 )
    {
      v7 = (void *)*((_QWORD *)v20 + 3);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v6[3] = P;
      goto LABEL_11;
    }
    if ( v21 )
      *v21 = *(_QWORD *)v20;
    else
      SepRmGlobalSaclHead = *(_QWORD *)v20;
    v10 = (void *)v6[2];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v6[2] = 0LL;
    }
    v11 = (void *)v6[3];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v6[3] = 0LL;
    }
    ExFreePoolWithTag(v6, 0);
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
  {
LABEL_11:
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  *(_DWORD *)(a2 + 40) = GlobalSacl;
}
