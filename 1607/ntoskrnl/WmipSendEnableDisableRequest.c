/*
 * XREFs of WmipSendEnableDisableRequest @ 0x140549D74
 * Callers:
 *     WmipSendEnableRequest @ 0x1404D0C2C (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140549CFC (WmipDoDisableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(UCHAR a1, __int64 a2, char a3)
{
  bool v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // esi
  volatile signed __int64 **PoolWithTag; // rdi
  __int64 *i; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  volatile signed __int64 **v14; // rsi
  volatile signed __int64 *v15; // rbx
  __int128 v18; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v19[7]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0LL;
  v5 = ((a1 - 4) & 0xFD) == 0;
  v6 = *(unsigned int *)(a2 + 36);
  v7 = 0LL;
  v8 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v6 > 0x40 )
  {
    PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(PagedPool, 8 * v6, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (volatile signed __int64 **)P;
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
          PoolWithTag[v7] = (volatile signed __int64 *)v12;
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
    memset(v19, 0, 0x30uLL);
    v19[0].LowPart = 48;
    *(_OWORD *)&v19[3].LowPart = *(_OWORD *)(a2 + 72);
    v14 = PoolWithTag;
    do
    {
      v15 = *v14;
      WmipSendWmiIrp(a1, *((_DWORD *)*v14 + 14), (UNICODE_STRING *)&v19[3], 0x30u, (__int64)v19, &v18);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v15);
      ++v14;
      --v7;
    }
    while ( v7 );
  }
  if ( PoolWithTag != (volatile signed __int64 **)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
