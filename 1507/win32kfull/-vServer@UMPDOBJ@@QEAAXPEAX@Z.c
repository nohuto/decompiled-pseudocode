/*
 * XREFs of ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0101008
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0100E7C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02A1FC4 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::vServer(UMPDOBJ *this, void *a2)
{
  struct SURFACE *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  if ( !*((_WORD *)v2 + 50) && *((char *)v2 + 102) < 0 && !*((_DWORD *)v2 + 136) )
  {
    v3 = *((_QWORD *)v2 + 9);
    v4 = *((_QWORD *)v2 + 10);
    *((_QWORD *)v2 + 9) = *((_QWORD *)v2 + 66);
    *((_QWORD *)v2 + 10) = *((_QWORD *)v2 + 67);
    *((_DWORD *)v2 + 136) = 1;
    *((_QWORD *)v2 + 66) = v3;
    *((_QWORD *)v2 + 67) = v4;
  }
}
