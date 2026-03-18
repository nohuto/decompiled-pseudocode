/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x1404E03C8
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x140440E78 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1404E04F8 (PiDqObjectActionQueueEntryCreate.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140607250 (PiDqDeleteUserObjectFromLoadedHives.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v3; // bp
  int v6; // edx
  _QWORD *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  if ( (*(_DWORD *)(a1 + 228) & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v2 = PiDqObjectActionQueueEntryCreate(a2, &v9);
    if ( v2 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v7 = v9;
      v8 = *(_QWORD **)(a1 + 216);
      *v9 = a1 + 208;
      v7[1] = v8;
      if ( *v8 != a1 + 208 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(a1 + 216) = v7;
    }
  }
  v6 = *(_DWORD *)(a1 + 228);
  if ( (v6 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v2 < 0) )
  {
    v3 = 1;
    *(_DWORD *)(a1 + 228) = v6 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v3 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
