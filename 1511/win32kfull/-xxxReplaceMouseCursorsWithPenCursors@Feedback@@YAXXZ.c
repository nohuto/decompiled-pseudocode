/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DBAA8
 * Callers:
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01DBD4C (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 */

void __fastcall Feedback::xxxReplaceMouseCursorsWithPenCursors(Feedback *this)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v8; // rcx
  unsigned int *v9; // rbx
  __int64 v10; // rdi
  BOOL v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int8 *Image; // rax
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
LABEL_15:
    v8 = (_DWORD *)(gpsi + 2428LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v1)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x28uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v4 = 0)
      : (v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        v4) )
  {
    v8 = (_DWORD *)(gpsi + 2816LL);
  }
  else
  {
    v8 = (_DWORD *)(gpsi + 2040LL);
  }
LABEL_20:
  v9 = (unsigned int *)&unk_1C02EAA00;
  v10 = 4LL;
  v11 = *v8 != 0;
  do
  {
    if ( v11 )
      v12 = v9[1];
    else
      v12 = v9[2];
    RtlInitUnicodeStringOrId(&v15, (WCHAR *)(unsigned __int16)v12);
    Image = xxxClientLoadImage((char **)&v15, v13, 2u, 0, 0, 0x40u);
    if ( Image )
    {
      zzzSetSystemImage((__int64)Image, *(_QWORD *)&gasyscur[8 * *v9 + 4]);
      UpdateSystemCursorPath(*v9, &v15);
      xxxSetMonitorIcoCurIndex((char **)&v15, 0, *v9, 1);
    }
    v9 += 3;
    --v10;
  }
  while ( v10 );
  Feedback::gfUsingPenCursors = 1;
}
