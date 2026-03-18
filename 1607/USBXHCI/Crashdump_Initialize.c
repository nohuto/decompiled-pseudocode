/*
 * XREFs of Crashdump_Initialize @ 0x1C0035090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Crashdump_InitializeWithControllerReset @ 0x1C003557C (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C0035798 (Crashdump_InitializeWithoutControllerReset.c)
 *     Crashdump_Register_BiosHandoff @ 0x1C0036370 (Crashdump_Register_BiosHandoff.c)
 *     Crashdump_Register_LogRHPortInfo @ 0x1C00364F4 (Crashdump_Register_LogRHPortInfo.c)
 */

__int64 __fastcall Crashdump_Initialize(_DWORD *Address)
{
  unsigned int v2; // ebx
  __int128 v3; // xmm0
  bool v4; // zf
  const char *v5; // r9
  unsigned int v6; // ebx
  __int128 *v7; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 **v13; // rbx
  int v14; // eax
  char v15; // al
  int v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: Begin\n");
  v2 = **(_DWORD **)(*(_QWORD *)Address + 24LL);
  v3 = *(_OWORD *)(Address + 2);
  v4 = Address[131] == 2;
  v5 = "HS";
  *((_BYTE *)Address + 624) = 0;
  if ( !v4 )
    v5 = "SS";
  v17 = Address[136];
  v18 = v3;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device speed: %s, RootHub port #: %u\n", v5, v17);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: xHCI version: 0x%x.0x%x, ContextSize: %u, ScratchpadBuffers: %u, DeviceSlots: %u\n",
    HIBYTE(v2),
    BYTE2(v2),
    (*(_DWORD *)(*(_QWORD *)Address + 104LL) >> 2) & 1,
    Address[7],
    Address[6]);
  v6 = 0;
  v7 = &v18;
  do
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device Flag[%d]:  0x%I64X\n", v6++, *(_QWORD *)v7);
    v7 = (__int128 *)((char *)v7 + 8);
  }
  while ( v6 < 2 );
  if ( Address[146] == 2 )
    Address[146] = 3;
  if ( ((Address[146] - 1) & 0xFFFFFFFB) == 0 )
  {
    *((_BYTE *)Address + 626) = 1;
    v8 = Crashdump_InitializeWithoutControllerReset(Address);
    if ( v8 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_InitializeWithoutControllerReset failed with error 0x%X\n", v8);
      v9 = Crashdump_InitializeWithControllerReset(Address);
      v10 = v9;
      if ( v9 < 0 )
        goto LABEL_25;
    }
  }
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Address + 32LL) + 4LL);
  if ( (v11 & 0x800) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is not ready, cannot continue.\n");
LABEL_16:
    v10 = -1073741823;
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_VerifyRegisterState failed with error 0x%X\n", 3221225473LL);
    goto LABEL_26;
  }
  if ( (v11 & 4) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Host System Error bit is set, cannot continue.\n");
    goto LABEL_16;
  }
  if ( (v11 & 0x1000) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is in an error state, cannot continue.\n");
    goto LABEL_16;
  }
  v12 = Address[146];
  v10 = 0;
  if ( !v12 || v12 == 3 )
  {
    Crashdump_Register_LogRHPortInfo(Address, (unsigned int)Address[136]);
    if ( Address[146] == 3 )
    {
      v13 = (__int64 **)*((_QWORD *)Address + 62);
      if ( *v13 != (__int64 *)v13 )
      {
        do
        {
          memset(v13[2], 0, *((unsigned int *)v13 + 10));
          v13 = (__int64 **)*v13;
        }
        while ( *v13 != *((__int64 **)Address + 62) );
      }
      v14 = Crashdump_Register_BiosHandoff(Address);
      if ( v14 < 0 )
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_BiosHandoff failed with error 0x%X\n", v14);
    }
    v9 = Crashdump_InitializeWithControllerReset(Address);
    v10 = v9;
    if ( v9 < 0 )
LABEL_25:
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_InitializeWithControllerReset failed with error 0x%X\n",
        (unsigned int)v9);
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
      v15 = *((_BYTE *)Address + 625);
      if ( !*((_BYTE *)Address + 624) )
        v15 = 1;
      *((_BYTE *)Address + 625) = v15;
    }
  }
  if ( Address[146] == 3 )
    Address[146] = 4;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: End 0x%X\n", v10);
  return v10;
}
