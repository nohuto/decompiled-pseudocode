/*
 * XREFs of ??$assign@PEAPEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXPEAPEAVPropertyNode@Input@@0@Z @ 0x180028A24
 * Callers:
 *     ??4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180028430 (--4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<Input::PropertyNode *>::assign<Input::PropertyNode * *>(__int64 a1, char *a2, __int64 a3)
{
  char *v5; // rcx
  size_t v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  size_t v14; // rbx
  void *v15; // rax
  _QWORD *v16; // rcx
  char *v17; // rbx
  char *result; // rax
  __int64 v19; // rbx
  char *v20; // rdx
  char *v21; // rbx
  size_t v22; // r14
  char *v23; // rbx

  v5 = *(char **)a1;
  v6 = a3 - (_QWORD)a2;
  v8 = a3 - (_QWORD)a2;
  v9 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v5) >> 3;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 3;
  v11 = v8 >> 3;
  if ( v11 > v10 )
  {
    if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v12 = v10 >> 1;
    if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v13 = v12 + v10;
      if ( v12 + v10 < v11 )
        v13 = v11;
      v11 = v13;
    }
    if ( v5 )
      std::_Deallocate(v5, v10, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v11 )
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
      v14 = 8 * v11;
      if ( v14 < 0x1000 )
      {
        v16 = operator new(v14);
      }
      else
      {
        if ( v14 + 39 < v14 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v15 = operator new(v14 + 39);
        v16 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v16 - 1) = v15;
      }
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = v14 + *(_QWORD *)a1;
    }
    v17 = *(char **)a1;
    memmove(*(void **)a1, a2, v6);
    result = &v17[v6];
    goto LABEL_20;
  }
  if ( v11 > v9 )
  {
    v19 = 8 * v9;
    memmove(v5, a2, 8 * v9);
    v20 = &a2[v19];
    v21 = *(char **)(a1 + 8);
    v22 = a3 - (_QWORD)v20;
    memmove(v21, v20, v22);
    result = &v21[v22];
LABEL_20:
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  v23 = &v5[8 * v11];
  result = (char *)memmove(v5, a2, v6);
  *(_QWORD *)(a1 + 8) = v23;
  return result;
}
