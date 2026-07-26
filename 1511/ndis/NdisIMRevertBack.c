/*
 * XREFs of NdisIMRevertBack @ 0x1C0057FD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 */

void __fastcall NdisIMRevertBack(KSPIN_LOCK *MiniportAdapterHandle, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi

  v2 = MiniportAdapterHandle + 12;
  KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 723877;
  ndisMProcessDeferred(MiniportAdapterHandle);
  MiniportAdapterHandle[65] = 0LL;
  if ( a2 == -1 )
  {
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLockFromDpcLevel(v2);
  }
  else
  {
    *((_BYTE *)MiniportAdapterHandle + 89) = 0;
    MiniportAdapterHandle[232] = 0LL;
    MiniportAdapterHandle[233] = 0LL;
    KeReleaseSpinLock(v2, a2);
  }
}
