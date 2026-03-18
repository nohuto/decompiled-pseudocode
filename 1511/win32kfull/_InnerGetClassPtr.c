/*
 * XREFs of _InnerGetClassPtr @ 0x1C011D5FC
 * Callers:
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 *     _UnregisterClass @ 0x1C011D430 (_UnregisterClass.c)
 *     GetClassPtr @ 0x1C011D590 (GetClassPtr.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall InnerGetClassPtr(__int16 a1, __int64 **a2, __int64 a3)
{
  __int64 *i; // rcx

  if ( a1 )
  {
    for ( i = *a2; i; i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 4) == a1 && (!a3 || *((_WORD *)i + 53) == WORD1(a3)) && (*((_BYTE *)i + 34) & 4) == 0 )
        return a2;
      a2 = (__int64 **)i;
    }
  }
  return 0LL;
}
