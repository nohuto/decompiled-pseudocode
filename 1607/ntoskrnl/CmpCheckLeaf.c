/*
 * XREFs of CmpCheckLeaf @ 0x14043EC90
 * Callers:
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, int a4)
{
  __int64 v4; // r13
  int v5; // ebx
  int v8; // esi
  bool v9; // cf
  unsigned int i; // r14d
  _WORD *v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // r9
  bool v26; // bl
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned __int64 v29; // r8
  _BYTE *v30; // rdi
  char v31; // al
  int j; // esi
  WCHAR v33; // ax
  __int64 v35; // r9
  int k; // ecx
  unsigned int v37; // eax
  int v38; // edx
  int m; // r10d
  unsigned __int64 v40; // rax
  unsigned __int16 v41; // ax
  _BYTE v42[8]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v43; // [rsp+38h] [rbp-60h] BYREF
  _BYTE *v44; // [rsp+40h] [rbp-58h]
  __int16 v45; // [rsp+A0h] [rbp+8h] BYREF
  int v46; // [rsp+A8h] [rbp+10h]
  int v47; // [rsp+B0h] [rbp+18h] BYREF
  int v48; // [rsp+B4h] [rbp+1Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a4;
  v46 = a2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v5 = 0;
  v48 = 0;
  v47 = -1;
  v8 = a2;
  if ( ((*a3 - 26220) & 0xFDFF) == 0 )
  {
    v9 = a3[1] != 0;
    for ( i = 0; ; v9 = i < (unsigned __int16)a3[1] )
    {
      if ( !v9 )
        return 0LL;
      v11 = &a3[4 * i];
      HvpGetCellContextReinitialize((__int64)v42);
      HvpGetBinContextInitialize(&v45);
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 1) == 0 )
      {
        if ( (v12 & 0x7FFFFFFF) >= *(_DWORD *)(632 * ((unsigned __int64)v12 >> 31) + BugCheckParameter2 + 1400) )
          goto LABEL_34;
        if ( (v12 & 7) != 0 )
          goto LABEL_34;
        v13 = v12 >> 31;
        if ( v12 + ((_DWORD)v13 << 31) >= *(_DWORD *)(632 * v13 + BugCheckParameter2 + 1400) )
          goto LABEL_34;
        v14 = ((unsigned __int64)v12 >> 12) & 0x1FF;
        v15 = *(_QWORD *)(*(_QWORD *)(632 * v13 + BugCheckParameter2 + 1408) + 8LL * ((v12 >> 21) & 0x3FF));
        v16 = (struct _EX_RUNDOWN_REF *)(v15 + 40 * v14);
        if ( !v16 || HvpMapEntryIsDiscardable(v15 + 40 * v14) )
          goto LABEL_34;
        v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v17,
                v42);
        if ( v18 )
        {
          v20 = (_DWORD *)(v18 - 4);
          if ( v18 != 4 )
          {
            BinAddress = HvpMapEntryGetBinAddress(v19, v16, &v45);
            v22 = (unsigned int)*v20;
            v23 = (_DWORD)v20 - BinAddress;
            v24 = -*v20;
            v26 = 0;
            if ( (int)v22 < 0 )
            {
              v22 = v24 - 8;
              if ( (unsigned int)v22 <= 0xFFFF8 )
              {
                v25 = *(unsigned int *)(BinAddress + 8);
                v22 = v25 - 32;
                if ( v24 <= (unsigned __int64)(v25 - 32) && v23 - *v20 <= (unsigned int)v25 && v23 >= 0x20 )
                  v26 = 1;
              }
            }
            if ( BinAddress )
              HvpMapEntryReleaseBinAddress(v22, v16, &v45);
            HvpReleaseHCell(BugCheckParameter2);
            if ( !v26 )
              goto LABEL_34;
          }
          v5 = 0;
        }
      }
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *((unsigned int *)v11 + 1),
              &v47);
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
          v30 = (_BYTE *)(v27 + 76);
          v43 = *(_WORD *)(v27 + 72);
          v31 = *(_BYTE *)(v27 + 2);
          v44 = v30;
          if ( *a3 == 26732 )
          {
            if ( (v31 & 0x20) != 0 )
            {
              for ( j = v29; j; --j )
              {
                LOBYTE(v33) = *v30;
                if ( *v30 >= 0x61u )
                {
                  if ( (unsigned __int8)v33 > 0x7Au )
                    v33 = RtlUpcaseUnicodeChar((unsigned __int8)v33);
                  else
                    v33 = (unsigned __int8)v33 - 32;
                }
                else
                {
                  v33 = (unsigned __int8)v33;
                }
                ++v30;
                v5 = v33 + 37 * v5;
              }
              v8 = v46;
            }
            else
            {
              v5 = CmpHashUnicodeComponent(&v43);
            }
          }
          else
          {
            v35 = 0LL;
            if ( (v31 & 0x20) != 0 )
            {
              for ( k = 0; ; k += 8 )
              {
                v37 = 4;
                if ( (unsigned __int16)v29 <= 4u )
                  v37 = v29;
                if ( (unsigned int)v35 >= v37 )
                  break;
                v38 = (unsigned __int8)v30[v35];
                v35 = (unsigned int)(v35 + 1);
                v5 += v38 << k;
              }
            }
            else
            {
              for ( m = 0; ; m += 8 )
              {
                v40 = 4LL;
                if ( (unsigned __int16)((unsigned __int16)v29 >> 1) <= 4u )
                  v40 = v29 >> 1;
                if ( (unsigned int)v35 >= v40 )
                  break;
                v41 = *(_WORD *)&v30[2 * v35];
                if ( v41 > 0xFFu )
                {
                  v5 = 0;
                  break;
                }
                v35 = (unsigned int)(v35 + 1);
                v5 += v41 << m;
              }
            }
          }
          if ( *((_DWORD *)v11 + 2) != v5 )
          {
            if ( (v8 & 0x20000) != 0
              || !CmpSelfHeal && (CmpBootType & 6) == 0
              || !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3) )
            {
              SetFailureLocation(v4, 0, 14, 4160, 2);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v47);
              return 4160LL;
            }
            *((_DWORD *)v11 + 2) = v5;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
            SetFailureLocation(v4, 1, 14, 4160, 1);
          }
        }
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v47);
LABEL_34:
      ++i;
      v5 = 0;
    }
  }
  return 0LL;
}
