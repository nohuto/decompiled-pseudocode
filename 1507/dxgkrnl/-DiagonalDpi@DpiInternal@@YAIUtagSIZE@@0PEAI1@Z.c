/*
 * XREFs of ?DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z @ 0x1C000F21C
 * Callers:
 *     ?SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z @ 0x1C00ABD3C (-SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ABE40 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C00223E0 (-CalcDpi@DpiInternal@@YAIII@Z.c)
 */

unsigned int __fastcall DpiInternal::DiagonalDpi(
        DpiInternal *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        unsigned int *a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx

  v5 = (unsigned int)((_DWORD)this * (_DWORD)this + HIDWORD(this) * HIDWORD(this));
  if ( (_DWORD)v5 )
  {
    v6 = (unsigned __int64)(100 * v5) >> 1;
    do
    {
      v7 = v6;
      v6 = (100 * v5 / v6 + v6) >> 1;
      if ( v7 < v6 )
        v8 = v6 - v7;
      else
        v8 = v7 - v6;
    }
    while ( v8 > 1 );
    v9 = v6 / 0xA;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  LODWORD(v10) = a2.cy * a2.cy + a2.cx * a2.cx;
  if ( (_DWORD)v10 )
  {
    v11 = 100LL * (unsigned int)v10;
    v10 = v11 >> 1;
    do
    {
      v12 = v10;
      v10 = (v11 / v10 + v10) >> 1;
      if ( v12 < v10 )
        v13 = v10 - v12;
      else
        v13 = v12 - v10;
    }
    while ( v13 > 1 );
    v14 = v10 / 0xA;
  }
  else
  {
    LODWORD(v14) = 0;
  }
  if ( a4 )
    *a4 = v14;
  if ( (_DWORD)v14 )
    return DpiInternal::CalcDpi((DpiInternal *)(unsigned int)v9, v14, v10);
  else
    return 0;
}
