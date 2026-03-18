/*
 * XREFs of NtGdiResizePalette @ 0x1C02B26C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00EB20C (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00EB21C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015B938 (--1MDCOBJA@@QEAA@XZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A5DC8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02A5DE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02B5104 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  MLOCKFAST *v10; // rcx
  HDC v11; // rdi
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // rdi
  HDC v15; // rbx
  __int64 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+58h] [rbp-60h] BYREF
  int v19; // [rsp+60h] [rbp-58h]
  _QWORD v20[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v22[6]; // [rsp+88h] [rbp-30h] BYREF
  struct PALETTE *v23; // [rsp+D8h] [rbp+20h] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v23, a1);
  if ( !v23 || v23 == ppalDefault || (v4 = *((_DWORD *)v23 + 6), (v4 & 0x100) == 0) )
  {
LABEL_28:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
    return v3;
  }
  if ( (v4 & 0x800) == 0 || a2 == 256 )
  {
    v19 = 0;
    v18 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
    {
      v17 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v5 = *(_DWORD *)(v18 + 28);
      if ( *((_DWORD *)v23 + 7) < v5 )
        v5 = *((_DWORD *)v23 + 7);
      memmove(*(void **)(v18 + 128), *((const void **)v23 + 16), 4LL * v5);
      *(_DWORD *)(v18 + 24) = *((_DWORD *)v23 + 6);
      *(_QWORD *)(v18 + 40) = *((_QWORD *)v23 + 5);
      *(_QWORD *)(v18 + 48) = *((_QWORD *)v23 + 6);
      *(_DWORD *)(v18 + 56) = *((_DWORD *)v23 + 14);
      XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v18);
      GreAcquireHmgrSemaphore(v7, v6, v8, v9);
      v11 = *(HDC *)(v18 + 40);
      while ( v11 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v20, v11);
        if ( !v20[0] || *(_WORD *)(v20[0] + 12LL) > 1u )
        {
          MDCOBJ::~MDCOBJ((MDCOBJ *)v20);
          break;
        }
        v11 = *(HDC *)(v20[0] + 1376LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
        v20[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v20);
      }
      if ( !v11 )
      {
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v23);
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v23);
        v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v18, &v23, v12, v13);
        if ( v3 )
        {
          v10 = (MLOCKFAST *)v18;
          v11 = *(HDC *)(v18 + 40);
          while ( v11 )
          {
            MDCOBJA::MDCOBJA((MDCOBJA *)v21, v11);
            v14 = v21[0];
            *(_QWORD *)(v21[0] + 96LL) = v23;
            *(_DWORD *)(*(_QWORD *)(v14 + 80) + 8LL) |= 0xFu;
            v11 = *(HDC *)(v14 + 1376);
            MDCOBJA::~MDCOBJA((MDCOBJA *)v21);
          }
        }
      }
      v15 = *(HDC *)(v18 + 40);
      while ( v15 != v11 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v22, v15);
        _InterlockedDecrement((volatile signed __int32 *)(v22[0] + 12LL));
        v15 = *(HDC *)(v22[0] + 1376LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v22);
      }
      GreReleaseHmgrSemaphore(v10);
      SEMOBJ::vUnlock((SEMOBJ *)&v17);
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
    goto LABEL_28;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
  return 0LL;
}
