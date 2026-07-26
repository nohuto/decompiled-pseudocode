/*
 * XREFs of ndisQueryMiniportOffloadCaps @ 0x1C00446D8
 * Callers:
 *     ndisOidPreOffloadCaps @ 0x1C0043940 (ndisOidPreOffloadCaps.c)
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C002420C (ndisCopyNdisOffload.c)
 */

__int64 __fastcall ndisQueryMiniportOffloadCaps(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _BYTE *v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ebx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE **)(a1 + 4152);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2310300;
  if ( v5 && *v5 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 48);
    v7 = 0;
    if ( v6 >= 0x70 )
    {
      ndisCopyNdisOffload(*(_QWORD *)(a2 + 40), (__int64)(v5 + 8), v6, (_DWORD *)(a2 + 52), 0);
    }
    else
    {
      *(_DWORD *)(a2 + 56) = 112;
      v7 = -1073676268;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return v7;
}
