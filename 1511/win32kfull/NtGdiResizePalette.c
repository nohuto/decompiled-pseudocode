/*
 * XREFs of NtGdiResizePalette @ 0x1C02B1950
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003A728 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0041738 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B10A4 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02B40A4 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HDC v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rdi
  HDC v12; // rbx
  __int64 v14; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  int v16; // [rsp+50h] [rbp-58h]
  _QWORD v17[2]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v19[6]; // [rsp+78h] [rbp-30h] BYREF
  struct PALETTE *v20; // [rsp+C8h] [rbp+20h] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, a1);
  if ( v20 && v20 != ppalDefault && (*((_DWORD *)v20 + 6) & 0x100) != 0 )
  {
    v16 = 0;
    v15 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v15, 1u, a2, 0LL, 0, 0, 0, 0x500u) )
    {
      v14 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v4 = *(_DWORD *)(v15 + 28);
      if ( *((_DWORD *)v20 + 7) < v4 )
        v4 = *((_DWORD *)v20 + 7);
      memmove(*(void **)(v15 + 128), *((const void **)v20 + 16), 4LL * v4);
      *(_DWORD *)(v15 + 24) = *((_DWORD *)v20 + 6);
      *(_QWORD *)(v15 + 40) = *((_QWORD *)v20 + 5);
      *(_QWORD *)(v15 + 48) = *((_QWORD *)v20 + 6);
      *(_DWORD *)(v15 + 56) = *((_DWORD *)v20 + 14);
      XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v15);
      GreAcquireHmgrSemaphore(v6, v5);
      v7 = *(HDC *)(v15 + 40);
      while ( v7 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v17, v7);
        if ( !v17[0] )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v17);
          goto LABEL_17;
        }
        v7 = *(HDC *)(v17[0] + 1376LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v17);
        v17[0] = 0LL;
        DCOBJ::~DCOBJ((DCOBJ *)v17);
      }
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v20);
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v20);
      v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v15, &v20, v9, v10);
      if ( v3 )
      {
        v8 = v15;
        v7 = *(HDC *)(v15 + 40);
        while ( v7 )
        {
          MDCOBJA::MDCOBJA((MDCOBJA *)v18, v7);
          v11 = v18[0];
          *(_QWORD *)(v18[0] + 96LL) = v20;
          *(_DWORD *)(*(_QWORD *)(v11 + 80) + 8LL) |= 0xFu;
          v7 = *(HDC *)(v11 + 1376);
          DCOBJA::~DCOBJA((DCOBJA *)v18);
        }
      }
LABEL_17:
      v12 = *(HDC *)(v15 + 40);
      while ( v12 != v7 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v19, v12);
        _InterlockedDecrement((volatile signed __int32 *)(v19[0] + 12LL));
        v12 = *(HDC *)(v19[0] + 1376LL);
        DCOBJ::~DCOBJ((DCOBJ *)v19);
      }
      GreReleaseHmgrSemaphore(v8);
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v15);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
  return v3;
}
