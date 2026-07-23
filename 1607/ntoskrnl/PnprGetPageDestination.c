/*
 * XREFs of PnprGetPageDestination @ 0x1401D0248
 * Callers:
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnprGetPageDestination(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned int v5; // r11d
  _QWORD *i; // r8
  unsigned __int64 v7; // rdx

  v2 = 0LL;
  v4 = *(_QWORD *)(PnprContext + 24);
  v5 = *(_DWORD *)(v4 + 4);
  if ( !v5 )
    return 3221226021LL;
  for ( i = (_QWORD *)(v4 + 24); ; i += 2 )
  {
    v7 = *(i - 1);
    if ( a1 >= v7 && a1 <= *i + v7 - 1 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v5 )
      return 3221226021LL;
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64))(PnprContext + 10728))(
           *(_QWORD *)(PnprContext + 10640),
           a1,
           a2,
           v2);
}
