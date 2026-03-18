/*
 * XREFs of NtUserGetAncestor @ 0x1C00F8680
 * Callers:
 *     <none>
 * Callees:
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetParent @ 0x1C00F878C (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // r8
  __int64 v9; // rax
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 v18; // r9
  __int64 MessageWindow; // rax
  __int64 *v20; // r9

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (__int64 *)v4;
  if ( v4 )
  {
    if ( (unsigned int)(a2 - 1) > 2 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v9 = *(_QWORD *)(v4 + 24);
      v6 = 0LL;
      if ( v9 )
        v6 = *(__int64 **)(v9 + 96);
      if ( v8 != v6 || a2 != 4 )
      {
        v6 = 0LL;
        if ( v9 )
        {
          v5 = *(__int64 **)(v9 + 8);
          if ( v5 )
            v6 = (__int64 *)v5[2];
        }
        if ( v8 == v6 )
          goto LABEL_28;
        v6 = 0LL;
        if ( v9 )
          v6 = *(__int64 **)(v9 + 96);
        if ( v8 == v6 || !v8[11] )
        {
LABEL_28:
          v8 = 0LL;
        }
        else
        {
          v10 = a2 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v15 = v11 - 1;
              if ( v15 )
              {
                if ( v15 == 1 )
                {
                  do
                  {
                    DesktopWindow = GetDesktopWindow((__int64)v8);
                    if ( v18 == DesktopWindow )
                      break;
                    MessageWindow = GetMessageWindow((__int64)v8);
                    if ( v8 == (__int64 *)MessageWindow )
                      break;
                    v8 = v20;
                  }
                  while ( v20[11] );
                }
              }
              else
              {
                while ( 1 )
                {
                  Parent = GetParent(v8);
                  if ( !Parent )
                    break;
                  v8 = (__int64 *)Parent;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                v12 = v8[3];
                v5 = 0LL;
                if ( v12 )
                {
                  v13 = *(_QWORD *)(v12 + 8);
                  if ( v13 )
                    v5 = *(__int64 **)(v13 + 16);
                }
                v6 = (__int64 *)v8[11];
                if ( v6 == v5 )
                  break;
                v5 = 0LL;
                if ( v12 )
                  v5 = *(__int64 **)(v12 + 96);
                if ( v6 == v5 )
                  break;
                v8 = (__int64 *)v8[11];
              }
            }
          }
          else
          {
            v8 = (__int64 *)v8[11];
          }
        }
      }
      if ( v8 )
        v7 = *v8;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
