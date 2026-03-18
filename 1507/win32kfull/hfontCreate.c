/*
 * XREFs of hfontCreate @ 0x1C00569C0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00568C0 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03788AC (hfontInitDefaultGuiFont.c)
 *     bInitOneStockFontInternal @ 0x1C0378B8C (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C037A27C (bInitSystemFont.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall hfontCreate(char *Src, int a2, int a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  _DWORD *Object; // rax
  _DWORD *v11; // rdi
  char *i; // rbx
  __int64 v13; // rbx
  struct HOBJ__ *v14; // rax
  struct HOBJ__ *v15; // rbx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[48]; // [rsp+50h] [rbp-48h] BYREF

  if ( Src )
  {
    v8 = *((_DWORD *)Src + 88);
    if ( v8 <= 0x10 )
    {
      v9 = 4 * v8 + 356;
      Object = (_DWORD *)AllocateObject(4 * v8 + 632, 10LL, 0LL);
      v11 = Object;
      if ( Object )
      {
        Object[6] = a2;
        Object[7] = a3;
        Object[68] = v9;
        memmove(Object + 69, Src, v9);
        v11[8] = 0;
        v11[9] = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
        for ( i = Src + 28; i < Src + 90; i += 2 )
        {
          if ( !*(_WORD *)i )
            break;
        }
        v13 = (i - (Src + 28)) >> 1;
        if ( (_DWORD)v13 )
        {
          SourceString.Buffer = (PWSTR)(Src + 28);
          DestinationString.Buffer = (PWSTR)(v11 + 52);
          SourceString.Length = 2 * v13;
          SourceString.MaximumLength = 64;
          DestinationString.MaximumLength = 64;
          RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
        }
        *((_WORD *)v11 + (int)v13 + 104) = 0;
        *((_DWORD *)Src + 3) = lNormAngle(*((unsigned int *)Src + 3));
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
        v14 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, (struct OBJECT *)v11, 0, 0, 10);
        v15 = v14;
        if ( v14 )
        {
          *(_QWORD *)(gpentHmgr + 24LL * (unsigned __int16)v14 + 16) = a4;
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
          return v15;
        }
        FreeObject(v11, 10LL);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
      }
    }
  }
  return 0LL;
}
