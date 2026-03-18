/*
 * XREFs of NtUserPromotePointer @ 0x1C021EB60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01E1A0C (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  v4 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( v4 <= 0x10000
      || v4 > 0x10002 && (v4 <= 0x20000 || v4 > 0x20002 && (v4 <= 0x40000 || v4 > 0x40002 && v4 - 524289 > 1)) )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v7 = 0;
    UserSetLastError(87);
    goto LABEL_16;
  }
  v7 = xxxPromotePointerToMouse(a1, a2);
  if ( !v7 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
