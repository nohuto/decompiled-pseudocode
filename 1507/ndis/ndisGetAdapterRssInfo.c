/*
 * XREFs of ndisGetAdapterRssInfo @ 0x1C00D0CA4
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C001D030 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(char *NdisHandle, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  NDIS_STATUS RssProcessorInformation; // r14d
  unsigned int v7; // r12d
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v15; // rdi
  unsigned int v16; // r15d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  v4 = a2[23];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = 140;
    if ( v7 >= 0x8C )
    {
      v9 = (_DWORD *)a2[3];
      *a3 = 0;
      memset(v9, 0, 0x8CuLL);
      *v9 = 9175424;
      v10 = 140;
      *((_BYTE *)v9 + 12) = NdisHandle[32];
      *((_BYTE *)v9 + 13) = NdisHandle[33];
      v9[2] = 140;
      v9[4] = 40;
      v9[5] = 20;
      *(_OWORD *)(v9 + 10) = *(_OWORD *)(NdisHandle + 2728);
      v9[14] = *((_DWORD *)NdisHandle + 686);
      if ( *((_QWORD *)NdisHandle + 69) )
      {
        v9[6] = 60;
        v9[7] = 40;
        v11 = *((_QWORD *)NdisHandle + 69);
        *(_OWORD *)(v9 + 15) = *(_OWORD *)v11;
        *(_OWORD *)(v9 + 19) = *(_OWORD *)(v11 + 16);
        *(_QWORD *)(v9 + 23) = *(_QWORD *)(v11 + 32);
        v10 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL)
            + *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL)
            + 140;
        v9[2] = v10;
        if ( v7 < v10 )
        {
          v9[19] = 0;
          v9[21] = 0;
        }
        else
        {
          v9[21] = 80;
          memmove(
            v9 + 35,
            (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 24LL)),
            *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL));
          v12 = (unsigned int)*(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 140;
          v13 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 140;
          v9[19] = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 80;
          memmove(
            (char *)v9 + v12,
            (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 16LL)),
            *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL));
          v8 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL) + v13;
        }
      }
      else
      {
        v9[1] |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v15 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          v9[8] = 100;
          v9[9] = 40;
          *(_OWORD *)(v9 + 25) = *(_OWORD *)&v15->Header.Type;
          *(_OWORD *)(v9 + 29) = *(_OWORD *)&v15->PreferredNumaNode;
          *(_QWORD *)(v9 + 33) = *(_QWORD *)&v15[1].Header.Type;
          v16 = v15->RssProcessorEntrySize * v15->RssProcessorCount + v10;
          v9[2] = v16;
          if ( v7 < v16 )
          {
            v9[30] = 0;
          }
          else
          {
            v9[30] = v8 - 100;
            memmove(
              (char *)v9 + v8,
              &v15->Header.Type + v15->RssProcessorArrayOffset,
              v15->RssProcessorEntrySize * v15->RssProcessorCount);
            v8 += v15->RssProcessorEntrySize * v15->RssProcessorCount;
          }
        }
        ExFreePoolWithTag(v15, 0x2020444Eu);
      }
      a2[7] = v8;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
