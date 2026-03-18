/*
 * XREFs of IoQueuesDeletion @ 0x1C0005C68
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C0006FD8 (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C000D2C0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C000D4B0 (NVMeIoSubmissionQueueDelete.c)
 */

char __fastcall IoQueuesDeletion(__int64 a1)
{
  unsigned __int16 v2; // di
  char v3; // si
  unsigned __int16 i; // di
  unsigned __int16 j; // bp
  unsigned __int16 v6; // di
  unsigned __int16 v7; // di

  v2 = 0;
  v3 = 1;
  if ( *(_WORD *)(a1 + 368) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL);
      if ( *(_WORD *)(a1 + 368) <= 4u )
        break;
      ++v2;
    }
    while ( v2 < 0x3E8u );
  }
  for ( i = 0; i < *(_WORD *)(a1 + 232); ++i )
  {
    for ( j = 0; j < 0x3E8u; ++j )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL);
      if ( !*(_WORD *)(136LL * i + *(_QWORD *)(a1 + 544) + 128) )
        break;
    }
  }
  v6 = 0;
  while ( v6 < *(_WORD *)(a1 + 232) )
  {
    v3 = NVMeIoSubmissionQueueDelete(a1, ++v6);
    if ( !v3 )
      *(_DWORD *)(a1 + 24) = 15;
  }
  v7 = 0;
  while ( v7 < *(_WORD *)(a1 + 234) )
  {
    v3 = NVMeIoCompletionQueueDelete(a1, ++v7);
    if ( !v3 )
      *(_DWORD *)(a1 + 24) = 16;
  }
  return v3;
}
