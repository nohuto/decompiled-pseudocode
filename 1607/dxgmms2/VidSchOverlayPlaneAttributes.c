/*
 * XREFs of VidSchOverlayPlaneAttributes @ 0x1C0026BC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

void __fastcall VidSchOverlayPlaneAttributes(
        __int64 a1,
        unsigned int a2,
        char *a3,
        __int64 a4,
        unsigned int *a5,
        int *a6)
{
  unsigned int *v6; // r12
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v12; // r14d
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  __int64 v23; // rsi
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  bool v26; // [rsp+20h] [rbp-278h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-268h] BYREF
  _OWORD v28[16]; // [rsp+50h] [rbp-248h] BYREF
  _OWORD v29[16]; // [rsp+150h] [rbp-148h] BYREF

  v6 = a5;
  v8 = 0;
  v9 = a2;
  *a5 = 0;
  v12 = *a6;
  v26 = a4 != 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v13 = 0;
  if ( *(_DWORD *)(a1 + 128) )
  {
    do
    {
      v14 = *(_QWORD *)(a1 + 8 * v9 + 2968);
      v15 = 272LL * v13;
      if ( *(_WORD *)(v15 + v14 + 90) > (unsigned __int16)*(_DWORD *)(v15 + v14 + 88) )
      {
        v16 = (unsigned __int64)v13 << 11;
        if ( *(_QWORD *)(v16 + v14 + 2352) )
        {
          v17 = *(_OWORD *)(v16 + v14 + 2368);
          if ( v13 == v12 )
            v12 = v8;
          v28[2 * v8] = *(_OWORD *)(v16 + v14 + 2352);
          v18 = *(_OWORD *)(v15 + v14 + 88);
          v28[2 * v8 + 1] = v17;
          v19 = *(_OWORD *)(v15 + v14 + 104);
          v29[2 * v8] = v18;
          v29[2 * v8 + 1] = v19;
          if ( v26 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)&v28[2 * v8] + 1) + 16LL) + 8LL));
          ++v8;
        }
      }
      ++v13;
    }
    while ( v13 < *(_DWORD *)(a1 + 128) );
    v6 = a5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    v20 = v8;
    v21 = (char *)v29 - a3;
    v22 = (char *)v28 - a3;
    v23 = a4 - (_QWORD)a3;
    do
    {
      v24 = *(_OWORD *)&a3[v21 + 16];
      *(_OWORD *)a3 = *(_OWORD *)&a3[v21];
      *((_OWORD *)a3 + 1) = v24;
      if ( v26 )
      {
        v25 = *(_OWORD *)&a3[v22 + 16];
        *(_OWORD *)&a3[v23] = *(_OWORD *)&a3[v22];
        *(_OWORD *)&a3[v23 + 16] = v25;
      }
      a3 += 32;
      --v20;
    }
    while ( v20 );
  }
  *v6 = v8;
  *a6 = v12;
}
