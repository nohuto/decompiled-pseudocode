/*
 * XREFs of ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C009BAFC
 * Callers:
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C009B9D0 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall MsgLookupTableAlloc(int a1)
{
  int v1; // ecx
  unsigned int v2; // eax
  __int64 v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
    {
      v2 = 128;
      goto LABEL_5;
    }
    if ( v1 != 1 )
      return 0LL;
  }
  v2 = 64;
LABEL_5:
  v3 = Win32AllocPoolZInit(v2, 1819112277LL);
  if ( !v3 )
    UserSetLastError(14LL);
  return v3;
}
