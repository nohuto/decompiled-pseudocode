/*
 * XREFs of MiRememberUnloadedDriver @ 0x14045342C
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char *v7; // r8
  __int64 v8; // rax
  UNICODE_STRING *v9; // rdi
  wchar_t *v10; // rax
  __int16 v11; // ax
  PVOID PoolWithTag; // rax
  __int16 v13; // ax

  v3 = a3;
  if ( !*(_WORD *)a1 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v7 = (char *)qword_140350048;
  if ( qword_140350048 )
  {
    v8 = (unsigned int)dword_140350044;
    if ( (unsigned int)dword_140350044 < 0x32 )
      goto LABEL_4;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7D0uLL, 0x54446D4Du);
    qword_140350048 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExReleaseResourceLite(&PsLoadedModuleResource);
      v13 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v13;
      if ( v13 )
        return;
      goto LABEL_7;
    }
    memset(PoolWithTag, 0, 0x7D0uLL);
    v7 = (char *)qword_140350048;
  }
  v8 = 0LL;
  dword_140350044 = 0;
LABEL_4:
  v9 = (UNICODE_STRING *)&v7[40 * v8];
  RtlFreeAnsiString(v9);
  v10 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1, 0x54446D4Du);
  v9->Buffer = v10;
  if ( v10 )
  {
    memmove(v10, a1[1], *(unsigned __int16 *)a1);
    v9->Length = *(_WORD *)a1;
    v9->MaximumLength = *((_WORD *)a1 + 1);
    v9[1].Buffer = (wchar_t *)(v3 + a2);
    *(_QWORD *)&v9[1].Length = a2;
    *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000014];
    ++dword_140350044;
  }
  else
  {
    *(_DWORD *)&v9->Length = 0;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11 )
  {
LABEL_7:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
