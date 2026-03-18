/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00C94C4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C014D230 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 DesktopWindow; // rax
  struct tagBWL *v7; // rax
  struct tagBWL *v8; // r15
  unsigned __int64 *v9; // r14
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  char i; // al
  char v17; // al
  __int64 v18; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h]

  v4 = a2;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v7 = BuildHwndList(*(_QWORD *)(DesktopWindow + 96), 2, 0LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = (unsigned __int64 *)((char *)v7 + 32);
      v10 = 0;
      if ( (_DWORD)v4 == 2 )
        v10 = 4;
      if ( (_DWORD)v4 == 4 )
        v10 = 3;
      v11 = *v9;
      if ( *v9 != 1 )
      {
        v12 = v10;
        v23 = v10;
        do
        {
          v13 = HMValidateHandleNoSecure(v11, 1);
          v14 = v13;
          if ( !v13 || (*(_BYTE *)(*(_QWORD *)(v13 + 152) + 84LL) & 4) != 0 || v13 == a1 )
            goto LABEL_15;
          v15 = *(_QWORD *)(v13 + 104);
          if ( v15 )
          {
            for ( i = *(_BYTE *)(v15 + 55); ; i = *(_BYTE *)(v18 + 55) )
            {
              v17 = i & 0xC0;
              if ( !v17 )
                break;
              if ( v15 == a1 )
                break;
              if ( v17 == -64 )
                break;
              v18 = *(_QWORD *)(v15 + 104);
              if ( !v18 )
                break;
              v15 = *(_QWORD *)(v15 + 104);
            }
          }
          if ( v12 )
          {
            if ( !v15 || v15 == a1 || (_DWORD)v4 == 4 && (*(_BYTE *)(v15 + 55) & 0x28) == 0x20 )
              goto LABEL_15;
          }
          else if ( v15 != a1 )
          {
            goto LABEL_15;
          }
          if ( (unsigned int)v4 >= 3 )
          {
            if ( (*(_BYTE *)(v14 + 41) & 0x40) != 0 )
            {
LABEL_33:
              if ( a3 )
              {
                RectRgnIndirect = GreCreateRectRgnIndirect(v14 + 112);
                GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
                GreDeleteObject(RectRgnIndirect);
                SetOrClrWF(1, (_DWORD *)v14, 0x140u, 1);
                SetVisible(v14, 0);
                v12 = v23;
              }
              else
              {
                v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v22;
                v22[1] = v14;
                ++*(_DWORD *)(v14 + 8);
                xxxSendMessage((struct tagWND *)v14, 0x18u, (unsigned int)v4 >= 3, v4);
                ThreadUnlock1(v21, v20);
              }
            }
          }
          else if ( (*(_BYTE *)(v14 + 55) & 0x10) != 0 )
          {
            goto LABEL_33;
          }
LABEL_15:
          v11 = *++v9;
        }
        while ( *v9 != 1 );
      }
      FreeHwndList(v8);
    }
  }
}
