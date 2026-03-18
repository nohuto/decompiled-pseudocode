/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C003D990
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
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
  __int64 v6; // r10
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8

  v6 = a4;
  if ( *((_DWORD *)a3 + 11) == -2 )
  {
    if ( (unsigned int)v6 < (unsigned int)v6 + a5 )
    {
      v22 = *(_QWORD *)a3;
      v23 = 16 * v6;
      v24 = a5;
      do
      {
        v25 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v25 + v23) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v25 + v23) = v22;
        v23 += 16LL;
        --v24;
      }
      while ( v24 );
    }
  }
  else
  {
    v8 = *((_QWORD *)a3 + 3);
    v9 = v6 + a5;
    if ( v8 )
    {
      if ( (unsigned int)v6 < v9 )
      {
        v16 = *(_QWORD *)a3;
        v17 = 16 * v6;
        v18 = a5;
        v19 = (__int64 *)(v8 + 48 + 8 * a6);
        do
        {
          v20 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v20 + v17) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v20 + v17) = v16;
          v21 = *v19++;
          *(_QWORD *)(*((_QWORD *)this + 3) + v17 + 8) = v21;
          v17 += 16LL;
          --v18;
        }
        while ( v18 );
      }
    }
    else
    {
      v10 = a6;
      if ( (unsigned int)v6 < v9 )
      {
        v11 = *(_QWORD *)a3;
        v12 = 16LL * (unsigned int)v6;
        v13 = a5;
        do
        {
          v14 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v14 + v12) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v14 + v12) = v11;
          v15 = v10 + 16;
          *(_QWORD *)(*((_QWORD *)this + 3) + v12 + 8) = v10++;
          if ( (*(_DWORD *)this & 0x40) != 0 )
            v10 = v15;
          v12 += 16LL;
          --v13;
        }
        while ( v13 );
      }
    }
  }
}
