/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreValidateVisrgn @ 0x1C0088AD8 (GreValidateVisrgn.c)
 * Callees:
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C002B770 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00A8C28 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v2; // eax
  __int64 v5; // rbx
  __int64 v6; // rdx
  HSURF v7; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v8 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v7 = (HSURF)*((_QWORD *)a1 + 314);
          if ( v7 )
          {
            SURFREF::vLock((SURFREF *)&v8, v7);
            v6 = v8;
          }
          else
          {
            v6 = *(_QWORD *)(v5 + 2576);
          }
        }
        else
        {
          v6 = *((_QWORD *)a1 + 64);
        }
        if ( v6 && ((*(_DWORD *)(v5 + 56) & 0x20000) == 0 || *(int *)(*((_QWORD *)a1 + 64) + 112LL) >= 0) )
          GreValidateRgnInDCSurfBounds(a1, v6, a2, 1LL);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
      }
    }
  }
}
