/*
 * XREFs of Crashdump_Initialize @ 0x1C0033B90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 *     Crashdump_InitializeWithControllerReset @ 0x1C0033FF0 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C003420C (Crashdump_InitializeWithoutControllerReset.c)
 *     Crashdump_Register_BiosHandoff @ 0x1C0034DE0 (Crashdump_Register_BiosHandoff.c)
 *     Crashdump_Register_LogRHPortInfo @ 0x1C0034F64 (Crashdump_Register_LogRHPortInfo.c)
 *     Crashdump_Register_VerifyRegisterState @ 0x1C00356A4 (Crashdump_Register_VerifyRegisterState.c)
 */

__int64 __fastcall Crashdump_Initialize(_QWORD *Address)
{
  unsigned int v2; // ebx
  const char *v3; // r9
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 **v10; // rbx
  int v11; // eax
  char v12; // al
  int v14; // [rsp+20h] [rbp-48h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: Begin\n");
  v2 = **(_DWORD **)(*Address + 24LL);
  v3 = "HS";
  v4 = Address[1];
  if ( *((_DWORD *)Address + 129) != 2 )
    v3 = "SS";
  *((_BYTE *)Address + 616) = 0;
  v14 = *((_DWORD *)Address + 134);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device speed: %s, RootHub port #: %u\n", v3, v14);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: xHCI version: 0x%x.0x%x, Flags: 0x%I64X, ContextSize: %u, ScratchpadBuffers: %u, DeviceSlots: %u\n",
    HIBYTE(v2),
    BYTE2(v2),
    v4,
    (*(_DWORD *)(*Address + 104LL) >> 2) & 1,
    *((_DWORD *)Address + 5),
    *((_DWORD *)Address + 4));
  if ( *((_DWORD *)Address + 144) == 2 )
    *((_DWORD *)Address + 144) = 3;
  if ( ((*((_DWORD *)Address + 144) - 1) & 0xFFFFFFFB) == 0 )
  {
    *((_BYTE *)Address + 618) = 1;
    v5 = Crashdump_InitializeWithoutControllerReset(Address);
    if ( v5 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_InitializeWithoutControllerReset failed with error 0x%X\n", v5);
      v6 = Crashdump_InitializeWithControllerReset(Address);
      v7 = v6;
      if ( v6 < 0 )
        goto LABEL_18;
    }
  }
  v8 = Crashdump_Register_VerifyRegisterState(Address);
  v7 = v8;
  if ( v8 < 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_VerifyRegisterState failed with error 0x%X\n", (unsigned int)v8);
    goto LABEL_19;
  }
  v9 = *((_DWORD *)Address + 144);
  if ( !v9 || v9 == 3 )
  {
    Crashdump_Register_LogRHPortInfo(Address, *((unsigned int *)Address + 134));
    if ( *((_DWORD *)Address + 144) == 3 )
    {
      v10 = (__int64 **)Address[61];
      if ( *v10 != (__int64 *)v10 )
      {
        do
        {
          memset(v10[2], 0, *((unsigned int *)v10 + 10));
          v10 = (__int64 **)*v10;
        }
        while ( *v10 != (__int64 *)Address[61] );
      }
      v11 = Crashdump_Register_BiosHandoff(Address);
      if ( v11 < 0 )
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_BiosHandoff failed with error 0x%X\n", v11);
    }
    v6 = Crashdump_InitializeWithControllerReset(Address);
    v7 = v6;
    if ( v6 < 0 )
LABEL_18:
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_InitializeWithControllerReset failed with error 0x%X\n",
        (unsigned int)v6);
  }
LABEL_19:
  *((_BYTE *)Address + 617) = 0;
  if ( *((_DWORD *)Address + 144) == 1 )
    *((_DWORD *)Address + 144) = 2;
  if ( *((_DWORD *)Address + 144) == 5 )
  {
    *((_DWORD *)Address + 144) = 2;
    if ( (v4 & 2) == 0 )
    {
      v12 = *((_BYTE *)Address + 617);
      if ( !*((_BYTE *)Address + 616) )
        v12 = 1;
      *((_BYTE *)Address + 617) = v12;
    }
  }
  if ( *((_DWORD *)Address + 144) == 3 )
    *((_DWORD *)Address + 144) = 4;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: End 0x%X\n", v7);
  return v7;
}
