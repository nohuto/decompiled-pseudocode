/*
 * XREFs of KeTryToFreezeThreadStack @ 0x14013A07C
 * Callers:
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // al
  char result; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int64 *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = KiAcquireThreadStateLock(a1, &v7, (volatile signed __int32 **)&v8);
  if ( v5 <= 4u )
  {
LABEL_13:
    if ( v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    if ( v8 )
      _InterlockedAnd64(v8, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 0;
  }
  if ( v5 == 5 )
  {
    if ( !*(_BYTE *)(a1 + 391)
      || (*(_DWORD *)(a1 + 120) & 0x20) == 0
      || *(char *)(a1 + 195) >= 25
      || *(_BYTE *)(a1 + 113) )
    {
      goto LABEL_13;
    }
  }
  else if ( ((v5 - 7) & 0xFD) == 0 )
  {
    goto LABEL_13;
  }
  result = 1;
  *a2 = v7;
  return result;
}
