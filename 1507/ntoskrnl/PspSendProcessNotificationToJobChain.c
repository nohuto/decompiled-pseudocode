/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x140544944
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 */

void __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ecx
  _QWORD *v10; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // [rsp+20h] [rbp-28h]
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v17 = *(_QWORD *)(a1 + 944);
  v15 = *(_QWORD *)(v17 + 1072);
  v7 = v15;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
    if ( v17 == *(_QWORD *)(a1 + 944) && v15 == *(_QWORD *)(v17 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v15 + 56));
    if ( CurrentThread )
    {
      v14 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v17 = *(_QWORD *)(a1 + 944);
    v15 = *(_QWORD *)(v17 + 1072);
    v7 = v15;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
  }
  v8 = v17;
  v16[0] = v15;
  while ( v8 )
  {
    v9 = 0;
    v10 = v16;
    while ( v8 != *v10 )
    {
      ++v9;
      ++v10;
      if ( v9 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 56), 1u);
        break;
      }
    }
    if ( *(_QWORD *)(v8 + 456) && ((1 << a2) & *(_DWORD *)(v8 + 884)) != 0 )
      PspSendJobNotification(v8, a2, a3, 0);
    v11 = 0;
    v12 = v16;
    while ( v8 != *v12 )
    {
      ++v11;
      ++v12;
      if ( v11 )
      {
        ExReleaseResourceLite((PERESOURCE)(v8 + 56));
        break;
      }
    }
    v8 = *(_QWORD *)(v8 + 1064);
  }
  ExReleaseResourceLite((PERESOURCE)(v15 + 56));
  if ( CurrentThread )
  {
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
