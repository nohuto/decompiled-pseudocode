/*
 * XREFs of bDeleteBrush @ 0x1C005C2F0
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000C498 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF174 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0041E60 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00AF20C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00B366C (HmgRemoveGarbageCollectible.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, __int64 a2, int a3)
{
  int v4; // r13d
  unsigned int v6; // r12d
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  HSURF v15; // rcx
  int v16; // edx
  int v17; // edx
  volatile signed __int32 *v18; // rcx
  __int64 *v20; // [rsp+40h] [rbp-98h] BYREF
  int v21; // [rsp+48h] [rbp-90h]
  int v22; // [rsp+54h] [rbp-84h]
  _DWORD *v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+60h] [rbp-78h]
  _QWORD v25[14]; // [rsp+68h] [rbp-70h] BYREF
  BRUSH *v26; // [rsp+F8h] [rbp+20h]

  v4 = a2;
  v6 = 1;
  LODWORD(v26) = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !(_DWORD)a2 )
  {
    v21 = 0;
    v20 = 0LL;
    v22 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, a1, 16);
    if ( !HANDLELOCK::bValid((HANDLELOCK *)&v20) )
    {
LABEL_15:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
      goto LABEL_16;
    }
    v9 = 1;
    v10 = *v20;
    v24 = v10;
    v8 = (_DWORD *)v20[2];
    v23 = v8;
    if ( *(_DWORD *)(v10 + 8) )
    {
      **(_DWORD **)(v10 + 56) = 2;
    }
    else
    {
      if ( !v8 )
        goto LABEL_13;
      if ( (*v8 & 1) == 0 )
      {
        v11 = *(_DWORD *)(v10 + 48);
        if ( (v11 & 0x10) != 0
          && ((v11 & 0x400) == 0 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle((__int64)a1, (v11 & 0x400) != 0, v8, (__int64)v20, &v20, 0LL) )
        {
          v7 = 0;
          v9 = 0;
        }
        goto LABEL_13;
      }
    }
    v7 = 0;
LABEL_13:
    if ( v9 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
    goto LABEL_15;
  }
LABEL_16:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 3 )
    {
      v13 = (__int64)v26;
      goto LABEL_23;
    }
    LOBYTE(a2) = 16;
    v12 = (void *)HmgRemoveGarbageCollectible(a1, a2, 0LL);
  }
  else
  {
    v12 = HmgRemoveObjectImpl(a1, 0, 0, 0, 16, 0LL);
  }
  v13 = (__int64)v12;
LABEL_23:
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 48);
    if ( (v14 & 0x400) != 0 && *(_QWORD *)(v13 + 168) && (v14 & 0x4000) == 0 )
      Win32FreePool();
    v15 = *(HSURF *)(v13 + 32);
    if ( v15 )
      bDeleteSurface(v15);
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
    if ( !v4 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, (HBRUSH)a1);
    if ( !v25[0] || (*(_DWORD *)(v25[0] + 48LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  }
  return v6;
}
