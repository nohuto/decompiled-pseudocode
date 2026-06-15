/*
 * XREFs of ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x18008C184
 * Callers:
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008A5A8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetFormatSubType(struct tWAVEFORMATEX *a1, const struct _GUID *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 0;
  if ( a1->wFormatTag == 0xFFFE )
  {
    *(struct _GUID *)((char *)&a1[1].nSamplesPerSec + 2) = *a2;
    return 1;
  }
  v4 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) - *(_QWORD *)((char *)&a2->Data1 + 2);
  if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&a2->Data1 + 2) )
  {
    v5 = *(unsigned int *)&a2->Data4[2];
    v4 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v5;
    if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v5 )
      v4 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
         - (unsigned __int64)*(unsigned __int16 *)&a2->Data4[6];
  }
  if ( !v4 )
  {
    a1->wFormatTag = a2->Data1;
    return 1;
  }
  return v2;
}
