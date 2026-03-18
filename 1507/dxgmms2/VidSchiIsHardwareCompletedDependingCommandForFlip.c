/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00176C4
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0001258 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // r10
  unsigned int v5; // r8d
  unsigned int *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  bool v10; // cf
  bool v11; // zf

  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 1068) )
  {
    do
    {
      v2 = *(_QWORD *)(a1 + 8LL * v3);
      v4 = *(_QWORD *)(v2 + 104);
      if ( *(_BYTE *)(v4 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
        return 1LL;
    }
    while ( ++v3 < *(_DWORD *)(a1 + 1068) );
  }
  v5 = *(_DWORD *)(a1 + 1068);
  if ( !v5 )
  {
LABEL_12:
    VidSchiUpdateLastCompletedPresentTimestamp(v2);
    return 1LL;
  }
  v6 = (unsigned int *)(a1 + 524);
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 - 131);
    v8 = *v6;
    v9 = *(_DWORD *)(v7 + 156);
    v10 = *v6 < v9;
    v11 = *v6 == v9;
    if ( *v6 == v9 )
    {
      if ( *(v6 - 1) > *(_DWORD *)(v7 + 152) )
        return 0LL;
      v10 = v8 < v9;
      v11 = v8 == v9;
    }
    if ( !v10 && !v11 )
      return 0LL;
    ++v1;
    v6 += 2;
    if ( v1 >= v5 )
      goto LABEL_12;
  }
}
