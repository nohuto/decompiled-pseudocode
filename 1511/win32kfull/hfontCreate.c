/*
 * XREFs of hfontCreate @ 0x1C00189F0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C0018888 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00188F0 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C0378158 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03785D8 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C0378730 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C037A30C (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C0018B2C (cCapString.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

__int64 __fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // esi
  _DWORD *Object; // rax
  struct OBJECT *v11; // rbx
  int v12; // eax
  struct HOBJ__ *v13; // rax
  __int64 v14; // r9
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( Src )
  {
    v8 = Src[88];
    if ( v8 <= 0x10 )
    {
      v9 = 4 * v8 + 356;
      Object = (_DWORD *)AllocateObject(4 * v8 + 632, 10LL, 0LL);
      v11 = (struct OBJECT *)Object;
      if ( Object )
      {
        Object[6] = a2;
        Object[7] = a3;
        Object[68] = v9;
        memmove(Object + 69, Src, v9);
        *((_DWORD *)v11 + 8) = 0;
        *((_DWORD *)v11 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
        cCapString((char *)v11 + 208, Src + 7, 32LL);
        v12 = lNormAngle((unsigned int)Src[3]);
        v16 = 0LL;
        Src[3] = v12;
        v13 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v16, v11, 0, 0, 10);
        if ( v13 )
        {
          *(_QWORD *)(gpentHmgr + 24LL * (unsigned __int16)v13 + 16) = a4;
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v16);
          return v14;
        }
        FreeObject(v11, 10LL);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v16);
      }
    }
  }
  return 0LL;
}
