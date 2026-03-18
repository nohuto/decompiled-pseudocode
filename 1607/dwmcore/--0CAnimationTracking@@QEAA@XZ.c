/*
 * XREFs of ??0CAnimationTracking@@QEAA@XZ @ 0x1800A1040
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180047238 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRende.c)
 * Callees:
 *     <none>
 */

CAnimationTracking *__fastcall CAnimationTracking::CAnimationTracking(CAnimationTracking *this)
{
  unsigned __int64 v1; // rbx
  ULONGLONG TickCount64; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r8

  v1 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)this + 71);
  TickCount64 = GetTickCount64();
  v4 = (unsigned __int64 *)((char *)this + 32);
  *((_QWORD *)this + 70) = TickCount64 + 3600000;
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 69) = (char *)this + 32;
  v5 = 64LL;
  *((_DWORD *)this + 137) = 2048;
  if ( (char *)this + 32 > (char *)this + 544 )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      ++v1;
      *v4++ = ((unsigned __int64)this + 544) | 1;
    }
    while ( v1 < v5 );
  }
  return this;
}
