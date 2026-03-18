/*
 * XREFs of ??1DXGRESOURCE@@QEAA@XZ @ 0x1C0093F4C
 * Callers:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0007B10 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091180 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGRESOURCE::~DXGRESOURCE(DXGRESOURCE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGRESOURCE *)((char *)this + 80));
}
