/*
 * XREFs of ObQueryRefTraceInformation @ 0x14066746C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // esi
  unsigned int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  unsigned __int16 v10; // r14
  char *v11; // r13
  char v12; // cl
  __int16 v13; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  int v17; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+98h] [rbp+20h]

  v3 = Length;
  v5 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, (unsigned int)Length, 8u);
  v6 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v8, (ULONG_PTR)&ObpStackTraceLock);
  if ( v9 )
    v9[26] |= 1u;
  v19 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v10 = 0;
    v17 = ObpTraceFlags & 0x20;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v6 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      while ( v10 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v10) )
        ++v10;
      if ( v10 )
        v6 += 10 * v10;
    }
    if ( v6 <= v3 )
    {
      v11 = a1 + 40;
      memset(a1, 0, 0x28uLL);
      *a1 = 1;
      v12 = v19;
      a1[1] = (v19 & 0x40) != 0;
      if ( v17 )
      {
        *((_WORD *)a1 + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)a1 + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)a1 + 2) = v11;
        memmove(a1 + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v11 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
        v12 = ObpTraceFlags;
      }
      if ( (v12 & 0x10) != 0 )
      {
        v13 = 2 * (5 * v10 - 1);
        *((_WORD *)a1 + 12) = v13;
        *((_WORD *)a1 + 13) = v13 + 2;
        *((_QWORD *)a1 + 4) = v11;
        for ( i = 0; i < v10; ++i )
        {
          for ( j = 0; j < 4; ++j )
            *(_WORD *)&v11[8 * i + 2 * i + 2 * j] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          *(_WORD *)&v11[8 * i + 2 * i + 2 * j] = 59;
        }
        *(_WORD *)&v11[10 * v10 - 2] = 0;
      }
    }
    else
    {
      v5 = -1073741820;
    }
  }
  else if ( v3 >= 0x28 )
  {
    *a1 = 0;
  }
  else
  {
    v5 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741820 )
  {
    if ( a3 )
      *a3 = v6;
  }
  return v5;
}
