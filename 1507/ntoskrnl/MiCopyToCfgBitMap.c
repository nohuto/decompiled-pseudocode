/*
 * XREFs of MiCopyToCfgBitMap @ 0x1404B88E0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1404215A8 (MiPopulateCfgBitMap.c)
 * Callees:
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCfgEliminateZeroPages @ 0x140520CD0 (MiCfgEliminateZeroPages.c)
 *     MiCompressedRvaListFirst @ 0x140547800 (MiCompressedRvaListFirst.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        unsigned __int64 Src,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        unsigned int *a5,
        size_t Size,
        int a7)
{
  __int64 v7; // r14
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  char *PoolWithTag; // rdi
  ULONG_PTR v13; // r12
  size_t v14; // r13
  int v15; // ebx
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r15
  unsigned int v22; // ebx
  unsigned int v23; // r10d
  __int64 v24; // rcx
  unsigned __int8 *v25; // r9
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r8
  ULONG v29; // r8d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rcx
  unsigned int v32; // ebx
  unsigned int i; // eax
  __int64 v34; // r8
  unsigned int v35; // edx
  unsigned int v36; // edx
  void *v37; // rsp
  char v38; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v39; // [rsp+100h] [rbp+0h]
  unsigned int v40; // [rsp+104h] [rbp+4h]
  char *v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  size_t v44; // [rsp+120h] [rbp+20h]
  unsigned __int64 v45; // [rsp+128h] [rbp+28h]
  char *v46; // [rsp+130h] [rbp+30h]
  ULONG_PTR v47; // [rsp+138h] [rbp+38h]
  _RTL_BITMAP BitMapHeader; // [rsp+140h] [rbp+40h] BYREF
  __int64 v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]

  v7 = a4;
  v49 = a2;
  v45 = Src;
  v10 = 0;
  v39 = 0;
  v43 = v7;
  v42 = 0;
  v11 = 4096LL;
  v50 = 4096LL;
  if ( a3 > 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
    v41 = PoolWithTag;
    v46 = PoolWithTag;
    v10 = v39;
    if ( PoolWithTag )
    {
      v42 = 1;
      v11 = 4096LL;
      goto LABEL_5;
    }
    v11 = 256LL;
    v50 = 256LL;
    v37 = alloca(256LL);
    PoolWithTag = &v38;
  }
  else
  {
    PoolWithTag = (char *)qword_14034F718;
    if ( !a3 )
      PoolWithTag = (char *)qword_14034F720;
  }
  v46 = PoolWithTag;
  v41 = PoolWithTag;
LABEL_5:
  v13 = Src;
  v47 = Src;
  v14 = Size;
  v44 = (Size >> 12) + (((Size & 0xFFF) + 4095 + (Src & 0xFFF)) >> 12);
  v15 = 0;
  while ( v14 )
  {
    v16 = v11 - 1;
    if ( v11 - (((_DWORD)v11 - 1) & (unsigned int)v13) < v14 )
      v17 = v11 - (v13 & v16);
    else
      v17 = v14;
    v40 = v17;
    if ( a3 > 1 )
    {
      if ( a7 == 1 )
      {
        if ( v10 < *(_DWORD *)a3 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v10) - v43;
          v31 = (2 * ((v30 >> 4) & (~(v11 - 1) >> 4))) >> 3;
          if ( v31 >= v11 )
          {
            v43 += v30 & ~(v11 - 1);
            v13 += v31;
            v47 = v13;
            v14 -= v31;
          }
        }
        if ( v11 - (((_DWORD)v11 - 1) & (unsigned int)v13) < v14 )
          v32 = v11 - (v13 & v16);
        else
          v32 = v14;
        v40 = v32;
        memmove(PoolWithTag, (const void *)v13, v32);
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v32;
        for ( i = v39; i < *(_DWORD *)a3; i = ++v39 )
        {
          v34 = *(_QWORD *)(a3 + 8) + 16LL * i;
          v35 = *(_DWORD *)v34 - v43;
          if ( v35 >= v32 >> 1 << 7 )
            break;
          v36 = v35 >> 4;
          if ( (*(_BYTE *)(v34 + 8) & 1) != 0 )
          {
            _bittestandreset((signed __int32 *)PoolWithTag, 2 * v36 + 1);
            _bittestandset((signed __int32 *)PoolWithTag, 2 * v36);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v36, 2u);
          }
        }
        v43 += v32 >> 1 << 7;
      }
      else if ( !a7 )
      {
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v17;
        RtlClearAllBits(&BitMapHeader);
        v22 = v7 + (v17 >> 1 << 7);
        if ( !*a5 )
          *a5 = MiCompressedRvaListFirst(a3, a5 + 1);
        v23 = *a5;
        while ( v23 )
        {
          if ( v23 >= (unsigned int)v7 )
          {
            if ( v23 >= v22 )
              break;
            v29 = 1;
            if ( (v23 & 0xF) != 0 )
              v29 = 2;
            RtlSetBits(&BitMapHeader, 2 * ((v23 - (unsigned int)v7) >> 4), v29);
          }
          v23 = a5[1];
          v24 = a5[2];
          v25 = (unsigned __int8 *)(v24 + a3 + 4);
          v26 = *(_DWORD *)a3 - v24;
          if ( *(_DWORD *)a3 == (_DWORD)v24 )
          {
            v23 = 0;
          }
          else
          {
            do
            {
              if ( !v26 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a3, (ULONG_PTR)(a5 + 1), v23);
              v27 = *v25++;
              --v26;
              v28 = v27 >> 6;
              v23 += (v27 & 0x3F) * MiCfgCompressionTableScales[v28];
              PoolWithTag = v41;
            }
            while ( (_DWORD)v28 != 3 );
            a5[1] = v23;
            a5[2] = (_DWORD)v25 - a3 - 4;
          }
        }
        LODWORD(v7) = v22;
        *a5 = v23;
      }
    }
    v15 = MiSplitPrivatePage(v13, v49);
    if ( v15 < 0 )
      break;
    v18 = v40;
    v15 = MiCopyToUserVa(v13, v49, v41, v40);
    if ( v15 < 0 )
    {
      PoolWithTag = v41;
      break;
    }
    v10 = v39;
    if ( v39 )
      **(_DWORD **)(a3 + 16) = v39;
    v13 += v18;
    v47 = v13;
    v14 -= v18;
    PoolWithTag = v41;
    v11 = v50;
  }
  v19 = v44;
  v20 = v45;
  if ( v42 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( a3 )
  {
    if ( v15 < 0 )
    {
      if ( v13 == v20 || v15 == -1073741818 )
        return (unsigned int)v15;
      v19 = (v13 - (v20 & 0xFFFFFFFFFFFFF000uLL)) >> 12;
    }
    MiCfgEliminateZeroPages(
      &KeGetCurrentThread()->ApcState.Process[1].IdealNode[8],
      v20 & 0xFFFFFFFFFFFFF000uLL,
      v19 << 12);
  }
  return (unsigned int)v15;
}
