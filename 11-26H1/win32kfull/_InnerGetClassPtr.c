/*
 * XREFs of _InnerGetClassPtr @ 0x140150670
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     GetClassPtr @ 0x140150850 (GetClassPtr.c)
 *     _UnregisterClass @ 0x1401C4174 (_UnregisterClass.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall InnerGetClassPtr(__int16 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r8

  if ( a1 )
  {
    while ( *a2 )
    {
      v4 = *(_QWORD *)(*a2 + 8);
      if ( *(_WORD *)v4 == a1 && (!a3 || HIWORD(*(_DWORD *)(v4 + 64)) == WORD1(a3)) && (*(_BYTE *)(v4 + 6) & 4) == 0 )
        return a2;
      a2 = (__int64 *)*a2;
    }
  }
  return 0LL;
}
