/*
 * XREFs of HvRefreshHive @ 0x140606018
 * Callers:
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 */

__int64 __fastcall HvRefreshHive(__int64 a1)
{
  __int64 v2; // rax
  int v4; // r14d
  int v5; // eax
  unsigned int v6; // r9d
  int v7; // esi
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  unsigned int v15; // r8d
  __int64 *v16; // rax
  __int64 **v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r9
  __int64 **v20; // r9
  __int64 v21; // rcx
  __int64 **v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 **v25; // r8
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  ULONG_PTR v31[44]; // [rsp+98h] [rbp-70h] BYREF

  v26 = 0xFFFFFFFFLL;
  memset(v31, 0, sizeof(v31));
  if ( !*(_DWORD *)(a1 + 4088) && !*(_DWORD *)(a1 + 2960) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
           a1,
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL),
           &v26);
    if ( !v2 )
      return 3221225626LL;
    v4 = *(_DWORD *)(v2 + 16);
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v26);
    v28 = *(_QWORD *)(a1 + 2664);
    v5 = *(_DWORD *)(a1 + 148);
    v30 = 0LL;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = 1;
        *((_QWORD *)&v29 + 1) = 0LL;
        *(_QWORD *)&v29 = *(_QWORD *)(a1 + 2672);
      }
      else
      {
        v6 = 2;
        v29 = *(_OWORD *)(a1 + 2696);
      }
    }
    else
    {
      v6 = 0;
      v29 = 0LL;
    }
    v7 = CmpInitializeHive(
           &BugCheckParameter2,
           2u,
           *(_DWORD *)(a1 + 144) & 0xFFFEFFFF,
           v6,
           0LL,
           (__int64)&v28,
           0LL,
           17367042,
           0LL,
           0LL,
           0LL,
           v31);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = BugCheckParameter2;
    v9 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    if ( (_DWORD)v9 == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) )
    {
      v10 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v9,
              &v26);
      if ( v10 )
      {
        if ( HvpMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(v8 + 64) + 36LL), 0) )
        {
          *(_WORD *)(v10 + 2) |= 0xCu;
          *(_DWORD *)(v10 + 16) = v4;
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v26);
          if ( (unsigned __int8)HvSyncHive(v8) )
          {
            CmpDestroySecurityCache(a1);
            HvFreeHive(a1, 1);
            v11 = 20LL;
            v12 = (_OWORD *)a1;
            v13 = (_OWORD *)v8;
            do
            {
              *v12 = *v13;
              v12[1] = v13[1];
              v12[2] = v13[2];
              v12[3] = v13[3];
              v12[4] = v13[4];
              v12[5] = v13[5];
              v12[6] = v13[6];
              v12 += 8;
              v14 = v13[7];
              v13 += 8;
              *(v12 - 1) = v14;
              --v11;
            }
            while ( v11 );
            *v12 = *v13;
            v12[1] = v13[1];
            v12[2] = v13[2];
            v12[3] = v13[3];
            v12[4] = v13[4];
            v12[5] = v13[5];
            *((_QWORD *)v12 + 12) = *((_QWORD *)v13 + 12);
            if ( *(_QWORD *)(v8 + 1408) == v8 + 1416 )
              *(_QWORD *)(a1 + 1408) = a1 + 1416;
            *(_DWORD *)(a1 + 3040) = *(_DWORD *)(v8 + 3040);
            *(_DWORD *)(a1 + 3044) = *(_DWORD *)(v8 + 3044);
            v15 = 0;
            *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v8 + 3048);
            *(_QWORD *)(a1 + 3056) = *(_QWORD *)(v8 + 3056);
            v16 = (__int64 *)(a1 + 3064);
            do
            {
              v17 = (__int64 **)((char *)v16 + v8 - a1);
              *v16 = (__int64)v16;
              for ( v16[1] = (__int64)v16; ; v16[1] = (__int64)v18 )
              {
                v18 = *v17;
                if ( *v17 == (__int64 *)v17 )
                  break;
                v19 = *v18;
                if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
                  __fastfail(3u);
                *v17 = (__int64 *)v19;
                *(_QWORD *)(v19 + 8) = v17;
                v20 = (__int64 **)v16[1];
                if ( *v20 != v16 )
                  __fastfail(3u);
                *v18 = (__int64)v16;
                v18[1] = (__int64)v20;
                *v20 = v18;
              }
              ++v15;
              v16 += 2;
            }
            while ( v15 < 0x40 );
            v21 = a1 + 2008;
            *(_QWORD *)(a1 + 2016) = a1 + 2008;
            *(_QWORD *)(a1 + 2008) = a1 + 2008;
            v22 = (__int64 **)(v8 + 2008);
            *(_QWORD *)(a1 + 2648) = a1 + 2640;
            *(_QWORD *)(a1 + 2640) = a1 + 2640;
            while ( *v22 != (__int64 *)v22 )
            {
              v23 = *v22;
              v24 = **v22;
              if ( (__int64 **)(*v22)[1] != v22 || *(__int64 **)(v24 + 8) != v23 )
                __fastfail(3u);
              *v22 = (__int64 *)v24;
              *(_QWORD *)(v24 + 8) = v22;
              v25 = *(__int64 ***)(a1 + 2016);
              if ( *v25 != (__int64 *)v21 )
                __fastfail(3u);
              *v23 = v21;
              v23[1] = (__int64)v25;
              *v25 = v23;
              *(_QWORD *)(a1 + 2016) = v23;
            }
            v7 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v26);
        }
        v7 = -1073741443;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    CmpDestroySecurityCache(v8);
    HvFreeHive(v8, 0);
LABEL_43:
    CmpDereferenceHive(v8);
    return (unsigned int)v7;
  }
  return 3221225473LL;
}
