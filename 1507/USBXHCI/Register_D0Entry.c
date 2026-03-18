/*
 * XREFs of Register_D0Entry @ 0x1C0004F38
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Register_D0Entry(__int64 a1)
{
  __int64 v2; // rbx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 240LL) & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 32912LL) &= ~0x1000u;
    _InterlockedOr(v3, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 240LL) & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 32988LL) &= 0xFFFFFF7D;
    _InterlockedOr(v3, 0);
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x400000000000LL) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 32916LL) |= 0x200000u;
    _InterlockedOr(v3, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 240LL) & 4) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16500LL) |= 0x8000u;
    _InterlockedOr(v3, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 240LL) & 8) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16500LL) &= ~0x800000u;
    _InterlockedOr(v3, 0);
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x100000000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(v2 + 32932) |= 0x10000000u;
    _InterlockedOr(v3, 0);
    KeStallExecutionProcessor(0x32u);
    *(_DWORD *)(v2 + 32932) &= ~0x10000000u;
    _InterlockedOr(v3, 0);
  }
  return 0LL;
}
