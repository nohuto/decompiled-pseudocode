/*
 * XREFs of ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C003E768
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004D2B0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C00E12AC (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C00E1750 (-RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::FindRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  unsigned int v3; // r11d
  CCompositionBuffer *v4; // r9
  int v5; // ebx
  bool v6; // zf
  __int128 v8; // [rsp+0h] [rbp-28h]
  __int128 v9; // [rsp+10h] [rbp-18h]

  *a3 = 0LL;
  v3 = -1073741275;
  if ( !*((_DWORD *)this + 72)
    || (v4 = (CCompositionBuffer *)*((_QWORD *)this + 34), v4 == (CCompositionBuffer *)((char *)this + 272)) )
  {
LABEL_15:
    *a3 = 0LL;
    return v3;
  }
  v5 = *(_DWORD *)a2;
  while ( 1 )
  {
    v8 = *((_OWORD *)v4 + 1);
    v9 = *((_OWORD *)v4 + 2);
    if ( v5 != (_DWORD)v8 || !v5 || *((_DWORD *)a2 + 1) != DWORD1(v8) )
      goto LABEL_14;
    if ( v5 == 1 )
      goto LABEL_12;
    if ( v5 != 2 )
      break;
    if ( *((_DWORD *)a2 + 4) == (_DWORD)v9 )
    {
      v6 = *((_DWORD *)a2 + 5) == DWORD1(v9);
      goto LABEL_11;
    }
LABEL_14:
    v4 = *(CCompositionBuffer **)v4;
    if ( v4 == (CCompositionBuffer *)((char *)this + 272) )
      goto LABEL_15;
  }
  if ( v5 != 3 )
    goto LABEL_14;
  v6 = *((_QWORD *)a2 + 1) == *((_QWORD *)&v8 + 1);
LABEL_11:
  if ( !v6 )
    goto LABEL_14;
LABEL_12:
  *a3 = (CCompositionBuffer *)((char *)v4 - 8);
  return 0;
}
