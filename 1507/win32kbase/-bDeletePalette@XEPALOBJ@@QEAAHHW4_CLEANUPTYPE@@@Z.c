/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C
 * Callers:
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     HmgRemoveObject @ 0x1C0036B40 (HmgRemoveObject.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C003AC00 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00B366C (HmgRemoveGarbageCollectible.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, __int64 a2, int a3)
{
  struct PALETTE *v3; // rax
  int v5; // ebp
  unsigned int v7; // edi
  unsigned __int8 *v8; // rcx
  struct HOBJ__ *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(struct PALETTE **)a1;
  v5 = a2;
  v7 = 1;
  if ( *(struct PALETTE **)a1 == ppalDefault || !v3 || v3 == ppalMono )
    return v7;
  v8 = (unsigned __int8 *)*((_QWORD *)v3 + 15);
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
      Win32FreePool();
    *(_QWORD *)(*(_QWORD *)a1 + 120LL) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 56LL) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !v5 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v10 = **(struct HOBJ__ ***)a1;
  if ( a3 == 3 )
  {
    LOBYTE(a2) = 8;
    if ( !HmgRemoveGarbageCollectible(v10, a2, 0LL) )
      return 0LL;
    goto LABEL_19;
  }
  if ( HmgRemoveObject(v10, 0, 1, 0, 8, 0LL) )
  {
    if ( a3 == 2 )
    {
LABEL_24:
      FreeObject(*(_QWORD *)a1);
      goto LABEL_35;
    }
LABEL_19:
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 136LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    goto LABEL_24;
  }
  if ( a3 != 2 && (*(_WORD *)(*(_QWORD *)a1 + 14LL) & 0x4000) != 0 )
    return v7;
  if ( !v5 )
    return 0;
  if ( a3 != 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 136LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
  }
  HmgFree(**(_QWORD **)a1);
LABEL_35:
  *(_QWORD *)a1 = 0LL;
  return v7;
}
