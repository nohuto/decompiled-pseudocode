/*
 * XREFs of ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C0026F10
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vComputeCallTables(XEPALOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // rax

  v1 = *(_QWORD *)this;
  v2 = 2;
  if ( *(_DWORD *)(*(_QWORD *)this + 28LL) )
  {
    v4 = 1;
    goto LABEL_6;
  }
  v3 = *(_DWORD *)(v1 + 24);
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 8) != 0 )
      v4 = 6;
    else
      v4 = 8 - ((v3 & 0x10) != 0);
    goto LABEL_5;
  }
  v5 = *(_DWORD **)(v1 + 120);
  if ( v5[2] != 31 )
    goto LABEL_8;
  if ( v5[1] == 2016 && *v5 == 63488 )
  {
    v4 = 3;
    goto LABEL_5;
  }
  if ( v5[1] == 992 && *v5 == 31744 )
    v4 = 4;
  else
LABEL_8:
    v4 = 5;
LABEL_5:
  v2 = v4;
LABEL_6:
  *(_DWORD *)(v1 + 100) = v4;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v2;
}
