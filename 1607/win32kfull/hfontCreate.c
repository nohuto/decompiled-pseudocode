/*
 * XREFs of hfontCreate @ 0x1C00606C0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00605C0 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C037D158 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C037D5F4 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C037D74C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C037F2E0 (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C00607F4 (cCapString.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // esi
  _DWORD *Object; // rax
  struct OBJECT *v11; // rbx
  struct HOBJ__ *v12; // rdi
  _BYTE v14[48]; // [rsp+30h] [rbp-48h] BYREF

  if ( Src )
  {
    v8 = Src[88];
    if ( v8 <= 0x10 )
    {
      v9 = 4 * v8 + 356;
      Object = (_DWORD *)AllocateObject(4 * v8 + 632, 10LL);
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
        Src[3] = lNormAngle((unsigned int)Src[3]);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
        v12 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v14, v11, 0, 0, 10);
        if ( v12 )
        {
          *(_QWORD *)(HmgPentryFromPobj(v11) + 16) = a4;
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
          return v12;
        }
        FreeObject(v11, 10LL);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
      }
    }
  }
  return 0LL;
}
