/*
 * XREFs of UsbDevice_ControllerResetPostReset @ 0x1C00300B8
 * Callers:
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_ControllerResetPostReset(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  v1 = (__int64 *)(a1 + 176);
  v2 = 31LL;
  do
  {
    v3 = *v1;
    if ( *v1 )
    {
      KeClearEvent((PRKEVENT)(v3 + 40));
      ESM_AddEvent((PVOID)(v3 + 272));
      _m_prefetchw((const void *)(v3 + 32));
      v4 = *(_DWORD *)(v3 + 32);
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v4 ^ 0x80, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 0x80u) == 0 )
        KeWaitForSingleObject((PVOID)(v3 + 40), Executive, 0, 0, 0LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
