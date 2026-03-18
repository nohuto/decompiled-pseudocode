/*
 * XREFs of HvRefreshHive @ 0x1405E6A0C
 * Callers:
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 */

__int64 __fastcall HvRefreshHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  int v8; // esi
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  unsigned int v18; // r8d
  __int64 *v19; // rax
  __int64 **v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 **v23; // r9
  __int64 v24; // rcx
  __int64 **v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 **v28; // r8
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  ULONG_PTR v34[44]; // [rsp+90h] [rbp-70h] BYREF

  v29 = -1;
  memset(v34, 0, sizeof(v34));
  if ( !*(_DWORD *)(BugCheckParameter2 + 4088) && !*(_DWORD *)(BugCheckParameter2 + 2960) )
  {
    v2 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
           &v29);
    if ( !v2 )
      return 3221225626LL;
    v4 = *(_DWORD *)(v2 + 16);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    v5 = *(_QWORD *)(BugCheckParameter2 + 2664);
    v33 = 0LL;
    v31 = v5;
    v6 = *(_DWORD *)(BugCheckParameter2 + 148);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *((_QWORD *)&v32 + 1) = 0LL;
        v7 = 1;
        *(_QWORD *)&v32 = *(_QWORD *)(BugCheckParameter2 + 2672);
      }
      else
      {
        v7 = 2;
        v32 = *(_OWORD *)(BugCheckParameter2 + 2696);
      }
    }
    else
    {
      v7 = 0;
      v32 = 0LL;
    }
    v8 = CmpInitializeHive(
           &BugCheckParameter2a,
           2u,
           *(_DWORD *)(BugCheckParameter2 + 144) & 0xFFFEFFFF,
           v7,
           0LL,
           (__int64)&v31,
           0LL,
           16777218,
           0LL,
           0LL,
           0LL,
           v34);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v9 = BugCheckParameter2a;
    v10 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2a + 64) + 36LL);
    if ( (_DWORD)v10 == *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2a + 8))(
              BugCheckParameter2a,
              v10,
              &v29);
      if ( v11 )
      {
        if ( HvpMarkCellDirty(v9, *(unsigned int *)(*(_QWORD *)(v9 + 64) + 36LL), 0) )
        {
          *(_WORD *)(v11 + 2) |= 0xCu;
          *(_DWORD *)(v11 + 16) = v4;
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v29);
          if ( (unsigned __int8)HvSyncHive(v9) )
          {
            CmpDestroySecurityCache(BugCheckParameter2);
            HvFreeHive(BugCheckParameter2, 1, v13);
            v14 = 20LL;
            v15 = (_OWORD *)BugCheckParameter2;
            v16 = (_OWORD *)v9;
            do
            {
              *v15 = *v16;
              v15[1] = v16[1];
              v15[2] = v16[2];
              v15[3] = v16[3];
              v15[4] = v16[4];
              v15[5] = v16[5];
              v15[6] = v16[6];
              v15 += 8;
              v17 = v16[7];
              v16 += 8;
              *(v15 - 1) = v17;
              --v14;
            }
            while ( v14 );
            *v15 = *v16;
            v15[1] = v16[1];
            v15[2] = v16[2];
            v15[3] = v16[3];
            v15[4] = v16[4];
            v15[5] = v16[5];
            *((_QWORD *)v15 + 12) = *((_QWORD *)v16 + 12);
            if ( *(_QWORD *)(v9 + 1408) == v9 + 1416 )
              *(_QWORD *)(BugCheckParameter2 + 1408) = BugCheckParameter2 + 1416;
            *(_DWORD *)(BugCheckParameter2 + 3040) = *(_DWORD *)(v9 + 3040);
            v18 = 0;
            *(_DWORD *)(BugCheckParameter2 + 3044) = *(_DWORD *)(v9 + 3044);
            *(_DWORD *)(BugCheckParameter2 + 3048) = *(_DWORD *)(v9 + 3048);
            *(_QWORD *)(BugCheckParameter2 + 3056) = *(_QWORD *)(v9 + 3056);
            v19 = (__int64 *)(BugCheckParameter2 + 3064);
            do
            {
              v20 = (__int64 **)((char *)v19 + v9 - BugCheckParameter2);
              *v19 = (__int64)v19;
              for ( v19[1] = (__int64)v19; ; v19[1] = (__int64)v21 )
              {
                v21 = *v20;
                if ( *v20 == (__int64 *)v20 )
                  break;
                v22 = *v21;
                if ( (__int64 **)v21[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
                  __fastfail(3u);
                *v20 = (__int64 *)v22;
                *(_QWORD *)(v22 + 8) = v20;
                v23 = (__int64 **)v19[1];
                *v21 = (__int64)v19;
                v21[1] = (__int64)v23;
                if ( *v23 != v19 )
                  __fastfail(3u);
                *v23 = v21;
              }
              ++v18;
              v19 += 2;
            }
            while ( v18 < 0x40 );
            v24 = BugCheckParameter2 + 2008;
            *(_QWORD *)(BugCheckParameter2 + 2016) = BugCheckParameter2 + 2008;
            *(_QWORD *)(BugCheckParameter2 + 2008) = BugCheckParameter2 + 2008;
            v25 = (__int64 **)(v9 + 2008);
            *(_QWORD *)(BugCheckParameter2 + 2648) = BugCheckParameter2 + 2640;
            *(_QWORD *)(BugCheckParameter2 + 2640) = BugCheckParameter2 + 2640;
            while ( *v25 != (__int64 *)v25 )
            {
              v26 = *v25;
              v27 = **v25;
              if ( (__int64 **)(*v25)[1] != v25 || *(__int64 **)(v27 + 8) != v26 )
                __fastfail(3u);
              *v25 = (__int64 *)v27;
              *(_QWORD *)(v27 + 8) = v25;
              v28 = *(__int64 ***)(BugCheckParameter2 + 2016);
              *v26 = v24;
              v26[1] = (__int64)v28;
              if ( *v28 != (__int64 *)v24 )
                __fastfail(3u);
              *v28 = v26;
              *(_QWORD *)(BugCheckParameter2 + 2016) = v26;
            }
            v8 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v29);
        }
        v8 = -1073741443;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    CmpDestroySecurityCache(v9);
    HvFreeHive(v9, 0, v12);
LABEL_43:
    CmpDereferenceHive(v9);
    return (unsigned int)v8;
  }
  return 3221225473LL;
}
