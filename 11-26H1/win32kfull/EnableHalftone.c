/*
 * XREFs of EnableHalftone @ 0x1402413F0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1402414E8 (HT_InitSaneLimits.c)
 *     HT_UninitializeSessionGlobals @ 0x140296244 (HT_UninitializeSessionGlobals.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EnableHalftone(int a1, __int64 a2)
{
  __int64 SessionState; // rbx
  char *v3; // rax
  char *v4; // rdi
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rbx
  HSEMAPHORE Semaphore; // rax
  HSEMAPHORE v9; // rax
  HSEMAPHORE v10; // rax

  SessionState = W32GetSessionState(a1, a2);
  v3 = (char *)EngAllocMem(1u, 0x4E8u, 0x73675448u);
  *(_QWORD *)(SessionState + 112) = v3;
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3 + 80, 255, 0x400uLL);
    *((_DWORD *)v4 + 18) = 1;
    *((_DWORD *)v4 + 19) = 20000000;
    v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 112);
    Semaphore = EngCreateSemaphore();
    *(_QWORD *)(v7 + 24) = Semaphore;
    if ( Semaphore )
    {
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_DWORD *)(v7 + 56) = 0;
      v9 = EngCreateSemaphore();
      *(_QWORD *)(v7 + 8) = v9;
      if ( v9 )
      {
        *(_WORD *)(v7 + 68) = 0;
        v10 = EngCreateSemaphore();
        *(_QWORD *)(v7 + 16) = v10;
        if ( v10 )
        {
          *(_WORD *)(v7 + 70) = 0;
          HT_InitSaneLimits();
          return 1LL;
        }
      }
    }
    HT_UninitializeSessionGlobals();
  }
  return 0LL;
}
