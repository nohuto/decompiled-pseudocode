/*
 * XREFs of USBHwSelectStreamingMIDIInterface @ 0x1C001CF68
 * Callers:
 *     USBDeviceSetPowerState @ 0x1C001C400 (USBDeviceSetPowerState.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0020520 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     memmove @ 0x1C0008040 (memmove.c)
 *     memset @ 0x1C0008380 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C001C474 (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001C4B4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBMidiInPipePrimer @ 0x1C00227D0 (USBMidiInPipePrimer.c)
 */

__int64 __fastcall USBHwSelectStreamingMIDIInterface(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int16 v10; // r15
  void *v11; // r12
  int i; // ebx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r10
  char *v16; // r14
  __int64 v17; // rdx
  _DWORD *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // eax
  void *v23; // rbx
  PVOID v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  _DWORD *PoolWithTag; // [rsp+78h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD **)(v3 + 72);
  if ( *(_BYTE *)(v3 + 64) )
    return 3221226166LL;
  if ( *(_BYTE *)(a2 + 16) )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(unsigned __int8 *)(v8 + 4);
  if ( !*(_BYTE *)(v8 + 4) )
    return 3221225858LL;
  v10 = 24 * (v9 + 1);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(24 * v9 + 56), 0x41627845u);
  v11 = PoolWithTag;
  i = -1073741670;
  if ( PoolWithTag )
  {
    v13 = v6[5];
    v14 = 0;
    for ( i = -1073741808; v14 < *(unsigned __int8 *)(v13 + 4); ++v14 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * v14) + 2LL) == *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
        break;
    }
    v15 = v6[2];
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 16LL * v14) + 2LL) != *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
      goto LABEL_38;
    v16 = (char *)(PoolWithTag + 8);
    memmove(PoolWithTag + 8, *(const void **)(v15 + 16LL * v14 + 8), v10);
    *((_WORD *)PoolWithTag + 16) = v10;
    *((_BYTE *)PoolWithTag + 35) = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 3LL);
    if ( (_DWORD)v9 )
    {
      v17 = 0LL;
      v18 = PoolWithTag + 18;
      v19 = v9;
      do
      {
        v20 = *(_QWORD *)(v17 + *(_QWORD *)(a2 + 48));
        v17 += 8LL;
        *v18 = *(unsigned __int16 *)(v20 + 4);
        v18 += 6;
        --v19;
      }
      while ( v19 );
    }
    *(_WORD *)PoolWithTag = 24 * v9 + 56;
    *((_WORD *)PoolWithTag + 1) = 1;
    *((_QWORD *)PoolWithTag + 3) = v6[3];
    i = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), (ULONG_PTR)PoolWithTag);
    if ( (int)PoolWithTag[1] < 0 )
      i = -1073741668;
    if ( i < 0 )
      goto LABEL_38;
    if ( PoolWithTag[12] > (unsigned int)v9 )
      i = -1073741668;
    if ( i < 0 )
      goto LABEL_38;
    *(_BYTE *)(a2 + 16) = 1;
    v22 = PoolWithTag[12];
    if ( a3 )
    {
      *(_DWORD *)(a2 + 32) = v22;
      v23 = *(void **)(a1 + 8);
      v24 = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(168 * v22), 0x41627845u);
      *(_QWORD *)(a2 + 40) = v24;
      if ( v24 )
        i = USBHwAllocateAndBag((PVOID *)(a2 + 40), v23);
      else
        i = -1073741670;
      if ( i < 0 )
      {
LABEL_38:
        ExFreePool(v11);
        return (unsigned int)i;
      }
      memset(*(void **)(a2 + 40), 0, 168LL * *(unsigned int *)(a2 + 32));
    }
    else if ( *(_DWORD *)(a2 + 32) != v22 )
    {
      i = -1073741438;
    }
    if ( i >= 0 )
    {
      v25 = 0;
      if ( *(_DWORD *)(a2 + 32) )
      {
        do
        {
          if ( i < 0 )
            break;
          v26 = *(_QWORD *)(a2 + 40);
          v27 = 168LL * v25;
          *(_OWORD *)(v26 + v27) = *(_OWORD *)&v16[24 * v25 + 24];
          *(_QWORD *)(v26 + v27 + 16) = *(_QWORD *)&v16[24 * v25 + 40];
          if ( a3 )
          {
            v28 = (_QWORD *)(v27 + *(_QWORD *)(a2 + 40) + 48LL);
            v28[1] = v28;
            *v28 = v28;
          }
          if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v25) + 2LL) < 0 )
          {
            LOBYTE(v21) = a3;
            i = USBMidiInPipePrimer(a1, a2, v25, v21);
          }
          ++v25;
        }
        while ( v25 < *(_DWORD *)(a2 + 32) );
        v11 = PoolWithTag;
      }
    }
    goto LABEL_38;
  }
  return (unsigned int)i;
}
