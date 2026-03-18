/*
 * XREFs of ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012C90
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiCompleteSignalCommmand @ 0x1C00019A0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(KSPIN_LOCK *a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 ***v5; // rcx
  __int64 ***v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  bool v12; // zf
  volatile signed __int32 *v13; // rax
  struct _VIDSCH_GLOBAL *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v19; // [rsp+30h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[100]; // [rsp+58h] [rbp-B0h] BYREF

  v19 = &v18;
  v18 = (__int64 *)&v18;
  KeAcquireInStackQueuedSpinLock(a1 + 328, &LockHandle);
  v2 = (__int64 **)(a1 + 326);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    *v3 = 0LL;
    v3[1] = 0LL;
    v5 = (__int64 ***)(v3 + 2);
    v6 = (__int64 ***)v19;
    *v5 = &v18;
    v5[1] = (__int64 **)v6;
    if ( *v6 != &v18 )
      __fastfail(3u);
    *v6 = (__int64 **)v5;
    --*((_DWORD *)a1 + 658);
    v19 = (__int64 **)v5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v7 = v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    v8 = (__int64 *)*v18;
    if ( (__int64 **)v18[1] != &v18 || (__int64 *)v8[1] != v18 )
      __fastfail(3u);
    v18 = (__int64 *)*v18;
    v9 = v7 - 19;
    v8[1] = (__int64)&v18;
    *v7 = 0LL;
    v7[1] = 0LL;
    v10 = *(_QWORD *)(a1[22] + 64);
    v11 = *((_DWORD *)v7 - 28);
    if ( v11 == 2 )
    {
      memset(v21, 0, sizeof(v21));
      v12 = *((_BYTE *)v9 + 27) == 0;
      LODWORD(v21[0]) = 1953189969;
      LODWORD(v21[6]) = 5;
      v21[10] = v10;
      if ( v12 )
        v17 = v9[8];
      else
        v17 = *(_QWORD *)(v9[21] + 32);
      v21[65] = v17;
      v21[33] = v9;
      HIDWORD(v21[32]) = 1;
      VidSchiCompleteSignalCommmand((__int64)v21, 0LL, v15, v16);
    }
    else if ( v11 == 4 )
    {
      if ( !*(_BYTE *)(v9[21] + 32) )
      {
        v14 = (struct _VIDSCH_GLOBAL *)a1;
        goto LABEL_23;
      }
      if ( !*((_BYTE *)v9 + 28) )
      {
        v12 = *((_BYTE *)v9 + 27) == 0;
        *((_BYTE *)v9 + 28) = 1;
        if ( v12 )
        {
          v13 = (volatile signed __int32 *)v9[7];
          if ( *((_BYTE *)v9 + 29) )
            *(_QWORD *)v13 = -1LL;
          else
            _InterlockedExchangeAdd(v13, 0x3FFFFFFFu);
        }
        v14 = (struct _VIDSCH_GLOBAL *)v9[1];
LABEL_23:
        VidSchiUnwaitMonitoredFences((unsigned __int64)v14);
      }
    }
  }
}
