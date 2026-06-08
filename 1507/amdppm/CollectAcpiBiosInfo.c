/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C001F1E4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
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
      dword_1C00098D4 = 268439553;
      dword_1C00098DC = 0;
      dword_1C00098D8 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C00098E0 = 268439553;
      HIDWORD(qword_1C00098E4) = 0;
      LODWORD(qword_1C00098E4) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C00098EC = 268439553;
      dword_1C00098F4 = 0;
      dword_1C00098F0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C00098F8 = 268439553;
      HIDWORD(qword_1C00098FC) = 0;
      LODWORD(qword_1C00098FC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0009904 = 134219777;
      dword_1C000990C = 0;
      dword_1C0009908 = Signature[18];
    }
    dword_1C0009910 = Signature[12];
    byte_1C0009916 = *((_BYTE *)Signature + 105);
    byte_1C0009917 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C00098D2 = *((_WORD *)Signature + 49);
    byte_1C0009914 = *((_BYTE *)Signature + 55);
    byte_1C0009915 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
