/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0022800
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 * Callees:
 *     GetAcpiTable @ 0x1C00163FC (GetAcpiTable.c)
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
      dword_1C000DF24 = 268439553;
      dword_1C000DF2C = 0;
      dword_1C000DF28 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C000DF30 = 268439553;
      HIDWORD(qword_1C000DF34) = 0;
      LODWORD(qword_1C000DF34) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C000DF3C = 268439553;
      dword_1C000DF44 = 0;
      dword_1C000DF40 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C000DF48 = 268439553;
      HIDWORD(qword_1C000DF4C) = 0;
      LODWORD(qword_1C000DF4C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C000DF54 = 134219777;
      dword_1C000DF5C = 0;
      dword_1C000DF58 = Signature[18];
    }
    dword_1C000DF60 = Signature[12];
    byte_1C000DF66 = *((_BYTE *)Signature + 105);
    byte_1C000DF67 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C000DF22 = *((_WORD *)Signature + 49);
    byte_1C000DF64 = *((_BYTE *)Signature + 55);
    byte_1C000DF65 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
