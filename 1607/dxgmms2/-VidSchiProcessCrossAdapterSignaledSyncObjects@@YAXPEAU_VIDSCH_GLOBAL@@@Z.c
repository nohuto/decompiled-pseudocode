/*
 * XREFs of ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0021790
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000E044 (VidSchiCompleteSignalCommmand.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(KSPIN_LOCK *a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 ***v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  KSPIN_LOCK v13; // rsi
  bool v14; // zf
  volatile signed __int32 *v15; // rax
  struct _VIDSCH_GLOBAL *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 *v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v21; // [rsp+30h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[110]; // [rsp+58h] [rbp-B0h] BYREF

  v21 = &v20;
  v20 = (__int64 *)&v20;
  KeAcquireInStackQueuedSpinLock(a1 + 369, &LockHandle);
  v2 = (__int64 **)(a1 + 367);
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
    v6 = v21;
    if ( *v21 != (__int64 *)&v20 )
      __fastfail(3u);
    v5[1] = v21;
    *v5 = &v20;
    *v6 = v5;
    --*((_DWORD *)a1 + 740);
    v21 = (__int64 **)v5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v9 = v20;
    if ( v20 == (__int64 *)&v20 )
      break;
    v10 = (__int64 *)*v20;
    if ( (__int64 **)v20[1] != &v20 || (__int64 *)v10[1] != v20 )
      __fastfail(3u);
    v20 = (__int64 *)*v20;
    v10[1] = (__int64)&v20;
    v11 = v9 - 19;
    *v9 = 0LL;
    v9[1] = 0LL;
    v12 = *((_DWORD *)v9 - 28);
    v13 = a1[26];
    if ( v12 == 2 )
    {
      memset(v23, 0, sizeof(v23));
      v14 = *((_BYTE *)v11 + 27) == 0;
      LODWORD(v23[0]) = 1953189969;
      LODWORD(v23[6]) = 5;
      v23[11] = v13;
      if ( v14 )
        v19 = v11[8];
      else
        v19 = *(_QWORD *)(v11[21] + 32);
      v23[66] = v19;
      v23[34] = v11;
      HIDWORD(v23[33]) = 1;
      VidSchiCompleteSignalCommmand((__int64)v23, 0LL, v17, v18);
    }
    else if ( v12 == 4 )
    {
      if ( !*(_BYTE *)(v11[21] + 32) )
      {
        v16 = (struct _VIDSCH_GLOBAL *)a1;
        goto LABEL_23;
      }
      if ( !*((_BYTE *)v11 + 28) )
      {
        v14 = *((_BYTE *)v11 + 27) == 0;
        *((_BYTE *)v11 + 28) = 1;
        if ( v14 )
        {
          v15 = (volatile signed __int32 *)v11[7];
          if ( *((_BYTE *)v11 + 29) )
            *(_QWORD *)v15 = -1LL;
          else
            _InterlockedExchangeAdd(v15, 0x3FFFFFFFu);
        }
        v16 = (struct _VIDSCH_GLOBAL *)v11[1];
LABEL_23:
        VidSchiUnwaitMonitoredFences((unsigned __int64)v16, (__int64)&v20, v7, v8);
      }
    }
  }
}
