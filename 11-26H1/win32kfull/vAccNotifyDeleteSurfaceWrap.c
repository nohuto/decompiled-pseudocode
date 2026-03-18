/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x14019AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1400A3FF4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x14030CCF8 (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x14030CD24 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(SURFACE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // ecx
  _BYTE v8[160]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+D8h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  if ( *(_QWORD *)(v4 + 8) || *(_QWORD *)(v4 + 4728) )
  {
    v5 = (unsigned __int64)this + 24;
    v6 = *((_QWORD *)this + 6);
    v9 = v6;
    if ( v6 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8, (struct PDEVOBJ *)&v9);
      v7 = *(_DWORD *)(v6 + 40);
      if ( (v7 & 0x20000000) == 0 && !_bittest((const signed __int32 *)(v6 + 2112), 0xFu)
        || (v7 & 0x20000) == 0
        && _bittest((const signed __int32 *)(v6 + 2112), 0xFu)
        && (*((_DWORD *)this + 28) & 0x400000) != 0
        && *(_QWORD *)v5 )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
        return;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    }
    else if ( SURFACE::bIsDefault(this)
           || (unsigned int)SURFACE::bStockSurface(this)
           || (*((_DWORD *)this + 28) & 0x4040000) != 0x4000000 )
    {
      return;
    }
    vAccNotify((struct _SURFOBJ *)(v5 & -(__int64)(this != 0LL)), 8u, 0LL);
  }
}
