/*
 * XREFs of _GetWindowPlacement @ 0x140030188
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1402B57C0 (NtUserGetWindowPlacement.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     UpdateCheckpoint @ 0x140030480 (UpdateCheckpoint.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 */

__int64 __fastcall GetWindowPlacement(struct tagWND *a1, _DWORD *a2)
{
  int v4; // esi
  __int64 updated; // r14
  char v6; // al
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  char v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+24h] [rbp-34h]
  __m128i v21[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v4 = 0;
  updated = UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
    a2[2] = 2;
  else
    a2[2] = (2 * (v6 & 1)) | 1;
  *(_OWORD *)(a2 + 7) = *(_OWORD *)(updated + 20);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  if ( v8 )
    TransformRectBetweenCoordinateSpaces(a2 + 7, a2 + 7, 0LL, a1);
  v9 = a2 + 3;
  if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
  {
    *v9 = *(_QWORD *)updated;
    if ( v8 )
      TransformPointBetweenCoordinateSpaces(v9, v9, 0LL, a1);
  }
  else
  {
    a2[4] = -1;
    *(_DWORD *)v9 = -1;
  }
  if ( (*(_DWORD *)(updated + 16) & 0x20) == 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
  {
    a2[6] = -1;
    a2[5] = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 5) = *(_QWORD *)(updated + 8);
    if ( v8 )
      TransformPointBetweenCoordinateSpaces(a2 + 5, a2 + 5, 0LL, a1);
  }
  v10 = *((_QWORD *)a1 + 3);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 24);
  }
  if ( *((_QWORD *)a1 + 13) == v11 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v13 = MonitorFromRect(a2 + 7, 1LL, 0);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi(&v19, v13, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v15 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(v21, v13, (v15 >> 8) & 0x1FF);
    v16 = v21[0].m128i_i64[0];
    if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
    {
      a2[3] = v21[0].m128i_i32[0] + a2[3] - v19;
      a2[4] += HIDWORD(v16) - v20;
    }
    LODWORD(v16) = v16 - v19;
    a2[7] += v16;
    a2[9] += v16;
    v17 = HIDWORD(v16) - v20;
    a2[10] += HIDWORD(v16) - v20;
    a2[8] += v17;
  }
  a2[1] = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (*(_DWORD *)(updated + 16) & 1) != 0 )
  {
    a2[1] = 1;
    v4 = 1;
  }
  if ( (*(_DWORD *)(updated + 16) & 2) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    a2[1] = v4 | 2;
  *a2 = 44;
  return 1LL;
}
