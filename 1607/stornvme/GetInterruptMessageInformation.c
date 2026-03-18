/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0005448
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     FreeMsiInfo @ 0x1C0005340 (FreeMsiInfo.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  FreeMsiInfo(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 2) <= 1 )
  {
    v4 = 0;
    if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL) )
      goto LABEL_11;
    do
    {
      if ( v4 && *(_DWORD *)(a1 + 12) != 3 )
        *(_DWORD *)(a1 + 12) = 2;
      ++v4;
    }
    while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v4) );
    if ( !v4 )
    {
LABEL_11:
      v4 = 1;
      *(_DWORD *)(a1 + 12) = 1;
    }
    *(_WORD *)(a1 + 200) = v4;
  }
  else
  {
    *(_WORD *)(a1 + 200) = 1;
  }
  v5 = (_QWORD *)(a1 + 208);
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)*(unsigned __int16 *)(a1 + 200));
  if ( *(_QWORD *)(a1 + 208)
    && (NVMeZeroMemory(*(void **)(a1 + 208), 24 * *(unsigned __int16 *)(a1 + 200)),
        StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 200)),
        *(_QWORD *)(a1 + 216)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 216), 16 * *(unsigned __int16 *)(a1 + 200));
    while ( v1 < *(_WORD *)(a1 + 200) )
    {
      v6 = 3LL * v1;
      *(_DWORD *)(*v5 + 8 * v6) = v1;
      v7 = *(_QWORD *)(a1 + 216) + 16LL * v1++;
      *(_QWORD *)(*v5 + 8 * v6 + 8) = v7;
    }
    return 1;
  }
  else
  {
    FreeMsiInfo(a1);
    return 0;
  }
}
