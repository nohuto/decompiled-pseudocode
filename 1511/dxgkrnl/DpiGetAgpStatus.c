/*
 * XREFs of DpiGetAgpStatus @ 0x1C00E8D10
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int i; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // ax
  _QWORD *v6; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1048LL);
  if ( (*(_BYTE *)(v1 + 6) & 0x10) != 0 )
  {
    for ( i = *(unsigned __int8 *)(v1 + 52); i >= 0x40; i = (unsigned __int8)i )
    {
      v3 = 0;
      v4 = *(_WORD *)(i - 64 + v1 + 64);
      if ( (_BYTE)v4 == 2 )
        return v3;
      LOWORD(i) = HIBYTE(v4);
      if ( !(_BYTE)i )
        return (unsigned int)-1073741823;
    }
    v3 = -1073741675;
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v1);
    v6[3] = DpiGetAgpStatus;
    v6[4] = 0LL;
    v6[5] = -1073741675LL;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
