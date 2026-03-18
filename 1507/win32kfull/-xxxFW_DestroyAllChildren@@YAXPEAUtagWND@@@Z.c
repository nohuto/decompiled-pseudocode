/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 StyleWindow; // rax
  BOOL v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+40h] [rbp-28h] BYREF

  for ( i = *((_QWORD *)a1 + 12); i; i = *((_QWORD *)a1 + 12) )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v8;
    v8[1] = i;
    ++*(_DWORD *)(i + 8);
    if ( (*(_BYTE *)(i + 55) & 0x10) != 0 )
      SetVisible(i, 0);
    StyleWindow = GetStyleWindow(i, 2848);
    v4 = StyleWindow && StyleWindow != i;
    UnlinkWindow(i, (__int64)a1);
    if ( v4 )
      UnredirectDCEs((struct tagWND *)i);
    SetOrClrWF(1, (_DWORD *)i, 0x480u, 1);
    SetOrClrWF(1, (_DWORD *)i, 0x380u, 1);
    v5 = *(_QWORD *)(i + 16);
    if ( v5 == gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)i, (struct tagSwitchWndInfo *)v8);
    }
    else
    {
      PostEventMessageEx(v5, *(_QWORD *)(v5 + 392), 8, 0, 0, *(_QWORD *)i, 0LL, 0LL);
      ThreadUnlock1(v7, v6);
    }
  }
}
