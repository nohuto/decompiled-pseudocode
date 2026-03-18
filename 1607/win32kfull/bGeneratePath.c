/*
 * XREFs of bGeneratePath @ 0x1C0241E7C
 * Callers:
 *     ttfdQueryGlyphOutline @ 0x1C01170B8 (ttfdQueryGlyphOutline.c)
 *     ttfdQueryTrueTypeOutline @ 0x1C0242834 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     bCheckReadBounds @ 0x1C0241E6C (bCheckReadBounds.c)
 *     vQsplineToPolyBezier @ 0x1C024293C (vQsplineToPolyBezier.c)
 */

__int64 __fastcall bGeneratePath(PATHOBJ *ppo, POINTFIX *a2, unsigned int a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r12
  _DWORD *v7; // r13
  POINTFIX *v8; // rbx
  __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // r15
  unsigned int v13; // r8d
  POINTFIX *v14; // rcx
  POINTFIX *v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  ULONG v18; // r9d
  __int64 v19; // r10
  POINTFIX *v20; // r11
  unsigned int v21; // r13d
  size_t v22; // r8
  void *v23; // r10
  __int64 v24; // rcx
  POINTFIX *v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // r9d
  _WORD *v28; // r10
  POINTFIX *p_y; // r11
  unsigned int v30; // [rsp+20h] [rbp-108h]
  unsigned int v31; // [rsp+24h] [rbp-104h]
  int v32; // [rsp+28h] [rbp-100h]
  BOOL v33; // [rsp+2Ch] [rbp-FCh]
  __int64 v34; // [rsp+30h] [rbp-F8h]
  POINTFIX *v35; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v36; // [rsp+40h] [rbp-E8h]
  char v38; // [rsp+50h] [rbp-D8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a2;
  if ( a4 )
    *a4 = 0;
  v10 = 0LL;
  if ( a5 )
  {
    v10 = a5;
    v6 = a5 + a6;
  }
  result = 1LL;
  v12 = (unsigned __int64)a2 + a3;
  if ( (unsigned __int64)a2 < v12 )
  {
    while ( bCheckReadBounds((__int64)v8, v12, 0x10u)
         && (!a5 || bCheckReadBounds(v10, v6, v13))
         && (!ppo || PATHOBJ_bMoveTo(ppo, v8[1])) )
    {
      v14 = v8 + 1;
      v35 = v8 + 1;
      v15 = v8 + 2;
      v36 = (unsigned __int64)v8 + (unsigned int)v8->x;
      v16 = 16;
      v34 = v10 + 16;
      v32 = 16;
      if ( (unsigned __int64)&v8[2] < v36 )
      {
        while ( 1 )
        {
          if ( !bCheckReadBounds((__int64)v15, v12, 4u) )
            return 0LL;
          v31 = 8 * HIWORD(v15->x) + 4;
          if ( !bCheckReadBounds((__int64)v15, v12, v31) )
            return 0LL;
          if ( LOWORD(v15->x) == 1 )
          {
            if ( ppo )
            {
              if ( !PATHOBJ_bPolyLineTo(ppo, (POINTFIX *)&v15->y, v18) )
                return 0LL;
              v19 = v34;
              v17 = v31;
            }
            v21 = v17;
            if ( !a5 )
              goto LABEL_37;
            if ( !bCheckReadBounds(v19, v6, v17) )
              return 0LL;
            memmove(v23, v15, v22);
          }
          else
          {
            v24 = v18 - 1;
            v30 = v24;
            if ( (unsigned int)v24 <= 6 )
            {
              v25 = (POINTFIX *)&v38;
            }
            else
            {
              v25 = (POINTFIX *)EngAllocMem(0, 24 * (int)v24, 0x64667454u);
              if ( !v25 )
                return 0LL;
              v24 = v30;
              v20 = v35;
            }
            vQsplineToPolyBezier(v24, v20, &v15->y, v25);
            v33 = !ppo || PATHOBJ_bPolyBezierTo(ppo, v25, 3 * v30);
            v26 = v30;
            if ( a5 )
            {
              if ( !bCheckReadBounds(v34, v6, 24 * v30 + 4) )
                return 0LL;
              *v28 = 3;
              v28[1] = v27;
              memmove(v28 + 2, v25, 8LL * v27);
              v26 = v30;
            }
            if ( v26 > 6 )
              EngFreeMem(v25);
            if ( !v33 )
              return 0LL;
            v21 = 24 * v30 + 4;
          }
          v17 = v31;
          v19 = v34;
LABEL_37:
          v16 = v21 + v32;
          v32 += v21;
          p_y = (POINTFIX *)&v15[HIWORD(v15->x) - 1].y;
          v15 = (POINTFIX *)((char *)v15 + v17);
          v35 = p_y;
          v34 = v21 + v19;
          if ( (unsigned __int64)v15 >= v36 )
          {
            v7 = a4;
            v14 = v8 + 1;
            break;
          }
        }
      }
      if ( ppo )
      {
        if ( !PATHOBJ_bPolyLineTo(ppo, v14, 1u) || !PATHOBJ_bCloseFigure(ppo) )
          return 0LL;
        v16 = v32;
      }
      if ( v7 )
        *v7 += v16;
      if ( a5 )
      {
        if ( !bCheckReadBounds(v10, v6, 0x10u) )
          return 0LL;
        *(_DWORD *)(v10 + 4) = 24;
        *(_DWORD *)v10 = v16;
        *(POINTFIX *)(v10 + 8) = v8[1];
      }
      v8 = (POINTFIX *)((char *)v8 + (unsigned int)v8->x);
      v10 += v16;
      if ( (unsigned __int64)v8 >= v12 )
        return 1LL;
    }
    return 0LL;
  }
  return result;
}
