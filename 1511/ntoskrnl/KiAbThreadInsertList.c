/*
 * XREFs of KiAbThreadInsertList @ 0x1400EC5C8
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400FB898 (KeAbProcessBaseIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x1401027C4 (KiAbThreadBoostIoPriority.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8, (__int64)a2, (__int64)a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v3 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1416), 1u);
  return v3;
}
