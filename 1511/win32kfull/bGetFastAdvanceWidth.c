/*
 * XREFs of bGetFastAdvanceWidth @ 0x1C00AB1E8
 * Callers:
 *     vFillGLYPHDATA @ 0x1C00AAC68 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C02476E0 (vFillGLYPHDATA_ErrRecover.c)
 * Callees:
 *     IsFullWidthCharacter @ 0x1C014739C (IsFullWidthCharacter.c)
 */

__int64 __fastcall bGetFastAdvanceWidth(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // r11
  unsigned int *v6; // r10
  __int64 v7; // r9
  int v8; // r15d
  unsigned int *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // r13d
  unsigned __int16 v17; // bp
  int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  _DWORD *v22; // r10
  __int64 v23; // rcx

  v3 = 1;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 0x42000000) != 0x40000000
    || (v23 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v23 + 400) & 0x10000000) != 0)
    && (unsigned int)IsFullWidthCharacter(v23, a2, a3, v7) )
  {
    if ( v4 )
    {
      *v6 = 16 * *(unsigned __int8 *)(v5 + v4 + 2);
    }
    else
    {
      v10 = *(unsigned int **)(v7 + 192);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v11 + 64);
      v13 = v10[24];
      v14 = v12 + v10[8];
      if ( (_DWORD)v13 && (unsigned __int64)*(unsigned int *)(v11 + 552) + 4 <= v10[25] )
        v15 = v12 + v13;
      else
        v15 = 0LL;
      v16 = (unsigned __int16)__ROR2__(*(_WORD *)(v12 + v10[6] + 34), 8);
      v17 = __ROR2__(*(_WORD *)(v14 + 4LL * (v16 - 1)), 8);
      if ( (*(_DWORD *)(v7 + 116) & 0x10) == 0
        || (*(_BYTE *)(v10[4] + v12 + 17) & 0x14) == 0
        || (*(_DWORD *)(v11 + 400) & 0x10000000) != 0
        && (unsigned int)IsFullWidthCharacter(*(_QWORD *)(v7 + 8), (unsigned int)v5, v11, v7) )
      {
        v8 = 0;
      }
      if ( v8 && (!v15 || *(_DWORD *)(v7 + 124) < (int)*(unsigned __int8 *)(v5 + v15 + 4)) )
      {
        *v6 = -1;
        return 0;
      }
      else
      {
        if ( (unsigned int)v5 >= v16 )
          v18 = v17;
        else
          v18 = (unsigned __int16)__ROR2__(*(_WORD *)(v14 + 4 * v5), 8);
        v19 = *(_DWORD *)(v7 + 80);
        if ( v19 <= 0 )
          *v6 = -(((0x8000 - v18 * v19) >> 12) & 0xFFFFFFF0);
        else
          *v6 = ((v18 * v19 + 0x8000) >> 12) & 0xFFFFFFF0;
        v20 = *(_QWORD *)(v7 + 8);
        if ( (*(_DWORD *)(v20 + 400) & 0x10000000) != 0
          && (unsigned int)IsFullWidthCharacter(v20, (unsigned int)v5, v11, v7)
          && !gbJpn98FixPitch
          && *v22
          && *v22 != 16 * *(_DWORD *)(v21 + 404) )
        {
          *v22 = 32 * *(_DWORD *)(v21 + 404);
        }
      }
    }
    return v3;
  }
  else
  {
    *v6 = -1;
    return 0LL;
  }
}
