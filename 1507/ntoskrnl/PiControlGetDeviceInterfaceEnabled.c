/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x140438C9C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // edi
  signed __int64 *v9; // rbx
  ULONG_PTR v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt
  ULONG_PTR v14; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v16; // ax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _WORD v18[4]; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v17 = 0LL;
  v18[1] = v4;
  v18[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v17, 0LL, v18);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v17, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        v9 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireSharedLock(BugCheckParameter2);
        *((_BYTE *)a2 + 20) = v9[5] != 0;
        _m_prefetchw(v9);
        v11 = *v9;
        v12 = *v9 - 16;
        if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v12 = 0LL;
        if ( (v11 & 2) != 0
          || (v10 = BugCheckParameter2,
              v13 = *v9,
              v13 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v12, v11)) )
        {
          v14 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2, v10);
        }
        else
        {
          v14 = BugCheckParameter2;
        }
        KeAbPostRelease(v14);
        CurrentThread = KeGetCurrentThread();
        v16 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v16;
        if ( !v16
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        PiDmObjectRelease((PVOID)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v17, v18);
    if ( a4 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)Object;
  }
  return result;
}
