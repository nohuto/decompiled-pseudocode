/*
 * XREFs of ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C00E2700
 * Callers:
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00E25CC (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall MsgLookupTableAlloc(int a1)
{
  int v1; // ecx
  unsigned int v3; // eax
  __int64 v4; // rbx

  if ( !a1 )
  {
LABEL_6:
    v3 = 64;
    goto LABEL_7;
  }
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0LL;
    goto LABEL_6;
  }
  v3 = 128;
LABEL_7:
  v4 = Win32AllocPoolZInit(v3, 1819112277LL);
  if ( !v4 )
    UserSetLastError(14);
  return v4;
}
