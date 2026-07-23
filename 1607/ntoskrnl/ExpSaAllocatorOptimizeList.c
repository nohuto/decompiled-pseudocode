/*
 * XREFs of ExpSaAllocatorOptimizeList @ 0x1401353D0
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140133BCC (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14013522C (ExpSaAllocatorFree.c)
 * Callees:
 *     ExpSaPageGroupDescriptorFree @ 0x140135454 (ExpSaPageGroupDescriptorFree.c)
 */

void __fastcall ExpSaAllocatorOptimizeList(__int64 a1)
{
  int v1; // ebx
  __int64 *v3; // rsi
  __int64 *v4; // rcx
  __int64 *v5; // rbp
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rdx
  __int64 **v9; // rax
  __int64 **v10; // rdx

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 2) != 0 )
  {
    v3 = (__int64 *)(a1 + 8);
    v4 = *(__int64 **)(a1 + 8);
    if ( v4 != v3 )
    {
      do
      {
        v5 = (__int64 *)*v4;
        if ( *((_DWORD *)v4 + 9) == 512 )
        {
          v6 = (__int64 *)*v4;
          v7 = (__int64 **)v4[1];
          if ( *(__int64 **)(*v4 + 8) != v4 || *v7 != v4 )
            __fastfail(3u);
          *v7 = v6;
          v6[1] = (__int64)v7;
          ExpSaPageGroupDescriptorFree();
        }
        else if ( !*((_DWORD *)v4 + 9) )
        {
          v8 = *v4;
          v9 = (__int64 **)v4[1];
          *((_DWORD *)v4 + 10) = 1;
          if ( *(__int64 **)(v8 + 8) != v4 || *v9 != v4 )
            __fastfail(3u);
          *v9 = (__int64 *)v8;
          *(_QWORD *)(v8 + 8) = v9;
          v10 = *(__int64 ***)(a1 + 32);
          if ( *v10 != (__int64 *)(a1 + 24) )
            __fastfail(3u);
          *v4 = a1 + 24;
          v4[1] = (__int64)v10;
          *v10 = v4;
          *(_QWORD *)(a1 + 32) = v4;
        }
        v4 = v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(a1 + 64) = v1 & 0xFFFFFFFD;
  }
}
