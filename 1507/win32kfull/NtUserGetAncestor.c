/*
 * XREFs of NtUserGetAncestor @ 0x1C00C6DD0
 * Callers:
 *     <none>
 * Callees:
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00C6EDC (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v12; // edi
  int v13; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 v16; // r9
  __int64 MessageWindow; // rax
  __int64 *v18; // r9

  EnterSharedCrit(1LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87);
LABEL_28:
    v8 = 0LL;
    goto LABEL_21;
  }
  v7 = v6[3];
  v8 = 0LL;
  v5 = 0LL;
  if ( v7 )
    v5 = *(__int64 **)(v7 + 96);
  if ( v6 == v5 && a2 == 4 )
    goto LABEL_19;
  v5 = 0LL;
  if ( v7 )
  {
    v4 = *(__int64 **)(v7 + 8);
    if ( v4 )
      v5 = (__int64 *)v4[2];
  }
  if ( v6 != v5 )
  {
    v5 = 0LL;
    if ( v7 )
      v5 = *(__int64 **)(v7 + 96);
    if ( v6 != v5 && v6[11] )
    {
      if ( a2 == 2 )
      {
        while ( 1 )
        {
          v9 = v6[3];
          v5 = 0LL;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
              v5 = *(__int64 **)(v10 + 16);
          }
          v4 = (__int64 *)v6[11];
          if ( v4 == v5 )
            break;
          v5 = 0LL;
          if ( v9 )
            v5 = *(__int64 **)(v9 + 96);
          if ( v4 == v5 )
            break;
          v6 = (__int64 *)v6[11];
        }
      }
      else
      {
        v12 = a2 - 1;
        if ( v12 )
        {
          v13 = v12 - 2;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              do
              {
                DesktopWindow = GetDesktopWindow((__int64)v6);
                if ( v16 == DesktopWindow )
                  break;
                MessageWindow = GetMessageWindow((__int64)v6);
                if ( v6 == (__int64 *)MessageWindow )
                  break;
                v6 = v18;
              }
              while ( v18[11] );
            }
          }
          else
          {
            while ( 1 )
            {
              Parent = GetParent(v6);
              if ( !Parent )
                break;
              v6 = (__int64 *)Parent;
            }
          }
        }
        else
        {
          v6 = (__int64 *)v6[11];
        }
      }
LABEL_19:
      if ( v6 )
        v8 = *v6;
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v5, v4);
  return v8;
}
