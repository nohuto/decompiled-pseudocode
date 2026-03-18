/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1C00FFAC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     _SetTouchWindowFlags @ 0x1C00FFB48 (_SetTouchWindowFlags.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v11; // ecx

  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v11 = 1004;
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
          InternalRemoveProp(v6, gatomTouchFlags, 1);
          v9 = 1;
        }
        goto LABEL_6;
      }
      v11 = 5;
    }
    UserSetLastError(v11);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
