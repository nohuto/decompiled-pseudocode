/*
 * XREFs of ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C0152F88
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

void __fastcall SetupDragRectsForContact(struct tagTPCONTACTSTATE *a1)
{
  int v1; // r9d
  int v3; // r8d
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v1 = *((_DWORD *)a1 + 1);
  v3 = *(_DWORD *)a1;
  v4 = dword_1C0321F4C;
  *((_DWORD *)a1 + 42) = v1 - dword_1C0321F48;
  *((_DWORD *)a1 + 44) = v1 + v4;
  v5 = dword_1C0321F44;
  *((_DWORD *)a1 + 41) = v3 - dword_1C0321F40;
  *((_DWORD *)a1 + 43) = v3 + v5;
  *((_DWORD *)a1 + 46) = v1 - dword_1C0321F5C;
  v6 = v1 + dword_1C0321F60;
  *((_DWORD *)a1 + 45) = v3 - dword_1C0321F54;
  *((_DWORD *)a1 + 48) = v6;
  v7 = v3 + dword_1C0321F58;
  *((_DWORD *)a1 + 50) = v1 - dword_1C0321F70;
  *((_DWORD *)a1 + 47) = v7;
  v8 = v3 - dword_1C0321F68;
  *((_DWORD *)a1 + 52) = v1 + qword_1C0321F74;
  v9 = v3 + dword_1C0321F6C;
  *((_DWORD *)a1 + 49) = v8;
  *((_DWORD *)a1 + 51) = v9;
}
