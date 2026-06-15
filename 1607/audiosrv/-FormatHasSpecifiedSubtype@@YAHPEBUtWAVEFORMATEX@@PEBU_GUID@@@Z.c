/*
 * XREFs of ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x180070EA4
 * Callers:
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x180070F20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FormatHasSpecifiedSubtype(const struct tWAVEFORMATEX *a1, const struct _GUID *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( a1->wFormatTag == 0xFFFE )
    {
      v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&a2->Data1;
      if ( !v4 )
        v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)a2->Data4;
      return v4 == 0;
    }
    else
    {
      v5 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
         - *(_QWORD *)((char *)&a2->Data1 + 2);
      if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&a2->Data1
                                                                                                  + 2) )
      {
        v6 = *(unsigned int *)&a2->Data4[2];
        v5 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v6;
        if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v6 )
          v5 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
             - (unsigned __int64)*(unsigned __int16 *)&a2->Data4[6];
      }
      if ( !v5 )
        LOBYTE(v2) = LOWORD(a2->Data1) == a1->wFormatTag;
    }
  }
  return v2;
}
