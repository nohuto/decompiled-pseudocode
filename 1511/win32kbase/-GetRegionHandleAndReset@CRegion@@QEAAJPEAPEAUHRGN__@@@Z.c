/*
 * XREFs of ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003EC38
 * Callers:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039E70 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004D6D0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A02C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::GetRegionHandleAndReset(CRegion *this, HRGN *a2)
{
  int v3; // ecx
  unsigned int v5; // edi
  int v6; // ecx
  HRGN v7; // rax
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
  v7 = (HRGN)RGNOBJ::hrgnAssociate(&v10);
  *a2 = v7;
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
