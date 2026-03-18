/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5158
 * Callers:
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02B501C (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // eax
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  _DWORD *result; // rax
  _DWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r12
  char v19; // r15
  __int64 v20; // rbx
  unsigned int v21; // eax
  char v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-10h] BYREF
  int v29; // [rsp+24h] [rbp-Ch]
  int v30; // [rsp+28h] [rbp-8h]
  int v31; // [rsp+70h] [rbp+40h]
  int v32; // [rsp+70h] [rbp+40h]
  int v33; // [rsp+70h] [rbp+40h]
  __int64 v34; // [rsp+78h] [rbp+48h] BYREF
  __int64 v35; // [rsp+80h] [rbp+50h] BYREF

  v35 = a3;
  v34 = a2;
  v6 = *(_DWORD *)(a2 + 24);
  if ( (v6 & 0x1000) != 0 )
  {
    v8 = 1;
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v9 = *(_DWORD *)(a3 + 28);
  v29 = 0;
  v10 = v8;
  v11 = 256 - v8;
  result = PALLOCMEM2((unsigned int)(v9 + 7), 1818316871LL, 0);
  v13 = result;
  if ( result )
  {
    v14 = v35;
    v30 = *(_DWORD *)(v35 + 28);
    if ( a4 )
    {
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v34);
      v28 = v8;
      if ( v8 < v11 )
      {
        v15 = 4LL * v8;
        v16 = v11 - v8;
        v28 = 256 - v8;
        do
        {
          v17 = *(_QWORD *)(v34 + 128);
          v31 = *(_DWORD *)(v17 + v15);
          HIBYTE(v31) &= 0xCEu;
          *(_DWORD *)(v17 + v15) = v31;
          v15 += 4LL;
          --v16;
        }
        while ( v16 );
      }
      v14 = v35;
    }
    v18 = 0LL;
    v19 = 48;
    if ( *(_DWORD *)(v14 + 28) )
    {
      do
      {
        v20 = v34;
        v32 = *(_DWORD *)(*(_QWORD *)(v14 + 128) + 4 * v18);
        v21 = ColorMatch(v34, v32, &v28);
        v22 = v21;
        if ( v28 )
        {
          if ( v10 || (*(_DWORD *)(v20 + 24) & 0x10000) != 0 )
          {
            while ( 1 )
            {
              v24 = v10;
              v28 = v10;
              if ( v10 < v11 )
                break;
LABEL_22:
              if ( (v19 & 0x10) == 0 )
              {
                v10 = 0;
                goto LABEL_26;
              }
              v19 &= ~0x10u;
              v10 = v8;
            }
            v25 = *(_QWORD *)(v20 + 128);
            while ( ((unsigned __int8)v19 & *(_BYTE *)(v25 + 4 * v24 + 3)) != 0 )
            {
              v24 = (unsigned int)(v24 + 1);
              v28 = v24;
              if ( (unsigned int)v24 >= v11 )
                goto LABEL_22;
            }
            HIBYTE(v32) |= 0x30u;
            v10 = v24;
            v22 = v24;
            ++v29;
            *(_DWORD *)(v25 + 4 * v24) = v32;
          }
        }
        else if ( (v32 & 0x2000000) == 0 )
        {
          v23 = *(_QWORD *)(v20 + 128);
          v33 = *(_DWORD *)(v23 + 4LL * v21);
          HIBYTE(v33) |= 0x30u;
          *(_DWORD *)(v23 + 4LL * v21) = v33;
        }
LABEL_26:
        *((_BYTE *)v13 + v18 + 4) = v22;
        v18 = (unsigned int)(v18 + 1);
        v14 = v35;
      }
      while ( (unsigned int)v18 < *(_DWORD *)(v35 + 28) );
    }
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v35);
    v26 = XEPALOBJ::ulTime((XEPALOBJ *)&v34);
    v27 = v29;
    *v13 = v26;
    *a5 = v27;
    *a6 = v30;
    return v13;
  }
  return result;
}
