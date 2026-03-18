/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C0002B20
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C0002A24 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C0002DF0 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     UIntMult @ 0x1C01DC8F0 (UIntMult.c)
 */

__int64 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  UINT v6; // edx
  int v8; // esi
  _BYTE *v9; // r13
  unsigned int v10; // ebx
  struct _RECTL *v12; // r15
  UINT v13; // r14d
  char *v14; // r9
  __int128 v15; // xmm0
  _QWORD *v16; // rdi
  unsigned int v17; // r13d
  __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  bool v24; // cc
  int v25; // eax
  int v26; // eax
  UINT puResult; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D0h]
  struct EPATHOBJ *v30; // [rsp+38h] [rbp-C8h]
  __int128 v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[6]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v33[6]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+B4h] [rbp-4Ch]
  int v36; // [rsp+BCh] [rbp-44h]
  struct _RECTL v37; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[960]; // [rsp+200h] [rbp+100h] BYREF

  v30 = a3;
  v6 = *((_DWORD *)a2 + 1);
  v8 = 1;
  if ( v6 > 0x14 )
  {
    v10 = 0;
    if ( UIntMult(0x30u, v6, &puResult) < 0 )
      return 0LL;
    v28 = (_BYTE *)PALLOCMEM2(puResult);
    v9 = v28;
    if ( !v28 )
      return 0LL;
    puResult = 1;
  }
  else
  {
    v9 = v38;
    v10 = 0;
    v28 = v38;
    puResult = 0;
  }
  v12 = &v37;
  v13 = 0;
  if ( a4 )
  {
    v14 = &v34;
    v15 = (__int128)*a4;
    v35 = 16 * a4->top;
    v36 = 16 * a4->bottom;
    v31 = v15;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a2, v33, v9, v14) )
  {
    v16 = v32;
    *(_QWORD *)((char *)&v32[1] + 4) = 0x7FFFFFFFLL;
    v32[0] = v32;
    v8 = 0;
    v17 = 0x80000000;
LABEL_12:
    if ( v16 != v32 )
    {
      vAdvanceAETEdges(v32);
      v16 = (_QWORD *)v32[0];
      if ( (_QWORD *)v32[0] != v32 )
      {
        if ( *(_QWORD **)v32[0] == v32 )
        {
          v18 = v33[0];
        }
        else
        {
          vXSortAETEdges(v32);
          v18 = v33[0];
          v16 = (_QWORD *)v32[0];
        }
        goto LABEL_19;
      }
    }
    v18 = v33[0];
    if ( (_QWORD *)v33[0] != v33 )
    {
      v17 = *(_DWORD *)(v33[0] + 16LL);
LABEL_19:
      if ( *(_DWORD *)(v18 + 16) == v17 )
      {
        vMoveNewEdges(v33, v32, v17);
        v16 = (_QWORD *)v32[0];
      }
      v19 = a5 & 2;
      v29 = v19;
      while ( 1 )
      {
        v20 = *((unsigned int *)v16 + 3);
        if ( v19 )
        {
          v21 = *((_DWORD *)v16 + 10);
          do
          {
            v16 = (_QWORD *)*v16;
            v21 += *((_DWORD *)v16 + 10);
          }
          while ( v21 );
        }
        else
        {
          v16 = (_QWORD *)*v16;
        }
        v22 = *((_DWORD *)v16 + 3);
        if ( (int)v20 >= v22 )
          goto LABEL_44;
        v12->top = v17;
        if ( a4 )
        {
          v23 = v31;
          if ( (int)v20 >= (int)v31 )
            v23 = v20;
          v20 = DWORD2(v31);
          v24 = v22 <= SDWORD2(v31);
          v12->left = v23;
          if ( v24 )
            v20 = (unsigned int)v22;
          v24 = v23 < (int)v20;
          v12->bottom = v17 + 1;
          v19 = v29;
          v12->right = v20;
          if ( !v24 )
            goto LABEL_37;
        }
        else
        {
          v12->right = v22;
          v12->bottom = v17 + 1;
          v12->left = v20;
        }
        ++v13;
        ++v12;
LABEL_37:
        if ( v13 == 20 )
        {
          if ( v19 )
            v25 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v20, v30, &v37, 0x14u);
          else
            v25 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v20, v30, &v37, 0x14u);
          if ( !v25 )
          {
            v8 = 1;
            goto LABEL_53;
          }
          v12 = &v37;
          v13 = 0;
        }
        v19 = v29;
LABEL_44:
        v16 = (_QWORD *)*v16;
        if ( v16 == v32 )
        {
          v16 = (_QWORD *)v32[0];
          ++v17;
          goto LABEL_12;
        }
      }
    }
    if ( v13 )
    {
      if ( (a5 & 2) != 0 )
      {
        v26 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v33, v30, &v37, v13);
        v9 = v28;
        if ( !v26 )
          v8 = 1;
        goto LABEL_54;
      }
      if ( !PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v33, v30, &v37, v13) )
        v8 = 1;
    }
LABEL_53:
    v9 = v28;
  }
LABEL_54:
  if ( puResult )
    Win32FreePool(v9);
  LOBYTE(v10) = v8 == 0;
  return v10;
}
