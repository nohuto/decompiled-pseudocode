/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C
 * Callers:
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00233B0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C00B5EB0 (HmgFree.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2, int a3)
{
  struct _SINGLE_LIST_ENTRY *v3; // rax
  unsigned int v7; // edi
  unsigned __int8 *Next; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(struct _SINGLE_LIST_ENTRY **)a1;
  v7 = 1;
  if ( *(struct _SINGLE_LIST_ENTRY **)a1 == WPP_MAIN_CB.Dpc.DpcListEntry.Next
    || !v3
    || v3 == (struct _SINGLE_LIST_ENTRY *)WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    return v7;
  }
  Next = (unsigned __int8 *)v3[15].Next;
  if ( Next )
  {
    if ( Next != gpRGBXlate )
      Win32FreePool();
    *(_QWORD *)(*(_QWORD *)a1 + 120LL) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 56LL) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !a2 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  if ( HmgRemoveObject(**(_QWORD **)a1, 0, 1, 0, 8, 0LL) )
  {
    if ( a3 != 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v10);
      }
      if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 136LL) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v10);
      }
    }
    FreeObject(*(_QWORD *)a1);
  }
  else
  {
    if ( !a2 )
      return 0;
    if ( a3 != 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v10);
      }
      if ( *(_QWORD *)a1 != *(_QWORD *)(*(_QWORD *)a1 + 136LL) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v10);
      }
    }
    HmgFree(**(_QWORD **)a1);
  }
  *(_QWORD *)a1 = 0LL;
  return v7;
}
