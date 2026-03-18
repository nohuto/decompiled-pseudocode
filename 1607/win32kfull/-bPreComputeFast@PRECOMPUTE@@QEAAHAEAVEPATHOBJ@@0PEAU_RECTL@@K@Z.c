/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CC7E4
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CC408 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CC4F0 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  __int64 v5; // rax
  int v8; // esi
  _BYTE *v9; // r13
  unsigned int v10; // ebx
  struct _RECTL *v12; // r15
  unsigned int v13; // r14d
  char *v14; // r9
  __int128 v15; // xmm0
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  unsigned int v18; // r13d
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  bool v24; // cc
  int v25; // eax
  _BYTE *v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+30h] [rbp-D0h]
  __int128 v29; // [rsp+40h] [rbp-C0h]
  _QWORD v30[6]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v31[6]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+BCh] [rbp-44h]
  struct _RECTL v35; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v36[960]; // [rsp+200h] [rbp+100h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  v8 = 1;
  if ( (unsigned int)v5 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
      return 0LL;
    v10 = 0;
    v26 = PALLOCMEM2(48 * v5, 1734632775LL, 0);
    v9 = v26;
    if ( !v26 )
      return 0LL;
    v27 = 1;
  }
  else
  {
    v9 = v36;
    v10 = 0;
    v26 = v36;
    v27 = 0;
  }
  v12 = &v35;
  v13 = 0;
  if ( a4 )
  {
    v14 = &v32;
    v15 = (__int128)*a4;
    v33 = 16 * a4->top;
    v34 = 16 * a4->bottom;
    v29 = v15;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a2, v31, v9, v14) )
  {
    v17 = v30;
    *(_QWORD *)((char *)&v30[1] + 4) = 0x7FFFFFFFLL;
    v30[0] = v30;
    v8 = 0;
    v18 = 0x80000000;
LABEL_12:
    if ( v17 != v30 )
    {
      vAdvanceAETEdges(v30);
      v17 = (_QWORD *)v30[0];
      if ( (_QWORD *)v30[0] != v30 )
      {
        if ( *(_QWORD **)v30[0] == v30 )
        {
          v19 = v31[0];
        }
        else
        {
          vXSortAETEdges(v30);
          v19 = v31[0];
          v17 = (_QWORD *)v30[0];
        }
        goto LABEL_19;
      }
    }
    v19 = v31[0];
    if ( (_QWORD *)v31[0] != v31 )
    {
      v18 = *(_DWORD *)(v31[0] + 16LL);
LABEL_19:
      if ( *(_DWORD *)(v19 + 16) == v18 )
      {
        vMoveNewEdges(v31, v30, v18);
        v17 = (_QWORD *)v30[0];
      }
      v16 = a5 & 2;
      while ( 1 )
      {
        v20 = *((unsigned int *)v17 + 3);
        if ( (_DWORD)v16 )
        {
          v21 = *((_DWORD *)v17 + 10);
          do
          {
            v17 = (_QWORD *)*v17;
            v21 += *((_DWORD *)v17 + 10);
          }
          while ( v21 );
        }
        else
        {
          v17 = (_QWORD *)*v17;
        }
        v22 = *((_DWORD *)v17 + 3);
        if ( (int)v20 >= v22 )
          goto LABEL_44;
        v12->top = v18;
        if ( a4 )
        {
          v23 = v29;
          if ( (int)v20 >= (int)v29 )
            v23 = v20;
          v20 = DWORD2(v29);
          v12->left = v23;
          if ( v22 <= SDWORD2(v29) )
            v20 = (unsigned int)v22;
          v24 = v23 < (int)v20;
          v12->bottom = v18 + 1;
          LODWORD(v16) = a5 & 2;
          v12->right = v20;
          if ( !v24 )
            goto LABEL_37;
        }
        else
        {
          v12->right = v22;
          v12->bottom = v18 + 1;
          v12->left = v20;
        }
        ++v13;
        ++v12;
LABEL_37:
        if ( v13 == 20 )
        {
          if ( (_DWORD)v16 )
            v25 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v20, a3, &v35, 0x14u);
          else
            v25 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v20, a3, &v35, 0x14u);
          if ( !v25 )
          {
            v8 = 1;
            goto LABEL_53;
          }
          v12 = &v35;
          v13 = 0;
        }
        v16 = a5 & 2;
LABEL_44:
        v17 = (_QWORD *)*v17;
        if ( v17 == v30 )
        {
          v17 = (_QWORD *)v30[0];
          ++v18;
          goto LABEL_12;
        }
      }
    }
    if ( v13 )
    {
      if ( (a5 & 2) != 0 )
      {
        v9 = v26;
        if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v31, a3, &v35, v13) )
          v8 = 1;
        goto LABEL_54;
      }
      if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v31, a3, &v35, v13) )
        v8 = 1;
    }
LABEL_53:
    v9 = v26;
  }
LABEL_54:
  if ( v27 )
    Win32FreePool(v9, v16);
  LOBYTE(v10) = v8 == 0;
  return v10;
}
