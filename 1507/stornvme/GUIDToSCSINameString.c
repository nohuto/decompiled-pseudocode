/*
 * XREFs of GUIDToSCSINameString @ 0x1C0006870
 * Callers:
 *     FormInquiryDeviceIdentifiersData @ 0x1C00068F4 (FormInquiryDeviceIdentifiersData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GUIDToSCSINameString(__int64 a1, _DWORD *a2, int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v8; // rdx
  unsigned __int8 v9; // r8
  __int64 v10; // rcx

  LODWORD(v4) = 4;
  if ( a4 < 4 )
    return 3238002694LL;
  *a2 = dword_1C0011000;
  if ( a4 > 4 )
  {
    v8 = a3 - 1;
    do
    {
      if ( v8 < 0 )
        break;
      v9 = *(_BYTE *)(v8 + a1);
      v10 = (unsigned int)v4;
      v4 = (unsigned int)(v4 + 1);
      *((_BYTE *)a2 + v10) = `HexFromUshort'::`2'::hexDigits[(unsigned __int64)v9 >> 4];
      if ( (unsigned int)v4 < a4 )
      {
        *((_BYTE *)a2 + v4) = `HexFromUshort'::`2'::hexDigits[v9 & 0xF];
        LODWORD(v4) = v4 + 1;
      }
      --v8;
    }
    while ( (unsigned int)v4 < a4 );
  }
  return 0LL;
}
