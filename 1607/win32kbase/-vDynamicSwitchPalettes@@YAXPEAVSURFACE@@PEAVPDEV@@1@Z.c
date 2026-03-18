/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00C5460
 * Callers:
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     vMatchAPal @ 0x1C00BF7B0 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(struct SURFACE *a1, struct PDEV *a2, struct PDEV *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  HPALETTE v7; // rdx
  int v8; // r14d
  unsigned int *v9; // rdi
  unsigned int *v10; // r9
  unsigned int v11; // eax
  unsigned int *v12; // rbx
  unsigned int *v13; // rdx
  int v14; // eax
  unsigned int *v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+58h] [rbp-8h]
  unsigned int *v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int *v19; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 15);
  v5 = *((_QWORD *)a2 + 229);
  if ( v3 )
  {
    if ( v3 == v5 )
    {
      v14 = *((_DWORD *)a1 + 28);
      if ( (v14 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v14 & 0xF7FFFFFF;
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
      v9 = v19;
      if ( v19 && (v19[6] & 0x100) != 0 && v19 != (unsigned int *)WPP_MAIN_CB.DeviceQueue.32 && *((_QWORD *)v19 + 9) )
      {
        v10 = *(unsigned int **)(v5 + 120);
        v16 = 0;
        v15 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v15, 1, 0x100u, v10, 0, 0, 0, 0x400u, 1) )
        {
          v11 = *(_DWORD *)(v5 + 60);
          v12 = v15;
          v13 = v15;
          v8 = 1;
          v15[15] = v11;
          vMatchAPal(0LL, (__int64)v13, (__int64)v9, &v18, &v17);
          v15 = 0LL;
          v16 = 1;
          *((_QWORD *)a1 + 15) = v12;
        }
        PALMEMOBJ::~PALMEMOBJ(&v15);
      }
      EPALOBJ::~EPALOBJ(&v19);
      if ( !v8 )
      {
LABEL_12:
        HmgIncrementShareReferenceCount((struct _BASEOBJECT *)WPP_MAIN_CB.Dpc.ProcessorHistory);
        *((_QWORD *)a1 + 15) = WPP_MAIN_CB.Dpc.ProcessorHistory;
      }
    }
    else
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v5);
      *((_QWORD *)a1 + 15) = v5;
    }
  }
  if ( (*((_DWORD *)a3 + 549) & 0x100) != 0 && (*((_DWORD *)a1 + 28) & 0x20000000) != 0 )
  {
    v17 = (unsigned int *)*((_QWORD *)a1 + 15);
    XEPALOBJ::vUnrefPalette(&v17);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *((_QWORD *)a1 + 15) = 0LL;
  }
}
