/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C027DF54
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  int v7; // r15d
  int v8; // r12d
  bool v9; // zf
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // rcx
  size_t v16; // r14
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v21; // [rsp+58h] [rbp-70h] BYREF
  size_t v22; // [rsp+60h] [rbp-68h] BYREF
  void *v23; // [rsp+68h] [rbp-60h] BYREF
  void *Src; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v4 = a3;
  v5 = a3;
  v27 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v5 == 0;
    if ( !v5 )
      break;
    v10 = v5;
    if ( v5 > 0x10000 )
      v10 = 0x10000LL;
    v11 = v4 - v5;
    v25 = v4 - v5;
    v26 = v4 - v5;
    v23 = 0LL;
    Src = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2, a3, a4);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v23, 0LL, v10, &v25, &v22, 2, 0x400000, 4) < 0 )
    {
      v23 = 0LL;
      v22 = 0LL;
    }
    if ( v22 )
    {
      v14 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmMapViewOfSection(a2, v14, &Src, 0LL, v10, &v26, &v21, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v21 = 0LL;
      }
    }
    if ( v22 && v21 )
    {
      v15 = v11 - v25;
      v16 = v11 - v26;
      v23 = (char *)v23 + v15;
      Src = (char *)Src + v16;
      if ( v22 <= v15 )
        v22 = 0LL;
      else
        v22 -= v15;
      if ( v21 <= v16 )
        v21 = 0LL;
      else
        v21 -= v16;
      v17 = v21;
      if ( v22 < v21 )
        v17 = v22;
      if ( v17 >= v5 )
        v17 = v5;
      memmove(v23, Src, v17);
    }
    else
    {
      v17 = 0LL;
    }
    if ( v23 )
    {
      v18 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v18, v23) < 0 )
        v7 = 1;
    }
    if ( Src )
    {
      v19 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v19, Src) < 0 )
        v8 = 1;
    }
    if ( !v17 || v7 == 1 || v8 == 1 )
    {
      v9 = v5 == 0;
      break;
    }
    v5 -= v17;
    v27 = v5;
    v4 = a3;
  }
  LOBYTE(v6) = v9;
  return v6;
}
