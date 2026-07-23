/*
 * XREFs of IovAllocateMdl @ 0x1407007B0
 * Callers:
 *     <none>
 * Callees:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall IovAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 v9; // rsi
  __int64 PoolWithTagPriority; // rax
  __int64 v11; // rdx
  __int64 *i; // rax

  v6 = a2;
  v9 = a1 & 0xFFF;
  PoolWithTagPriority = VeAllocatePoolWithTagPriority(
                          (POOL_TYPE)640,
                          8 * (unsigned int)((v9 + (unsigned __int64)a2 + 4095) >> 12) + 48,
                          0x6C644D56u,
                          HighPoolPriority,
                          a6);
  v11 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    *(_QWORD *)PoolWithTagPriority = 0LL;
    *(_WORD *)(PoolWithTagPriority + 10) = 0;
    *(_DWORD *)(PoolWithTagPriority + 40) = v6;
    *(_WORD *)(PoolWithTagPriority + 8) = 8 * (((unsigned __int64)(v9 + v6 + 4095) >> 12) + 6);
    *(_QWORD *)(PoolWithTagPriority + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(PoolWithTagPriority + 44) = a1 & 0xFFF;
    if ( a5 )
    {
      if ( a3 )
      {
        for ( i = *(__int64 **)(a5 + 8); *i; i = (__int64 *)*i )
          ;
        *i = v11;
      }
      else
      {
        *(_QWORD *)(a5 + 8) = PoolWithTagPriority;
      }
    }
  }
  return v11;
}
