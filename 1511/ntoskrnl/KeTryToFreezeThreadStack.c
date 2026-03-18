/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1400D8DA4
 * Callers:
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int8 v5; // al
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  volatile signed __int64 *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7, (__int64)a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = KiAcquireThreadStateLock(a1, &v8, (volatile signed __int32 **)&v9);
  if ( v5 <= 4u )
  {
LABEL_9:
    if ( v8 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    if ( v9 )
      _InterlockedAnd64(v9, 0LL);
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
      goto LABEL_9;
    }
  }
  else if ( ((v5 - 7) & 0xFD) == 0 )
  {
    goto LABEL_9;
  }
  *a2 = v8;
  return 1;
}
