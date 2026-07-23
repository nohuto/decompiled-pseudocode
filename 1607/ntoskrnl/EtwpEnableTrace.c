/*
 * XREFs of EtwpEnableTrace @ 0x14048E2B8
 * Callers:
 *     EtwEnableTrace @ 0x1404C7C18 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11)
{
  const void **v11; // r14
  int v12; // esi
  int v15; // ebx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned __int16 v18; // ax
  const void **v19; // r13
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // esi
  char *PoolWithTag; // rax
  char *v24; // rdi
  __int128 v25; // xmm0
  unsigned int v26; // ebx
  unsigned __int16 v28; // ax
  char *v29; // rsi
  unsigned int v30; // ebp
  char *v31; // r15
  unsigned int i; // r12d
  __int64 v33; // rbx
  size_t v34; // r8
  __int64 v35; // rax
  unsigned int j; // r14d
  __int64 v37; // rbx
  int v38; // ecx
  unsigned int v39; // ecx
  __int64 v40; // rax

  v11 = a10;
  v12 = 120;
  v15 = 0;
  if ( a10 )
  {
    v16 = 0;
    v17 = (__int64)a10;
    do
    {
      v18 = *(_WORD *)v17;
      if ( *(_WORD *)v17 && *(_QWORD *)(v17 + 8) )
      {
        if ( v18 > 0x400u )
          return (unsigned int)-1073741811;
        ++v15;
        v12 += v18 + 2;
      }
      ++v16;
      v17 += 16LL;
    }
    while ( v16 < 3 );
  }
  v19 = a11;
  if ( a11 )
  {
    v20 = 0;
    v21 = (__int64)a11;
    do
    {
      if ( *(_QWORD *)v21 )
      {
        v28 = *(_WORD *)(*(_QWORD *)v21 + 2LL);
        if ( v28 )
        {
          if ( v28 > 0x40u )
            return (unsigned int)-1073741811;
          ++v15;
          v12 += 2 * v28 + 4;
        }
      }
      ++v20;
      v21 += 8LL;
    }
    while ( v20 < 2 );
  }
  v22 = 16 * v15 + v12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x74777445u);
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v22);
    *(_DWORD *)v24 = 3;
    *((_DWORD *)v24 + 1) = v22;
    if ( a3 )
      *(_OWORD *)(v24 + 56) = *a3;
    v25 = *a2;
    *((_DWORD *)v24 + 18) = a5;
    v24[76] = a6;
    *((_QWORD *)v24 + 12) = a8;
    *((_QWORD *)v24 + 11) = a7;
    *((_DWORD *)v24 + 20) = a9;
    *((_WORD *)v24 + 39) = a4;
    *((_DWORD *)v24 + 29) = v15;
    *(_OWORD *)(v24 + 40) = v25;
    if ( v15 )
    {
      v29 = v24 + 120;
      v30 = 0;
      v31 = &v24[16 * v15 + 120];
      for ( i = 0; i < 3; ++i )
      {
        if ( *(_WORD *)v11 && v11[1] )
        {
          if ( i )
          {
            if ( i == 1 )
              *(_DWORD *)&v29[16 * v30 + 12] = -2147483632;
            else
              *(_DWORD *)&v29[16 * v30 + 12] = -2147483616;
          }
          else
          {
            *(_DWORD *)&v29[16 * v30 + 12] = -2147483640;
          }
          v33 = 2LL * v30;
          v34 = (unsigned int)*(unsigned __int16 *)v11 + 2;
          *(_DWORD *)&v29[8 * v33 + 8] = v34;
          *(_QWORD *)&v29[8 * v33] = v31 - v24;
          memmove(v31, v11[1], v34);
          v35 = *(unsigned int *)&v29[16 * v30++ + 8];
          v31 += v35;
        }
        v11 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v19 && *((_WORD *)*v19 + 1) )
        {
          if ( j )
            *(_DWORD *)&v29[16 * v30 + 12] = -2147479552;
          else
            *(_DWORD *)&v29[16 * v30 + 12] = -2147483136;
          v37 = 2LL * v30;
          v38 = *((unsigned __int16 *)*v19 + 1);
          *(_QWORD *)&v29[8 * v37] = v31 - v24;
          v39 = 2 * v38 + 4;
          *(_DWORD *)&v29[8 * v37 + 8] = v39;
          memmove(v31, *v19, v39);
          v40 = *(unsigned int *)&v29[16 * v30++ + 8];
          v31 += v40;
        }
        ++v19;
      }
    }
    v26 = EtwpEnableGuid(a1, v24, 0LL);
    ExFreePoolWithTag(v24, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v26;
}
