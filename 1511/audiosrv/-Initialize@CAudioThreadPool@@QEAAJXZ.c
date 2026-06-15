/*
 * XREFs of ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x18003CDD4
 * Callers:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18003CD58 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioThreadPool::Initialize(CAudioThreadPool *this)
{
  CAudioThreadPool *v1; // rdi
  signed int v2; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax

  v1 = ThreadPool;
  v2 = 0;
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  *((_QWORD *)v1 + 10) = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    *((_QWORD *)v1 + 4) = 0LL;
    *((_QWORD *)v1 + 3) = ThreadpoolCleanupGroup;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_170fe7dc1fb0ba0c1117b0b0d992a1d0_Traceguids, v2);
  }
  return (unsigned int)v2;
}
