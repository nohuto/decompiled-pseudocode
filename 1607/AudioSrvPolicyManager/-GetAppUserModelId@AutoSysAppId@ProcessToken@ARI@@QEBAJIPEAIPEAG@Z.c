/*
 * XREFs of ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x180022658
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180022928 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180024CC6 (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
        ARI::ProcessToken::AutoSysAppId *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  int v11; // r15d
  int v12; // ebx
  wchar_t *v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rsi
  unsigned __int16 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  _WORD *v23; // rbx
  _BYTE *v25; // [rsp+20h] [rbp-38h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+60h] [rbp+8h]

  v4 = *((_QWORD *)this + 1);
  v5 = 0;
  v9 = *(unsigned __int16 **)(v4 + 32);
  v10 = v9[8] >> 1;
  v11 = v10 + 1;
  if ( (_DWORD)v10 == -1 )
  {
    v23 = (_WORD *)(2 * v10);
    memcpy_0(0LL, *((const void **)v9 + 3), 2 * v10);
    *v23 = 0;
  }
  else
  {
    v12 = *v9 >> 1;
    v13 = wcschr(*((const wchar_t **)v9 + 1), 0x5Fu);
    v14 = (_BYTE *)*((_QWORD *)v9 + 1);
    v25 = v14;
    v26 = (unsigned int)(v12 - 13);
    v15 = ((char *)(v13 + 1) - v14) >> 1;
    v16 = v15 + 14;
    v27 = v15 + 13;
    if ( a2 < (int)v15 + 14
      || (v17 = (unsigned int)v15,
          memcpy_0(a4, v14, v17 * 2),
          *(_OWORD *)&a4[v17] = *(_OWORD *)&v25[2 * v26],
          *(_QWORD *)&a4[v17 + 8] = *(_QWORD *)&v25[2 * v26 + 16],
          a4[v17 + 12] = *(_WORD *)&v25[2 * v26 + 24],
          a4[v27] = 0,
          a2 < v16 + v11) )
    {
      v5 = 122;
      *a3 = v16 + v11;
    }
    else
    {
      v18 = (unsigned int)(v16 - 1);
      v19 = &a4[v18];
      *v19 = 33;
      v20 = *(_QWORD *)(v4 + 32);
      v21 = *(unsigned __int16 *)(v20 + 16) >> 1;
      if ( a2 - (unsigned int)v18 - 1 >= (int)v21 + 1 )
      {
        v22 = v21;
        memcpy_0(v19 + 1, *(const void **)(v20 + 24), 2 * v21);
        v19[v22 + 1] = 0;
      }
      *a3 = v18 + v11 + 1;
    }
  }
  return v5;
}
