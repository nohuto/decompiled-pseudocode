/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140108B4C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r13
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // r10
  unsigned int v12; // ebp
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  int v15; // r12d
  unsigned int v16; // r15d
  __int64 v17; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h]
  unsigned int v20; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0LL;
  v20 = 0;
  v8 = 0;
  v19 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_1402FF238 )
      {
        v15 = 16;
        v16 = v9;
      }
      else
      {
        v13 = 48 * result - 0x58000000000LL;
        v17 = v13;
        v14 = (unsigned __int8)MiLockPageInline(v13);
        v15 = (*(_DWORD *)(v13 + 16) >> 1) & 0xF;
        v16 = MI_GET_PAGING_FILE_OFFSET(v13 + 16);
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v14);
        v7 = v19;
        if ( !v19 )
        {
          result = (__int64)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v17 + 40)) >> 8) & 0x3FF);
          v7 = result;
          v19 = result;
        }
        v11 = a3;
        v5 = v20;
      }
      if ( v12 == v15 && v16 == v9 )
      {
        ++v8;
      }
      else
      {
        if ( v12 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v7 + 8LL * v12 + 5728), v11, v10 - v8, v5, v8);
        v5 = v16;
        v12 = v15;
        v20 = v16;
        v9 = v16;
        v8 = 1;
      }
      v11 = a3;
      ++v10;
      ++v6;
      ++v9;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v7 + 8LL * v12 + 5728), a3, v10 - v8, v5, v8);
  }
  return result;
}
