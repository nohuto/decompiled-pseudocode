/*
 * XREFs of PushThreadGuardedObject @ 0x1C0052730
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00526EC (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GrePushThreadGuardedObject @ 0x1C00B5DA0 (GrePushThreadGuardedObject.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PushThreadGuardedObject(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
    a1[2] = a2;
    a1[3] = a3;
    if ( ThreadWin32Thread )
    {
      v10 = (__int64 *)(ThreadWin32Thread + 88);
      v11 = *v10;
      *a1 = *v10;
      a1[1] = (__int64)v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      *(_QWORD *)(v11 + 8) = a1;
      v3 = 1;
      *v10 = (__int64)a1;
    }
    else
    {
      a1[1] = (__int64)a1;
      *a1 = (__int64)a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
