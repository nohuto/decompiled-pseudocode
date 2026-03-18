/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0101C9C
 * Callers:
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00C3A00 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0101870 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0101A20 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0101BB0 (-vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02847A0 (-vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0284970 (-vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0284AA0 (-vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0284CA0 (-vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0284D90 (-vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0285010 (-vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0285140 (-vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0285280 (-vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3120 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3A30 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3D50 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *__fastcall XLATE::pfnXlateBetweenBitfields(XLATE *this))(struct _XLATEOBJ *, unsigned int)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int (__fastcall *v3)(struct _XLATEOBJ *, unsigned int); // rcx
  int v4; // r8d
  int v5; // eax

  v1 = *((_QWORD *)this + 6);
  v2 = *((_QWORD *)this + 5);
  v3 = iXlateBitfieldsToBitfields;
  v4 = *(_DWORD *)(v1 + 24);
  v5 = *(_DWORD *)(v2 + 24);
  if ( (v4 & 8) != 0 )
  {
    if ( (v5 & 0x400000) != 0 )
    {
      return iXlate565ToBGR;
    }
    else if ( (v5 & 0x200000) != 0 )
    {
      return iXlate555ToBGR;
    }
  }
  else if ( (v5 & 8) != 0 )
  {
    if ( (v4 & 0x400000) != 0 )
    {
      return iXlateBGRTo565;
    }
    else if ( (v4 & 0x200000) != 0 )
    {
      return iXlateBGRTo555;
    }
  }
  return v3;
}
