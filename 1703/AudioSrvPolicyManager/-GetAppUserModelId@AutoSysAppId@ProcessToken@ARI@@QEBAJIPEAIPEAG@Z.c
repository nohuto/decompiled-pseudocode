/*
 * XREFs of ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x18001F0A4
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001F418 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180021B58 (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
        ARI::ProcessToken::AutoSysAppId *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // edi
  unsigned __int16 *v8; // r14
  __int64 v9; // rax
  int v10; // ebp
  _WORD *v11; // rbx
  int v12; // ebx
  wchar_t *v13; // rax
  _BYTE *v14; // r15
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // r15
  unsigned __int16 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-38h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v26 = *((_QWORD *)this + 1);
  v8 = *(unsigned __int16 **)(v26 + 32);
  v9 = v8[8] >> 1;
  v10 = v9 + 1;
  if ( (_DWORD)v9 == -1 )
  {
    v11 = (_WORD *)(2 * v9);
    memcpy_0(0LL, *((const void **)v8 + 3), 2 * v9);
    *v11 = 0;
  }
  else
  {
    v12 = *v8 >> 1;
    v13 = wcschr(*((const wchar_t **)v8 + 1), 0x5Fu);
    v14 = (_BYTE *)*((_QWORD *)v8 + 1);
    v25 = (unsigned int)(v12 - 13);
    v15 = ((char *)(v13 + 1) - v14) >> 1;
    v16 = v15 + 14;
    v27 = v15 + 13;
    if ( a2 < (int)v15 + 14
      || (v17 = (unsigned int)v15,
          memcpy_0(a4, v14, v17 * 2),
          *(_OWORD *)&a4[v17] = *(_OWORD *)&v14[2 * v25],
          *(_QWORD *)&a4[v17 + 8] = *(_QWORD *)&v14[2 * v25 + 16],
          a4[v17 + 12] = *(_WORD *)&v14[2 * v25 + 24],
          a4[v27] = 0,
          a2 < v16 + v10) )
    {
      v23 = v16 + v10;
      v4 = 122;
    }
    else
    {
      v18 = (unsigned int)(v16 - 1);
      v19 = &a4[v18];
      *v19 = 33;
      v20 = *(_QWORD *)(v26 + 32);
      v21 = *(unsigned __int16 *)(v20 + 16) >> 1;
      if ( a2 - (unsigned int)v18 - 1 >= (int)v21 + 1 )
      {
        v22 = v21;
        memcpy_0(v19 + 1, *(const void **)(v20 + 24), 2 * v21);
        v19[v22 + 1] = 0;
      }
      v23 = v18 + v10 + 1;
    }
    *a3 = v23;
  }
  return v4;
}
