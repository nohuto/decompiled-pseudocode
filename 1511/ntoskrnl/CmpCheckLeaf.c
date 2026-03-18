/*
 * XREFs of CmpCheckLeaf @ 0x1403F9670
 * Callers:
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, int a4)
{
  __int64 v4; // r12
  __int16 v6; // ax
  int v7; // ebx
  bool v9; // cf
  unsigned int i; // r14d
  char v11; // si
  _WORD *v12; // r13
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdi
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned __int64 v29; // r8
  unsigned __int8 *v30; // rdi
  char v31; // al
  __int64 v32; // rsi
  unsigned __int8 v33; // al
  int v34; // ecx
  __int64 v36; // r9
  int j; // ecx
  unsigned int v38; // eax
  int v39; // edx
  int k; // r10d
  unsigned __int64 v41; // rax
  unsigned __int16 v42; // ax
  int v43; // [rsp+30h] [rbp-68h] BYREF
  int v44; // [rsp+34h] [rbp-64h] BYREF
  unsigned __int16 v45; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int8 *v46; // [rsp+40h] [rbp-58h]
  BOOLEAN v47; // [rsp+A0h] [rbp+8h] BYREF
  int v48; // [rsp+A8h] [rbp+10h]
  int v49; // [rsp+B0h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a4;
  v48 = a2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = *a3 - 26220;
  v49 = -1;
  v7 = 0;
  if ( (v6 & 0xFDFF) == 0 )
  {
    v9 = a3[1] != 0;
    for ( i = 0; ; v9 = i < (unsigned __int16)a3[1] )
    {
      if ( !v9 )
        return 0LL;
      v11 = 1;
      v12 = &a3[4 * i];
      v43 = -1;
      v13 = *((unsigned int *)v12 + 1);
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) == 0 )
      {
        if ( ((unsigned int)v13 & 0x7FFFFFFF) >= *(_DWORD *)(632 * ((unsigned __int64)(unsigned int)v13 >> 31)
                                                           + BugCheckParameter2
                                                           + 1400) )
          goto LABEL_32;
        if ( (v13 & 7) != 0 )
          goto LABEL_32;
        v14 = (unsigned int)v13 >> 31;
        if ( (unsigned int)(v13 + ((_DWORD)v14 << 31)) >= *(_DWORD *)(632 * v14 + BugCheckParameter2 + 1400) )
          goto LABEL_32;
        v15 = ((unsigned __int64)(unsigned int)v13 >> 12) & 0x1FF;
        v16 = *(_QWORD *)(*(_QWORD *)(632 * v14 + BugCheckParameter2 + 1408) + 8LL * (((unsigned int)v13 >> 21) & 0x3FF));
        v17 = (struct _EX_RUNDOWN_REF *)(v16 + 40 * v15);
        if ( !v17 || HvpMapEntryIsDiscardable(v16 + 40 * v15) )
          goto LABEL_32;
        v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v18,
                &v43);
        if ( v19 )
        {
          v21 = (_DWORD *)(v19 - 4);
          if ( v19 != 4 )
          {
            BinAddress = HvpMapEntryGetBinAddress(v20, v17, &v47, &v44);
            v23 = (unsigned int)*v21;
            v24 = (_DWORD)v21 - BinAddress;
            v25 = -*v21;
            if ( (int)v23 >= 0
              || (v23 = v25 - 8, (unsigned int)v23 > 0xFFFF8)
              || (v26 = *(unsigned int *)(BinAddress + 8), v23 = v26 - 32, v25 > (unsigned __int64)(v26 - 32))
              || v24 - *v21 > (unsigned int)v26
              || v24 < 0x20 )
            {
              v11 = 0;
            }
            if ( v47 )
              HvpMapEntryReleaseBlockAddress(v23, v17);
            HvpReleaseHCell(BugCheckParameter2);
            if ( !v11 )
              goto LABEL_32;
          }
          v7 = 0;
        }
      }
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *((unsigned int *)v12 + 1),
              &v49,
              v13);
      if ( !v27 )
      {
        SetFailureLocation(v4, 0, 14, 4160, 3);
        return 4160LL;
      }
      v28 = -4 - *(_DWORD *)(v27 - 4);
      if ( v28 >= 0x4C )
      {
        v29 = *(unsigned __int16 *)(v27 + 72);
        if ( (unsigned int)v29 <= v28 - 76 )
        {
          v30 = (unsigned __int8 *)(v27 + 76);
          v45 = *(_WORD *)(v27 + 72);
          v31 = *(_BYTE *)(v27 + 2);
          v46 = v30;
          if ( *a3 == 26732 )
          {
            if ( (v31 & 0x20) != 0 )
            {
              if ( (_DWORD)v29 )
              {
                v32 = (unsigned int)v29;
                do
                {
                  v33 = *v30;
                  v34 = *v30;
                  if ( *v30 >= 0x61u )
                  {
                    if ( v33 > 0x7Au )
                      v34 = RtlUpcaseUnicodeChar(v34);
                    else
                      v34 = v33 - 32;
                  }
                  ++v30;
                  v7 = v34 + 37 * v7;
                  --v32;
                }
                while ( v32 );
              }
            }
            else
            {
              v7 = CmpComputeHashKey(0, &v45);
            }
          }
          else
          {
            v36 = 0LL;
            if ( (v31 & 0x20) != 0 )
            {
              for ( j = 0; ; j += 8 )
              {
                v38 = 4;
                if ( (unsigned __int16)v29 <= 4u )
                  v38 = v29;
                if ( (unsigned int)v36 >= v38 )
                  break;
                v39 = v30[v36];
                v36 = (unsigned int)(v36 + 1);
                v7 += v39 << j;
              }
            }
            else
            {
              for ( k = 0; ; k += 8 )
              {
                v41 = 4LL;
                if ( (unsigned __int16)((unsigned __int16)v29 >> 1) <= 4u )
                  v41 = v29 >> 1;
                if ( (unsigned int)v36 >= v41 )
                  break;
                v42 = *(_WORD *)&v30[2 * v36];
                if ( v42 > 0xFFu )
                {
                  v7 = 0;
                  break;
                }
                v36 = (unsigned int)(v36 + 1);
                v7 += v42 << k;
              }
            }
          }
          if ( *((_DWORD *)v12 + 2) != v7 )
          {
            if ( (v48 & 0x20000) != 0
              || !CmpSelfHeal && (CmpBootType & 6) == 0
              || !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
            {
              SetFailureLocation(v4, 0, 14, 4160, 2);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v49);
              return 4160LL;
            }
            *((_DWORD *)v12 + 2) = v7;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
            SetFailureLocation(v4, 1, 14, 4160, 1);
          }
        }
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v49);
LABEL_32:
      ++i;
      v7 = 0;
    }
  }
  return 0LL;
}
