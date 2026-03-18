/*
 * XREFs of ObQueryRefTraceInformation @ 0x1406AD1F8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, SIZE_T Length, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // esi
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned __int16 v12; // r14
  char *v13; // r13
  char v14; // cl
  __int16 v15; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  int v21; // [rsp+20h] [rbp-58h]
  char v23; // [rsp+98h] [rbp+20h]

  v4 = Length;
  v6 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, (unsigned int)Length, 8u);
  v7 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v9, (ULONG_PTR)&ObpStackTraceLock, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v23 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v12 = 0;
    v21 = ObpTraceFlags & 0x20;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v7 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      while ( v12 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v12) )
        ++v12;
      if ( v12 )
        v7 += 10 * v12;
    }
    if ( v7 <= v4 )
    {
      v13 = a1 + 40;
      memset(a1, 0, 0x28uLL);
      *a1 = 1;
      v14 = v23;
      a1[1] = (v23 & 0x40) != 0;
      if ( v21 )
      {
        *((_WORD *)a1 + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)a1 + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)a1 + 2) = v13;
        memmove(a1 + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v13 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
        v14 = ObpTraceFlags;
      }
      if ( (v14 & 0x10) != 0 )
      {
        v15 = 2 * (5 * v12 - 1);
        *((_WORD *)a1 + 12) = v15;
        *((_WORD *)a1 + 13) = v15 + 2;
        *((_QWORD *)a1 + 4) = v13;
        for ( i = 0; i < v12; ++i )
        {
          for ( j = 0; j < 4; ++j )
            *(_WORD *)&v13[8 * i + 2 * i + 2 * j] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          *(_WORD *)&v13[8 * i + 2 * i + 2 * j] = 59;
        }
        *(_WORD *)&v13[10 * v12 - 2] = 0;
      }
    }
    else
    {
      v6 = -1073741820;
    }
  }
  else if ( v4 >= 0x28 )
  {
    *a1 = 0;
  }
  else
  {
    v6 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v18 = KeGetCurrentThread();
  v19 = v18->SpecialApcDisable + 1;
  v18->SpecialApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741820 )
  {
    if ( a3 )
      *a3 = v7;
  }
  return v6;
}
