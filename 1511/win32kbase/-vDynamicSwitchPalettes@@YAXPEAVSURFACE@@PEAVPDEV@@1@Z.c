/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798
 * Callers:
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     vMatchAPal @ 0x1C00B4C70 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(struct SURFACE *a1, struct PDEV *a2, struct PDEV *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  HPALETTE v7; // rdx
  int v8; // r14d
  _DWORD *v9; // rdi
  unsigned int *v10; // r9
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  __int64 *v14; // rbx
  __int64 *v15; // rdx
  int v16; // eax
  __int64 *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a1 + 15);
  v5 = *((_QWORD *)a2 + 229);
  if ( v3 )
  {
    if ( v3 == v5 )
    {
      v16 = *((_DWORD *)a1 + 28);
      if ( (v16 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v16 & 0xF7FFFFFF;
    }
  }
  else
  {
    *((_DWORD *)a1 + 28) |= 0x20000000u;
    if ( (*((_DWORD *)a2 + 549) & 0x100) != 0 )
    {
      v7 = (HPALETTE)*((_QWORD *)a1 + 21);
      v8 = 0;
      if ( !v7 )
        goto LABEL_12;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v19, v7);
      v9 = (_DWORD *)v19;
      if ( !v19 )
        goto LABEL_12;
      if ( (*(_DWORD *)(v19 + 24) & 0x100) != 0
        && (struct _SINGLE_LIST_ENTRY *)v19 != WPP_MAIN_CB.Dpc.DpcListEntry.Next
        && *(_QWORD *)(v19 + 72) )
      {
        v10 = *(unsigned int **)(v5 + 128);
        v18 = 0;
        v17 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v17, 1, 0x100u, v10, 0, 0, 0, 0x400u) )
        {
          v13 = *(_DWORD *)(v5 + 60);
          v14 = v17;
          v15 = v17;
          v8 = 1;
          *((_DWORD *)v17 + 15) = v13;
          vMatchAPal(0LL, (__int64)v15, (__int64)v9, &v20, &v19);
          v17 = 0LL;
          v18 = 1;
          *((_QWORD *)a1 + 15) = v14;
        }
        PALMEMOBJ::~PALMEMOBJ(&v17, v11, v12);
      }
      HmgDecrementShareReferenceCount(v9);
      if ( !v8 )
      {
LABEL_12:
        HmgIncrementShareReferenceCount((_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext);
        *((_QWORD *)a1 + 15) = WPP_MAIN_CB.Dpc.DeferredContext;
      }
    }
    else
    {
      HmgIncrementShareReferenceCount((_DWORD *)v5);
      *((_QWORD *)a1 + 15) = v5;
    }
  }
  if ( (*((_DWORD *)a3 + 549) & 0x100) != 0 && (*((_DWORD *)a1 + 28) & 0x20000000) != 0 )
  {
    v19 = *((_QWORD *)a1 + 15);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v19);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *((_QWORD *)a1 + 15) = 0LL;
  }
}
