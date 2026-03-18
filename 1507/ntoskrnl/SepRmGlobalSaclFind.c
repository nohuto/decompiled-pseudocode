/*
 * XREFs of SepRmGlobalSaclFind @ 0x140587774
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14015B154 (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x1404D2930 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A774C (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406D3CFC (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x1406D7C34 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406D7D6C (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14015B234 (SepRmAcquireGlobalSaclReadLock.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  __int64 v4; // rax
  char v8; // r14
  unsigned int v9; // esi
  __int64 *v11; // rbp
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v14; // ax

  v4 = SepRmGlobalSaclHead;
  v8 = 0;
  v9 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      SepRmAcquireGlobalSaclReadLock();
      v4 = SepRmGlobalSaclHead;
      v8 = 1;
    }
    *a1 = (__int64 *)v4;
    if ( a2 )
      *a2 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *a1;
        if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(*a1 + 1), 0) )
          break;
        if ( a2 )
          *a2 = v11;
        v12 = *v11;
        *a1 = (__int64 *)*v11;
        if ( !v12 )
          goto LABEL_12;
      }
      v9 = 0;
    }
    else
    {
LABEL_12:
      if ( a2 )
        *a2 = 0LL;
    }
    if ( v8 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v9;
}
