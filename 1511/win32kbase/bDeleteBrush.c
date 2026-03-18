/*
 * XREFs of bDeleteBrush @ 0x1C0045A40
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C002A070 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031F98 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // r15d
  int v5; // ebx
  _DWORD *v6; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rcx
  _QWORD v19[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-58h] BYREF
  int v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+64h] [rbp-44h]

  v4 = 1;
  v5 = 1;
  v6 = 0LL;
  if ( !a2 )
  {
    v21 = 0;
    v20 = 0LL;
    v22 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, a1, 16);
    if ( !HANDLELOCK::bValid((HANDLELOCK *)&v20) )
    {
LABEL_12:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
      goto LABEL_13;
    }
    v7 = 1;
    v8 = *v20;
    v19[0] = v8;
    v6 = (_DWORD *)v20[2];
    if ( *(_DWORD *)(v8 + 8) )
    {
      **(_DWORD **)(v8 + 56) = 2;
    }
    else
    {
      if ( !v6 )
        goto LABEL_10;
      if ( (*v6 & 1) == 0 )
      {
        v9 = *(_DWORD *)(v8 + 48);
        if ( (v9 & 0x10) != 0
          && ((v9 & 0x400) == 0 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle((__int64)a1, (v9 & 0x400) != 0, v6, (__int64)v20, &v20, 0LL) )
        {
          v5 = 0;
          v7 = 0;
        }
        goto LABEL_10;
      }
    }
    v5 = 0;
LABEL_10:
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
    goto LABEL_12;
  }
LABEL_13:
  if ( v5 )
  {
    v11 = HmgRemoveObject((__int64)a1, 0LL, 0, 0, 16, 0LL);
    v13 = v11;
    if ( v11 )
    {
      v14 = *(_DWORD *)(v11 + 48);
      if ( (v14 & 0x400) != 0 && *(_QWORD *)(v13 + 168) && (v14 & 0x4000) == 0 )
        Win32FreePool();
      v15 = *(_QWORD *)(v13 + 32);
      if ( v15 )
        bDeleteSurface(v15, v12);
      if ( *(_DWORD *)(v13 + 108) != -1 )
      {
        v16 = *(_DWORD *)(v13 + 48);
        if ( v16 >= 0 )
        {
          v17 = ((unsigned int)v16 >> 30) & 1;
          v18 = *(volatile signed __int32 **)(v13 + 128);
          if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v18, v17);
          *(_QWORD *)(v13 + 128) = 0LL;
        }
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x80u) != 0 )
        BRUSH::vDeleteIcmDIBs((BRUSH *)v13);
      FreeObject(v13);
      if ( !a2 && v6 )
        HmgFreeObjectAttr(v6);
    }
    else
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v19, (HBRUSH)a1);
      if ( !v19[0] || (*(_DWORD *)(v19[0] + 48LL) & 0x200) == 0 )
        v4 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v19);
    }
  }
  return v4;
}
