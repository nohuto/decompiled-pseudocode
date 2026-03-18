/*
 * XREFs of NtUserGetAncestor @ 0x140188310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edi
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // r8
  int v17; // edi
  char v18; // dl
  __int64 v19; // rax
  __int64 DesktopWindow; // rax
  __int64 v21; // r8
  __int64 MessageWindow; // rax
  __int64 *v23; // r8

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (__int64 *)v4;
  if ( v4 )
  {
    if ( (unsigned int)(a2 - 1) > 2 )
    {
      UserSetLastError(87);
      goto LABEL_17;
    }
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
      goto LABEL_15;
    if ( v4 == *(_QWORD *)(v7 + 112) && a2 == 4 )
    {
LABEL_16:
      v5 = *v6;
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(v7 + 8);
    if ( (!v8 || v6 != *(__int64 **)(v8 + 24)) && v6 != *(__int64 **)(v7 + 112) )
    {
LABEL_15:
      if ( v6[13] )
      {
        v9 = a2 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v17 = v10 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                while ( v6[13] )
                {
                  DesktopWindow = GetDesktopWindow((__int64)v6);
                  if ( v21 == DesktopWindow )
                    break;
                  MessageWindow = GetMessageWindow((__int64)v6);
                  if ( v6 == (__int64 *)MessageWindow )
                    break;
                  v6 = v23;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                v18 = *(_BYTE *)(v6[5] + 31) & 0xC0;
                if ( !v18 )
                  break;
                v19 = 13LL;
                if ( v18 != 64 )
                  v19 = 15LL;
                if ( !v6[v19] )
                  break;
                v6 = (__int64 *)v6[v19];
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v11 = v6[3];
              v12 = 0LL;
              if ( v11 )
              {
                v13 = *(_QWORD *)(v11 + 8);
                if ( v13 )
                  v12 = *(_QWORD *)(v13 + 24);
              }
              v14 = v6[13];
              if ( v14 == v12 )
                break;
              v16 = 0LL;
              if ( v11 )
                v16 = *(_QWORD *)(v11 + 112);
              if ( v14 == v16 )
                break;
              v6 = (__int64 *)v6[13];
            }
          }
        }
        else
        {
          v6 = (__int64 *)v6[13];
        }
        if ( v6 )
          goto LABEL_16;
      }
    }
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
