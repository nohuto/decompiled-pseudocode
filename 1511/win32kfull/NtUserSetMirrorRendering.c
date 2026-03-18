/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C0220300
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C027A230 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C027A328 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 && (((*(_WORD *)(v4 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v8 = *gpDispInfo;
    if ( a2 )
      v9 = GreEnableMirrorRendering(v8, a1);
    else
      v9 = GreDisableMirrorRendering(v8, a1);
    v7 = v9;
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
