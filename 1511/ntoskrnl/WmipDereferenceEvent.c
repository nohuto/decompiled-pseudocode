/*
 * XREFs of WmipDereferenceEvent @ 0x14065DB8C
 * Callers:
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1403D39DC (WmipReferenceEntry.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r15d
  char *v4; // rbx
  ULONG_PTR i; // rdi
  unsigned int v6; // eax
  int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // esi
  char *PoolWithTag; // rax
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int128 v16[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+8h]
  unsigned int v18; // [rsp+98h] [rbp+10h]
  unsigned int v19; // [rsp+A0h] [rbp+18h]
  int v20; // [rsp+A8h] [rbp+20h]

  v1 = *(unsigned int *)(a1 + 4);
  v2 = 0;
  v18 = 0;
  v4 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; ; i = *(_QWORD *)i )
  {
    if ( i == WmipDSHeadPtr )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      i = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(i + 56) == v1 )
      break;
  }
  WmipReferenceEntry(i);
  KeReleaseMutex(&WmipSMMutex, 0);
LABEL_6:
  if ( i )
  {
    v6 = 64;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    if ( v7 )
    {
      v8 = 0;
      v17 = 0;
    }
    else
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      v17 = 64;
      if ( v8 > 0xFFFFFFBF )
      {
LABEL_28:
        WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
        return v4;
      }
      v6 = *(unsigned __int16 *)(a1 + 68) + 66;
    }
    if ( v6 + 7 >= v6 )
    {
      v9 = *(_DWORD *)(a1 + 64);
      v10 = (v6 + 7) & 0xFFFFFFF8;
      v19 = v10;
      if ( v9 <= -1 - v10 )
      {
        v11 = v9 + v10;
        while ( 1 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70696D57u);
          v4 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v11);
          *(_DWORD *)v4 = v11;
          *((_DWORD *)v4 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v4 + 24) = *(_OWORD *)(a1 + 48);
          v13 = *(unsigned int *)(a1 + 8);
          *((_DWORD *)v4 + 11) = v7 | 2;
          *((_DWORD *)v4 + 14) = v19;
          *((_DWORD *)v4 + 2) = v13;
          if ( v7 )
          {
            *((_DWORD *)v4 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            v8 -= 2;
            *((_DWORD *)v4 + 12) = v17;
            *(_WORD *)&v4[v17] = v8;
            memmove(&v4[v17 + 2], (const void *)(a1 + 70), v8);
          }
          LOBYTE(v13) = 1;
          v20 = WmipSendWmiIrp(v13, *(unsigned int *)(i + 56), (__int64)(v4 + 24), v11, (__int64)v4, v16);
          if ( v20 < 0 )
          {
            v14 = v18;
          }
          else
          {
            if ( (*((_DWORD *)v4 + 11) & 0x20) == 0 )
            {
              *((_DWORD *)v4 + 11) |= *(_DWORD *)(a1 + 44) & 0xFF000000 | 8;
              goto LABEL_28;
            }
            v14 = *((_DWORD *)v4 + 12);
            v18 = v14;
          }
          ExFreePoolWithTag(v4, 0);
          v4 = 0LL;
          if ( v20 >= 0 && v14 > v11 )
          {
            ++v2;
            v11 = v14;
            if ( v2 < 2 )
              continue;
          }
          goto LABEL_28;
        }
      }
    }
    goto LABEL_28;
  }
  return v4;
}
