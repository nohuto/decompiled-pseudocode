/*
 * XREFs of GdiThreadCallout @ 0x1C000AF20
 * Callers:
 *     <none>
 * Callees:
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0 @ 0x1C00018B8 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock_0 @ 0x1C00018C0 (UmfdIsCurrentProcessUmfdHostNoLock_0.c)
 *     IsGdiThreadCalloutFlushUserBatchSupported_0 @ 0x1C00018D8 (IsGdiThreadCalloutFlushUserBatchSupported_0.c)
 *     GdiThreadCalloutFlushUserBatch_0 @ 0x1C00018E0 (GdiThreadCalloutFlushUserBatch_0.c)
 *     IsHT_DestroyDeviceHalftoneInfoSupported_0 @ 0x1C00018E8 (IsHT_DestroyDeviceHalftoneInfoSupported_0.c)
 *     HT_DestroyDeviceHalftoneInfoWrap_0 @ 0x1C00018F0 (HT_DestroyDeviceHalftoneInfoWrap_0.c)
 *     IsUmfdUninitializeThreadSupported_0 @ 0x1C00018F8 (IsUmfdUninitializeThreadSupported_0.c)
 *     UmfdUninitializeThread_0 @ 0x1C0001900 (UmfdUninitializeThread_0.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C000B048 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C000B098 (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  HPALETTE *v9; // rsi
  __int64 v10; // r15
  void (__fastcall *v11)(__int64); // rbp
  int v12; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported_0() >= 0 )
        GdiThreadCalloutFlushUserBatch_0();
      if ( *(_QWORD *)(ThreadWin32Thread + 24) )
        HmgFreeDcAttr();
      vUMPDThreadCleanup((struct _W32THREAD *)ThreadWin32Thread);
      v7 = (_QWORD *)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v8 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 == v7 )
          break;
        if ( v8 )
        {
          KeEnterCriticalRegion();
          v10 = v8[2];
          v11 = (void (__fastcall *)(__int64))v8[3];
          PopThreadGuardedObject(v8);
          if ( v11 )
            v11(v10);
          KeLeaveCriticalRegion();
        }
      }
      v9 = *(HPALETTE **)(ThreadWin32Thread + 288);
      if ( v9 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v9);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported_0() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap_0();
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0104228)(ThreadWin32Thread + 80, 0LL);
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0() >= 0 )
      {
        if ( (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock_0() )
        {
          v12 = IsUmfdUninitializeThreadSupported_0();
          if ( v12 >= 0 )
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
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C0104228)(v3, v4);
  }
  return v2;
}
