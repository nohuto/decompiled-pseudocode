/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0136400
 * Callers:
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00D50E0 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0135E40 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0136030 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C01362D0 (-vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0282950 (-vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0282B20 (-vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0282C50 (-vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0282E50 (-vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0282F40 (-vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02831C0 (-vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02832E0 (-vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0283420 (-vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C5670 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C5F80 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C62A0 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall XLATE::pfnXlateBetweenBitfields(XLATE *this))(struct _XLATEOBJ *a1, unsigned int a2)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(struct _XLATEOBJ *, unsigned int); // rcx
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
      return (__int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlate565ToBGR;
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
      return (__int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlateBGRTo565;
    }
    else if ( (v4 & 0x200000) != 0 )
    {
      return (__int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlateBGRTo555;
    }
  }
  return v3;
}
