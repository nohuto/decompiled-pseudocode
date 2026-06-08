/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C00240C0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00241A4 (ProcLibGlobalInit.c)
 * Callees:
 *     GetAcpiTable @ 0x1C0013000 (GetAcpiTable.c)
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
      dword_1C000F434 = 268439553;
      dword_1C000F43C = 0;
      dword_1C000F438 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C000F440 = 268439553;
      HIDWORD(qword_1C000F444) = 0;
      LODWORD(qword_1C000F444) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C000F44C = 268439553;
      dword_1C000F454 = 0;
      dword_1C000F450 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C000F458 = 268439553;
      HIDWORD(qword_1C000F45C) = 0;
      LODWORD(qword_1C000F45C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C000F464 = 134219777;
      dword_1C000F46C = 0;
      dword_1C000F468 = Signature[18];
    }
    dword_1C000F470 = Signature[12];
    byte_1C000F476 = *((_BYTE *)Signature + 105);
    byte_1C000F477 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C000F432 = *((_WORD *)Signature + 49);
    byte_1C000F474 = *((_BYTE *)Signature + 55);
    byte_1C000F475 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
