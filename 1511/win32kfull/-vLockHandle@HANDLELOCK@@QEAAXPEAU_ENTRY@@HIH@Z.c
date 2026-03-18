/*
 * XREFs of ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C00D30D8
 * Callers:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00D3214 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, struct _ENTRY *a2, __int64 a3, int a4)
{
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  signed __int32 v16; // eax
  signed __int32 v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v20);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v9 = *(_QWORD *)(v8 + 72);
  else
    v9 = 0LL;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 2) = 1;
LABEL_6:
  v10 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 8LL));
  v11 = *(_DWORD *)(v10 + 8);
  v12 = v20;
  *((_DWORD *)this + 3) = v11;
  v13 = v11 & 0xFFFFFFFE;
  if ( (v13 == (v12 & 0xFFFFFFFC) || !v13 || v9 && v13 == *(_DWORD *)(v9 + 8)) && (*(_BYTE *)(v10 + 15) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)this;
      if ( (*(_BYTE *)(*(_QWORD *)this + 15LL) & 0x40) != 0 )
        break;
      v15 = *((_DWORD *)this + 3);
      if ( (v15 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      v16 = *((_DWORD *)this + 3);
      v17 = v15 | 1;
      *((_DWORD *)this + 4) = v17;
      if ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v17, v16)
        || (*(_BYTE *)(*(_QWORD *)this + 15LL) & 0x40) != 0 )
      {
        goto LABEL_6;
      }
      GreInitializePushLock((char *)gpentPushLock + 8 * *((unsigned int *)this + 5));
      *(_BYTE *)(*(_QWORD *)this + 15LL) |= 0x40u;
      v18 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 8LL));
      v19 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFE;
      *((_DWORD *)this + 3) = v19;
      _InterlockedExchange((volatile __int32 *)(v18 + 8), v19);
    }
    GreAcquirePushLockExclusive((char *)gpentPushLock + 8 * *((unsigned int *)this + 5));
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    *(_QWORD *)this = 0LL;
    KeLeaveCriticalRegion();
  }
}
