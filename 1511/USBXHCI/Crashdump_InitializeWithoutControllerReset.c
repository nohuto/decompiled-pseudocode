/*
 * XREFs of Crashdump_InitializeWithoutControllerReset @ 0x1C00351EC
 * Callers:
 *     Crashdump_Initialize @ 0x1C0034B70 (Crashdump_Initialize.c)
 * Callees:
 *     Crashdump_EventRing_PrepareForHibernate @ 0x1C0036DF0 (Crashdump_EventRing_PrepareForHibernate.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0036F84 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Command_TestCommandRingOperation @ 0x1C0037370 (Crashdump_Command_TestCommandRingOperation.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00389AC (Crashdump_UsbDevice_PrepareForHibernate.c)
 */

__int64 __fastcall Crashdump_InitializeWithoutControllerReset(unsigned int *Address)
{
  _QWORD *v1; // rdi
  __int64 **v3; // rdi
  unsigned int i; // esi
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (_QWORD *)*((_QWORD *)Address + 61);
  if ( (_QWORD *)*v1 != v1 )
  {
    do
    {
      PoSetHiberRange(0LL, 0x10000u, v1, 0x50uLL, 0x43434858u);
      PoSetHiberRange(0LL, 0x10000u, (PVOID)v1[2], *((unsigned int *)v1 + 10), 0x43434858u);
      v1 = (_QWORD *)*v1;
    }
    while ( *v1 != *((_QWORD *)Address + 61) );
  }
  PoSetHiberRange(0LL, 0x10000u, Address, 0x270uLL, 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 70), 408 * Address[132], 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)Address, 0x78uLL, 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 76), 0x1A0uLL, 0x43434858u);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 21), 0x50uLL, 0x43434858u);
  **(_DWORD **)(*(_QWORD *)Address + 32LL) &= ~0x400u;
  _InterlockedOr(v11, 0);
  KeStallExecutionProcessor(0x3E80u);
  if ( Address[5] )
  {
    PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 4), Address[10], 0x43434858u);
    v3 = (__int64 **)*((_QWORD *)Address + 6);
    for ( i = 0; i < Address[5]; ++i )
    {
      PoSetHiberRange(0LL, 0x10000u, v3[2], *((unsigned int *)v3 + 10), 0x43434858u);
      v3 = (__int64 **)*v3;
    }
  }
  Crashdump_EventRing_PrepareForHibernate(Address + 48, *(_QWORD *)(*((_QWORD *)Address + 76) + 96LL));
  v5 = Crashdump_Command_PrepareForDump(Address + 80);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = Crashdump_Command_TestCommandRingOperation(Address + 80);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      if ( Address[132] )
      {
        while ( 1 )
        {
          v9 = Crashdump_UsbDevice_PrepareForHibernate(*((_QWORD *)Address + 70) + 408LL * v8);
          v6 = v9;
          if ( v9 < 0 )
            break;
          if ( ++v8 >= Address[132] )
            return v6;
        }
        DbgPrintEx(
          0x93u,
          1u,
          "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate failed with error 0x%X\n",
          (unsigned int)v9);
      }
    }
    else
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_Command_TestCommandRingOperation failed with error 0x%X\n",
        (unsigned int)v7);
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_PrepareForDump failed with error 0x%X\n", (unsigned int)v5);
  }
  return v6;
}
