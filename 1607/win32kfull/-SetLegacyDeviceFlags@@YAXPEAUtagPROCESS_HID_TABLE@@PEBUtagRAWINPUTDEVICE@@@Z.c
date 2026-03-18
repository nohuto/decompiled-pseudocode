/*
 * XREFs of ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x1C00E2888
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E2170 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetLegacyDeviceFlags(struct tagPROCESS_HID_TABLE *a1, const struct tagRAWINPUTDEVICE *a2)
{
  int v4; // eax
  __int16 v5; // cx
  int v6; // ecx
  int v7; // edx

  v4 = *((_DWORD *)a2 + 1) & 0xF0;
  if ( (!v4 || v4 == 48) && *(_WORD *)a2 == 1 )
  {
    v5 = *((_WORD *)a2 + 1);
    if ( v5 == 6 )
    {
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (32 * (v4 == 48))) & 0x20;
      v6 = *((_DWORD *)a1 + 25) ^ (*((_DWORD *)a1 + 25) ^ (((*((_DWORD *)a2 + 1) >> 9) & 1) << 9)) & 0x200;
      *((_DWORD *)a1 + 25) = v6;
      v7 = v6 ^ ((unsigned __int16)v6 ^ (((*((_DWORD *)a2 + 1) >> 10) & 1) << 10)) & 0x400;
      *((_DWORD *)a1 + 25) = v7;
      *((_DWORD *)a1 + 25) = v7 ^ ((unsigned __int16)v7 ^ (((*((_DWORD *)a2 + 1) >> 14) & 1) << 11)) & 0x800;
    }
    else if ( v5 == 2 )
    {
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (2 * (v4 == 48))) & 2;
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (((*((_DWORD *)a2 + 1) >> 9) & 1) << 8)) & 0x100;
    }
  }
}
