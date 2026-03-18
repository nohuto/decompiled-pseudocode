/*
 * XREFs of WmipSendEnableDisableRequest @ 0x1403D2308
 * Callers:
 *     WmipDoDisableRequest @ 0x14048C6CC (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x1404C9764 (WmipSendEnableRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1403D39DC (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  bool v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // esi
  _BYTE *PoolWithTag; // rdi
  __int64 *i; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  __int64 v14; // rcx
  _BYTE *v15; // rsi
  __int64 v16; // rbx
  _BYTE v19[16]; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v20[7]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0LL;
  v5 = ((a1 - 4) & 0xFD) == 0;
  v6 = *(unsigned int *)(a2 + 36);
  v7 = 0LL;
  v8 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v6 > 0x40 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v6, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v7 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 4);
    if ( (v11 & 0x1000) == 0 && (a3 || (v11 & 4) != 0) )
    {
      v12 = i[8];
      if ( (*(_DWORD *)(v12 + 16) & 0x20000000) == 0 )
      {
        if ( v5 )
        {
          if ( (v11 & v8) == 0 )
            goto LABEL_13;
LABEL_14:
          if ( v5 )
          {
            *((_DWORD *)i + 4) |= v8;
            continue;
          }
        }
        else if ( (v11 & v8) != 0 )
        {
LABEL_13:
          v13 = i[8];
          *(_QWORD *)&PoolWithTag[8 * v7] = v12;
          WmipReferenceEntry(v13);
          v7 = (unsigned int)(v7 + 1);
          goto LABEL_14;
        }
        *((_DWORD *)i + 4) &= ~v8;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v7 )
  {
    memset(v20, 0, 0x30uLL);
    v20[0].LowPart = 48;
    *(_OWORD *)&v20[3].LowPart = *(_OWORD *)(a2 + 72);
    v15 = PoolWithTag;
    do
    {
      v16 = *(_QWORD *)v15;
      LOBYTE(v14) = a1;
      WmipSendWmiIrp(v14, *(unsigned int *)(*(_QWORD *)v15 + 56LL), &v20[3], 48LL, v20, v19);
      WmipUnreferenceEntry(&WmipDSChunkInfo, v16);
      v15 += 8;
      --v7;
    }
    while ( v7 );
  }
  if ( PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
