/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0061678
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r9

  if ( *((_DWORD *)a3 + 12) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v8 = *(_QWORD *)a3;
      v9 = 16LL * a4;
      v10 = a5;
      do
      {
        v11 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v11 + v9) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v11 + v9) = v8;
        v9 += 16LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    v12 = *((_QWORD *)a3 + 3);
    if ( v12 )
    {
      if ( a4 < a4 + a5 )
      {
        v13 = *(_QWORD *)a3;
        v14 = 16LL * a4;
        v15 = a5;
        v16 = (__int64 *)(v12 + 8 * (a6 + 6));
        do
        {
          v17 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v17 + v14) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v17 + v14) = v13;
          v18 = *v16++;
          *(_QWORD *)(*((_QWORD *)this + 3) + v14 + 8) = v18;
          v14 += 16LL;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v19 = a6;
      if ( a4 < a4 + a5 )
      {
        v20 = *(_QWORD *)a3;
        v21 = 16LL * a4;
        v22 = a5;
        do
        {
          v23 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v23 + v21) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v23 + v21) = v20;
          *(_QWORD *)(*((_QWORD *)this + 3) + v21 + 8) = v19;
          if ( (*(_DWORD *)this & 0x40) != 0 )
            v19 += 16LL;
          else
            ++v19;
          v21 += 16LL;
          --v22;
        }
        while ( v22 );
      }
    }
  }
}
