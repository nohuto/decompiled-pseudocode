/*
 * XREFs of ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x18008775C
 * Callers:
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800877C8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FormatHasSpecifiedSubtype(const struct tWAVEFORMATEX *a1, const struct _GUID *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( a1->wFormatTag == 0xFFFE )
    {
      v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&a2->Data1;
      if ( !v3 )
        v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)a2->Data4;
      return v3 == 0;
    }
    else if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&a2->Data1 + 2)
           && *(_DWORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == *(_DWORD *)&a2->Data4[2]
           && *(_WORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6] == *(_WORD *)&a2->Data4[6] )
    {
      LOBYTE(v2) = LOWORD(a2->Data1) == a1->wFormatTag;
    }
  }
  return v2;
}
