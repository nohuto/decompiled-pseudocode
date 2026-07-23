/*
 * XREFs of AlpcpAllocateFromBitmap @ 0x1404A5A10
 * Callers:
 *     AlpcpAllocateCompletionBuffer @ 0x1404A5920 (AlpcpAllocateCompletionBuffer.c)
 * Callees:
 *     AlpcpFreeBitmap @ 0x14052A968 (AlpcpFreeBitmap.c)
 */

__int64 __fastcall AlpcpAllocateFromBitmap(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned int *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v12; // rdx
  signed __int32 *v13; // r11
  int v14; // eax
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned int v17; // ebx
  int v18; // edi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned int v23; // r10d

  v4 = 0;
  v5 = 0xFFFFFFFFLL;
  v7 = (unsigned int *)a1;
  if ( (unsigned int *)a1 == a2 )
    return 0xFFFFFFFFLL;
  v8 = -a1;
LABEL_3:
  v9 = *v7;
  v10 = 0;
  while ( (v9 & 1) != 0 )
  {
    v5 = 0xFFFFFFFFLL;
    v4 = 0;
LABEL_8:
    v9 >>= 1;
    if ( (unsigned int)++v10 >= 0x20 )
    {
      if ( ++v7 != a2 )
        goto LABEL_3;
      return 0xFFFFFFFFLL;
    }
  }
  if ( (_DWORD)v5 == -1 )
    v5 = v10 + 32 * (unsigned int)(((__int64)v7 + v8) >> 2);
  if ( ++v4 != a3 )
    goto LABEL_8;
  v12 = 1LL;
  v13 = (signed __int32 *)(a1 + 4 * ((unsigned __int64)(unsigned int)v5 >> 5));
  v14 = v5 & 0x1F;
  if ( (v5 & 0x1F) == 0 )
    goto LABEL_12;
  v17 = 32 - v14;
  if ( v4 < 32 - v14 )
    v17 = v4;
  v18 = ((1 << v17) - 1) << v14;
  _m_prefetchw(v13);
  v19 = *v13;
  if ( (*v13 & v18) == 0 )
  {
    while ( 1 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange(v13, v18 | v19, v19);
      if ( v20 == v19 )
        break;
      if ( (v19 & v18) != 0 )
        return 4294967294LL;
    }
    v4 -= v17;
    ++v13;
LABEL_12:
    if ( v4 >= 0x20 )
    {
      while ( 1 )
      {
        _m_prefetchw(v13);
        v21 = *v13;
        if ( *v13 )
          break;
        while ( 1 )
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(v13, -1, v21);
          if ( v22 == v21 )
            break;
          if ( v21 )
            goto LABEL_30;
        }
        v4 -= 32;
        ++v13;
        if ( v4 < 0x20 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( !v4 )
        return (unsigned int)v5;
      v12 = (unsigned int)((1 << v4) - 1);
      _m_prefetchw(v13);
      v15 = *v13;
      while ( (v15 & (unsigned int)v12) == 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v13, v12 | v15, v15);
        if ( v16 == v15 )
          return (unsigned int)v5;
      }
    }
LABEL_30:
    v23 = a3 - v4;
    if ( v23 )
      AlpcpFreeBitmap(a1, v12, v5, v23);
  }
  return 4294967294LL;
}
