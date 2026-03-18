/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064
 * Callers:
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0026DD0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0036630 (HmgFree.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     HmgRemoveObject @ 0x1C0036A70 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00C0C48 (HmgRemoveGarbageCollectible.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  int v5; // ebp
  unsigned int v7; // edi
  unsigned __int8 *v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 **)a1;
  v5 = a2;
  v7 = 1;
  if ( *(_QWORD *)a1 == *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1
    || !v3
    || v3 == *(__int64 **)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
  {
    return v7;
  }
  v8 = (unsigned __int8 *)v3[14];
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
      Win32FreePool(v8);
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 56LL) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !v5 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v10 = **(_QWORD **)a1;
  if ( a3 == 3 )
  {
    LOBYTE(a2) = 8;
    if ( !HmgRemoveGarbageCollectible(v10, a2, 0LL) )
      return 0LL;
    goto LABEL_19;
  }
  if ( HmgRemoveObject(v10, 0LL, 1LL, 0LL, 8, 0LL) )
  {
    if ( a3 == 2 )
    {
LABEL_24:
      FreeObject(*(_QWORD *)a1, 8LL);
      goto LABEL_35;
    }
LABEL_19:
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
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
    if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 128LL) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v11);
    }
  }
  HmgFree(**(_QWORD **)a1);
LABEL_35:
  *(_QWORD *)a1 = 0LL;
  return v7;
}
