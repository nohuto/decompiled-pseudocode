/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C01830D0
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00262F4 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000C758 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0028148 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01831D4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  BLTENTRY *v2; // rcx

  BLTQUEUE::Cleanup(this);
  v2 = (BLTENTRY *)*((_QWORD *)this + 318);
  if ( v2 )
    BLTENTRY::`vector deleting destructor'(v2);
  `vector destructor iterator'((char *)this + 864, 560LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 632));
}
