/*
 * XREFs of _GetMenuDefaultItem @ 0x1C024AB34
 * Callers:
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0224890 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C024AB34 (_GetMenuDefaultItem.c)
 * Callees:
 *     _GetMenuDefaultItem @ 0x1C024AB34 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 52);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = a2;
  if ( v3 <= 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v5 + 4);
    if ( (v7 & 0x1000) != 0 && ((v7 & 3) == 0 || (a3 & 1) != 0) )
      break;
    ++v4;
    v5 += 152LL;
    if ( v4 >= v3 )
      goto LABEL_9;
  }
  if ( (a3 & 2) != 0 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( v8 )
    {
      result = GetMenuDefaultItem(v8, a2, a3);
      if ( (_DWORD)result != -1 )
        return result;
    }
  }
LABEL_9:
  if ( v4 >= v3 )
    return 0xFFFFFFFFLL;
  if ( !v6 )
    return *(unsigned int *)(v5 + 8);
  return (unsigned int)v4;
}
