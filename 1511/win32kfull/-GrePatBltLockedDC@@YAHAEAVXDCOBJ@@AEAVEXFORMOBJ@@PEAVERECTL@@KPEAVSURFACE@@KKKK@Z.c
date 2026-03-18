/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00405AC
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        __int64 this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // edi
  XDCOBJ *v11; // r10
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rcx
  ULONG v16; // ecx
  int *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // r8d
  int v24; // r9d
  unsigned __int64 v25; // rdx
  int v26; // ecx
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  struct REGION *v29; // rax
  __int64 v30; // r13
  int v31; // eax
  int v32; // ebx
  int v33; // edi
  int v34; // esi
  int v35; // ebp
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v40; // [rsp+20h] [rbp-88h]
  struct _RECTL v41; // [rsp+60h] [rbp-48h] BYREF
  struct XDCOBJ *v42; // [rsp+B0h] [rbp+8h]
  _DWORD *v43; // [rsp+B8h] [rbp+10h]

  v42 = (struct XDCOBJ *)this;
  v9 = a4;
  v43 = 0LL;
  v11 = (XDCOBJ *)this;
  v12 = 1;
  if ( (*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 27) )
  {
    this = 512LL;
    if ( (*((_WORD *)a5 + 51) & 0x200) != 0 )
      goto LABEL_45;
  }
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 73));
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_10;
    v14 = UserScreenAccessCheck(this, a2);
  }
  if ( !v14 )
  {
LABEL_45:
    v16 = 5;
    goto LABEL_46;
  }
  v11 = v42;
LABEL_10:
  v15 = *(_DWORD **)v11;
  if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0x10000) == 0 )
  {
    if ( (v15[10] & 1) != 0 )
      v17 = v15 + 354;
    else
      v17 = v15 + 352;
    v18 = *v17;
    v19 = *(int *)a3;
    if ( (unsigned __int64)(v18 + v19 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v20 = *((int *)a3 + 2);
      if ( (unsigned __int64)(v18 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v21 = v17[1];
        v22 = *((int *)a3 + 1);
        if ( (unsigned __int64)(v21 + v22 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v21 + *((int *)a3 + 3) + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v23 = v19 + v18;
          *(_DWORD *)a3 = v23;
          v24 = v20 + *v17;
          *((_DWORD *)a3 + 2) = v24;
          v25 = (unsigned int)(v22 + v17[1]);
          *((_DWORD *)a3 + 1) = v25;
          *((_DWORD *)a3 + 3) += v17[1];
          v26 = *((_DWORD *)a3 + 3);
          if ( v23 < v24 && (int)v25 < v26 )
          {
            v27 = *(_DWORD **)v11;
            if ( v23 >= *(_DWORD *)(*(_QWORD *)v11 + 1392LL)
              && v24 <= v27[350]
              && (int)v25 >= v27[349]
              && v26 <= v27[351] )
            {
              goto LABEL_27;
            }
            v28 = v27 + 540;
            v43 = v27 + 540;
            v29 = XDCOBJ::prgnEffRao(v11);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v29, a3, 2);
            *(_OWORD *)a3 = *(_OWORD *)(v28 + 1);
            if ( !(unsigned int)ERECTL::bEmpty(a3) )
            {
              v11 = v42;
LABEL_27:
              if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
              {
                v25 = *(_QWORD *)(*(_QWORD *)v11 + 80LL);
                v30 = *(_QWORD *)v11 + 1560LL;
                if ( (*(_DWORD *)(v25 + 8) & 1) != 0
                  || (*(_DWORD *)(*(_QWORD *)v11 + 332LL) & 1) != 0
                  || (v31 = *(_DWORD *)(*(_QWORD *)v11 + 1688LL), (v31 & 1) != 0)
                  && *(_DWORD *)(*(_QWORD *)v11 + 1608LL) != a6
                  || (v31 & 2) != 0 && *(_DWORD *)(*(_QWORD *)v11 + 1612LL) != a7 )
                {
                  v32 = *(_DWORD *)(v25 + 40);
                  v33 = *(_DWORD *)(v25 + 32);
                  v34 = *(_DWORD *)(v25 + 44);
                  v35 = *(_DWORD *)(v25 + 36);
                  *(_DWORD *)(v25 + 8) &= ~1u;
                  *(_DWORD *)(*(_QWORD *)v11 + 332LL) &= ~1u;
                  v40 = *((_QWORD *)a5 + 15);
                  v36 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 40LL) = a6;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 32LL) = a7;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 44LL) = a8;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 80LL) + 36LL) = a9;
                  EBRUSHOBJ::vInitBrush(v30, *(_QWORD *)v11, *(_QWORD *)(*(_QWORD *)v11 + 144LL), v36, v40, a5, 1);
                  v11 = v42;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 80LL) + 40LL) = v32;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 80LL) + 32LL) = v33;
                  v9 = a4;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 80LL) + 44LL) = v34;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 80LL) + 36LL) = v35;
                }
              }
              else
              {
                v30 = 0LL;
              }
              if ( (*(_DWORD *)(*(_QWORD *)v11 + 36LL) & 0xE0) != 0 && (!v30 || (*(_DWORD *)(v30 + 128) & 0x100) == 0) )
              {
                v41 = *(struct _RECTL *)a3;
                XDCOBJ::vAccumulateTight(v11, (struct ECLIPOBJ *)v25, &v41);
                v11 = v42;
              }
              ++*((_DWORD *)a5 + 23);
              v37 = *(_QWORD *)v11 + 1552LL;
              if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2864LL))(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v43,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v30,
                                       v37,
                                       v9);
              else
                return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v43,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       v30,
                                       v37,
                                       v9);
            }
          }
        }
      }
    }
    return v12;
  }
  v16 = 87;
LABEL_46:
  EngSetLastError(v16);
  return 0LL;
}
