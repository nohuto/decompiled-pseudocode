/*
 * XREFs of GreSetPaletteEntries @ 0x1C02B21D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00EB21C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015B938 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B556C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  MLOCKFAST *v13; // rcx
  HDC v14; // rsi
  unsigned int CurrentProcessId; // edi
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-30h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v18, a1);
  v8 = v18;
  if ( v18 )
  {
    v19 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v18, a2, a3, a4);
    GreAcquireHmgrSemaphore(v10, v9, v11, v12);
    v14 = *(HDC *)(v8 + 40);
    while ( v14 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v20, v14);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( (unsigned int)GreGetObjectOwner(v14, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      {
        v16 = v20[0];
        *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 8LL) |= 0xFu;
      }
      else
      {
        v16 = v20[0];
        *(_DWORD *)(v20[0] + 332LL) |= 1u;
      }
      v14 = *(HDC *)(v16 + 1376);
      MDCOBJA::~MDCOBJA((MDCOBJA *)v20);
    }
    GreReleaseHmgrSemaphore(v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
