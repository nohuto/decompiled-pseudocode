/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C0005C1C
 * Callers:
 *     Mutex @ 0x1C0005B80 (Mutex.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v10)(_QWORD *); // rsi
  int v11; // ebx
  KIRQL v13; // dl
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  _QWORD v17[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( !gDeviceLockMutexSupported || (v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject) == 0LL )
  {
    v11 = 0;
    goto LABEL_6;
  }
  if ( a4 )
  {
    v5 = a4;
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    if ( *(_WORD *)(a4 + 58) == 8 )
    {
      do
        v5 = *(_QWORD *)(v5 + 16);
      while ( *(_WORD *)(v5 + 58) == 8 );
    }
    ReferenceObjectEx(v5);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
    if ( *(_WORD *)(v5 + 58) != 6 )
    {
      v11 = -1072431089;
      goto LABEL_6;
    }
    v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject;
  }
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = a1;
  v17[1] = a2 + 72;
  if ( a1 )
  {
    v14 = a1 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            v11 = -1073741637;
LABEL_25:
            LogError(3222536195LL);
            PrintDebugMessage(145, v11, 0, 0, 0LL);
            goto LABEL_6;
          }
          v17[2] = v5 + 112;
          v17[3] = *(_QWORD *)(a2 + 64);
          LODWORD(v17[4]) = *(_DWORD *)(a2 + 56);
        }
        else
        {
          v17[2] = a3;
        }
      }
      else
      {
        v17[3] = a3;
        v17[2] = v5 + 112;
        v17[4] = *(_QWORD *)(a2 + 64);
        LODWORD(v17[5]) = *(_DWORD *)(a2 + 56);
        WORD2(v17[5]) = a5;
      }
    }
  }
  v11 = v10(v17);
  if ( v11 < 0 && v11 != -1073741643 && v11 != -1073741536 )
    goto LABEL_25;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx(v5);
  return ConvertNtStatusToAMLIStatus((unsigned int)v11);
}
