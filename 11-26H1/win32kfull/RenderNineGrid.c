/*
 * XREFs of RenderNineGrid @ 0x1400DF6B8
 * Callers:
 *     xxEngNineGrid @ 0x1400DF114 (xxEngNineGrid.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     RenderNineGridInternal @ 0x1400DFE90 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  __int64 v12; // r8
  BOOL v13; // edx
  int v14; // r9d
  int v15; // r10d
  int v16; // ecx
  int v17; // r8d
  USHORT iType; // ax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *); // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD); // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 (__fastcall *v45)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, _QWORD *); // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD v52[2]; // [rsp+78h] [rbp-F0h] BYREF
  _DWORD *v53; // [rsp+88h] [rbp-E0h]
  _QWORD v54[4]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-B8h]
  _DWORD *v56; // [rsp+B8h] [rbp-B0h]
  _DWORD *v57; // [rsp+C0h] [rbp-A8h]
  _DWORD *v58; // [rsp+C8h] [rbp-A0h]
  struct _SURFOBJ *v59; // [rsp+D0h] [rbp-98h]
  __int64 v60; // [rsp+D8h] [rbp-90h]
  __int64 v61; // [rsp+E0h] [rbp-88h]
  _QWORD *v62; // [rsp+F0h] [rbp-78h]
  _DWORD *v63; // [rsp+F8h] [rbp-70h]
  __int64 v64; // [rsp+100h] [rbp-68h] BYREF
  int v65; // [rsp+108h] [rbp-60h]
  int v66; // [rsp+10Ch] [rbp-5Ch]
  _DWORD v67[2]; // [rsp+110h] [rbp-58h] BYREF
  int v68; // [rsp+118h] [rbp-50h]
  int v69; // [rsp+11Ch] [rbp-4Ch]

  v64 = a2;
  v56 = a5;
  v57 = a5;
  v58 = a9;
  v59 = a1;
  v60 = a3;
  v61 = a4;
  v12 = a8;
  v55 = a8;
  v53 = a9;
  v62 = a10;
  v13 = a11 && (*a9 & 0x10) != 0;
  v14 = *a5;
  v67[0] = *a5;
  v52[1] = a5 + 1;
  v67[1] = a5[1];
  v63 = a5 + 2;
  v15 = a5[2];
  v68 = v15;
  v52[0] = a5 + 3;
  v69 = a5[3];
  if ( v13 )
  {
    v16 = *a7;
    v17 = a7[2];
    v68 = *a7 + v17 - v14;
    v67[0] = v16 + v17 - v15;
    v12 = v55;
  }
  RenderNineGridInternal(a3, v64, (unsigned int)v67, (_DWORD)a7, v12, (__int64)v53, (_DWORD)a10, v13);
  v64 = 0LL;
  v65 = *v63 - *v56;
  v66 = *(_DWORD *)v52[0] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v54[0] = 33488896LL;
    v54[3] = a10[6];
    v54[2] = a10[5];
    v54[1] = a10[4];
    if ( a1->iType != 1 )
      goto LABEL_7;
    if ( (unsigned int)bAllowShareAccess(a1)
      && GreGetCurrentThread(v20)
      && *((_QWORD *)GreGetCurrentThread(v21) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v22) + 85) || *((_DWORD *)GreGetCurrentThread(v23) + 86)) )
    {
      v24 = *((_QWORD *)GreGetCurrentThread(v23) + 34);
      if ( (*(_DWORD *)(v24 + 20) & 0x10000) != 0 )
      {
        v25 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))(*((_QWORD *)GreGetCurrentThread(v24) + 34) + 120LL);
        return v25(a1, a3, a4, a6, a5, &v64, v54);
      }
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !GreGetCurrentThread(v26)
      || !*((_QWORD *)GreGetCurrentThread(v27) + 34)
      || !*((_DWORD *)GreGetCurrentThread(v28) + 85) && !*((_DWORD *)GreGetCurrentThread(v29) + 86) )
    {
LABEL_7:
      if ( ((__int64)a1[1].hsurf & 0x10000) != 0 )
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))a1->hdev
                + 170))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v64,
                 v54);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))EngAlphaBlend)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v64,
             v54);
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && GreGetCurrentThread(v30)
        && *((_QWORD *)GreGetCurrentThread(v31) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v32) + 85) || *((_DWORD *)GreGetCurrentThread(v33) + 86))
        && (v34 = *((_QWORD *)GreGetCurrentThread(v33) + 34), (*(_DWORD *)(v34 + 20) & 0x8000) != 0) )
      {
        v35 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))(*((_QWORD *)GreGetCurrentThread(v34) + 34) + 112LL);
        return v35(a1, a3, a4, a6, a5, &v64, v53[5], 0);
      }
      else if ( a1->iType == 1
             && (unsigned int)bAllowShareAccess(a1)
             && GreGetCurrentThread(v36)
             && *((_QWORD *)GreGetCurrentThread(v37) + 34)
             && (*((_DWORD *)GreGetCurrentThread(v38) + 85) || *((_DWORD *)GreGetCurrentThread(v39) + 86))
             || ((__int64)a1[1].hsurf & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v64,
                 v53[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v64,
                 v53[5],
                 0);
      }
    }
    else
    {
      v52[0] = 0LL;
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && GreGetCurrentThread(v40)
        && *((_QWORD *)GreGetCurrentThread(v41) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v42) + 85) || *((_DWORD *)GreGetCurrentThread(v43) + 86))
        && (v44 = *((_QWORD *)GreGetCurrentThread(v43) + 34), (*(_DWORD *)(v44 + 20) & 0x400) != 0) )
      {
        v45 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, _QWORD *))(*((_QWORD *)GreGetCurrentThread(v44) + 34) + 80LL);
        return v45(a1, a3, a4, a6, a5, v52);
      }
      else if ( a1->iType == 1
             && (unsigned int)bAllowShareAccess(a1)
             && GreGetCurrentThread(v46)
             && *((_QWORD *)GreGetCurrentThread(v47) + 34)
             && (*((_DWORD *)GreGetCurrentThread(v48) + 85) || *((_DWORD *)GreGetCurrentThread(v49) + 86))
             || ((__int64)a1[1].hsurf & 0x400) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, _QWORD *))EngCopyBits)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 v52);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, _QWORD *))a1->hdev
                + 165))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 v52);
      }
    }
  }
}
