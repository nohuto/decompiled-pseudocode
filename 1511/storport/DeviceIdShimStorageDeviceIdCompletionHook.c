/*
 * XREFs of DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C003C580
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     ShimGetMsftId @ 0x1C003C744 (ShimGetMsftId.c)
 */

void __fastcall DeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // r13
  size_t v9; // r12
  int *PoolWithTag; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  char v13; // r14
  int *v14; // rbp
  char *v15; // rdx
  unsigned __int16 v16; // cx
  __int16 v17; // ax
  void *v18; // rcx
  char v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+21h] [rbp-57h]
  __int64 v21; // [rsp+29h] [rbp-4Fh]
  __int64 v22; // [rsp+31h] [rbp-47h]
  __int16 v23; // [rsp+39h] [rbp-3Fh]
  char v24; // [rsp+3Bh] [rbp-3Dh]
  int MsftId; // [rsp+90h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = *(_QWORD *)(v3 + 128);
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( v4 < 0 )
    goto LABEL_20;
  v9 = a3;
  PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x48536152u);
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_20;
  }
  MsftId = ShimGetMsftId(v3, &v19);
  v4 = MsftId;
  if ( MsftId < 0 )
    goto LABEL_19;
  memset(PoolWithTag, 0, v9);
  *PoolWithTag = 16;
  v11 = 0;
  PoolWithTag[1] = 12;
  v12 = *(unsigned __int8 *)(v8 + 3) | (*(unsigned __int8 *)(v8 + 2) << 8);
  if ( !v12 )
    goto LABEL_14;
  v13 = 0;
  v14 = PoolWithTag + 3;
  do
  {
    v15 = (char *)(v11 + v8 + 4);
    v11 += (unsigned __int8)v15[3] + 4;
    if ( (v15[1] & 0x30) == 0 )
    {
      if ( v13 == 1 )
        continue;
      v13 = 1;
      v15 = &v19;
    }
    ++v5;
    v16 = ((unsigned __int8)v15[3] + 20) & 0xFFFC;
    PoolWithTag[1] += v16;
    if ( PoolWithTag[1] <= v6 )
    {
      *v14 = *v15 & 0xF;
      v14[1] = v15[1] & 0xF;
      v14[3] = ((unsigned __int8)v15[1] >> 4) & 3;
      v17 = (unsigned __int8)v15[3];
      *((_WORD *)v14 + 5) = v16;
      *((_WORD *)v14 + 4) = v17;
      memmove(v14 + 4, v15 + 4, (unsigned __int8)v15[3]);
      v14 = (int *)((char *)v14 + *((unsigned __int16 *)v14 + 5));
    }
  }
  while ( v11 < v12 );
  v4 = MsftId;
  v7 = a2;
LABEL_14:
  if ( v6 >= 0xC )
    PoolWithTag[2] = v5;
  v18 = *(void **)(v7 + 24);
  if ( PoolWithTag[1] < v6 )
    v6 = PoolWithTag[1];
  *(_QWORD *)(v7 + 56) = v6;
  memmove(v18, PoolWithTag, v6);
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0x48536152u);
LABEL_20:
  *(_DWORD *)(v7 + 48) = v4;
}
