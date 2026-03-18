/*
 * XREFs of vMatchAPal @ 0x1C00B1A30
 * Callers:
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00A3FC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00B1A08 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

_DWORD *__fastcall vMatchAPal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // rsi
  __int64 v9; // r14
  int v10; // edi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 i; // r10
  __int64 v16; // r15
  __int64 v17; // r12
  int v18; // eax
  int v19; // ecx
  _DWORD *result; // rax
  int v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF
  __int64 v23; // [rsp+80h] [rbp+50h] BYREF
  int v24; // [rsp+88h] [rbp+58h]

  v23 = a3;
  v22 = a2;
  v5 = *(_DWORD *)(a2 + 24);
  if ( (v5 & 0x1000) != 0 )
  {
    v7 = 1;
  }
  else if ( (v5 & 0x10000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v8 = *(_DWORD **)(a3 + 72);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = 0;
  v11 = 0;
  if ( v7 < 256 - v7 )
  {
    v12 = 4LL * v7;
    v13 = 256 - v7 - v7;
    do
    {
      v14 = *(_QWORD *)(a2 + 128);
      v24 = *(_DWORD *)(v14 + v12);
      HIBYTE(v24) &= 0xDEu;
      *(_DWORD *)(v14 + v12) = v24;
      v12 += 4LL;
      a2 = v22;
      --v13;
    }
    while ( v13 );
    a3 = v23;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 28); i = (unsigned int)(i + 1) )
  {
    if ( !v9 || *(_BYTE *)(i + v9 + 4) != *((_BYTE *)v8 + i + 4) )
      ++v11;
    v16 = *((unsigned __int8 *)v8 + i + 4);
    v17 = *(_QWORD *)(a2 + 128);
    v18 = *(_DWORD *)(v17 + 4 * v16);
    v24 = v18;
    if ( (v18 & 0x20000000) == 0 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(a3 + 128) + 4 * i);
      v21 = v19;
      if ( (v19 & 0x2000000) == 0
        && ((_BYTE)v19 != (_BYTE)v24
         || BYTE1(v19) != BYTE1(v18)
         || BYTE2(v19) != BYTE2(v18)
         || ((HIBYTE(v19) ^ HIBYTE(v18)) & 1) != 0) )
      {
        HIBYTE(v21) = HIBYTE(v19) & 1;
        ++v10;
        HIBYTE(v18) = HIBYTE(v19) & 1;
        v24 = v21;
      }
      HIBYTE(v24) = HIBYTE(v18) | 0x30;
      *(_DWORD *)(v17 + 4 * v16) = v24;
      a3 = v23;
      a2 = v22;
    }
  }
  XEPALOBJ::vUpdateTime((XEPALOBJ *)&v22);
  XEPALOBJ::vUpdateTime((XEPALOBJ *)&v23);
  *v8 = XEPALOBJ::ulTime((XEPALOBJ *)&v22);
  result = a5;
  *a4 = v10;
  *result = v11;
  return result;
}
