/*
 * XREFs of Control_EP_ProcessExpectedEventTRBs @ 0x1C0028F90
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

void __fastcall Control_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v3 = *(_DWORD *)(a1 + 308) == 0;
  *(_BYTE *)(a1 + 96) = v2;
  if ( v3 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    *(_DWORD *)(a1 + 304) |= 4u;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v5 + 37)
      || (v6 = *(_QWORD *)(v5 + 136), _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) == *(_DWORD *)(v6 + 8)) )
    {
      ESM_AddEvent((PVOID)(v5 + 272));
    }
  }
}
