/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00B29B0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0152980 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 DesktopWindow; // rax
  struct tagBWL *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagBWL *v10; // r15
  unsigned __int64 *v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  char i; // al
  char v19; // al
  __int64 v20; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h]

  v4 = a2;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v7 = BuildHwndList(*(_QWORD *)(DesktopWindow + 96), (struct tagWND *)2, 0LL);
    v10 = v7;
    if ( v7 )
    {
      v11 = (unsigned __int64 *)((char *)v7 + 32);
      v12 = 0LL;
      if ( (_DWORD)v4 == 2 )
        v12 = 4LL;
      if ( (_DWORD)v4 == 4 )
        v12 = 3LL;
      v13 = *v11;
      if ( *v11 != 1 )
      {
        v14 = (int)v12;
        v25 = (int)v12;
        do
        {
          LOBYTE(v12) = 1;
          v15 = HMValidateHandleNoSecure(v13, v12, v8, v9);
          v16 = v15;
          if ( !v15 || (*(_BYTE *)(*(_QWORD *)(v15 + 152) + 84LL) & 4) != 0 || v15 == a1 )
            goto LABEL_15;
          v17 = *(_QWORD *)(v15 + 104);
          if ( v17 )
          {
            for ( i = *(_BYTE *)(v17 + 55); ; i = *(_BYTE *)(v20 + 55) )
            {
              v19 = i & 0xC0;
              if ( !v19 )
                break;
              if ( v19 == -64 )
                break;
              if ( v17 == a1 )
                break;
              v20 = *(_QWORD *)(v17 + 104);
              if ( !v20 )
                break;
              v17 = *(_QWORD *)(v17 + 104);
            }
          }
          if ( v14 )
          {
            if ( !v17 || v17 == a1 || (_DWORD)v4 == 4 && (*(_BYTE *)(v17 + 55) & 0x28) == 0x20 )
              goto LABEL_15;
          }
          else if ( v17 != a1 )
          {
            goto LABEL_15;
          }
          if ( (unsigned int)v4 >= 3 )
          {
            if ( (*(_BYTE *)(v16 + 41) & 0x40) != 0 )
            {
LABEL_33:
              if ( a3 )
              {
                RectRgnIndirect = GreCreateRectRgnIndirect(v16 + 112);
                GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
                GreDeleteObject(RectRgnIndirect);
                SetOrClrWF(1, (_DWORD *)v16, 0x140u, 1);
                SetVisible((_QWORD *)v16, 0);
                v14 = v25;
              }
              else
              {
                v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v24;
                v24[1] = v16;
                ++*(_DWORD *)(v16 + 8);
                xxxSendMessage((struct tagWND *)v16, 0x18u, (unsigned int)v4 >= 3, v4);
                ThreadUnlock1(v23, v22);
              }
            }
          }
          else if ( (*(_BYTE *)(v16 + 55) & 0x10) != 0 )
          {
            goto LABEL_33;
          }
LABEL_15:
          v13 = *++v11;
        }
        while ( *v11 != 1 );
      }
      FreeHwndList(v10);
    }
  }
}
