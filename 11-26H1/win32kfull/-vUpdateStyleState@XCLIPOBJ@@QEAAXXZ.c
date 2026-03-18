/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1400E2364
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1400E1C6C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vUpdateStyleState(XCLIPOBJ *this)
{
  __int64 v1; // r9
  _DWORD *v3; // r8
  int v4; // edx
  int v5; // r11d
  int v6; // r10d
  __int64 v7; // r8
  int v8; // ecx
  int v9; // r11d
  __int64 v10; // rax
  bool v11; // cl
  _DWORD *v12; // r8
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rax
  int *v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // eax
  int v23; // edx

  v1 = *((_QWORD *)this + 18);
  v3 = *(_DWORD **)(v1 + 16);
  v4 = *(_DWORD *)(v1 + 4) - *v3;
  v5 = v3[1];
  v6 = *v3 - *(_DWORD *)(v1 + 4);
  v7 = *(unsigned int *)(v1 + 196);
  if ( v4 >= 0 )
    v6 = v4;
  v8 = *(_DWORD *)(v1 + 8) - v5;
  v9 = v5 - *(_DWORD *)(v1 + 8);
  v10 = *(unsigned int *)(v1 + 192);
  if ( v8 >= 0 )
    v9 = v8;
  if ( (_DWORD)v10 == (_DWORD)v7 )
    v11 = v6 >= v9;
  else
    v11 = v10 * (unsigned __int64)(unsigned int)v6 >= v7 * (unsigned __int64)(unsigned int)v9;
  *(_DWORD *)(v1 + 176) = *(_DWORD *)(v1 + 172);
  v12 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v11 )
  {
    v23 = v12[28];
    v14 = v12[30] - v23;
    v15 = v23 - v12[30];
    v16 = 48LL;
  }
  else
  {
    v13 = v12[29];
    v14 = v12[31] - v13;
    v15 = v13 - v12[31];
    v16 = 49LL;
  }
  v17 = v12 + 44;
  if ( v14 >= 0 )
    v15 = v14;
  v18 = (unsigned int)v12[v16];
  v19 = v15 + 1;
  if ( (v19 & 0xFFFF0000) != 0 )
  {
    if ( v12 != (_DWORD *)-176LL )
      *v17 = (*v17 + v18 * (unsigned __int64)v19) % (unsigned int)v12[45];
  }
  else
  {
    *v17 += v18 * v19;
    v20 = *((_QWORD *)this + 18);
    v21 = *(_DWORD *)(v20 + 180);
    v22 = *(_DWORD *)(v20 + 176);
    if ( v22 >= v21 )
      *(_DWORD *)(v20 + 176) = v22 % v21;
  }
}
