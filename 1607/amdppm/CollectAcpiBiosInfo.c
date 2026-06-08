/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C001F230
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 * Callees:
 *     GetAcpiTable @ 0x1C00119C8 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(_DWORD *a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  _DWORD *Signature; // [rsp+30h] [rbp+8h] BYREF

  Signature = a1;
  AcpiTable = (unsigned int)GetAcpiTable((ULONG)a1, (ULONG)&Signature, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( Signature[14] )
    {
      dword_1C0009AE4 = 268439553;
      dword_1C0009AEC = 0;
      dword_1C0009AE8 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0009AF0 = 268439553;
      HIDWORD(qword_1C0009AF4) = 0;
      LODWORD(qword_1C0009AF4) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0009AFC = 268439553;
      dword_1C0009B04 = 0;
      dword_1C0009B00 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0009B08 = 268439553;
      HIDWORD(qword_1C0009B0C) = 0;
      LODWORD(qword_1C0009B0C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0009B14 = 134219777;
      dword_1C0009B1C = 0;
      dword_1C0009B18 = Signature[18];
    }
    dword_1C0009B20 = Signature[12];
    byte_1C0009B26 = *((_BYTE *)Signature + 105);
    byte_1C0009B27 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0009AE2 = *((_WORD *)Signature + 49);
    byte_1C0009B24 = *((_BYTE *)Signature + 55);
    byte_1C0009B25 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
