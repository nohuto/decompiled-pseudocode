/*
 * XREFs of EtwpEnableTrace @ 0x140506134
 * Callers:
 *     EtwEnableTrace @ 0x1405060E8 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int128 *a1,
        _OWORD *a2,
        __int16 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        const void **a9,
        const void **a10)
{
  const void **v10; // r13
  int v11; // esi
  int v14; // ebx
  unsigned int v15; // r9d
  __int64 v16; // r8
  unsigned __int16 v17; // ax
  const void **v18; // r12
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // esi
  char *PoolWithTag; // rax
  char *v23; // rdi
  __int128 v24; // xmm0
  unsigned int v25; // ebx
  unsigned __int16 v27; // ax
  char *v28; // rsi
  unsigned int v29; // ebp
  char *v30; // r15
  unsigned int i; // r14d
  __int64 v32; // rbx
  size_t v33; // r8
  __int64 v34; // rax
  unsigned int j; // r14d
  __int64 v36; // rbx
  int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rax

  v10 = a9;
  v11 = 120;
  v14 = 0;
  if ( a9 )
  {
    v15 = 0;
    v16 = (__int64)a9;
    do
    {
      v17 = *(_WORD *)v16;
      if ( *(_WORD *)v16 && *(_QWORD *)(v16 + 8) )
      {
        if ( v17 > 0x400u )
          return (unsigned int)-1073741811;
        ++v14;
        v11 += v17 + 2;
      }
      ++v15;
      v16 += 16LL;
    }
    while ( v15 < 3 );
  }
  v18 = a10;
  if ( a10 )
  {
    v19 = 0;
    v20 = (__int64)a10;
    do
    {
      if ( *(_QWORD *)v20 )
      {
        v27 = *(_WORD *)(*(_QWORD *)v20 + 2LL);
        if ( v27 )
        {
          if ( v27 > 0x40u )
            return (unsigned int)-1073741811;
          ++v14;
          v11 += 2 * v27 + 4;
        }
      }
      ++v19;
      v20 += 8LL;
    }
    while ( v19 < 2 );
  }
  v21 = 16 * v14 + v11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x74777445u);
  v23 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v21);
    *(_DWORD *)v23 = 3;
    *((_DWORD *)v23 + 1) = v21;
    if ( a2 )
      *(_OWORD *)(v23 + 56) = *a2;
    v24 = *a1;
    v23[76] = a5;
    *((_QWORD *)v23 + 12) = a7;
    *((_QWORD *)v23 + 11) = a6;
    *((_WORD *)v23 + 39) = a3;
    *((_DWORD *)v23 + 20) = a8;
    *((_DWORD *)v23 + 18) = a4;
    *((_DWORD *)v23 + 29) = v14;
    *(_OWORD *)(v23 + 40) = v24;
    if ( v14 )
    {
      v28 = v23 + 120;
      v29 = 0;
      v30 = &v23[16 * v14 + 120];
      for ( i = 0; i < 3; ++i )
      {
        if ( *(_WORD *)v10 && v10[1] )
        {
          if ( i )
          {
            if ( i == 1 )
              *(_DWORD *)&v28[16 * v29 + 12] = -2147483632;
            else
              *(_DWORD *)&v28[16 * v29 + 12] = -2147483616;
          }
          else
          {
            *(_DWORD *)&v28[16 * v29 + 12] = -2147483640;
          }
          v32 = 2LL * v29;
          v33 = (unsigned int)*(unsigned __int16 *)v10 + 2;
          *(_DWORD *)&v28[8 * v32 + 8] = v33;
          *(_QWORD *)&v28[8 * v32] = v30 - v23;
          memmove(v30, v10[1], v33);
          v34 = *(unsigned int *)&v28[16 * v29++ + 8];
          v30 += v34;
        }
        v10 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v18 && *((_WORD *)*v18 + 1) )
        {
          if ( j )
            *(_DWORD *)&v28[16 * v29 + 12] = -2147479552;
          else
            *(_DWORD *)&v28[16 * v29 + 12] = -2147483136;
          v36 = 2LL * v29;
          v37 = *((unsigned __int16 *)*v18 + 1);
          *(_QWORD *)&v28[8 * v36] = v30 - v23;
          v38 = 2 * v37 + 4;
          *(_DWORD *)&v28[8 * v36 + 8] = v38;
          memmove(v30, *v18, v38);
          v39 = *(unsigned int *)&v28[16 * v29++ + 8];
          v30 += v39;
        }
        ++v18;
      }
    }
    v25 = EtwpEnableGuid((__int64)v23, 0);
    ExFreePoolWithTag(v23, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v25;
}
