/*
 * XREFs of DrvWakeupHandler @ 0x1C00BE410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvWakeupHandler(_QWORD *a1)
{
  wchar_t *v1; // rdx

  v1 = gpGraphicsDeviceList;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      if ( (*((_DWORD *)v1 + 40) & 0x40000000) != 0 )
        break;
      v1 = (wchar_t *)*((_QWORD *)v1 + 16);
    }
    while ( v1 );
    if ( v1 )
      *a1 = *((_QWORD *)v1 + 18);
  }
  return v1;
}
