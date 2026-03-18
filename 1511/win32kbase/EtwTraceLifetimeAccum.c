/*
 * XREFs of EtwTraceLifetimeAccum @ 0x1C006EA10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00BF6CC (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     Template_xqnqNR3 @ 0x1C00C02D8 (Template_xqnqNR3.c)
 */

void __fastcall EtwTraceLifetimeAccum(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // esi
  struct _RGNDATA *v7; // rax
  int v8; // ebx
  int v9; // r8d

  if ( a3 )
  {
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x8000000000001000uLL) != 0
      && (qword_1C01020B8 & 0x8000000000001000uLL) == qword_1C01020B8 )
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
              Template_xqnqNR3(v8 + 16, (unsigned int)&ModifyRgnEvent, v9, a1, a2);
          }
          Win32FreePool();
        }
      }
    }
  }
}
