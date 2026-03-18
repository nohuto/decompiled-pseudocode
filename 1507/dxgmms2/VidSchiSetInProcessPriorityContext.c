/*
 * XREFs of VidSchiSetInProcessPriorityContext @ 0x1C001A2AC
 * Callers:
 *     VidSchSetInProcessPriorityContext @ 0x1C0079300 (VidSchSetInProcessPriorityContext.c)
 * Callees:
 *     Template_pdd @ 0x1C0013CEC (Template_pdd.c)
 */

__int64 __fastcall VidSchiSetInProcessPriorityContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  __int64 *v9; // rcx
  signed __int32 v10; // eax
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 **v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1872LL), &LockHandle);
  v6 = *(unsigned int *)(a1 + 400);
  if ( (_DWORD)v6 != a2 )
  {
    if ( bTracingEnabled )
    {
      v7 = *(_QWORD *)(a1 + 56);
      if ( !v7 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        v7 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pdd(v6, v4, v5, v7, v6, a2);
    }
    v8 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 400) = a2;
    if ( (v8 & 1) != 0 )
    {
      if ( a2 == 1 )
      {
        v9 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0);
        v11 = (__int64 *)(a1 + 408);
        if ( v10 == 1 )
        {
          v12 = *v9;
          *v11 = *v9;
          v11[1] = (__int64)v9;
          if ( *(__int64 **)(v12 + 8) != v9 )
            __fastfail(3u);
          *(_QWORD *)(v12 + 8) = v11;
          *v9 = (__int64)v11;
        }
        else
        {
          v14 = (__int64 **)v9[1];
          *v11 = (__int64)v9;
          v11[1] = (__int64)v14;
          if ( *v14 != v9 )
            __fastfail(3u);
          *v14 = v11;
          v9[1] = (__int64)v11;
        }
      }
      else
      {
        v15 = (_QWORD *)(a1 + 408);
        v16 = *(_QWORD *)(a1 + 408);
        v17 = *(_QWORD **)(a1 + 416);
        if ( *(_QWORD *)(v16 + 8) != a1 + 408 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v15 = 0LL;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
