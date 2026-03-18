/*
 * XREFs of PsCallImageNotifyRoutines @ 0x140423B80
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PerfLogImageLoad @ 0x140425090 (PerfLogImageLoad.c)
 */

void __fastcall PsCallImageNotifyRoutines(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // eax
  int *v10; // r14
  __int64 v11; // rdi
  signed __int64 *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  __int16 v15; // ax
  void (__fastcall *v16)(_BYTE *, __int64, int *); // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = 0LL;
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, _BYTE *, __int64 *))(FltMgrCallbacks + 16))(a4, 512LL, v18, &v17) >= 0 )
  {
    a1 = v18;
  }
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, a3 + 8);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v10 = (int *)(a3 + 8);
    if ( (v9 & 0x800) == 0 )
    {
      *(_QWORD *)(a3 + 48) = a4;
      *(_QWORD *)a3 = 56LL;
      v11 = 64LL;
      *v10 = v9 | 0x400;
      v12 = (signed __int64 *)&PspLoadImageNotifyRoutine;
      do
      {
        v13 = ExReferenceCallBackBlock(v12);
        v14 = v13;
        if ( v13 )
        {
          v16 = (void (__fastcall *)(_BYTE *, __int64, int *))ExGetCallBackBlockRoutine((__int64)v13);
          v16(a1, a2, v10);
          ExDereferenceCallBackBlock(v12, v14);
        }
        ++v12;
        --v11;
      }
      while ( v11 );
    }
  }
  if ( v17 )
    (*(void (**)(void))(FltMgrCallbacks + 24))();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
