/*
 * XREFs of ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C0146FD0
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0146590 (NtGdiSetPUMPDOBJ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0146C80 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

void __fastcall UMPDOBJ::vPushToCurrentThread(struct UMPDOBJ *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)a1 + 40);
  v2 = (__int64 *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40);
  v3 = *v2;
  *v1 = *v2;
  v1[1] = (__int64)v2;
  if ( *(__int64 **)(v3 + 8) != v2 )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = v1;
  *v2 = (__int64)v1;
}
