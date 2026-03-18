/*
 * XREFs of GreSetPaletteEntries @ 0x1C02B4310
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0008180 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0158A20 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B765C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  MLOCKFAST *v10; // rcx
  HDC v11; // rdi
  unsigned int CurrentProcessId; // ebx
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v15, a1);
  v8 = v15;
  if ( v15 )
  {
    v16 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v15, a2, a3, a4);
    GreAcquireHmgrSemaphore(v9);
    v11 = *(HDC *)(v8 + 40);
    while ( v11 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v17, v11);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( (unsigned int)GreGetObjectOwner(v11, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      {
        v13 = v17[0];
        *(_DWORD *)(*(_QWORD *)(v17[0] + 80LL) + 8LL) |= 0xFu;
      }
      else
      {
        v13 = v17[0];
        *(_DWORD *)(v17[0] + 332LL) |= 1u;
      }
      v11 = *(HDC *)(v13 + 1376);
      MDCOBJA::~MDCOBJA((MDCOBJA *)v17);
    }
    GreReleaseHmgrSemaphore(v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v15);
  return v7;
}
