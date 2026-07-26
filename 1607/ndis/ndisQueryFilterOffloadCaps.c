/*
 * XREFs of ndisQueryFilterOffloadCaps @ 0x1C0047B4C
 * Callers:
 *     ndisOidPreOffloadCaps @ 0x1C0046E50 (ndisOidPreOffloadCaps.c)
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C0025760 (ndisCopyNdisOffload.c)
 */

__int64 __fastcall ndisQueryFilterOffloadCaps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  KIRQL v4; // r14
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ebx

  v2 = *(_QWORD *)(a1 + 32);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v5 = *(_QWORD *)(v2 + 4152);
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 2310247;
  if ( v5 && *(_BYTE *)(v5 + 1) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    v7 = 0;
    if ( v6 >= 0x70 )
    {
      ndisCopyNdisOffload(*(_QWORD *)(a2 + 40), v5 + 188, v6, (_DWORD *)(a2 + 52), 0);
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
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v4);
  return v7;
}
