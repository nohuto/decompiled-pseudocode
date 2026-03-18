/*
 * XREFs of bDeleteBrush @ 0x1C005A650
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C005A0C8 (-vCleanupBrushes@@YAXK@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C005A930 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00BD2BC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00C0C48 (HmgRemoveGarbageCollectible.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, __int64 a2, int a3)
{
  int v4; // edi
  unsigned int v6; // r13d
  int v7; // r14d
  _DWORD *v8; // r15
  _DWORD *v9; // r15
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rcx
  _DWORD *v21; // [rsp+40h] [rbp-98h] BYREF
  int v22; // [rsp+48h] [rbp-90h]
  _DWORD *v23; // [rsp+58h] [rbp-80h]
  struct OBJECT *EntryObject; // [rsp+60h] [rbp-78h]
  _QWORD v25[14]; // [rsp+68h] [rbp-70h] BYREF
  BRUSH *v26; // [rsp+F8h] [rbp+20h]

  v4 = a2;
  v6 = 1;
  LODWORD(v26) = 1;
  v7 = 1;
  v8 = 0LL;
  if ( (_DWORD)a2 )
    goto LABEL_19;
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v21, a1, 16);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v21) )
  {
    v9 = v21;
    v10 = *v21 & 0xFFFFFF;
    EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v10);
    v8 = (_DWORD *)*((_QWORD *)v9 + 2);
    v23 = v8;
    if ( *((_DWORD *)GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v10)
         + 2) )
    {
      **((_DWORD **)EntryObject + 7) = 2;
      v11 = 1;
    }
    else
    {
      if ( !v8 )
      {
        v11 = 1;
        goto LABEL_14;
      }
      v11 = 1;
      if ( (*v8 & 1) == 0 )
      {
        v12 = *((_DWORD *)EntryObject + 12) & 0x400;
        if ( (*((_DWORD *)EntryObject + 12) & 0x10) != 0
          && (!(_DWORD)v12 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v12, (_DWORD)v12 != 0, v8, v21, &v21, 0LL) )
        {
          v7 = 0;
          v11 = 0;
        }
        goto LABEL_14;
      }
    }
    v7 = 0;
LABEL_14:
    if ( v11 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
    v4 = 0;
  }
  if ( v22 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
LABEL_19:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 3 )
    {
      v14 = (__int64)v26;
      goto LABEL_26;
    }
    LOBYTE(a2) = 16;
    v13 = (void *)HmgRemoveGarbageCollectible(a1, a2, 0LL);
  }
  else
  {
    v13 = HmgRemoveObjectImpl(a1, 0, 0, 0, 16, 0LL);
  }
  v14 = (__int64)v13;
LABEL_26:
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 48);
    if ( (v15 & 0x400) != 0 && *(_QWORD *)(v14 + 168) && (v15 & 0x4000) == 0 )
      Win32FreePool();
    v16 = *(_QWORD *)(v14 + 32);
    if ( v16 )
      bDeleteSurface(v16);
    if ( *(_DWORD *)(v14 + 108) != -1 )
    {
      v17 = *(_DWORD *)(v14 + 48);
      if ( v17 >= 0 )
      {
        v18 = ((unsigned int)v17 >> 30) & 1;
        v19 = *(volatile signed __int32 **)(v14 + 128);
        if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v19, v18);
        *(_QWORD *)(v14 + 128) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v14 + 48) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v14);
    FreeObject(v14);
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
