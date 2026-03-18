/*
 * XREFs of RenderNineGrid @ 0x1C00C1F78
 * Callers:
 *     xxEngNineGrid @ 0x1C00C1ADC (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00C2240 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  BOOL v12; // edx
  int v13; // r9d
  int v14; // r10d
  int v15; // r8d
  _DWORD v17[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v18; // [rsp+68h] [rbp-C0h]
  int v19; // [rsp+6Ch] [rbp-BCh]
  __int64 v20; // [rsp+70h] [rbp-B8h]
  _DWORD *v21; // [rsp+78h] [rbp-B0h]
  _DWORD *v22; // [rsp+80h] [rbp-A8h]
  struct _SURFOBJ *v23; // [rsp+88h] [rbp-A0h]
  _QWORD *v24; // [rsp+90h] [rbp-98h]
  __int64 v25; // [rsp+98h] [rbp-90h]
  __int64 v26; // [rsp+A0h] [rbp-88h]
  __int64 v27; // [rsp+A8h] [rbp-80h]
  int v28; // [rsp+B0h] [rbp-78h]
  __int64 v29; // [rsp+B8h] [rbp-70h]
  __int64 v30; // [rsp+C0h] [rbp-68h]
  __int64 v31; // [rsp+C8h] [rbp-60h]
  __int64 v32; // [rsp+D0h] [rbp-58h]
  __int64 v33; // [rsp+D8h] [rbp-50h]
  int v34; // [rsp+E0h] [rbp-48h]
  int v35; // [rsp+E4h] [rbp-44h]

  v32 = a3;
  v26 = a2;
  v23 = a1;
  v20 = a3;
  v25 = a4;
  v21 = a5;
  v27 = a8;
  v22 = a9;
  v24 = a10;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v12 = a11 && (*a9 & 0x10) != 0;
  v13 = *a5;
  v17[0] = *a5;
  v17[1] = a5[1];
  v14 = a5[2];
  v18 = v14;
  v19 = a5[3];
  if ( v12 )
  {
    v15 = *a7;
    v18 = a7[2] + *a7 - v13;
    v17[0] = a7[2] + v15 - v14;
  }
  RenderNineGridInternal(v32, v26, (unsigned int)v17, (_DWORD)a7, v27, (__int64)a9);
  v33 = 0LL;
  v34 = a5[2] - *a5;
  v35 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v28 = 33488896;
    v31 = a10[6];
    v30 = a10[5];
    v29 = a10[4];
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
      {
        goto LABEL_35;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (*a9 & 8) != 0 )
  {
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
LABEL_35:
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        return _guard_dispatch_icall_fptr();
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( a1->iType != 1 )
  {
LABEL_8:
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (unsigned int)bAllowShareAccess(a1)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
  {
    goto LABEL_35;
  }
  if ( a1->iType != 1
    || !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
  {
    goto LABEL_8;
  }
  return _guard_dispatch_icall_fptr();
}
