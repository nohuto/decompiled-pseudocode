/*
 * XREFs of ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C004A55C
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048838 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0034150 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00402CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

__int64 __fastcall CRegion::GetRegionHandleAndReset(CRegion *this, HRGN *a2)
{
  int v3; // ecx
  unsigned int v5; // edi
  int v6; // ecx
  struct HOBJ__ *v7; // rax
  REGION *v8; // rcx
  struct OBJECT *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 1);
  v5 = -1073741823;
  if ( !v3 )
    goto LABEL_6;
  v6 = v3 - 1;
  if ( !v6 )
  {
    *a2 = (HRGN)1;
    goto LABEL_6;
  }
  if ( v6 != 1 )
    goto LABEL_7;
  v10 = (struct OBJECT *)*((_QWORD *)this + 1);
  v7 = RGNOBJ::hrgnAssociate(&v10);
  *a2 = (HRGN)v7;
  if ( v7 )
  {
    *((_QWORD *)this + 1) = 0LL;
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v5 = -1073741801;
LABEL_7:
  v8 = (REGION *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    REGION::vDeleteREGION(v8);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 1) = 0;
  return v5;
}
