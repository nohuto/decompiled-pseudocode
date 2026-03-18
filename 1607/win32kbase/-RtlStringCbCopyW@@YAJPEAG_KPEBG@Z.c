/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005FC70
 * Callers:
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C005D660 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0061850 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // r10
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v4;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_12;
    v5 = 2147483646 - v3;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_12:
      a1 -= 2;
      v4 = -2147483643;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
