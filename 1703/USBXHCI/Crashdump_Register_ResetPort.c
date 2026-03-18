/*
 * XREFs of Crashdump_Register_ResetPort @ 0x1C0033640
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C00324A4 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_ResetDevice @ 0x1C0032980 (Crashdump_ResetDevice.c)
 * Callees:
 *     Crashdump_Register_LogRHPortInfo @ 0x1C0033448 (Crashdump_Register_LogRHPortInfo.c)
 */

__int64 __fastcall Crashdump_Register_ResetPort(__int64 a1, int a2, int a3)
{
  unsigned int *v6; // r14
  unsigned int v7; // esi
  unsigned int i; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // ebp
  unsigned int v14; // ebx
  int v16; // ebx
  int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_ResetPort: begin: port %u\n", a2);
  v6 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * ((unsigned int)(a2 - 1) + 64LL));
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Polling port %u for device presence\n", a2);
  v7 = 0;
  for ( i = 0; i < 0x4E20; ++i )
  {
    v9 = *v6;
    if ( (*v6 & 1) != 0 || a3 == 30 && ((((v9 >> 5) & 0xF) - 6) & 0xFFFFFFFB) == 0 )
      break;
    KeStallExecutionProcessor(0xC8u);
  }
  if ( i == 20000 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Unable to detect a device on port %u in %u ms\n", a2, 4000);
    v7 = -1073741632;
  }
  else
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device found present on port %u\n", a2);
    *v6 = v9 & 0xE00C200 | 0x20000;
    _InterlockedOr(v18, 0);
    v10 = *v6;
    if ( (*v6 & 0x10) != 0 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Port reset is underway on port %u.\n", a2);
    }
    else
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Issuing port reset on port %u.\n", a2);
      v11 = v10 & 0xE00C200;
      v12 = 0x80000000;
      if ( a3 == 20 )
        v12 = 16;
      *v6 = v12 | v11;
      _InterlockedOr(v18, 0);
    }
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Checking port %u for reset completion.\n", a2);
    v13 = 0;
    while ( 1 )
    {
      v14 = *v6;
      if ( (*v6 & 0x1E0) == 0 && (*v6 & 0x200013) == 2097155 && ((v14 >> 10) & 0xF) - 1 > 1 && (*v6 & 0x3C00) != 0x400 )
        break;
      KeStallExecutionProcessor(0x1F4u);
      if ( (unsigned int)++v13 >= 0x3E8 )
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Port %u failed to reset in %u ms\n", a2, 500 * v13 / 0x3E8u);
        v7 = -1073741630;
        goto LABEL_19;
      }
    }
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Port %u is correctly reset in %u ms\n", a2, 500 * v13 / 0x3E8u);
    v16 = v14 & 0xE00C200;
    v17 = v16 | 0x80000;
    if ( a3 != 30 )
      v17 = v16;
    *v6 = v17 | 0x200000;
    _InterlockedOr(v18, 0);
  }
LABEL_19:
  Crashdump_Register_LogRHPortInfo(a1, a2);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_ResetPort: end 0x%X\n", v7);
  return v7;
}
