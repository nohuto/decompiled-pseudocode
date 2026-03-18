/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00D2698 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C0068EA0 (DwmAsyncChildDestroy.c)
 *     IsMotherDesktopWindow @ 0x1C0069800 (IsMotherDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C006EE8C (DwmChildRectChange.c)
 *     DwmAsyncTextChange @ 0x1C00743D8 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     DwmAsyncChildCreate @ 0x1C00D2B44 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  __int64 v12; // rdi
  int ClassStyle; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rax
  __int64 v25[6]; // [rsp+50h] [rbp-58h] BYREF
  const struct tagDESKTOP *v26; // [rsp+B0h] [rbp+8h]

  v26 = a1;
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
            if ( !(unsigned int)IsDesktopWindow(v7) && v5 == GetMessageWindow(v10) )
              GetDesktopWindow(v11);
            memset(v25, 0, 40);
            GetWindowCompositionInfo(v5, (__int64)v25);
            v12 = *(_QWORD *)(v5 + 24);
            ClassStyle = DwmGetClassStyle(v5);
            v18 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
            DwmAsyncChildCreate(
              v18,
              *(_DWORD *)(v5 + 48),
              *(_DWORD *)(v5 + 288),
              ClassStyle,
              (__int64)v25,
              *(_QWORD *)(v12 + 40),
              v5 + 112);
            DwmChildRectChange(v5);
            if ( (*(_BYTE *)(v5 + 50) & 8) != 0 )
            {
              if ( (unsigned int)IsTopLevelWindow(v5) )
              {
                SendDwmIconChange(v5);
                v24 = (void *)ReferenceDwmApiPort(v21, v20, v22, v23);
                DwmAsyncTextChange(v24, *(_QWORD *)v5);
              }
            }
          }
          else
          {
            v19 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
            DwmAsyncChildDestroy(v19, *(_QWORD *)v5);
          }
        }
        a1 = v26;
      }
    }
    v3 += 24LL;
  }
}
