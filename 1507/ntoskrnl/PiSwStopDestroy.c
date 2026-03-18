/*
 * XREFs of PiSwStopDestroy @ 0x1405388DC
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpConcatPWSTR @ 0x140416C20 (PnpConcatPWSTR.c)
 *     PiSwFindChildren @ 0x140538A2C (PiSwFindChildren.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rdi
  int v5; // esi
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  const wchar_t *v11; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Str2; // [rsp+70h] [rbp+18h] BYREF

  Str2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren(&DestinationString);
  if ( Children )
  {
    v5 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v5 >= 0 )
    {
      v9 = *Children;
      while ( v9 != Children )
      {
        v10 = v9 - 12;
        v11 = (const wchar_t *)*(v9 - 11);
        v9 = (_QWORD *)*v9;
        if ( !wcsicmp(v11, Str2) && (*((_DWORD *)v10 + 1) & 1) == 0 )
          PiSwCloseDevice(v10);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v5 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v5;
}
