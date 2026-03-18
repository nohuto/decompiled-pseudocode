/*
 * XREFs of ?SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z @ 0x1C00ABD3C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     DxgkSqmCommonGeneric @ 0x1C000CDF0 (DxgkSqmCommonGeneric.c)
 *     ?DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z @ 0x1C000F21C (-DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z.c)
 */

void __fastcall SqmDpiCommon(const struct _DPI_INFORMATION *a1, struct tagSIZE a2, struct tagSIZE a3)
{
  int v3; // r9d
  unsigned int v5; // eax
  struct tagSIZE v6; // rdx
  DpiInternal *v7; // rcx
  struct tagSIZE v8; // r8
  int v9; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-Ch] BYREF
  unsigned int v11; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v12; // [rsp+2Ch] [rbp-4h] BYREF
  int Data; // [rsp+40h] [rbp+10h] BYREF
  int v14; // [rsp+58h] [rbp+28h] BYREF

  v3 = *((_DWORD *)a1 + 23);
  Data = ((unsigned __int8)v3 >> 2) & 1;
  if ( !gSqmedCommonInternal )
  {
    if ( gSqmedCommon )
    {
      if ( (((unsigned __int8)v3 >> 2) & 1) == 0 )
        return;
LABEL_6:
      v5 = DpiInternal::DiagonalDpi(*(DpiInternal **)&a3, a2, a3, &v10);
      v6 = (struct tagSIZE)*((_QWORD *)a1 + 3);
      v7 = (DpiInternal *)*((_QWORD *)a1 + 4);
      v11 = v5;
      v12 = DpiInternal::DiagonalDpi(v7, v6, v8, 0LL);
      v14 = *((_DWORD *)a1 + 8);
      v9 = *((_DWORD *)a1 + 9);
      DxgkSqmCommonGeneric(0x307Cu, 4u, &Data, 4u);
      DxgkSqmCommonGeneric(0x307Fu, 4u, &v14, 4u);
      DxgkSqmCommonGeneric(0x3080u, 4u, &v9, 4u);
      DxgkSqmCommonGeneric(0x307Bu, 4u, &v10, 4u);
      DxgkSqmCommonGeneric(0x307Eu, 4u, &v11, 4u);
      DxgkSqmCommonGeneric(0x307Du, 4u, &v12, 4u);
      gSqmedCommonInternal = Data;
      gSqmedCommon = 1;
      return;
    }
    if ( (v3 & 0x20) != 0 )
      goto LABEL_6;
  }
}
