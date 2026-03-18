/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C015D860
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0019658 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C000B1C8 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0021628 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C015D8F0 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  BLTENTRY *v2; // rcx

  BLTQUEUE::Cleanup(this);
  v2 = (BLTENTRY *)*((_QWORD *)this + 296);
  if ( v2 )
    BLTENTRY::`vector deleting destructor'(v2);
  `vector destructor iterator'((char *)this + 688, 560LL, 3, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 432));
}
