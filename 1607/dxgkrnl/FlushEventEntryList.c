/*
 * XREFs of FlushEventEntryList @ 0x1C0035148
 * Callers:
 *     FlushLookUpTableBucket @ 0x1C00351DC (FlushLookUpTableBucket.c)
 * Callees:
 *     <none>
 */

void __fastcall FlushEventEntryList(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  PCEVENT_DESCRIPTOR Keyword; // rdi
  int v4; // edx
  __int64 v5; // rcx
  PVOID *v6; // rbx

  if ( EventDescriptor )
  {
    Keyword = EventDescriptor;
    do
    {
      v4 = 2;
      if ( BYTE5(Keyword[2].Keyword) + 2 > 2 )
      {
        v5 = 32LL;
        do
        {
          v5 += 16LL;
          ++v4;
          *(_BYTE *)(v5 + *(_QWORD *)&Keyword[1].Id - 3) = 0;
        }
        while ( v4 < BYTE5(Keyword[2].Keyword) + 2 );
      }
      v6 = (PVOID *)&Keyword[1];
      EtwWriteTransfer(
        RegHandle,
        Keyword,
        0LL,
        0LL,
        BYTE4(Keyword[2].Keyword),
        *(PEVENT_DATA_DESCRIPTOR *)&Keyword[1].Id);
      Keyword = (PCEVENT_DESCRIPTOR)Keyword[1].Keyword;
      ExFreePoolWithTag(*v6, 0);
    }
    while ( Keyword );
  }
}
