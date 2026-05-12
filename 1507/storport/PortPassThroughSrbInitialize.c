/*
 * XREFs of PortPassThroughSrbInitialize @ 0x1C00555A4
 * Callers:
 *     PortPassThroughBuildSrb @ 0x1C00549BC (PortPassThroughBuildSrb.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

void *__fastcall PortPassThroughSrbInitialize(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax

  memset(a1, 0, 0x58uLL);
  *a1 = 88;
  *((_BYTE *)a1 + 5) = *(_BYTE *)(a2 + 3);
  *((_BYTE *)a1 + 6) = *(_BYTE *)(a2 + 4);
  *((_BYTE *)a1 + 7) = *(_BYTE *)(a2 + 5);
  *((_BYTE *)a1 + 10) = *(_BYTE *)(a2 + 6);
  *((_BYTE *)a1 + 11) = *(_BYTE *)(a2 + 7);
  if ( *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( *(_BYTE *)(a2 + 8) == 1 )
        a1[3] = 64;
      else
        a1[3] = 192;
    }
    else
    {
      a1[3] = 128;
    }
  }
  else
  {
    a1[3] = 0;
  }
  if ( !a5 )
    a1[3] |= 0x20u;
  a1[3] |= 0x100u;
  a1[4] = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 16);
  *((_QWORD *)a1 + 4) = a5;
  *((_QWORD *)a1 + 6) = 0LL;
  a1[5] = v8;
  *((_QWORD *)a1 + 3) = a4;
  return memmove(a1 + 18, (const void *)(a2 + 36), *(unsigned __int8 *)(a2 + 6));
}
