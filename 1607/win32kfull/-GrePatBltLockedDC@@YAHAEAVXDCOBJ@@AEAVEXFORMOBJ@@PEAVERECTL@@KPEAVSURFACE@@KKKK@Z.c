/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0035130
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00354B8 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        struct _POINTL **this,
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
  unsigned int v12; // r12d
  int v13; // r8d
  struct _POINTL *v14; // rcx
  struct _POINTL *v15; // rdx
  struct ECLIPOBJ *v16; // rdx
  LONG v17; // r8d
  LONG v18; // r9d
  struct _POINTL *v19; // rax
  __int64 v20; // r10
  int v21; // ebx
  int v22; // edi
  int v23; // esi
  int v24; // ebp
  struct _POINTL v25; // r9
  __int64 v26; // rcx
  struct _POINTL *v29; // rbx
  struct REGION *v30; // rax
  LONG x; // eax
  ULONG v32; // ecx
  __int64 v33; // [rsp+20h] [rbp-98h]
  struct _POINTL *v34; // [rsp+60h] [rbp-58h]
  __int128 v35[5]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+10h]

  v9 = a4;
  v34 = 0LL;
  v12 = 1;
  if ( ((*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28)) && (*((_WORD *)a5 + 51) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck(a5) )
  {
    v32 = 5;
LABEL_38:
    EngSetLastError(v32);
    return 0LL;
  }
  v14 = *this;
  if ( ((*this)[4].y & 0x10000) != 0 )
  {
    v32 = 87;
    goto LABEL_38;
  }
  v15 = v14 + 177;
  if ( (v14[5].x & 1) == 0 )
    v15 = v14 + 176;
  if ( (unsigned int)ERECTL::bOffsetAdd(a3, v15, v13) )
  {
    v16 = (struct ECLIPOBJ *)*((unsigned int *)a3 + 2);
    if ( *(_DWORD *)a3 < (int)v16 )
    {
      v17 = *((_DWORD *)a3 + 1);
      v18 = *((_DWORD *)a3 + 3);
      if ( v17 < v18 )
      {
        if ( (v19 = *this, *(_DWORD *)a3 >= (*this)[174].x)
          && (int)v16 <= v19[175].x
          && v17 >= v19[174].y
          && v18 <= v19[175].y
          || (v29 = v19 + 273,
              v34 = v19 + 273,
              v30 = XDCOBJ::prgnEffRao((XDCOBJ *)this),
              XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v30, a3, 2),
              *(_OWORD *)a3 = *(_OWORD *)&v29->y,
              !(unsigned int)ERECTL::bEmpty(a3)) )
        {
          if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
          {
            v16 = (struct ECLIPOBJ *)(*this)[10];
            v20 = (__int64)&(*this)[198];
            v36 = v20;
            if ( (*((_DWORD *)v16 + 2) & 1) != 0
              || ((*this)[41].y & 1) != 0
              || (x = (*this)[214].x, (x & 1) != 0) && (*this)[204].x != a6
              || (x & 2) != 0 && (*this)[204].y != a7 )
            {
              v21 = *((_DWORD *)v16 + 10);
              v22 = *((_DWORD *)v16 + 8);
              v23 = *((_DWORD *)v16 + 11);
              v24 = *((_DWORD *)v16 + 9);
              *((_DWORD *)v16 + 2) &= ~1u;
              (*this)[41].y &= ~1u;
              v33 = *((_QWORD *)a5 + 15);
              v25 = (*this)[12];
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 40LL) = a6;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 32LL) = a7;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 44LL) = a8;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 36LL) = a9;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v20,
                *this,
                *(_QWORD *)&(*this)[18],
                v25,
                v33,
                a5,
                1);
              v20 = v36;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 40LL) = v21;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 32LL) = v22;
              v9 = a4;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 44LL) = v23;
              *(_DWORD *)(*(_QWORD *)&(*this)[10] + 36LL) = v24;
            }
          }
          else
          {
            v20 = 0LL;
            v36 = 0LL;
          }
          if ( ((*this)[4].y & 0xE0) != 0 && (!v20 || (*(_DWORD *)(v20 + 128) & 0x100) == 0) )
          {
            v35[0] = *(_OWORD *)a3;
            XDCOBJ::vAccumulateTight((XDCOBJ *)this, v16, (struct ERECTL *)v35);
          }
          ++*((_DWORD *)a5 + 23);
          v26 = (__int64)&(*this)[197];
          if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
            return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct _POINTL *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2856LL))(
                                   (char *)a5 + 24,
                                   0LL,
                                   0LL,
                                   v34,
                                   0LL,
                                   a3,
                                   0LL,
                                   0LL,
                                   v36,
                                   v26,
                                   v9);
          else
            return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, struct _POINTL *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                   (char *)a5 + 24,
                                   0LL,
                                   0LL,
                                   v34,
                                   0LL,
                                   a3,
                                   0LL,
                                   0LL,
                                   v36,
                                   v26,
                                   v9);
        }
      }
    }
  }
  return v12;
}
