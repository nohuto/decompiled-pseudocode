/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x1C00782F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00CB88C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     Template_xqnqNR3 @ 0x1C00CC638 (Template_xqnqNR3.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // esi
  struct _RGNDATA *v7; // rax
  int v8; // ebx
  int v9; // r8d

  if ( a3 )
  {
    if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x8000000000001000uLL) != 0
      && (qword_1C0118B18 & 0x8000000000001000uLL) == qword_1C0118B18 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      if ( RegionPtrData )
      {
        v7 = (struct _RGNDATA *)Win32AllocPool();
        v8 = (int)v7;
        if ( v7 )
        {
          if ( GrepGetRegionPtrData(a3, RegionPtrData, v7) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              Template_xqnqNR3(v8 + 16, (unsigned int)&DWMGetRgnEvent, v9, a1, a2);
          }
          Win32FreePool();
        }
      }
    }
  }
}
