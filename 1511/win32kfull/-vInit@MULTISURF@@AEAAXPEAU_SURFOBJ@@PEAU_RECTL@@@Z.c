/*
 * XREFs of ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0299AAC
 * Callers:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C026AC70 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294028 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02949E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  *((_QWORD *)this + 12) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 13) = (char *)this + 8;
  *((_QWORD *)this + 11) = 0LL;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 8) = *a3;
    dhpdev = a2->dhpdev;
    *((_QWORD *)this + 4) = dhpdev;
    if ( dhpdev )
    {
      v6 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
      *(_QWORD *)this = v6;
      *((_QWORD *)this + 5) = *(_QWORD *)(v6 + 24);
      *((_DWORD *)this + 12) = *(_DWORD *)(v6 + 112);
      v7 = *(_QWORD *)(v6 + 48);
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && (*(_DWORD *)(v7 + 56) & 0x20000) != 0 )
      {
        *((_QWORD *)this + 11) = *((_QWORD *)this + 5);
        v8 = *(_QWORD *)this;
        *((_DWORD *)this + 6) = 1;
        *(_WORD *)(v8 + 100) = 0;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
      }
      else if ( *(_WORD *)(*(_QWORD *)this + 100LL) || (*(_BYTE *)(*((_QWORD *)this + 12) + 78LL) & 0x20) != 0 )
      {
        *((_DWORD *)this + 6) = 2;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 4) = 0LL;
  }
}
