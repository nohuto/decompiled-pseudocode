/*
 * XREFs of EngQueryPalette @ 0x14031E750
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x14020CB40 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall EngQueryPalette(HPALETTE hPal, ULONG *piMode, ULONG cColors, ULONG *pulColors)
{
  ULONG Entries; // ebx
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  Entries = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v10, hPal);
  v8 = v10[0];
  if ( v10[0] )
  {
    *piMode = *(_DWORD *)(v10[0] + 24LL) & 0xF;
    if ( *(_DWORD *)(v8 + 28) )
    {
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v10, 0, cColors, (struct tagPALETTEENTRY *)pulColors, 1);
    }
    else
    {
      Entries = 3;
      if ( cColors >= 3 && pulColors )
      {
        *pulColors = **(_DWORD **)(v8 + 112);
        pulColors[1] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 4LL);
        pulColors[2] = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 8LL);
      }
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)v10);
  return Entries;
}
