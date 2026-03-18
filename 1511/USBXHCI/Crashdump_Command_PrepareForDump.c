/*
 * XREFs of Crashdump_Command_PrepareForDump @ 0x1C0036F84
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C0034FD0 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C00351EC (Crashdump_InitializeWithoutControllerReset.c)
 * Callees:
 *     memset @ 0x1C0011000 (memset.c)
 *     Crashdump_Command_InstallRing @ 0x1C0036F40 (Crashdump_Command_InstallRing.c)
 *     Crashdump_Command_Stop @ 0x1C00371C4 (Crashdump_Command_Stop.c)
 */

__int64 __fastcall Crashdump_Command_PrepareForDump(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  memset(*(void **)(a1 + 32), 0, *(unsigned int *)(a1 + 40));
  v2 = *(_DWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 56) = 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
    LODWORD(v5) = *v2;
  else
    v5 = *(_QWORD *)v2;
  if ( (v5 & 8) == 0
    || (DbgPrintEx(0x93u, 2u, "XHCIDUMP: Command ring is not stopped, stopping now\n"),
        result = Crashdump_Command_Stop(a1, 0LL),
        (int)result >= 0) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) & 0xFFFF03FF | 0x1800;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) |= 2u;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) = *(_QWORD *)(a1 + 24);
    Crashdump_Command_InstallRing(a1);
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Installed new Command Ring\n");
    return 0LL;
  }
  return result;
}
