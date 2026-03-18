/*
 * XREFs of VidSchOverlayPlaneAttributes @ 0x1C00226F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

void __fastcall VidSchOverlayPlaneAttributes(__int64 a1, unsigned int a2, char *a3, __int64 a4, _DWORD *a5, int *a6)
{
  _DWORD *v6; // r12
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbx
  int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // xmm1_8
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  signed __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // xmm1_8
  bool v25; // [rsp+20h] [rbp-238h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-228h] BYREF
  _OWORD v27[12]; // [rsp+50h] [rbp-208h] BYREF
  _OWORD v28[16]; // [rsp+110h] [rbp-148h] BYREF

  v6 = a5;
  v8 = 0LL;
  v9 = a2;
  v10 = a4;
  *a5 = 0;
  v12 = *a6;
  v25 = a4 != 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 124) )
  {
    do
    {
      v14 = *(_QWORD *)(a1 + 8 * v9 + 2592);
      v15 = 280LL * (unsigned int)v13;
      if ( *(_WORD *)(v15 + v14 + 90) > (unsigned __int16)*(_DWORD *)(v15 + v14 + 88) )
      {
        v16 = 1536 * v13;
        if ( *(_QWORD *)(1536 * v13 + v14 + 2352) )
        {
          v17 = *(_QWORD *)(v16 + v14 + 2360);
          *(_OWORD *)((char *)v27 + 24 * v8) = *(_OWORD *)(v16 + v14 + 2344);
          v18 = *(_OWORD *)(v15 + v14 + 88);
          if ( (_DWORD)v13 == v12 )
            v12 = v8;
          *((_QWORD *)&v27[1] + 3 * v8) = v17;
          v19 = *(_OWORD *)(v15 + v14 + 104);
          v28[2 * (unsigned int)v8] = v18;
          v28[2 * (unsigned int)v8 + 1] = v19;
          if ( v25 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v27 + 3 * v8) + 16LL) + 8LL));
            _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)&v27[1] + 3 * v8) + 24LL));
          }
          v8 = (unsigned int)(v8 + 1);
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)(a1 + 124) );
    v6 = a5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v8 )
  {
    v20 = (char *)v28 - a3;
    v21 = (unsigned int)v8;
    v22 = (char *)v27 - v10;
    do
    {
      v23 = *(_OWORD *)&a3[v20 + 16];
      *(_OWORD *)a3 = *(_OWORD *)&a3[v20];
      *((_OWORD *)a3 + 1) = v23;
      if ( v25 )
      {
        v24 = *(_QWORD *)&v22[v10 + 16];
        *(_OWORD *)v10 = *(_OWORD *)&v22[v10];
        *(_QWORD *)(v10 + 16) = v24;
      }
      a3 += 32;
      v10 += 24LL;
      --v21;
    }
    while ( v21 );
  }
  *v6 = v8;
  *a6 = v12;
}
