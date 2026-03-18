/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1C012F850
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetTouchWindowFlags @ 0x1C012F8D8 (_SetTouchWindowFlags.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v11 = 1004LL;
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 16) )
      {
        if ( a3 )
        {
          v9 = SetTouchWindowFlags(v6, a2 | 0x10000u);
        }
        else
        {
          InternalRemoveProp();
          v9 = 1;
        }
        goto LABEL_6;
      }
      v11 = 5LL;
    }
    UserSetLastError(v11);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
