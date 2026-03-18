/*
 * XREFs of ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x1C00793C0
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C0078D88 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetLegacyDeviceFlags(struct tagPROCESS_HID_TABLE *a1, const struct tagRAWINPUTDEVICE *a2)
{
  int v3; // eax
  __int16 v4; // cx
  int v5; // ecx

  v3 = *((_DWORD *)a2 + 1) & 0xF0;
  if ( (!v3 || v3 == 48) && *(_WORD *)a2 == 1 )
  {
    v4 = *((_WORD *)a2 + 1);
    if ( v4 == 6 )
    {
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (32 * (v3 == 48))) & 0x20;
      v5 = *((_DWORD *)a1 + 25) ^ (*((_DWORD *)a1 + 25) ^ (((*((_DWORD *)a2 + 1) >> 9) & 1) << 9)) & 0x200;
      *((_DWORD *)a1 + 25) = v5;
      *((_DWORD *)a1 + 25) = v5 ^ ((unsigned __int16)v5 ^ (((*((_DWORD *)a2 + 1) >> 10) & 1) << 10)) & 0x400;
    }
    else if ( v4 == 2 )
    {
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (2 * (v3 == 48))) & 2;
      *((_DWORD *)a1 + 25) ^= (*((_DWORD *)a1 + 25) ^ (((*((_DWORD *)a2 + 1) >> 9) & 1) << 8)) & 0x100;
    }
  }
}
