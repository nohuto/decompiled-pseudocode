/*
 * XREFs of NtGdiResizePalette @ 0x1C02B4820
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0008180 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C003A928 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0048F10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0158A20 (--1MDCOBJA@@QEAA@XZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A69E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02A6A08 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02B7204 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  MLOCKFAST *v7; // rcx
  HDC v8; // rdi
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rdi
  HDC v12; // rbx
  __int64 v14; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h] BYREF
  int v16; // [rsp+60h] [rbp-58h]
  _QWORD v17[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v19[6]; // [rsp+88h] [rbp-30h] BYREF
  struct PALETTE *v20; // [rsp+D8h] [rbp+20h] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, a1);
  if ( !v20 || v20 == ppalDefault || (v4 = *((_DWORD *)v20 + 6), (v4 & 0x100) == 0) )
  {
LABEL_28:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
    return v3;
  }
  if ( (v4 & 0x800) == 0 || a2 == 256 )
  {
    v16 = 0;
    v15 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v15, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
    {
      v14 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v5 = *(_DWORD *)(v15 + 28);
      if ( *((_DWORD *)v20 + 7) < v5 )
        v5 = *((_DWORD *)v20 + 7);
      memmove(*(void **)(v15 + 120), *((const void **)v20 + 15), 4LL * v5);
      *(_DWORD *)(v15 + 24) = *((_DWORD *)v20 + 6);
      *(_QWORD *)(v15 + 40) = *((_QWORD *)v20 + 5);
      *(_QWORD *)(v15 + 48) = *((_QWORD *)v20 + 6);
      *(_DWORD *)(v15 + 56) = *((_DWORD *)v20 + 14);
      XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v15);
      GreAcquireHmgrSemaphore(v6);
      v8 = *(HDC *)(v15 + 40);
      while ( v8 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v17, v8);
        if ( !v17[0] || *(_WORD *)(v17[0] + 12LL) > 1u )
        {
          MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
          break;
        }
        v8 = *(HDC *)(v17[0] + 1376LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v17);
        v17[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
      }
      if ( !v8 )
      {
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v20);
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v20);
        v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v15, &v20, v9, v10);
        if ( v3 )
        {
          v7 = (MLOCKFAST *)v15;
          v8 = *(HDC *)(v15 + 40);
          while ( v8 )
          {
            MDCOBJA::MDCOBJA((MDCOBJA *)v18, v8);
            v11 = v18[0];
            *(_QWORD *)(v18[0] + 96LL) = v20;
            *(_DWORD *)(*(_QWORD *)(v11 + 80) + 8LL) |= 0xFu;
            v8 = *(HDC *)(v11 + 1376);
            MDCOBJA::~MDCOBJA((MDCOBJA *)v18);
          }
        }
      }
      v12 = *(HDC *)(v15 + 40);
      while ( v12 != v8 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v19, v12);
        _InterlockedDecrement((volatile signed __int32 *)(v19[0] + 12LL));
        v12 = *(HDC *)(v19[0] + 1376LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
      }
      GreReleaseHmgrSemaphore(v7);
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v15);
    goto LABEL_28;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
  return 0LL;
}
