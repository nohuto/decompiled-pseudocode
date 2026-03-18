/*
 * XREFs of ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C008A194
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C1E20 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C00C2320 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vInit(HFDBASIS64 *this, int a2, int a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax

  v6 = a3;
  v7 = a4;
  v8 = 2LL;
  v9 = a2;
  v10 = v6;
  *(_QWORD *)this = a2;
  v11 = 2LL;
  *((_QWORD *)this + 1) = a5;
  *((_QWORD *)this + 2) = v6;
  do
  {
    v10 -= v7;
    --v11;
  }
  while ( v11 );
  *((_QWORD *)this + 3) = v9;
  *((_QWORD *)this + 2) = a5 + v10;
  v12 = 2LL;
  v13 = v9;
  do
  {
    v13 -= v6;
    --v12;
  }
  while ( v12 );
  v14 = v13 + v7;
  *((_QWORD *)this + 1) = (a5 - v9) << 28;
  v15 = *((_QWORD *)this + 2);
  *(_QWORD *)this = v9 << 28;
  v16 = v14;
  *((_QWORD *)this + 3) = v14;
  *((_QWORD *)this + 2) = 1610612736 * v15;
  do
  {
    v16 += v14;
    --v8;
  }
  while ( v8 );
  *((_QWORD *)this + 3) = v16 << 29;
}
