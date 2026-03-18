/*
 * XREFs of Crashdump_EventRing_AsyncPoll @ 0x1C0033BD0
 * Callers:
 *     Crashdump_PollForCompletion @ 0x1C00328F0 (Crashdump_PollForCompletion.c)
 * Callees:
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1C0034408 (Crashdump_EventRing_UpdateDequeuePointer.c)
 */

__int64 __fastcall Crashdump_EventRing_AsyncPoll(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  int v5; // r10d
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  BOOL v15; // eax

  v4 = 259;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: begin\n");
  v5 = *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 92);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 1) != v5 )
    goto LABEL_37;
  if ( (v7 & 0xFC00) == 0x8000 && (v7 & 4) != 0 )
    v8 = 0LL;
  else
    v8 = *(_QWORD *)v6;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: EventRing: CS: %u, EI: %03u, ET: %u, CC: %u, Len: %u, Addr: 0x%I64X\n",
    v5,
    *(_DWORD *)(a1 + 92),
    (unsigned __int16)v7 >> 10,
    *(unsigned __int8 *)(v6 + 11),
    *(_DWORD *)(v6 + 8) & 0xFFFFFF,
    v8);
  v9 = *(unsigned int *)(v6 + 12);
  v10 = *(_DWORD *)(v6 + 12) & 0xFC00;
  if ( v10 != 0x8000 )
  {
    if ( v10 == 34816 )
      DbgPrintEx(
        0x93u,
        3u,
        "XHCIDUMP: Ignoring port status change event for port %u, CCS: %u, CSC: %u\n",
        *(unsigned __int8 *)(v6 + 3),
        *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                  + 16 * ((unsigned int)*(unsigned __int8 *)(v6 + 3) - 1 + 64LL)) & 1,
        (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                   + 16 * ((unsigned int)*(unsigned __int8 *)(v6 + 3) - 1 + 64LL)) >> 17) & 1);
    else
      DbgPrintEx(
        0x93u,
        2u,
        "XHCIDUMP: Unsolicited event encountered: ET: %u, CC: %u\n",
        (unsigned __int16)v9 >> 10,
        *(unsigned __int8 *)(v6 + 11));
    goto LABEL_31;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 576LL) + 8 * ((v9 >> 16) & 0x1F) + 144);
  *a2 = *(_QWORD *)(v11 + 208);
  if ( *(_DWORD *)(v11 + 192) )
    v12 = *(_QWORD *)(v11 + 120);
  else
    v12 = *(_QWORD *)(v11 + 144);
  *(_DWORD *)(v12 + 12) &= ~1u;
  ++*(_QWORD *)(v11 + 200);
  v13 = *a2;
  *(_DWORD *)(*a2 + 36) = 0;
  switch ( *(_BYTE *)(v6 + 11) )
  {
    case 1:
      if ( (*(_DWORD *)(v6 + 12) & 4) == 0 )
        goto LABEL_25;
      break;
    case 2:
      *(_DWORD *)(v13 + 4) = -1073741805;
      goto LABEL_26;
    case 3:
      *(_DWORD *)(v13 + 4) = -1073741806;
      goto LABEL_26;
    case 4:
      goto LABEL_25;
    case 6:
      *(_DWORD *)(v13 + 4) = -1073741820;
      goto LABEL_26;
    case 0xD:
      break;
    case 0x17:
      *(_DWORD *)(v13 + 4) = -1073545216;
      goto LABEL_26;
    case 0x24:
LABEL_25:
      *(_DWORD *)(v13 + 4) = -1073741807;
      goto LABEL_26;
    default:
      *(_DWORD *)(v13 + 4) = -2147481600;
LABEL_26:
      v4 = -1073741823;
      goto LABEL_27;
  }
  v14 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v13 + 4) = 0;
  *(_DWORD *)(v13 + 36) = v14 & 0xFFFFFF;
  v4 = 0;
LABEL_27:
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: URB Status %u: URB Transfer Length %u, TRB Completion Code: %u, status =0x%X\n",
    *(_DWORD *)(v13 + 4),
    *(_DWORD *)(v13 + 36),
    *(unsigned __int8 *)(v6 + 11),
    v4);
LABEL_31:
  if ( ++*(_DWORD *)(a1 + 92) == *(_DWORD *)(a1 + 84) )
  {
    ++*(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 92) = 0;
    if ( *(_DWORD *)(a1 + 96) == *(_DWORD *)(a1 + 80) )
    {
      v15 = *(_DWORD *)(a1 + 88) == 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 88) = v15;
      *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 112);
    }
    else
    {
      *(_QWORD *)(a1 + 104) = **(_QWORD **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
  }
  Crashdump_EventRing_UpdateDequeuePointer(a1);
LABEL_37:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: end 0x%X\n", v4);
  return v4;
}
