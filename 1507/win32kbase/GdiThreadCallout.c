/*
 * XREFs of GdiThreadCallout @ 0x1C005A6A0
 * Callers:
 *     <none>
 * Callees:
 *     IsUMPDCachedResourceCleanupSupported_0 @ 0x1C0001800 (IsUMPDCachedResourceCleanupSupported_0.c)
 *     UMPDCachedResourceCleanupWrap_0 @ 0x1C0001808 (UMPDCachedResourceCleanupWrap_0.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0 @ 0x1C00018A8 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock_0 @ 0x1C00018B0 (UmfdIsCurrentProcessUmfdHostNoLock_0.c)
 *     IsGdiThreadCalloutFlushUserBatchSupported_0 @ 0x1C00018C8 (IsGdiThreadCalloutFlushUserBatchSupported_0.c)
 *     GdiThreadCalloutFlushUserBatch_0 @ 0x1C00018D0 (GdiThreadCalloutFlushUserBatch_0.c)
 *     IsHT_DestroyDeviceHalftoneInfoSupported_0 @ 0x1C00018D8 (IsHT_DestroyDeviceHalftoneInfoSupported_0.c)
 *     HT_DestroyDeviceHalftoneInfoWrap_0 @ 0x1C00018E0 (HT_DestroyDeviceHalftoneInfoWrap_0.c)
 *     IsUmfdUninitializeThreadSupported_0 @ 0x1C00018E8 (IsUmfdUninitializeThreadSupported_0.c)
 *     UmfdUninitializeThread_0 @ 0x1C00018F0 (UmfdUninitializeThread_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 *     HmgFreeDcAttr @ 0x1C005A7F8 (HmgFreeDcAttr.c)
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0069690 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00AEF88 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // rcx
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _QWORD **v9; // r14
  _QWORD *v10; // rsi
  HPALETTE *v11; // rsi
  __int64 v12; // r15
  void (__fastcall *v13)(__int64); // rbp
  int v14; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported_0() >= 0 )
        GdiThreadCalloutFlushUserBatch_0();
      v7 = *(_QWORD *)(ThreadWin32Thread + 24);
      if ( v7 )
        HmgFreeDcAttr(v7);
      while ( 1 )
      {
        ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread);
        if ( !ThreadCurrentObj )
          break;
        UMPDOBJ::vRelease(ThreadCurrentObj, 1);
      }
      if ( (int)IsUMPDCachedResourceCleanupSupported_0() >= 0 )
        UMPDCachedResourceCleanupWrap_0();
      if ( *(_QWORD *)(ThreadWin32Thread + 72) )
      {
        Win32FreePool();
        *(_QWORD *)(ThreadWin32Thread + 72) = 0LL;
      }
      v9 = (_QWORD **)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v10 = *v9;
        if ( *v9 == v9 )
          break;
        if ( v10 )
        {
          KeEnterCriticalRegion();
          v12 = v10[2];
          v13 = (void (__fastcall *)(__int64))v10[3];
          PopThreadGuardedObject(v10);
          if ( v13 )
            v13(v12);
          KeLeaveCriticalRegion();
        }
      }
      v11 = *(HPALETTE **)(ThreadWin32Thread + 288);
      if ( v11 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v11);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported_0() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap_0();
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0101410)(ThreadWin32Thread + 80, 0LL);
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0() >= 0 )
      {
        if ( (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock_0() )
        {
          v14 = IsUmfdUninitializeThreadSupported_0();
          if ( v14 >= 0 )
            UmfdUninitializeThread_0();
        }
      }
    }
  }
  else
  {
    v3 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v4) = 1;
    v3[6] = v3 + 5;
    v3[5] = v3 + 5;
    v3[12] = v3 + 11;
    v3[11] = v3 + 11;
    v3[35] = v3 + 14;
    v3 += 10;
    *v3 = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C0101410)(v3, v4);
  }
  return v2;
}
