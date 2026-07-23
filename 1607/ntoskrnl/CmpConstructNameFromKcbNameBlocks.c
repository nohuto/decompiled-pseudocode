/*
 * XREFs of CmpConstructNameFromKcbNameBlocks @ 0x1401B48A0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmpKeyFullNameLength @ 0x140092170 (CmpKeyFullNameLength.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v8; // r14
  unsigned __int16 v9; // di
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // di

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v5 = v4;
  if ( v4 <= 0xFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 16LL, 0x624E4D43u);
    v6 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5 + 16);
      *v8 = v5;
      v8[1] = v5;
      *((_QWORD *)v8 + 1) = v8 + 8;
      v9 = (unsigned __int16)v5 >> 1;
      while ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 178) & 4) != 0 && *(_QWORD *)(v3 + 64) )
        {
          v3 = *(_QWORD *)(v3 + 64);
        }
        else
        {
          v10 = *(_QWORD *)(v3 + 72);
          v11 = *(_WORD *)(v10 + 24);
          if ( (*(_DWORD *)v10 & 1) == 0 )
            v11 >>= 1;
          v12 = v9 - v11;
          if ( (*(_DWORD *)v10 & 1) != 0 )
            CmpCopyCompressedName(*((_QWORD *)v8 + 1) + 2LL * v12, 2 * (unsigned int)v11, v10 + 26);
          else
            memmove((void *)(*((_QWORD *)v8 + 1) + 2LL * v12), (const void *)(v10 + 26), 2LL * v11);
          v9 = v12 - 1;
          *(_WORD *)(*((_QWORD *)v8 + 1) + 2LL * v9) = 92;
          v3 = *(_QWORD *)(v3 + 64);
        }
      }
      *a2 = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
