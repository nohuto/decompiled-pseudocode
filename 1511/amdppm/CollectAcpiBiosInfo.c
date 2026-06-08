/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C001F1F0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 * Callees:
 *     GetAcpiTable @ 0x1C0011748 (GetAcpiTable.c)
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
      dword_1C0009A84 = 268439553;
      dword_1C0009A8C = 0;
      dword_1C0009A88 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0009A90 = 268439553;
      HIDWORD(qword_1C0009A94) = 0;
      LODWORD(qword_1C0009A94) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0009A9C = 268439553;
      dword_1C0009AA4 = 0;
      dword_1C0009AA0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0009AA8 = 268439553;
      HIDWORD(qword_1C0009AAC) = 0;
      LODWORD(qword_1C0009AAC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0009AB4 = 134219777;
      dword_1C0009ABC = 0;
      dword_1C0009AB8 = Signature[18];
    }
    dword_1C0009AC0 = Signature[12];
    byte_1C0009AC6 = *((_BYTE *)Signature + 105);
    byte_1C0009AC7 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0009A82 = *((_WORD *)Signature + 49);
    byte_1C0009AC4 = *((_BYTE *)Signature + 55);
    byte_1C0009AC5 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
