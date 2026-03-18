/*
 * XREFs of Control_EP_StopMapping @ 0x1C0025D20
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall Control_EP_StopMapping(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v3 = *(_DWORD *)(a1 + 100) == 3;
  *(_BYTE *)(a1 + 96) = v2;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 100) = 1;
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 0;
    v4 = 1;
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
