/*
 * XREFs of Crashdump_Initialize @ 0x1C0031FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Crashdump_InitializeWithControllerReset @ 0x1C00324A4 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C00326C4 (Crashdump_InitializeWithoutControllerReset.c)
 *     Crashdump_Register_BiosHandoff @ 0x1C00332B4 (Crashdump_Register_BiosHandoff.c)
 *     Crashdump_Register_LogRHPortInfo @ 0x1C0033448 (Crashdump_Register_LogRHPortInfo.c)
 */

__int64 __fastcall Crashdump_Initialize(_DWORD *Address)
{
  unsigned int v2; // ebx
  __int128 v3; // xmm0
  bool v4; // zf
  const char *v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  __int128 *v8; // rsi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int64 **v14; // rbx
  int v15; // eax
  char v16; // al
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: Begin\n");
  v2 = **(_DWORD **)(*(_QWORD *)Address + 24LL);
  v3 = *(_OWORD *)(Address + 2);
  v4 = Address[131] == 2;
  v5 = "HS";
  *((_BYTE *)Address + 624) = 0;
  v6 = Address[136];
  if ( !v4 )
    v5 = "SS";
  v18 = v3;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device speed: %s, RootHub port #: %u\n", v5, v6);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: xHCI version: 0x%x.0x%x, ContextSize: %u, ScratchpadBuffers: %u, DeviceSlots: %u\n",
    HIBYTE(v2),
    BYTE2(v2),
    (*(_DWORD *)(*(_QWORD *)Address + 104LL) >> 2) & 1,
    Address[7],
    Address[6]);
  v7 = 0;
  v8 = &v18;
  do
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device Flag[%d]:  0x%I64X\n", v7++, *(_QWORD *)v8);
    v8 = (__int128 *)((char *)v8 + 8);
  }
  while ( v7 < 2 );
  if ( Address[146] == 2 )
    Address[146] = 3;
  if ( ((Address[146] - 1) & 0xFFFFFFFB) == 0 )
  {
    *((_BYTE *)Address + 626) = 1;
    v9 = Crashdump_InitializeWithoutControllerReset(Address);
    if ( v9 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_InitializeWithoutControllerReset failed with error 0x%X\n", v9);
      v10 = Crashdump_InitializeWithControllerReset(Address);
      v11 = v10;
      if ( v10 < 0 )
        goto LABEL_25;
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Address + 32LL) + 4LL);
  if ( (v12 & 0x800) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is not ready, cannot continue.\n");
LABEL_16:
    v11 = -1073741823;
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_VerifyRegisterState failed with error 0x%X\n", 3221225473LL);
    goto LABEL_26;
  }
  if ( (v12 & 4) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Host System Error bit is set, cannot continue.\n");
    goto LABEL_16;
  }
  if ( (v12 & 0x1000) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is in an error state, cannot continue.\n");
    goto LABEL_16;
  }
  v13 = Address[146];
  v11 = 0;
  if ( !v13 || v13 == 3 )
  {
    Crashdump_Register_LogRHPortInfo(Address, (unsigned int)Address[136]);
    if ( Address[146] == 3 )
    {
      v14 = (__int64 **)*((_QWORD *)Address + 62);
      if ( *v14 != (__int64 *)v14 )
      {
        do
        {
          memset(v14[2], 0, *((unsigned int *)v14 + 10));
          v14 = (__int64 **)*v14;
        }
        while ( *v14 != *((__int64 **)Address + 62) );
      }
      v15 = Crashdump_Register_BiosHandoff(Address);
      if ( v15 < 0 )
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_BiosHandoff failed with error 0x%X\n", v15);
    }
    v10 = Crashdump_InitializeWithControllerReset(Address);
    v11 = v10;
    if ( v10 < 0 )
LABEL_25:
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_InitializeWithControllerReset failed with error 0x%X\n",
        (unsigned int)v10);
  }
LABEL_26:
  *((_BYTE *)Address + 625) = 0;
  if ( Address[146] == 1 )
    Address[146] = 2;
  if ( Address[146] == 5 )
  {
    Address[146] = 2;
    if ( (v3 & 2) == 0 )
    {
      v16 = *((_BYTE *)Address + 625);
      if ( !*((_BYTE *)Address + 624) )
        v16 = 1;
      *((_BYTE *)Address + 625) = v16;
    }
  }
  if ( Address[146] == 3 )
    Address[146] = 4;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: End 0x%X\n", v11);
  return v11;
}
