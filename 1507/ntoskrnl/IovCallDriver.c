/*
 * XREFs of IovCallDriver @ 0x140734C6C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopPerfCallDriver @ 0x1401F7F54 (IopPerfCallDriver.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfBugCheckNoStackUsage @ 0x14025AF78 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x140735520 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140735CC4 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x140741644 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PVOID Object, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  unsigned __int8 *v7; // rax
  unsigned __int8 CurrentIrql; // di
  char *v9; // rdi
  ULONG_PTR *v10; // r15
  _QWORD *v11; // r12
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // bl
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  unsigned int v17; // r15d
  unsigned int *v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  unsigned int v22; // ebx
  PVOID Entry; // [rsp+78h] [rbp+20h] BYREF

  if ( IovpEnabledInThePast || (MmVerifierData & 0x20) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
    {
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      qword_140763038 = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      ::BugCheckParameter1 = 16LL;
      qword_140763040 = 0LL;
      BugCheckParameter4 = 0LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(BugCheckParameter1, &Entry) )
    {
      v9 = (char *)Entry;
      if ( Entry )
      {
        v10 = (ULONG_PTR *)((char *)Entry + 168);
        v11 = (char *)Entry + 160;
        *((_QWORD *)Entry + 20) = Object;
        *((_QWORD *)v9 + 21) = BugCheckParameter1;
        *((_QWORD *)v9 + 22) = a3;
        if ( **((_WORD **)v9 + 21) != 6 )
        {
          v12 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
          }
          else
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
            v9 = (char *)Entry;
          }
          v9[157] = v12;
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          ::BugCheckParameter1 = 3LL;
          qword_140763038 = *v10;
          qword_140763040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(*v11) )
        {
          v13 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
          }
          else
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
            v9 = (char *)Entry;
          }
          v9[157] = v13;
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          ::BugCheckParameter1 = 4LL;
          qword_140763038 = *v11;
          qword_140763040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        v14 = *(_QWORD *)(BugCheckParameter1 + 184);
        if ( !*(_BYTE *)(v14 - 72) )
        {
          v15 = *(_QWORD *)(v14 - 24);
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 80) & 0x204000) == 0x204000 )
            {
              v16 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
              }
              else
              {
                if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
                  KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
                v9 = (char *)Entry;
              }
              v9[157] = v16;
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              ::BugCheckParameter1 = 15LL;
              qword_140763038 = *v11;
              qword_140763040 = *v10;
              BugCheckParameter4 = *(_QWORD *)(v14 - 24);
              VfBugCheckNoStackUsage();
            }
          }
        }
        v17 = VfBeforeCallDriver(Object, BugCheckParameter1, v9);
        if ( (IopFunctionPointerMask & 2) != 0 )
        {
          v18 = (unsigned int *)(v9 + 184);
          v19 = IopPerfCallDriver(Object, BugCheckParameter1);
        }
        else
        {
          if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
            KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
          v20 = *(_QWORD *)(BugCheckParameter1 + 184) - 72LL;
          *(_QWORD *)(BugCheckParameter1 + 184) = v20;
          v21 = *(_BYTE *)v20;
          *(_QWORD *)(v20 + 40) = Object;
          if ( v21 == 22 && (unsigned __int8)(*(_BYTE *)(v20 + 1) - 2) <= 1u )
            v19 = IopPoHandleIrp(BugCheckParameter1);
          else
            v19 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*((_QWORD *)Object + 1) + 8LL * v21 + 112))(
                    Object,
                    BugCheckParameter1);
          v18 = (unsigned int *)(v9 + 184);
        }
        *v18 = v19;
        VfAfterCallDriver(v9, v18, v17);
        v22 = *v18;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v9);
        return v22;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(Object, BugCheckParameter1);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(Object, BugCheckParameter1);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, BugCheckParameter1);
  }
  else
  {
    if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
      KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
    v7 = (unsigned __int8 *)(*(_QWORD *)(BugCheckParameter1 + 184) - 72LL);
    *(_QWORD *)(BugCheckParameter1 + 184) = v7;
    *((_QWORD *)v7 + 5) = Object;
    if ( *v7 == 22 && (unsigned __int8)(v7[1] - 2) <= 1u )
      return IopPoHandleIrp(BugCheckParameter1);
    else
      return (*(__int64 (__fastcall **)(PVOID))(*((_QWORD *)Object + 1) + 8LL * *v7 + 112))(Object);
  }
}
