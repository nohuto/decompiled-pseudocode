/*
 * XREFs of RaGetUnitStorageDeviceIdProperty @ 0x1C005BCF8
 * Callers:
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C005BC90 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceIdProperty(__int64 a1, int *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v4; // r14d
  __int64 v5; // rsi
  unsigned int *v6; // r13
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  int *v10; // r13
  unsigned __int16 v11; // cx
  __int16 v12; // ax
  __int64 result; // rax

  v3 = *a3;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = a3;
  if ( *a3 < 8 )
    return 3221225485LL;
  memset(a2, 0, v3);
  *a2 = 16;
  v8 = 0;
  a2[1] = 12;
  v9 = *(unsigned __int8 *)(v5 + 3) | (*(unsigned __int8 *)(v5 + 2) << 8);
  if ( v9 )
  {
    v10 = a2 + 3;
    do
    {
      ++v4;
      v11 = (*(unsigned __int8 *)(v8 + v5 + 7) + 20) & 0xFFFC;
      a2[1] += v11;
      if ( a2[1] <= v3 )
      {
        *v10 = *(_BYTE *)(v8 + v5 + 4) & 0xF;
        v10[1] = *(_BYTE *)(v8 + v5 + 5) & 0xF;
        v10[3] = (*(unsigned __int8 *)(v8 + v5 + 5) >> 4) & 3;
        v12 = *(unsigned __int8 *)(v8 + v5 + 7);
        *((_WORD *)v10 + 5) = v11;
        *((_WORD *)v10 + 4) = v12;
        memmove(v10 + 4, (const void *)(v8 + v5 + 8), *(unsigned __int8 *)(v8 + v5 + 7));
        v10 = (int *)((char *)v10 + *((unsigned __int16 *)v10 + 5));
      }
      v8 += *(unsigned __int8 *)(v8 + v5 + 7) + 4;
    }
    while ( v8 < v9 );
    v6 = a3;
  }
  if ( v3 >= 0xC )
    a2[2] = v4;
  if ( a2[1] < v3 )
    v3 = a2[1];
  result = 0LL;
  *v6 = v3;
  return result;
}
