/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 StyleWindow; // rax
  BOOL v4; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  for ( i = *((_QWORD *)a1 + 12); i; i = *((_QWORD *)a1 + 12) )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v9;
    v9[1] = i;
    ++*(_DWORD *)(i + 8);
    if ( (*(_BYTE *)(i + 55) & 0x10) != 0 )
      SetVisible(i, 0LL);
    StyleWindow = GetStyleWindow(i, 2848LL);
    v4 = StyleWindow && StyleWindow != i;
    UnlinkWindow(i, a1);
    if ( v4 )
      UnredirectDCEs((struct tagWND *)i);
    SetOrClrWF(1LL, i, 1152LL, 1LL);
    SetOrClrWF(1LL, i, 896LL, 1LL);
    v6 = *(_QWORD *)(i + 16);
    if ( v6 == gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)i, (struct tagSwitchWndInfo *)v9, v5);
    }
    else
    {
      PostEventMessageEx(v6, *(_QWORD *)(v6 + 384), 8, 0, 0, *(_QWORD *)i, 0LL, 0LL);
      ThreadUnlock1(v8, v7);
    }
  }
}
