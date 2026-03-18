/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C0007554
 * Callers:
 *     Mutex @ 0x1C00074B0 (Mutex.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     ParseAcquire @ 0x1C001B400 (ParseAcquire.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v10)(_QWORD *); // rsi
  int v11; // ebx
  __int64 v13; // rdx
  KIRQL v14; // dl
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  _QWORD v18[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( !gDeviceLockMutexSupported || (v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject) == 0LL )
  {
    v11 = 0;
    goto LABEL_6;
  }
  if ( a4 )
  {
    v5 = a4;
    for ( LOBYTE(v13) = ExAcquireSpinLockShared(&ACPINamespaceLock); *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
      ;
    ReferenceObjectEx(v5, v13);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v14);
    if ( *(_WORD *)(v5 + 66) != 6 )
    {
      v11 = -1072431089;
      goto LABEL_6;
    }
    v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject;
  }
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = a1;
  v18[1] = a2 + 80;
  if ( a1 )
  {
    v15 = a1 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
          {
            v11 = -1073741637;
LABEL_25:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a3, 3222536195LL);
            PrintDebugMessage(145, v11, 0, 0, 0LL);
            goto LABEL_6;
          }
          v18[2] = v5 + 120;
          v18[3] = *(_QWORD *)(a2 + 72);
          LODWORD(v18[4]) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          v18[2] = a3;
        }
      }
      else
      {
        v18[3] = a3;
        v18[2] = v5 + 120;
        v18[4] = *(_QWORD *)(a2 + 72);
        LODWORD(v18[5]) = *(_DWORD *)(a2 + 64);
        WORD2(v18[5]) = a5;
      }
    }
  }
  v11 = v10(v18);
  if ( v11 < 0 && v11 != -1073741643 && v11 != -1073741536 )
    goto LABEL_25;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx(v5, 0LL);
  return ConvertNtStatusToAMLIStatus((unsigned int)v11);
}
