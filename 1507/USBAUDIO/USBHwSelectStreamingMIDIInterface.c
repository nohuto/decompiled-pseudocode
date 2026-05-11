/*
 * XREFs of USBHwSelectStreamingMIDIInterface @ 0x1C001CF20
 * Callers:
 *     USBDeviceSetPowerState @ 0x1C001C3D0 (USBDeviceSetPowerState.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C00204C0 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     memmove @ 0x1C0007F00 (memmove.c)
 *     memset @ 0x1C0008240 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C001C444 (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001C484 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBMidiInPipePrimer @ 0x1C0022754 (USBMidiInPipePrimer.c)
 */

__int64 __fastcall USBHwSelectStreamingMIDIInterface(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v6; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int16 v10; // bp
  void *v11; // r12
  int i; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  char *v17; // r14
  __int64 v18; // rdx
  _DWORD *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  void *v24; // rbx
  PVOID v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rcx
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, (unsigned int)(24 * v9 + 56), 0x41627845u);
  v11 = PoolWithTag;
  i = -1073741670;
  if ( PoolWithTag )
  {
    v13 = v6[5];
    v14 = 0LL;
    for ( i = -1073741808; (unsigned int)v14 < *(unsigned __int8 *)(v13 + 4); v14 = (unsigned int)(v14 + 1) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * (unsigned int)v14) + 2LL) == *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
        break;
    }
    v15 = v6[2];
    v16 = 2 * v14;
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 8 * v16) + 2LL) != *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
      goto LABEL_38;
    v17 = (char *)(PoolWithTag + 8);
    memmove(PoolWithTag + 8, *(const void **)(v15 + 8 * v16 + 8), v10);
    *((_WORD *)PoolWithTag + 16) = v10;
    *((_BYTE *)PoolWithTag + 35) = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 3LL);
    if ( (_DWORD)v9 )
    {
      v18 = 0LL;
      v19 = PoolWithTag + 18;
      v20 = v9;
      do
      {
        v21 = *(_QWORD *)(v18 + *(_QWORD *)(a2 + 48));
        v18 += 8LL;
        *v19 = *(unsigned __int16 *)(v21 + 4);
        v19 += 6;
        --v20;
      }
      while ( v20 );
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
    v23 = PoolWithTag[12];
    if ( a3 )
    {
      *(_DWORD *)(a2 + 32) = v23;
      v24 = *(void **)(a1 + 8);
      v25 = ExAllocatePoolWithTag(NonPagedPool, (unsigned int)(168 * v23), 0x41627845u);
      *(_QWORD *)(a2 + 40) = v25;
      if ( v25 )
        i = USBHwAllocateAndBag((PVOID *)(a2 + 40), v24);
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
    else if ( *(_DWORD *)(a2 + 32) != v23 )
    {
      i = -1073741438;
    }
    if ( i >= 0 )
    {
      v26 = 0;
      if ( *(_DWORD *)(a2 + 32) )
      {
        do
        {
          if ( i < 0 )
            break;
          v27 = *(_QWORD *)(a2 + 40);
          v28 = 168LL * v26;
          *(_OWORD *)(v27 + v28) = *(_OWORD *)&v17[24 * v26 + 24];
          *(_QWORD *)(v27 + v28 + 16) = *(_QWORD *)&v17[24 * v26 + 40];
          if ( a3 )
          {
            v29 = (_QWORD *)(v28 + *(_QWORD *)(a2 + 40) + 48LL);
            v29[1] = v29;
            *v29 = v29;
          }
          if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v26) + 2LL) < 0 )
          {
            LOBYTE(v22) = a3;
            i = USBMidiInPipePrimer(a1, a2, v26, v22);
          }
          ++v26;
        }
        while ( v26 < *(_DWORD *)(a2 + 32) );
        v11 = PoolWithTag;
      }
    }
    goto LABEL_38;
  }
  return (unsigned int)i;
}
