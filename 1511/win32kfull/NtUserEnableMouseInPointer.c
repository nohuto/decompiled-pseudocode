/*
 * XREFs of NtUserEnableMouseInPointer @ 0x1C00C9E00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00C9EF0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall NtUserEnableMouseInPointer(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rcx
  int v7; // ecx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (a1 != 0) != a1 )
  {
    v7 = 87;
    goto LABEL_9;
  }
  if ( a1 && (GetAppCompatFlags2QuadWord(gptiCurrent) & 0x80000000000LL) != 0
    || (v3 = *(_QWORD *)(gptiCurrent + 376LL), v4 = *(_DWORD *)(v3 + 776), a1 != ((v4 >> 2) & 1)) && (v4 & 8) != 0 )
  {
    v7 = 5;
LABEL_9:
    UserSetLastError(v7);
    goto LABEL_6;
  }
  v5 = v4 & 0xFFFFFFFB;
  v2 = 1;
  *(_DWORD *)(v3 + 776) = v5 | (4 * (a1 & 1 | 2));
LABEL_6:
  UserSessionSwitchLeaveCrit(v5, v3);
  return v2;
}
