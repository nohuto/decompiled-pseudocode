/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x1800797C0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpTrackRegBinaryInfo @ 0x180084094 (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x180079848 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(__int16 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  __int64 result; // rax

  v2 = a1 & 0x7FFF;
  if ( v2 >= 0x40 )
    return 4201LL;
  v3 = 0;
  if ( !EtwpLoggerArray )
    return 4201LL;
  v4 = 2LL * (a1 & 0x7FFF);
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
  v5 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
  if ( (v5 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
    return 4201LL;
  }
  v6 = *(_DWORD *)(v5 + 324);
  if ( (v6 & 0x800) != 0 && (v6 & 0x10000) == 0 )
    v3 = EtwpProviderArrivalCallback(*(_QWORD *)(EtwpLoggerArray + 8 * v4), a2, 0LL);
  result = v3;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v5 + 20) + 8));
  return result;
}
