/*
 * XREFs of USBParseGetUnitString @ 0x1C001E65C
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001E840 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C001E9E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001ECE0 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001EE60 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001F0F0 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001F3C0 (USBParseExtensionUnit.c)
 *     USBParseMIDIInJack @ 0x1C001F6B0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C001F7D0 (USBParseMIDIOutJack.c)
 *     USBParseMIDIElement @ 0x1C001F980 (USBParseMIDIElement.c)
 * Callees:
 *     memmove @ 0x1C0008040 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C001C474 (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C001D29C (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  int v6; // edi
  unsigned __int64 v7; // r9
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  char v14; // bl
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v16; // rsi
  int StringDescriptor; // eax
  void *v18; // rbx
  void *v19; // r14
  size_t v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + 2LL);
  if ( a2[2] != 7 )
  {
    v10 = *a2;
    goto LABEL_10;
  }
  v8 = *a2;
  if ( *a2 < 7u )
    return 3221225473LL;
  v9 = v8;
  if ( (unsigned __int64)&a2[v8] > v7 )
    return 3221225473LL;
  if ( (unsigned int)*((unsigned __int16 *)a2 + 2) - 1 <= 1 )
  {
    v11 = a2[6];
    if ( v9 >= v11 + 12 )
    {
      v12 = (char *)&a2[v11 + 12 + a2[v11 + 11]];
      if ( (unsigned __int64)v12 < v7 )
        goto LABEL_11;
    }
    return 3221225473LL;
  }
  v10 = v8;
LABEL_10:
  v12 = (char *)&a2[v10 - 1];
LABEL_11:
  v14 = *v12;
  if ( *v12 )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFuLL, 0x41627845u);
    LODWORD(v22) = 0;
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v14, 1033, PoolWithTag, v21, (unsigned int *)&v22);
      v6 = StringDescriptor;
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          v6 = 0;
      }
      else
      {
        v18 = *(void **)(a1 + 8);
        v22 = (__int64)ExAllocatePoolWithTag(PagedPool, (unsigned int)*v16 + 2, 0x41627845u);
        v19 = (void *)v22;
        if ( v22 )
          v6 = USBHwAllocateAndBag((PVOID *)&v22, v18);
        else
          v6 = -1073741670;
        if ( v6 >= 0 )
        {
          v20 = (unsigned int)*v16 - 2;
          memmove(v19, v16 + 2, v20);
          *a3 = v19;
          *((_WORD *)v19 + (v20 >> 1)) = 0;
        }
      }
      ExFreePool(v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
