/*
 * XREFs of ndisVerifierFreeMemory @ 0x1C0063DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisVerifierFreeMemory(_QWORD *a1, UINT a2, UINT a3)
{
  UINT v4; // edi
  _QWORD *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v4 = a2;
  v5 = a1;
  if ( (ndisFlags & 0x400) != 0 )
  {
    v4 = a2 + 40;
    v5 = a1 - 5;
    if ( (ndisFlags & 0x800) == 0 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
      v7 = *v5;
      v8 = (_QWORD *)v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v8 != v5 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      KeReleaseSpinLock(&ndisTrackMemLock, v6);
    }
  }
  NdisFreeMemory(v5, v4, a3);
}
