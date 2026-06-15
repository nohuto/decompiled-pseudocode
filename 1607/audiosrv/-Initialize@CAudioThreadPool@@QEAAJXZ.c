/*
 * XREFs of ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x1800311F0
 * Callers:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180031174 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioThreadPool::Initialize(CAudioThreadPool *this)
{
  CAudioThreadPool *v1; // rdi
  unsigned int v2; // ebx
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
  if ( (v2 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c263fbaf975a31de094c23c085935f81_Traceguids, v2);
  }
  return v2;
}
