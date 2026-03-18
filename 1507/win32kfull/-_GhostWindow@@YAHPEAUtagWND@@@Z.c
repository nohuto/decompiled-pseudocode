/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01176F0 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0117814 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0117AC8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall _GhostWindow(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rax
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+24h] [rbp-34h]
  unsigned int v12; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+34h] [rbp-24h]

  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v4 = *(_QWORD *)a1;
      v5 = *(struct _KTHREAD **)v3;
      v14 = 0LL;
      v11 = v4;
      v10 = 1;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
      v7 = *(struct _KTHREAD **)v3;
      v12 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v7);
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v10);
    }
    else
    {
      PostShellHookMessagesEx(0x33u, *(_QWORD *)a1, 0LL);
      v2 = 1;
    }
    if ( v2 )
    {
      v8 = *(_DWORD *)(v3 + 448);
      if ( v8 >= 0 )
        *(_DWORD *)(v3 + 448) = v8 | 0x80000000;
    }
    else
    {
      InternalRemoveProp((__int64)a1, *(_WORD *)(gpsi + 884LL), 1);
    }
  }
  return v2;
}
