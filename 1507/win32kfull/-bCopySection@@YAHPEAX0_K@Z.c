/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C027E564
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027E2E8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  int v6; // r15d
  int v7; // r12d
  bool v8; // zf
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // rcx
  size_t v15; // r14
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v20; // [rsp+58h] [rbp-70h] BYREF
  size_t v21; // [rsp+60h] [rbp-68h] BYREF
  void *v22; // [rsp+68h] [rbp-60h] BYREF
  void *Src; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v3 = a3;
  v4 = a3;
  v26 = a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v4 == 0;
    if ( !v4 )
      break;
    v9 = v4;
    if ( v4 > 0x10000 )
      v9 = 0x10000LL;
    v10 = v3 - v4;
    v24 = v3 - v4;
    v25 = v3 - v4;
    v22 = 0LL;
    Src = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v22, 0LL, v9, &v24, &v21, 2, 0x400000, 4) < 0 )
    {
      v22 = 0LL;
      v21 = 0LL;
    }
    if ( v21 )
    {
      v13 = PsGetCurrentProcess(v12, a2);
      if ( (int)MmMapViewOfSection(a2, v13, &Src, 0LL, v9, &v25, &v20, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v20 = 0LL;
      }
    }
    if ( v21 && v20 )
    {
      v14 = v10 - v24;
      v15 = v10 - v25;
      v22 = (char *)v22 + v14;
      Src = (char *)Src + v15;
      if ( v21 <= v14 )
        v21 = 0LL;
      else
        v21 -= v14;
      if ( v20 <= v15 )
        v20 = 0LL;
      else
        v20 -= v15;
      v16 = v20;
      if ( v21 < v20 )
        v16 = v21;
      if ( v16 >= v4 )
        v16 = v4;
      memmove(v22, Src, v16);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v22 )
    {
      v17 = PsGetCurrentProcess(v12, a2);
      if ( (int)MmUnmapViewOfSection(v17, v22) < 0 )
        v6 = 1;
    }
    if ( Src )
    {
      v18 = PsGetCurrentProcess(v12, a2);
      if ( (int)MmUnmapViewOfSection(v18, Src) < 0 )
        v7 = 1;
    }
    if ( !v16 || v6 == 1 || v7 == 1 )
    {
      v8 = v4 == 0;
      break;
    }
    v4 -= v16;
    v26 = v4;
    v3 = a3;
  }
  LOBYTE(v5) = v8;
  return v5;
}
