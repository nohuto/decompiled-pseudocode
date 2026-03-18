/*
 * XREFs of Control_EP_Disable @ 0x1C0025A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Control_EP_Disable(__int64 a1)
{
  int v2; // edi
  KIRQL v3; // al

  do
    v2 = *(_DWORD *)(a1 + 100);
  while ( ((v2 - 1) & 0xFFFFFFFD) == 0 );
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(a1 + 96) = v3;
  if ( v2 )
    *(_DWORD *)(a1 + 100) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v3);
}
