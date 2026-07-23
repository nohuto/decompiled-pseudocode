/*
 * XREFs of RtlpFillMemoryWithInverseStride @ 0x14021671C
 * Callers:
 *     RtlpGenericStrideWorker @ 0x140216EFC (RtlpGenericStrideWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpFillMemoryWithInverseStride(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r8d
  char *v5; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // r8
  char *v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char *v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 result; // rax

  v4 = 2 * a2;
  v5 = (char *)(a4 + 4096);
  v7 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  if ( (unsigned int)v7 > 2 * a2 )
    v8 = (unsigned int)(12 - v7 + v4);
  else
    v8 = (unsigned int)(v4 - v7);
  v9 = (char *)(a4 + 4 * v8);
  if ( v9 > v5 )
    v9 = (char *)(a4 + 4096);
  v10 = 0LL;
  v11 = 0LL;
  v12 = (unsigned __int64)&v9[-a4 + 3] >> 2;
  if ( a4 > (unsigned __int64)v9 )
    v12 = 0LL;
  if ( v12 )
  {
    do
    {
      *(_DWORD *)a4 = a1;
      ++v11;
      a4 += 4LL;
    }
    while ( v11 < v12 );
  }
  v13 = (char *)(a4 + 8);
  if ( v9 < v5 )
  {
    v14 = (unsigned __int64)&v5[-4 * ((unsigned int)((v5 - v9) >> 2) % 0xC)];
    if ( v9 != (char *)v14 )
    {
      while ( 1 )
      {
        v9 += 48;
        if ( (unsigned __int64)v13 >= v14 )
          break;
        v15 = 0LL;
        v16 = (unsigned __int64)(v9 - v13 + 3) >> 2;
        if ( v13 > v9 )
          v16 = 0LL;
        if ( v16 )
        {
          do
          {
            *(_DWORD *)v13 = a1;
            ++v15;
            v13 += 4;
          }
          while ( v15 < v16 );
        }
        v13 += 8;
      }
    }
  }
  result = (unsigned __int64)(v5 - v13 + 3) >> 2;
  if ( v13 > v5 )
    result = 0LL;
  if ( result )
  {
    do
    {
      ++v10;
      *(_DWORD *)v13 = a1;
      v13 += 4;
    }
    while ( v10 < result );
  }
  return result;
}
