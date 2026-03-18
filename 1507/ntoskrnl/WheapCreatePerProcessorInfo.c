/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x1407E2118
 * Callers:
 *     WheaInitialize @ 0x1407C0D60 (WheaInitialize.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  ULONG_PTR v0; // rbp
  SIZE_T v1; // rdi
  char *PoolWithTag; // rax
  char *v3; // rbx
  unsigned int v4; // ecx
  __int64 *v5; // rdx
  __int64 v6; // rax

  v0 = (unsigned int)KeNumberProcessors_0;
  v1 = 24LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x61656857u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  memset(PoolWithTag, 0, v1);
  v4 = 0;
  if ( (_DWORD)v0 )
  {
    v5 = KiProcessorBlock;
    do
    {
      if ( v4 >= (unsigned int)KeNumberProcessors_0 )
        v6 = 0LL;
      else
        v6 = *v5;
      *(_QWORD *)(v6 + 24528) = v3;
      ++v4;
      v3 += 24;
      ++v5;
    }
    while ( v4 < (unsigned int)v0 );
  }
  return 0LL;
}
