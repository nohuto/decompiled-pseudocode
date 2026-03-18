/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C014A8B4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     DwmAsyncTextChange @ 0x1C0055C54 (DwmAsyncTextChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     DwmAsyncChildCreate @ 0x1C005B92C (DwmAsyncChildCreate.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     IsMotherDesktopWindow @ 0x1C0088B20 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C0088B44 (DwmAsyncChildDestroy.c)
 *     DwmChildRectChange @ 0x1C00916A8 (DwmChildRectChange.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, int a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *DesktopWindow; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdi
  int ClassStyle; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  __int128 v27[3]; // [rsp+50h] [rbp-58h] BYREF
  const struct tagDESKTOP *v28; // [rsp+B0h] [rbp+8h]

  v28 = a1;
  v3 = gSharedInfo[1];
  v4 = v3 + 24LL * giheLast;
  while ( v3 <= v4 )
  {
    if ( *(_BYTE *)(v3 + 16) == 1 )
    {
      v5 = *(_QWORD *)v3;
      if ( *(const struct tagDESKTOP **)(*(_QWORD *)v3 + 24LL) == a1 )
      {
        if ( !(unsigned int)IsMotherDesktopWindow(*(_QWORD *)v3) )
        {
          if ( a2 )
          {
            if ( (unsigned int)IsDesktopWindow(v7) )
            {
              DesktopWindow = 0LL;
            }
            else if ( v5 == GetMessageWindow(v10) )
            {
              DesktopWindow = (__int64 *)GetDesktopWindow(v11);
            }
            else
            {
              DesktopWindow = *(__int64 **)(v5 + 88);
            }
            memset(v27, 0, 40);
            GetWindowCompositionInfo(v5, (__int64)v27);
            if ( DesktopWindow )
              v13 = *DesktopWindow;
            else
              v13 = 0LL;
            v14 = *(_QWORD *)(v5 + 24);
            ClassStyle = DwmGetClassStyle(v5);
            v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
            DwmAsyncChildCreate(
              v20,
              *(_QWORD *)v5,
              v13,
              *(_DWORD *)(v5 + 52),
              *(_DWORD *)(v5 + 48),
              *(_DWORD *)(v5 + 288),
              ClassStyle,
              v27,
              *(_QWORD *)(v14 + 40),
              (__int128 *)(v5 + 112));
            DwmChildRectChange(v5);
            if ( (*(_BYTE *)(v5 + 50) & 8) != 0 )
            {
              if ( (unsigned int)IsTopLevelWindow(v5) )
              {
                SendDwmIconChange(v5);
                v26 = (void *)ReferenceDwmApiPort(v23, v22, v24, v25);
                DwmAsyncTextChange(v26, *(_QWORD *)v5);
              }
            }
          }
          else
          {
            v21 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
            DwmAsyncChildDestroy(v21, *(_QWORD *)v5);
          }
        }
        a1 = v28;
      }
    }
    v3 += 24LL;
  }
}
