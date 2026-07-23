/*
 * XREFs of IovCallDriver @ 0x140700AD4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopPerfCallDriver @ 0x1401CA5A8 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1402231C4 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407011F8 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14070126C (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140701848 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x14070BED8 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int *v11; // r14
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  if ( IovpEnabledInThePast || (MmVerifierData & 0x20) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_14072C038 = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 16LL;
      qword_14072C040 = 0LL;
      BugCheckParameter4 = 0LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    {
      v8 = (char *)Entry;
      if ( Entry )
      {
        *((_QWORD *)Entry + 20) = Object;
        *((_QWORD *)v8 + 21) = a2;
        *((_QWORD *)v8 + 22) = a3;
        if ( **((_WORD **)v8 + 21) != 6 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_14072C038 = *((_QWORD *)v8 + 21);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 3LL;
          qword_14072C040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(Object) )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_14072C038 = *((_QWORD *)v8 + 20);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 4LL;
          qword_14072C040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        v9 = *(_QWORD *)(a2 + 184);
        if ( !*(_BYTE *)(v9 - 72) )
        {
          v10 = *(_QWORD *)(v9 - 24);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v10 + 80) & 0x204000) == 0x204000 )
            {
              v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
              qword_14072C038 = *((_QWORD *)v8 + 20);
              qword_14072C040 = *((_QWORD *)v8 + 21);
              BugCheckParameter4 = *(_QWORD *)(v9 - 24);
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              BugCheckParameter1 = 15LL;
              VfBugCheckNoStackUsage();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = VfBeforeCallDriver(Object, a2, v8);
        if ( (IopFunctionPointerMask & 2) != 0 )
          v13 = IopPerfCallDriver(Object, a2);
        else
          v13 = IopfCallDriver((__int64)Object, a2);
        *v11 = v13;
        VfAfterCallDriver(v8, v8 + 184, v12);
        v14 = *v11;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v8);
        return v14;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(Object);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(Object);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, a2);
  }
  else
  {
    return IopfCallDriver((__int64)Object, a2);
  }
}
