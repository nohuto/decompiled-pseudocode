/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00DEB20
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000DCA4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C028E070 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // eax
  _BYTE v5[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v6[88]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+10h] BYREF

  if ( gpBmpDev || gpRedirDev )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v7 = v2;
    if ( v2 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v7);
      v3 = *(_DWORD *)(v2 + 56);
      if ( (v3 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2152) & 0x8000) == 0 )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v5);
        return;
      }
      if ( (v3 & 0x20000) == 0
        && (*(_DWORD *)(v2 + 2152) & 0x8000) != 0
        && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
        && *(_QWORD *)(a1 + 24) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
        DCOBJ::~DCOBJ((DCOBJ *)v6);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
      DCOBJ::~DCOBJ((DCOBJ *)v6);
    }
    else
    {
      if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
        return;
      if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
        return;
      v4 = *(_DWORD *)(a1 + 112);
      if ( (v4 & 0x40000) != 0 || (v4 & 0x4000000) == 0 )
        return;
    }
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
  }
}
