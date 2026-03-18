/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D34E4
 * Callers:
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01D374C (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C008F7D4 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C00901D4 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C0090238 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00912C8 (RtlInitUnicodeStringOrId.c)
 */

void __fastcall Feedback::xxxReplaceMouseCursorsWithPenCursors(Feedback *this)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v27; // rcx
  unsigned int *v28; // rbx
  __int64 v29; // rdi
  BOOL v30; // esi
  unsigned int v31; // eax
  __int64 v32; // rdx
  struct tagCURSOR *Image; // rax
  struct _UNICODE_STRING v34; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v2, v1, v3, v4) & 0xF) != 0 )
      goto LABEL_3;
LABEL_13:
    v27 = (_DWORD *)(gpsi + 2428LL);
    goto LABEL_18;
  }
  if ( IsDPIDWMSysMet(v2)
    && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_13;
  }
LABEL_3:
  if ( IsDPIDWMSysMet(0x28uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 408)
      ? (v15 = 0)
      : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v15) )
  {
    v27 = (_DWORD *)(gpsi + 2816LL);
  }
  else
  {
    v27 = (_DWORD *)(gpsi + 2040LL);
  }
LABEL_18:
  v28 = (unsigned int *)&unk_1C02F0098;
  v29 = 4LL;
  v30 = *v27 != 0;
  do
  {
    if ( v30 )
      v31 = v28[1];
    else
      v31 = v28[2];
    RtlInitUnicodeStringOrId(&v34, (WCHAR *)(unsigned __int16)v31);
    Image = (struct tagCURSOR *)xxxClientLoadImage((char **)&v34, v32, 2u, 0, 0, 64);
    if ( Image )
    {
      zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[8 * *v28 + 4]);
      UpdateSystemCursorPath(*v28, &v34);
      xxxSetMonitorIcoCurIndex((int)&v34, 0, *v28, 1);
    }
    v28 += 3;
    --v29;
  }
  while ( v29 );
  Feedback::gfUsingPenCursors = 1;
}
