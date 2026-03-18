/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C02C8FA4
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00E6724 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *))
{
  int v6; // esi
  unsigned int i; // r14d
  __int64 v8; // r8
  int v10; // esi
  unsigned int j; // r14d
  __int64 v12; // r8
  UINT v13; // edx
  _BYTE *v14; // r14
  int v15; // r13d
  char *v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // esi
  _QWORD *v19; // r8
  _QWORD *v20; // rbx
  int v21; // r10d
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // [rsp+24h] [rbp-644h]
  int *v26; // [rsp+28h] [rbp-640h]
  int v27; // [rsp+48h] [rbp-620h]
  UINT puResult; // [rsp+58h] [rbp-610h] BYREF
  _BYTE *v29; // [rsp+60h] [rbp-608h]
  _QWORD *v30; // [rsp+68h] [rbp-600h]
  __int128 v31; // [rsp+70h] [rbp-5F8h]
  _QWORD *v32; // [rsp+80h] [rbp-5E8h]
  _QWORD *v33; // [rsp+88h] [rbp-5E0h] BYREF
  int v34; // [rsp+94h] [rbp-5D4h]
  int v35; // [rsp+98h] [rbp-5D0h]
  _QWORD v36[6]; // [rsp+B8h] [rbp-5B0h] BYREF
  _DWORD v37[4]; // [rsp+E8h] [rbp-580h] BYREF
  _DWORD v38[4]; // [rsp+F8h] [rbp-570h] BYREF
  char v39; // [rsp+108h] [rbp-560h] BYREF
  int v40; // [rsp+10Ch] [rbp-55Ch]
  int v41; // [rsp+114h] [rbp-554h]
  _BYTE v42[320]; // [rsp+120h] [rbp-548h] BYREF
  _BYTE v43[960]; // [rsp+260h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 && *((_QWORD *)a1 + 7) )
  {
    if ( a2 )
    {
      v6 = 0;
      for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
      {
        v8 = *((_QWORD *)a1 + 7);
        v38[0] = *(_DWORD *)(v8 + 16LL * i);
        v38[1] = *(_DWORD *)(v8 + 16LL * i + 4);
        v38[2] = *(_DWORD *)(v8 + 16LL * i + 8);
        v38[3] = *(_DWORD *)(v8 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v8 + 16LL * i)
          || a2->top >= *(_DWORD *)(v8 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v8 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v8 + 16LL * i + 12) )
        {
          ERECTL::operator*=(v38, a2);
          if ( v6 )
          {
            _guard_dispatch_icall_fptr();
            v6 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v38) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v6;
        }
      }
      if ( v6 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
LABEL_4:
    _guard_dispatch_icall_fptr();
    return 1LL;
  }
  if ( (a3 & 3) == 2 && *((_QWORD *)a1 + 9) )
  {
    if ( a2 )
    {
      v10 = 0;
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
      {
        v12 = *((_QWORD *)a1 + 9);
        if ( a2->left >= *(_DWORD *)(v12 + 16LL * j)
          || a2->top >= *(_DWORD *)(v12 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v12 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v12 + 16LL * j + 12) )
        {
          v37[0] = *(_DWORD *)(v12 + 16LL * j);
          v37[1] = *(_DWORD *)(v12 + 16LL * j + 4);
          v37[2] = *(_DWORD *)(v12 + 16LL * j + 8);
          v37[3] = *(_DWORD *)(v12 + 16LL * j + 12);
          ERECTL::operator*=(v37, a2);
          if ( v10 )
          {
            _guard_dispatch_icall_fptr();
            v10 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v37) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v10;
        }
      }
      if ( v10 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
    goto LABEL_4;
  }
  v13 = *((_DWORD *)a1 + 1);
  if ( v13 > 0x14 )
  {
    if ( UIntMult(0x30u, v13, &puResult) < 0 )
      return 0LL;
    v14 = PALLOCMEM2(puResult, 1734632775LL, 0);
    v29 = v14;
    if ( !v14 )
      return 0LL;
    v27 = 1;
  }
  else
  {
    v14 = v43;
    v29 = v43;
    v27 = 0;
  }
  v26 = (int *)v42;
  v15 = 0;
  LODWORD(v31) = 0;
  DWORD2(v31) = 0;
  if ( a2 )
  {
    v31 = (__int128)*a2;
    v40 = 16 * a2->top;
    v41 = 16 * a2->bottom;
    v16 = &v39;
  }
  else
  {
    v16 = 0LL;
  }
  v32 = v36;
  v17 = bConstructGET(a1, v36, v14, v16);
  v25 = v17;
  if ( v17 )
  {
    v18 = 0x80000000;
    v19 = &v33;
    v33 = &v33;
    v35 = 0;
    v34 = 0x7FFFFFFF;
LABEL_48:
    if ( v19 == &v33 || (vAdvanceAETEdges(&v33), v19 = v33, v33 == &v33) )
    {
      if ( (_QWORD *)v36[0] == v32 )
      {
        if ( v15 )
          _guard_dispatch_icall_fptr();
        v17 = v25;
        goto LABEL_80;
      }
      v18 = *(_DWORD *)(v36[0] + 16LL);
    }
    else if ( (_QWORD **)*v33 != &v33 )
    {
      vXSortAETEdges(&v33);
      v19 = v33;
    }
    if ( *(_DWORD *)(v36[0] + 16LL) == v18 )
    {
      vMoveNewEdges(v36, &v33, v18);
      v19 = v33;
    }
    v20 = v19;
    while ( 1 )
    {
      v21 = *((_DWORD *)v20 + 3);
      if ( (a3 & 2) != 0 )
      {
        v22 = *((_DWORD *)v20 + 10);
        do
        {
          v20 = (_QWORD *)*v20;
          v22 += *((_DWORD *)v20 + 10);
        }
        while ( v22 );
      }
      else
      {
        v20 = (_QWORD *)*v20;
      }
      v30 = v20;
      if ( v21 < *((_DWORD *)v20 + 3) )
        break;
LABEL_77:
      v20 = (_QWORD *)*v20;
      if ( v20 == &v33 )
      {
        ++v18;
        goto LABEL_48;
      }
    }
    if ( a2 )
    {
      v23 = v31;
      if ( v21 >= (int)v31 )
        v23 = v21;
      *v26 = v23;
      v24 = DWORD2(v31);
      if ( *((_DWORD *)v20 + 3) <= SDWORD2(v31) )
        v24 = *((_DWORD *)v20 + 3);
      v26[2] = v24;
      v26[1] = v18;
      v26[3] = v18 + 1;
      if ( v23 >= v24 )
        goto LABEL_75;
    }
    else
    {
      *v26 = v21;
      v26[2] = *((_DWORD *)v20 + 3);
      v26[1] = v18;
      v26[3] = v18 + 1;
    }
    ++v15;
    v26 += 4;
LABEL_75:
    if ( v15 == 20 )
    {
      _guard_dispatch_icall_fptr();
      v26 = (int *)v42;
      v15 = 0;
      v19 = v33;
    }
    goto LABEL_77;
  }
LABEL_80:
  if ( v27 )
    Win32FreePool(v14);
  return v17;
}
