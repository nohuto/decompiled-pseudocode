/*
 * XREFs of NdisInitializeString @ 0x1C00AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeString(PNDIS_STRING Destination, PUCHAR Source)
{
  unsigned __int64 v2; // rbx
  PUCHAR v3; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *PoolWithTag; // rax

  if ( Destination )
  {
    v2 = 0LL;
    v3 = (PUCHAR)&byte_1C00B4D10;
    *(_DWORD *)&Destination->Length = 0;
    Destination->Buffer = 0LL;
    if ( Source )
      v3 = Source;
    v5 = -1LL;
    do
      ++v5;
    while ( v3[v5] );
    v6 = 2 * v5;
    if ( is_mul_ok(v5, 2uLL) && v6 <= 0xFFFD )
    {
      Destination->Length = v6;
      v7 = v6 + 2;
      Destination->MaximumLength = v7;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x7473444Eu);
      Destination->Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        do
        {
          Destination->Buffer[v2] = v3[v2];
          ++v2;
        }
        while ( v2 <= v5 );
      }
      else
      {
        *(_DWORD *)&Destination->Length = 0;
      }
    }
  }
}
