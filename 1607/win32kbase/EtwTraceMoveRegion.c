/*
 * XREFs of EtwTraceMoveRegion @ 0x1C00CC040
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00CB88C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     Template_xqnqNR3 @ 0x1C00CC638 (Template_xqnqNR3.c)
 */

void __fastcall EtwTraceMoveRegion(int a1, int a2, char a3, struct REGION *a4)
{
  DWORD RegionPtrData; // edi
  struct _RGNDATA *v9; // rax
  int v10; // ebx
  int v11; // r8d
  void *v12; // rdx

  if ( a4 )
  {
    if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x8000000000001000uLL) != 0
      && (qword_1C0118B18 & 0x8000000000001000uLL) == qword_1C0118B18 )
    {
      RegionPtrData = GrepGetRegionPtrData(a4, 0, 0LL);
      if ( RegionPtrData )
      {
        v9 = (struct _RGNDATA *)Win32AllocPool();
        v10 = (int)v9;
        if ( v9 )
        {
          if ( (unsigned int)GrepGetRegionPtrData(a4, RegionPtrData, v9) )
          {
            if ( a2 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              {
                v12 = &DirtyRgnEvent;
                goto LABEL_14;
              }
            }
            else if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v12 = &MoveRgnEvent;
LABEL_14:
              Template_xqnqNR3(v10 + 16, (_DWORD)v12, v11, a1, a3);
            }
          }
          Win32FreePool();
        }
      }
    }
  }
}
