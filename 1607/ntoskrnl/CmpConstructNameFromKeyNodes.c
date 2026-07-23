/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x14002D310
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmpKeyFullNameLength @ 0x140092170 (CmpKeyFullNameLength.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpPopulateKcbStack @ 0x14043EFE0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 KcbAtLayerHeight; // rbx
  int started; // r15d
  unsigned int v6; // eax
  __int64 v7; // rsi
  _WORD *PoolWithTag; // rax
  _WORD *v9; // r14
  unsigned __int16 v10; // si
  __int64 v11; // rcx
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // si
  __int16 v14; // r8
  __int64 i; // rdi
  __int64 v16; // rax
  __int16 v17; // r8
  const void *v18; // rdx
  __int64 v19; // rax
  _DWORD *v21; // rdx
  void *v22; // rcx
  _BYTE v23[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  CmpInitializeKcbStack(v23);
  v3 = *(unsigned __int16 *)(a1 + 2);
  v24 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
  started = CmpStartKcbStack(v23, *(unsigned __int16 *)(KcbAtLayerHeight + 58));
  if ( started >= 0 )
  {
    v6 = CmpKeyFullNameLength(KcbAtLayerHeight);
    v7 = v6;
    if ( v6 > 0xFFFF )
    {
      started = -1073741811;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 16LL, 0x624E4D43u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v7 + 16);
        *v9 = v7;
        v9[1] = v7;
        v10 = (unsigned __int16)v7 >> 1;
        started = 0;
        *((_QWORD *)v9 + 1) = v9 + 8;
        do
        {
          if ( (*(_BYTE *)(KcbAtLayerHeight + 178) & 4) != 0 && *(_QWORD *)(KcbAtLayerHeight + 64) )
          {
            KcbAtLayerHeight = *(_QWORD *)(KcbAtLayerHeight + 64);
          }
          else
          {
            v11 = *(_QWORD *)(KcbAtLayerHeight + 72);
            v12 = *(_WORD *)(v11 + 24);
            if ( (*(_DWORD *)v11 & 1) == 0 )
              v12 >>= 1;
            v13 = v10 - v12;
            CmpPopulateKcbStack(v23, KcbAtLayerHeight);
            v14 = *(_WORD *)(KcbAtLayerHeight + 58);
            for ( i = 0LL; v14 >= 0; v14 = v17 - 1 )
            {
              v16 = CmpGetKcbAtLayerHeight(v23, (unsigned __int16)v14);
              i = v16;
              if ( *(_QWORD *)(v16 + 192) )
                break;
              if ( *(_DWORD *)(v16 + 32) != -1 )
                break;
            }
            v18 = *(const void **)(i + 192);
            if ( (unsigned __int64)v18 >= 2 )
            {
              memmove((void *)(*((_QWORD *)v9 + 1) + 2LL * v13), v18, 2LL * v12);
            }
            else if ( v18 == (const void *)1 )
            {
              v21 = *(_DWORD **)(i + 72);
              v22 = (void *)(*((_QWORD *)v9 + 1) + 2LL * v13);
              if ( (*v21 & 1) != 0 )
                CmpCopyCompressedName(v22, 2 * (unsigned int)v12, (char *)v21 + 26);
              else
                memmove(v22, (char *)v21 + 26, 2LL * v12);
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(i + 24) + 8LL))(
                      *(_QWORD *)(i + 24),
                      *(unsigned int *)(i + 32),
                      &v24);
              if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
                CmpCopyCompressedName(*((_QWORD *)v9 + 1) + 2LL * v13, 2 * (unsigned int)v12, v19 + 76);
              else
                memmove((void *)(*((_QWORD *)v9 + 1) + 2LL * v13), (const void *)(v19 + 76), 2LL * v12);
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(i + 24) + 16LL))(*(_QWORD *)(i + 24), &v24);
            }
            v10 = v13 - 1;
            *(_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v10) = 92;
            KcbAtLayerHeight = *(_QWORD *)(KcbAtLayerHeight + 64);
          }
        }
        while ( KcbAtLayerHeight );
        *v25 = v9;
      }
      else
      {
        started = -1073741670;
      }
    }
  }
  CmpCleanupKcbStack(v23);
  return (unsigned int)started;
}
