/*
 * XREFs of ndisOidPreProtocolOptions @ 0x1C0042720
 * Callers:
 *     <none>
 * Callees:
 *     GetMiniportFromReqTracker @ 0x1C009A2E8 (GetMiniportFromReqTracker.c)
 */

bool __fastcall ndisOidPreProtocolOptions(_QWORD *a1)
{
  __int64 v1; // rdi
  char v3; // bl
  __int64 v4; // rcx
  __int64 MiniportFromReqTracker; // r15
  int v6; // eax
  __int64 v8; // rbp
  _DWORD *v9; // r14
  KIRQL v10; // cl

  v1 = a1[4];
  v3 = 0;
  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 != 1 || *(_QWORD *)(v1 + 40) && *(_DWORD *)(v1 + 48) >= 4u )
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( v8 && v6 == 1 && *(_DWORD *)(v1 + 32) == 65810 )
    {
      v9 = *(_DWORD **)(v1 + 40);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
      if ( (*v9 & 4) != 0 )
      {
        *v9 &= ~4u;
        *(_DWORD *)(v8 + 224) |= 8u;
      }
      if ( (*v9 & 2) != 0 && (*(_DWORD *)(MiniportFromReqTracker + 568) & 8) != 0 )
      {
        *v9 &= ~2u;
        *(_DWORD *)(v8 + 224) |= 2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v10);
      *(_DWORD *)(v1 + 52) = 4;
    }
    if ( *a1 )
      return *(_BYTE *)(MiniportFromReqTracker + 32) >= 6u;
    return v3;
  }
  else
  {
    *(_DWORD *)(v4 + 40) = -1073741811;
    return 1;
  }
}
