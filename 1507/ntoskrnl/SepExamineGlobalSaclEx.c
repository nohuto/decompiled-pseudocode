/*
 * XREFs of SepExamineGlobalSaclEx @ 0x14015B154
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14015B234 (SepRmAcquireGlobalSaclReadLock.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 */

void __fastcall SepExamineGlobalSaclEx(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char *a12,
        char *a13)
{
  char *v13; // rdi
  char *v14; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  char v22; // al
  char v23; // cl
  char v24[8]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v25; // [rsp+78h] [rbp-20h] BYREF

  v13 = a12;
  v14 = a13;
  if ( a12 && !*a12 || a13 && !*a13 )
  {
    v25 = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(&v25, 0LL, a1, 0LL) >= 0 )
    {
      v21 = *(_QWORD *)(v25 + 24);
      if ( v21 )
      {
        SepExamineSaclEx(v21, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, (__int64)&a12, (__int64)v24);
        v22 = 1;
        if ( v13 )
        {
          if ( *v13 || (v23 = 0, (_BYTE)a12) )
            v23 = 1;
          *v13 = v23;
        }
        if ( v14 )
        {
          if ( !*v14 && !v24[0] )
            v22 = 0;
          *v14 = v22;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    CurrentThread = KeGetCurrentThread();
    v20 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
