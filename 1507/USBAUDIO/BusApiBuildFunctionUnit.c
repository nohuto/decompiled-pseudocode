/*
 * XREFs of BusApiBuildFunctionUnit @ 0x1C001B388
 * Callers:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001B4AC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseMixerUnit @ 0x1C001E970 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001EC70 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001EDF0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001F080 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001F350 (USBParseExtensionUnit.c)
 *     USBParseMIDIElement @ 0x1C001F910 (USBParseMIDIElement.c)
 * Callees:
 *     memset @ 0x1C0008240 (memset.c)
 */

__int64 __fastcall BusApiBuildFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int *a7,
        PCWSTR SourceString,
        unsigned int a9,
        _QWORD *a10)
{
  __int64 v10; // r15
  unsigned int v13; // edi
  __int64 v14; // rsi
  char *PoolWithTag; // rax
  char *v16; // rbx
  int *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  _QWORD *v20; // rcx

  v10 = *(_QWORD *)(a1 + 16);
  v13 = -1073741670;
  v14 = a6;
  *a10 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, a9 + 12 * (a6 + 8LL), 0x41627845u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v17 = a7;
    *((_DWORD *)v16 + 4) = a2;
    *((_DWORD *)v16 + 7) = a5;
    *((_QWORD *)v16 + 7) = v16 + 96;
    *((_DWORD *)v16 + 5) = a3;
    *((_DWORD *)v16 + 6) = a4;
    *((_DWORD *)v16 + 8) = a6;
    if ( a7 && a6 )
    {
      v18 = 0LL;
      do
      {
        v19 = *v17++;
        *(_DWORD *)(v18 + *((_QWORD *)v16 + 7)) = v19;
        v18 += 12LL;
        --v14;
      }
      while ( v14 );
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v16 + 40), SourceString);
    *a10 = v16;
    v20 = *(_QWORD **)(v10 + 88);
    *(_QWORD *)v16 = v10 + 80;
    *((_QWORD *)v16 + 1) = v20;
    if ( *v20 != v10 + 80 )
      __fastfail(3u);
    *v20 = v16;
    v13 = 0;
    *(_QWORD *)(v10 + 88) = v16;
  }
  return v13;
}
