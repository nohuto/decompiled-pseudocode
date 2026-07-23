/*
 * XREFs of MiCopyToCfgBitMap @ 0x14042E0B0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1404D7414 (MiPopulateCfgBitMap.c)
 * Callees:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCfgEliminateZeroPages @ 0x1404A2F40 (MiCfgEliminateZeroPages.c)
 *     MiQueryImageRvaList @ 0x1404BAE78 (MiQueryImageRvaList.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        char *Src,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        size_t Size,
        int a8)
{
  unsigned int v11; // esi
  __int64 v12; // r9
  char *PoolWithTag; // r10
  char *v14; // r13
  size_t v15; // r11
  unsigned __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // r15
  int v19; // edx
  int v20; // r8d
  size_t v21; // rdi
  unsigned __int64 v22; // rsi
  _DWORD *v24; // rdx
  int v25; // eax
  unsigned int v26; // r9d
  unsigned int *v27; // r11
  int v28; // eax
  unsigned __int8 *v29; // r10
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // r8
  ULONG v33; // r8d
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  unsigned int *v36; // rbx
  unsigned int i; // eax
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned int v40; // edx
  void *v41; // rsp
  char v42; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v43; // [rsp+100h] [rbp+0h]
  PVOID P; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  unsigned __int64 v47; // [rsp+120h] [rbp+20h]
  void *v48; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v49; // [rsp+130h] [rbp+30h]
  char *v50; // [rsp+138h] [rbp+38h]
  unsigned __int64 v51; // [rsp+140h] [rbp+40h]
  _RTL_BITMAP BitMapHeader; // [rsp+148h] [rbp+48h] BYREF
  __int64 v53; // [rsp+158h] [rbp+58h]
  _DWORD *v54; // [rsp+160h] [rbp+60h] BYREF

  v53 = a2;
  v51 = (unsigned __int64)Src;
  v43 = 0;
  v11 = a5;
  v46 = a5;
  v45 = 0;
  v12 = 4096LL;
  v47 = 4096LL;
  if ( a3 > 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
    P = PoolWithTag;
    v50 = PoolWithTag;
    if ( PoolWithTag )
    {
      v45 = 1;
      v12 = 4096LL;
      goto LABEL_5;
    }
    v12 = 256LL;
    v47 = 256LL;
    v41 = alloca(256LL);
    PoolWithTag = &v42;
  }
  else
  {
    PoolWithTag = (char *)qword_1403276E8;
    if ( !a3 )
      PoolWithTag = (char *)qword_1403276F0;
  }
  v50 = PoolWithTag;
  P = PoolWithTag;
LABEL_5:
  v14 = Src;
  v48 = Src;
  v15 = Size;
  v16 = (Size >> 12) + ((unsigned __int64)(((unsigned __int16)Src & 0xFFF) + (unsigned int)(Size & 0xFFF) + 4095) >> 12);
  v49 = v16;
  v17 = 0;
  v18 = a6;
  while ( v15 )
  {
    v19 = v12 - 1;
    v20 = v12 - 1;
    if ( v12 - (unsigned __int64)(((_DWORD)v12 - 1) & (unsigned int)v14) >= v15 )
      v21 = (unsigned int)v15;
    else
      v21 = (unsigned int)v12 - ((unsigned int)v14 & v19);
    if ( a3 > 1 )
    {
      if ( a8 == 1 )
      {
        if ( v43 < *(_DWORD *)a3 )
        {
          v34 = ~(v12 - 1);
          v35 = (2 * (((unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v43) - v46) >> 4) & (v34 >> 4))) >> 3;
          if ( v35 >= v47 )
          {
            v46 += (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v43) - v46) & v34;
            v14 += v35;
            v48 = v14;
            v15 -= v35;
            Size = v15;
          }
          v12 = v47;
        }
        if ( v12 - (unsigned __int64)(v20 & (unsigned int)v14) < v15 )
          v21 = (unsigned int)v12 - ((unsigned int)v14 & v19);
        else
          v21 = (unsigned int)v15;
        v36 = (unsigned int *)P;
        memmove(P, v14, (unsigned int)v21);
        BitMapHeader.Buffer = v36;
        BitMapHeader.SizeOfBitMap = 8 * v21;
        for ( i = v43; i < *(_DWORD *)a3; i = ++v43 )
        {
          v38 = *(_QWORD *)(a3 + 8) + 16LL * i;
          v39 = *(_DWORD *)v38 - v46;
          if ( v39 >= (unsigned int)v21 >> 1 << 7 )
            break;
          v40 = v39 >> 4;
          if ( (*(_BYTE *)(v38 + 8) & 1) != 0 )
          {
            _bittestandreset((signed __int32 *)v36, 2 * v40 + 1);
            _bittestandset((signed __int32 *)v36, 2 * v40);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v40, 2u);
          }
        }
        v46 += (unsigned int)v21 >> 1 << 7;
      }
      else if ( !a8 )
      {
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v21;
        RtlClearAllBits(&BitMapHeader);
        if ( !*(_DWORD *)v18 )
        {
          MiQueryImageRvaList(a3, a4, &v48, &v54);
          v24 = v54;
          v25 = *v54;
          *(_DWORD *)(v18 + 8) = *v54;
          *(_DWORD *)(v18 + 12) = 4;
          *(_QWORD *)(v18 + 16) = v24;
          *(_DWORD *)v18 = v25;
        }
        v26 = *(_DWORD *)v18;
        while ( v26 )
        {
          if ( v26 >= v11 )
          {
            if ( v26 >= v11 + ((unsigned int)v21 >> 1 << 7) )
              break;
            v33 = 1;
            if ( (v26 & 0xF) != 0 )
              v33 = 2;
            RtlSetBits(&BitMapHeader, 2 * ((v26 - v11) >> 4), v33);
          }
          v27 = (unsigned int *)(v18 + 8);
          if ( a4 )
            v28 = 0;
          else
            v28 = *(_DWORD *)a3;
          v26 = *v27;
          v29 = (unsigned __int8 *)(*(_QWORD *)(v18 + 16) + *(unsigned int *)(v18 + 12));
          v30 = v28 - *(_DWORD *)(v18 + 12);
          if ( v30 )
          {
            do
            {
              if ( !v30 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a3, (ULONG_PTR)v27, v26);
              v31 = *v29++;
              --v30;
              v32 = v31 >> 6;
              v26 += (v31 & 0x3F) * MiCfgCompressionTableScales[v32];
              v18 = a6;
            }
            while ( (_DWORD)v32 != 3 );
            *v27 = v26;
            v27[1] = (_DWORD)v29 - v27[2];
          }
          else
          {
            v26 = 0;
          }
        }
        v11 += (unsigned int)v21 >> 1 << 7;
        *(_DWORD *)v18 = v26;
      }
    }
    v17 = MiSplitPrivatePage((ULONG_PTR)v14, v53);
    if ( v17 < 0 || (v17 = MiCopyToUserVa((ULONG_PTR)v14, v53, P, v21), v17 < 0) )
    {
      v16 = v49;
      break;
    }
    if ( v43 )
      **(_DWORD **)(a3 + 16) = v43;
    v14 += v21;
    v48 = v14;
    v15 = Size - v21;
    Size -= v21;
    v12 = v47;
    PoolWithTag = (char *)P;
    v16 = v49;
  }
  v22 = v51;
  if ( v45 )
    ExFreePoolWithTag(P, 0);
  if ( a3 )
  {
    if ( v17 >= 0 )
    {
LABEL_20:
      MiCfgEliminateZeroPages(
        &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
        v22 & 0xFFFFFFFFFFFFF000uLL,
        v16 << 12);
      return (unsigned int)v17;
    }
    if ( v14 != (char *)v22 && v17 != -1073741818 )
    {
      v16 = (unsigned __int64)&v14[-(v22 & 0xFFFFFFFFFFFFF000uLL)] >> 12;
      goto LABEL_20;
    }
  }
  return (unsigned int)v17;
}
