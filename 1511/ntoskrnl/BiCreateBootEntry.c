/*
 * XREFs of BiCreateBootEntry @ 0x14068F824
 * Callers:
 *     BiCreateEfiEntry @ 0x14068FB74 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetKeyName @ 0x1404F4FE4 (BiGetKeyName.c)
 *     BiGetElement @ 0x14068DFAC (BiGetElement.c)
 *     BiTranslateFilePath @ 0x140691130 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateBootEntry(HANDLE BcdObjectHandle, _QWORD *a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  void *v4; // r12
  _FILE_PATH *v5; // r15
  int Element; // ebx
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  _FILE_PATH *PoolWithTag; // rax
  __int64 v17; // rbx
  size_t v18; // r8
  int KeyName; // eax
  int v20; // ebx
  unsigned int v21; // ecx
  char *v22; // rax
  _DWORD *v23; // rdx
  size_t v24; // r8
  int v25; // ecx
  __int64 v26; // rax
  char *v27; // rax
  char *v29; // [rsp+30h] [rbp-38h]
  unsigned int v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+38h] [rbp-30h]
  _DWORD *v32; // [rsp+40h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-20h] BYREF
  void *v34; // [rsp+50h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v38; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  P[0] = 0LL;
  v32 = 0LL;
  v2 = 0LL;
  Src = 0LL;
  v3 = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  Element = BiGetElement(BcdObjectHandle, 0x12000004u, P, &v38);
  if ( Element < 0 )
    goto LABEL_23;
  Element = BiGetElement(BcdObjectHandle, 0x11000001u, &v32, &Size);
  if ( Element < 0 )
  {
    v2 = v32;
    goto LABEL_23;
  }
  v8 = BiGetElement(BcdObjectHandle, 0x12000002u, &Src, &Size);
  v2 = v32;
  Element = v8;
  v3 = Src;
  if ( v8 < 0 )
    goto LABEL_23;
  if ( *v32 != 2 )
  {
    Element = -1073741637;
    goto LABEL_23;
  }
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)Src + v10) );
  v11 = 2 * v10 + 2;
  v12 = -1LL;
  v30 = v11;
  do
    ++v12;
  while ( *((_WORD *)v32 + v12 + 10) );
  v13 = 2 * v12 + 2;
  v14 = v13 + v11;
  LODWORD(Size) = v13;
  if ( v13 + v11 < v13 )
    goto LABEL_21;
  v15 = v14 + 12;
  if ( v14 + 12 < v14 )
    goto LABEL_21;
  PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_13:
    Element = -1073741670;
    goto LABEL_23;
  }
  PoolWithTag->Length = v15;
  v17 = (unsigned int)Size;
  v18 = (unsigned int)Size;
  PoolWithTag->Version = 1;
  PoolWithTag->Type = 3;
  memmove(PoolWithTag->FilePath, v2 + 5, v18);
  memmove(&v5->FilePath[v17], v3, v30);
  Element = BiTranslateFilePath(v5, 4u);
  if ( Element >= 0 )
  {
    KeyName = BiGetKeyName(BcdObjectHandle, &v34);
    v4 = v34;
    Element = KeyName;
    if ( KeyName >= 0 )
    {
      do
        ++v9;
      while ( *((_WORD *)v34 + v9) );
      LODWORD(Src) = (2 * v9 + 45) & 0xFFFFFFFC;
      v20 = (_DWORD)Src + 16;
      LODWORD(v32) = (_DWORD)Src + 16;
      v21 = ((_DWORD)Src + 47) & 0xFFFFFFFC;
      LODWORD(v34) = v21;
      if ( (unsigned int)v38 + v21 + MEMORY[4] + 4 >= (unsigned int)v38 )
      {
        LODWORD(Size) = (v21 + v38 + 3) & 0xFFFFFFFC;
        v31 = MEMORY[4] + Size;
        v22 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(MEMORY[4] + Size), 0x4B444342u);
        v29 = v22;
        v23 = v22;
        if ( !v22 )
          goto LABEL_13;
        *((_DWORD *)v22 + 2) = -1;
        v24 = (unsigned int)v38;
        *(_DWORD *)v22 = 1;
        *((_DWORD *)v22 + 3) = 1;
        v25 = Size;
        *((_DWORD *)v22 + 1) = v31;
        v26 = (unsigned int)v34;
        v23[5] = v25;
        v23[4] = v26;
        v23[6] = v20;
        memmove((char *)v23 + v26, P[0], v24);
        memmove(&v29[(unsigned int)Size], 0LL, MEMORY[4]);
        *(_QWORD *)(v29 + 28) = 0x53574F444E4957LL;
        *((_DWORD *)v29 + 10) = (_DWORD)v32;
        *((_DWORD *)v29 + 11) = (_DWORD)Src;
        *((_DWORD *)v29 + 9) = 1;
        swprintf_s((wchar_t *)v29 + 24, (unsigned int)v9 + 11LL, L"%s%s", L"BCDOBJECT=", v4);
        v27 = &v29[*((unsigned int *)v29 + 11) + 28];
        Element = 0;
        *(_DWORD *)v27 = 1;
        *((_DWORD *)v27 + 1) = 16;
        *((_DWORD *)v27 + 2) = 4;
        *((_DWORD *)v27 + 3) = 327551;
        *a2 = v29;
        goto LABEL_23;
      }
LABEL_21:
      Element = -1073741675;
    }
  }
LABEL_23:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Element;
}
