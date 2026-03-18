/*
 * XREFs of ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0001C88
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C00D0EBC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B5860 (PATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vEnumPathStart(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        struct SURFACE *a3,
        struct _LINEATTRS *a4)
{
  FLOAT_LONG *p_elStyleState; // r8
  _DWORD *v8; // rax
  PFLOAT_LONG pstyle; // rcx
  union _FLOAT_LONG *v10; // rdx
  __int64 v11; // rax

  p_elStyleState = &a4->elStyleState;
  *((_QWORD *)this + 18) = *(_QWORD *)&a2[1] + 104LL;
  a2->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&a2[1] + 80LL) = *(_QWORD *)(*(_QWORD *)&a2[1] + 32LL);
  a2[10] = (struct _PATHOBJ)this;
  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = 0x10000;
  **((_DWORD **)this + 18) = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 18) + 184LL) = &a4->elStyleState;
  *(_DWORD *)(*((_QWORD *)this + 18) + 192LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = 1;
  if ( (a4->fl & 2) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) = HIWORD(p_elStyleState->l) & 1;
  }
  else if ( a4->pstyle )
  {
    v8 = (_DWORD *)*((_QWORD *)a3 + 6);
    if ( v8 )
    {
      *(_DWORD *)(*((_QWORD *)this + 18) + 192LL) = v8[559];
      *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = v8[560];
      *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = v8[561];
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = 3;
    }
    pstyle = a4->pstyle;
    v10 = &pstyle[a4->cstyle];
    if ( v10 > pstyle )
    {
      do
      {
        --v10;
        *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) += v10->l;
      }
      while ( v10 > a4->pstyle );
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= *(_DWORD *)(*((_QWORD *)this + 18) + 200LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) = LOWORD(p_elStyleState->e)
                                                + *(_DWORD *)(*((_QWORD *)this + 18) + 200LL)
                                                * HIWORD(p_elStyleState->l);
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) %= *(_DWORD *)(*((_QWORD *)this + 18) + 180LL);
    v11 = *((_QWORD *)this + 18);
    if ( *(int *)(v11 + 176) < 0 )
      *(_DWORD *)(v11 + 176) = 0;
  }
  XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, (unsigned int *)p_elStyleState);
}
