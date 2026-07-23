/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x140126130
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x140023538 (MiPfCompleteInPageSupport.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  int v4; // eax
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r8
  unsigned int v7; // ebp
  __int64 **v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ecx

  KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 32), WrPageIn, 0, 0, 0LL);
  if ( (*(_WORD *)(BugCheckParameter4 + 266) & 0x200) != 0 )
  {
    MiRetardMdl(BugCheckParameter4 + 256);
    *(_QWORD *)(BugCheckParameter4 + 88) = 0LL;
    *(_DWORD *)(BugCheckParameter4 + 80) = -1073741670;
  }
  if ( (*(_BYTE *)(BugCheckParameter4 + 266) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter4 + 280), (PMDL)(BugCheckParameter4 + 256));
  v4 = *(_DWORD *)(BugCheckParameter4 + 80);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned int *)(BugCheckParameter4 + 296);
    v6 = *(_QWORD *)(BugCheckParameter4 + 88);
    if ( v6 != v5 )
      KeBugCheckEx(0x7Au, 5uLL, v6, v5, BugCheckParameter4);
  }
  v7 = 0;
  v8 = (__int64 **)(BugCheckParameter4 + 16);
  if ( v4 < 0 )
    v7 = *(_DWORD *)(BugCheckParameter4 + 80);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    *((_DWORD *)v9 + 20) = *(_DWORD *)(BugCheckParameter4 + 80);
    if ( *(int *)(BugCheckParameter4 + 80) < 0 )
      v9[11] = 0LL;
    else
      v9[11] = *((unsigned int *)v9 + 45);
    KeSetEvent((PRKEVENT)(v9 + 4), 0, 0);
    v11 = MiPfCompleteInPageSupport((__int64)v9, a2);
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073740748 )
      v7 = v11;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter4, 0);
  return v7;
}
