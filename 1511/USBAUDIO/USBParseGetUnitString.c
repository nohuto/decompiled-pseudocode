/*
 * XREFs of USBParseGetUnitString @ 0x1C001D304
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001D4B0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C001D610 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001D890 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001D9B0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001DBF0 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001DE10 (USBParseExtensionUnit.c)
 *     USBParseMIDIInJack @ 0x1C001E060 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C001E150 (USBParseMIDIOutJack.c)
 *     USBParseMIDIElement @ 0x1C001E2C0 (USBParseMIDIElement.c)
 * Callees:
 *     memmove @ 0x1C0007CC0 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C001B374 (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C001C180 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  bool v4; // zf
  int v6; // edi
  char *v7; // rcx
  char v8; // bl
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v10; // rsi
  int StringDescriptor; // eax
  void *v12; // rbx
  void *v13; // r14
  size_t v14; // rbx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2[2] == 7;
  v6 = 0;
  *a3 = 0LL;
  if ( v4 && (unsigned int)*((unsigned __int16 *)a2 + 2) - 1 <= 1 )
    v7 = (char *)&a2[a2[6] + 12 + a2[a2[6] + 11]];
  else
    v7 = (char *)&a2[*a2 - 1];
  v8 = *v7;
  if ( *v7 )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPool, 0xFFuLL, 0x41627845u);
    LODWORD(v17) = 0;
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v8, 1033, PoolWithTag, v16, (unsigned int *)&v17);
      v6 = StringDescriptor;
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          v6 = 0;
      }
      else
      {
        v12 = *(void **)(a1 + 8);
        v17 = (__int64)ExAllocatePoolWithTag(PagedPool, (unsigned int)*v10 + 2, 0x41627845u);
        v13 = (void *)v17;
        if ( v17 )
          v6 = USBHwAllocateAndBag((PVOID *)&v17, v12);
        else
          v6 = -1073741670;
        if ( v6 >= 0 )
        {
          v14 = (unsigned int)*v10 - 2;
          memmove(v13, v10 + 2, v14);
          *a3 = v13;
          *((_WORD *)v13 + (v14 >> 1)) = 0;
        }
      }
      ExFreePool(v10);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
