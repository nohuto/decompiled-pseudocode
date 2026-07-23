/*
 * XREFs of EtwpTiFillVadEventWrite @ 0x140228CAC
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140228DC0 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A6654 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpTiFillVad @ 0x140228C0C (EtwpTiFillVad.c)
 */

NTSTATUS __fastcall EtwpTiFillVadEventWrite(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        ULONG a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        const EVENT_DESCRIPTOR *a7)
{
  __int64 v7; // r11
  int v11; // esi
  int v12; // eax
  int v13; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v14; // rax

  v7 = 0LL;
  if ( a6 )
  {
    v11 = a5;
    do
    {
      if ( a3 && _bittest(&v11, v7) )
      {
        v12 = EtwpTiFillVad((__int64)&a1[a2], a4 + 48 * v7);
        a2 = v12 + v13;
      }
      else
      {
        v14 = &a1[a2];
        v14->Reserved = 0;
        v14->Ptr = (ULONGLONG)&unk_140261F80;
        v14->Size = 4;
        v14[1].Reserved = 0;
        v14[1].Ptr = (ULONGLONG)&unk_140261F80;
        v14[1].Size = 8;
        v14[2].Reserved = 0;
        v14[2].Ptr = (ULONGLONG)&unk_140261F80;
        v14[2].Size = 4;
        v14[3].Reserved = 0;
        v14[3].Ptr = (ULONGLONG)&unk_140261F80;
        v14[3].Size = 4;
        v14[4].Reserved = 0;
        v14[4].Ptr = (ULONGLONG)&unk_140261F80;
        v14[4].Size = 8;
        v14[5].Reserved = 0;
        v14[5].Ptr = (ULONGLONG)&unk_140261F80;
        v14[5].Size = 8;
        v14[6].Reserved = 0;
        a2 += 7;
        v14[6].Ptr = (ULONGLONG)&unk_140261F80;
        v14[6].Size = 2;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < a6 );
  }
  return EtwWrite(EtwThreatIntProvRegHandle, a7, 0LL, a2, a1);
}
