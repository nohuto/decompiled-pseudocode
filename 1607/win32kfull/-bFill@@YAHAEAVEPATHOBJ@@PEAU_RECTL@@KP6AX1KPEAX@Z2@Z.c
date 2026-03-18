/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C0006218
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0015E4C (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rax
  char *v14; // r14
  int v15; // r13d
  char *v16; // r9
  __int64 left; // rdx
  unsigned int v18; // ebx
  _QWORD *v19; // r8
  unsigned int v20; // esi
  _QWORD *v21; // rbx
  int v22; // r10d
  int v23; // ecx
  int right; // ecx
  unsigned int v25; // [rsp+20h] [rbp-638h]
  int *v26; // [rsp+28h] [rbp-630h]
  int v27; // [rsp+30h] [rbp-628h]
  struct _RECTL v28; // [rsp+70h] [rbp-5E8h]
  _QWORD *v29; // [rsp+80h] [rbp-5D8h] BYREF
  int v30; // [rsp+8Ch] [rbp-5CCh]
  int v31; // [rsp+90h] [rbp-5C8h]
  _QWORD v32[6]; // [rsp+B0h] [rbp-5A8h] BYREF
  _DWORD v33[4]; // [rsp+E0h] [rbp-578h] BYREF
  _DWORD v34[4]; // [rsp+F0h] [rbp-568h] BYREF
  char v35; // [rsp+100h] [rbp-558h] BYREF
  int v36; // [rsp+104h] [rbp-554h]
  int v37; // [rsp+10Ch] [rbp-54Ch]
  _BYTE v38[320]; // [rsp+110h] [rbp-548h] BYREF
  char v39; // [rsp+250h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 && *((_QWORD *)a1 + 7) )
  {
    if ( a2 )
    {
      v6 = 0;
      for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
      {
        v8 = *((_QWORD *)a1 + 7);
        v33[0] = *(_DWORD *)(v8 + 16LL * i);
        v33[1] = *(_DWORD *)(v8 + 16LL * i + 4);
        v33[2] = *(_DWORD *)(v8 + 16LL * i + 8);
        v33[3] = *(_DWORD *)(v8 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v8 + 16LL * i)
          || a2->top >= *(_DWORD *)(v8 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v8 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v8 + 16LL * i + 12) )
        {
          ERECTL::operator*=(v33, a2);
          if ( v6 )
          {
            _guard_dispatch_icall_fptr();
            v6 = 0;
          }
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v33) )
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
          v34[0] = *(_DWORD *)(v12 + 16LL * j);
          v34[1] = *(_DWORD *)(v12 + 16LL * j + 4);
          v34[2] = *(_DWORD *)(v12 + 16LL * j + 8);
          v34[3] = *(_DWORD *)(v12 + 16LL * j + 12);
          ERECTL::operator*=(v34, a2);
          if ( v10 )
          {
            _guard_dispatch_icall_fptr();
            v10 = 0;
          }
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v34) )
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
  v13 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v13 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v13) > 0xFFFFFFFF )
      return 0LL;
    v14 = (char *)PALLOCMEM2(48 * v13);
    if ( !v14 )
      return 0LL;
    v27 = 1;
  }
  else
  {
    v14 = &v39;
    v27 = 0;
  }
  v26 = (int *)v38;
  v15 = 0;
  v28 = 0LL;
  if ( a2 )
  {
    v28 = *a2;
    v36 = 16 * a2->top;
    v37 = 16 * a2->bottom;
    v16 = &v35;
  }
  else
  {
    v16 = 0LL;
  }
  v18 = bConstructGET(a1, v32, v14, v16);
  v25 = v18;
  if ( v18 )
  {
    v20 = 0x80000000;
    v19 = &v29;
    v29 = &v29;
    v31 = 0;
    v30 = 0x7FFFFFFF;
LABEL_48:
    if ( v19 == &v29 || (vAdvanceAETEdges(&v29), v19 = v29, v29 == &v29) )
    {
      if ( (_QWORD *)v32[0] == v32 )
      {
        if ( v15 )
          _guard_dispatch_icall_fptr();
        v18 = v25;
        goto LABEL_80;
      }
      v20 = *(_DWORD *)(v32[0] + 16LL);
    }
    else if ( (_QWORD **)*v29 != &v29 )
    {
      vXSortAETEdges(&v29);
      v19 = v29;
    }
    if ( *(_DWORD *)(v32[0] + 16LL) == v20 )
    {
      vMoveNewEdges(v32, &v29, v20);
      v19 = v29;
    }
    v21 = v19;
    while ( 1 )
    {
      v22 = *((_DWORD *)v21 + 3);
      if ( (a3 & 2) != 0 )
      {
        v23 = *((_DWORD *)v21 + 10);
        do
        {
          v21 = (_QWORD *)*v21;
          v23 += *((_DWORD *)v21 + 10);
        }
        while ( v23 );
      }
      else
      {
        v21 = (_QWORD *)*v21;
      }
      if ( v22 < *((_DWORD *)v21 + 3) )
        break;
LABEL_77:
      v21 = (_QWORD *)*v21;
      if ( v21 == &v29 )
      {
        ++v20;
        goto LABEL_48;
      }
    }
    if ( a2 )
    {
      left = (unsigned int)v28.left;
      if ( v22 >= v28.left )
        left = (unsigned int)v22;
      *v26 = left;
      right = v28.right;
      if ( *((_DWORD *)v21 + 3) <= v28.right )
        right = *((_DWORD *)v21 + 3);
      v26[2] = right;
      v26[1] = v20;
      v26[3] = v20 + 1;
      if ( (int)left >= right )
        goto LABEL_75;
    }
    else
    {
      *v26 = v22;
      v26[2] = *((_DWORD *)v21 + 3);
      v26[1] = v20;
      v26[3] = v20 + 1;
    }
    ++v15;
    v26 += 4;
LABEL_75:
    if ( v15 == 20 )
    {
      _guard_dispatch_icall_fptr();
      v26 = (int *)v38;
      v15 = 0;
      v19 = v29;
    }
    goto LABEL_77;
  }
LABEL_80:
  if ( v27 )
    Win32FreePool(v14, left, v19);
  return v18;
}
