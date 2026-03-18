/*
 * XREFs of xxxShowOwnedWindows @ 0x1C003F7A8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0124300 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 */

char __fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  char i; // al
  char v17; // al
  __int64 v18; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp+8h]

  LOBYTE(v4) = *(_BYTE *)(a1 + 55) & 0xC0;
  if ( (_BYTE)v4 != 64 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v4 = BuildHwndList(*(_QWORD *)(DesktopWindow + 96), 2LL, 0LL);
    v8 = v4;
    if ( v4 )
    {
      v9 = (__int64 *)(v4 + 32);
      v10 = 0LL;
      if ( a2 == 2 )
        v10 = 4LL;
      if ( a2 == 4 )
        v10 = 3LL;
      v11 = *v9;
      if ( *v9 != 1 )
      {
        v12 = (int)v10;
        v23 = (int)v10;
        do
        {
          LOBYTE(v10) = 1;
          v13 = HMValidateHandleNoSecure(v11, v10);
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
            if ( !v15 || v15 == a1 || a2 == 4 && (*(_BYTE *)(v15 + 55) & 0x28) == 0x20 )
              goto LABEL_15;
          }
          else if ( v15 != a1 )
          {
            goto LABEL_15;
          }
          if ( a2 >= 3 )
          {
            if ( (*(_BYTE *)(v14 + 41) & 0x40) != 0 )
            {
LABEL_33:
              if ( a3 )
              {
                RectRgnIndirect = GreCreateRectRgnIndirect(v14 + 112);
                GreCombineRgn(a3, a3, RectRgnIndirect, 2LL, v21, v22);
                GreDeleteObject(RectRgnIndirect);
                SetOrClrWF(1LL, v14, 320LL, 1LL);
                SetVisible(v14, 0LL);
                v12 = v23;
              }
              else
              {
                v21 = *(_QWORD *)(gptiCurrent + 376LL);
                *(_QWORD *)(gptiCurrent + 376LL) = &v21;
                v22 = v14;
                ++*(_DWORD *)(v14 + 8);
                xxxSendMessage(v14, 24LL, a2 >= 3);
                ThreadUnlock1();
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
      LOBYTE(v4) = FreeHwndList(v8);
    }
  }
  return v4;
}
