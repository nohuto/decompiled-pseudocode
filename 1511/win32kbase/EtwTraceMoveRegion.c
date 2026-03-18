/*
 * XREFs of EtwTraceMoveRegion @ 0x1C00BFC60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00BF6CC (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     Template_xqnqNR3 @ 0x1C00C02D8 (Template_xqnqNR3.c)
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
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x8000000000001000uLL) != 0
      && (qword_1C01020B8 & 0x8000000000001000uLL) == qword_1C01020B8 )
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
