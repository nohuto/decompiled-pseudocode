/*
 * XREFs of ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C015A618
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
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
  v4 = dword_1C032810C;
  *((_DWORD *)a1 + 55) = v1 - dword_1C0328108;
  *((_DWORD *)a1 + 57) = v1 + v4;
  v5 = dword_1C0328104;
  *((_DWORD *)a1 + 54) = v3 - dword_1C0328100;
  *((_DWORD *)a1 + 56) = v3 + v5;
  *((_DWORD *)a1 + 59) = v1 - dword_1C032811C;
  v6 = v1 + dword_1C0328120;
  *((_DWORD *)a1 + 58) = v3 - dword_1C0328114;
  *((_DWORD *)a1 + 61) = v6;
  v7 = v3 + dword_1C0328118;
  *((_DWORD *)a1 + 63) = v1 - dword_1C0328130;
  *((_DWORD *)a1 + 60) = v7;
  v8 = v3 - dword_1C0328128;
  *((_DWORD *)a1 + 65) = v1 + qword_1C0328134;
  v9 = v3 + dword_1C032812C;
  *((_DWORD *)a1 + 62) = v8;
  *((_DWORD *)a1 + 64) = v9;
}
