/*
 * XREFs of WmipGetSMBiosFromLoaderBlock @ 0x1407E8C34
 * Callers:
 *     WMIInitialize @ 0x1407C07E4 (WMIInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall WmipGetSMBiosFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  unsigned __int8 result; // al

  v1 = *(_QWORD *)(a1 + 240);
  if ( *(_DWORD *)v1 >= 0x9F8u )
  {
    v2 = *(_QWORD *)(v1 + 56);
    if ( v2 )
    {
      WmipSMBiosTablePhysicalAddress = *(_QWORD *)(v2 + 16);
      LODWORD(WmipSMBiosTableLength) = *(_DWORD *)(v2 + 12);
      BYTE1(WmipSMBiosVersionInfo) = *(_BYTE *)(v2 + 7);
      result = *(_BYTE *)(v2 + 8);
      LOBYTE(WmipSMBiosVersionInfo) = 0;
      HIWORD(WmipSMBiosVersionInfo) = result;
    }
  }
  return result;
}
