/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01D5F70
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D49B0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C025F81C (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // r8d
  int v4; // esi
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = gcOverlays;
  v4 = 0;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(a1 + 288) & 0x400) != 0 )
    {
      if ( gcOverlays )
      {
        v2 = 1;
        --gcOverlays;
        *(_DWORD *)(a1 + 288) &= ~0x400u;
        v5 = v3 == 1;
        goto LABEL_9;
      }
LABEL_13:
      gcOverlays = -1;
      return v2;
    }
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 288) & 0x400) != 0 )
    return 1;
  if ( gcOverlays + 1 < (unsigned int)gcOverlays )
    goto LABEL_13;
  ++gcOverlays;
  v2 = 1;
  *(_DWORD *)(a1 + 288) |= 0x400u;
  v5 = v3 == 0;
LABEL_9:
  if ( v5 )
    v4 = 1;
  FixupOverlayWindowAttributes((struct tagWND *)a1);
  if ( v4 )
  {
    v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
    DwmAsyncNotifyWindowShadowChange(v10);
    xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
  }
  return v2;
}
