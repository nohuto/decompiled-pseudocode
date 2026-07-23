/*
 * XREFs of MiSnapThunk @ 0x1403CCF50
 * Callers:
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x140145358 (strchr.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlPrefixString @ 0x1403CC144 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  char *v8; // r10
  __int64 v9; // rax
  unsigned __int16 *v10; // rcx
  char *v11; // r11
  unsigned int v12; // edx
  char *v13; // rsi
  unsigned int v14; // r9d
  __int64 v15; // rbx
  unsigned __int8 *v16; // rax
  __int64 v17; // rdx
  int v18; // r11d
  int v19; // r8d
  unsigned __int16 v20; // cx
  char *v21; // rdi
  int v23; // r8d
  int v24; // edx
  unsigned __int16 *v25; // rbx
  int v26; // ecx
  unsigned __int16 *v27; // rax
  char *v28; // r11
  char v29; // r9
  int v30; // eax
  char *v31; // rax
  PVOID *v32; // rsi
  unsigned int v33; // ebx
  char *v34; // rax
  __int64 v35; // rdi
  char *PoolWithTag; // rax
  void *v37; // rdi
  PVOID v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-40h]
  ULONG Size[2]; // [rsp+30h] [rbp-30h] BYREF
  void *Src; // [rsp+38h] [rbp-28h]
  ANSI_STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v44; // [rsp+88h] [rbp+28h]

  v44 = a2;
  v8 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, Size);
  if ( !v8 )
    return 3221226083LL;
  v9 = *a3;
  v10 = a5;
  if ( *a3 < 0 )
  {
    if ( !a5 )
    {
      v20 = v9 - *((_WORD *)v8 + 8);
LABEL_11:
      if ( (unsigned int)v20 >= *((_DWORD *)v8 + 5) )
        return 3221226082LL;
      v21 = &a1[*(unsigned int *)&a1[4 * v20 + *((unsigned int *)v8 + 7)]];
      *a4 = v21;
      if ( v21 <= v8 || v21 >= &v8[Size[0]] )
        return 0LL;
      SourceString.Buffer = v21;
      v31 = strchr(v21, 46);
      LOWORD(v31) = 1 - (_WORD)v21 + (_WORD)v31;
      Src = v31;
      SourceString.Length = (unsigned __int16)v31;
      SourceString.MaximumLength = (unsigned __int16)v31;
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
        return 3221226083LL;
      v32 = (PVOID *)PsLoadedModuleList;
      v33 = -1073741213;
      while ( v32 != &PsLoadedModuleList )
      {
        if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v32 + 11), 1u) )
        {
          v34 = &v21[(unsigned __int16)Src];
          Src = v34;
          v35 = -1LL;
          do
            ++v35;
          while ( v34[v35] );
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v35 + 5, 0x20206D4Du);
          *(_QWORD *)&SourceString.Length = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag + 2, Src, v35 + 1);
            v37 = *(void **)&SourceString.Length;
            v39 = *(_QWORD *)&SourceString.Length;
            **(_WORD **)&SourceString.Length = 0;
            v38 = v32[6];
            *(_QWORD *)Size = 0LL;
            v33 = MiSnapThunk((_DWORD)v38, v44, (unsigned int)Size, (unsigned int)Size, v39);
            ExFreePoolWithTag(v37, 0);
            *a4 = *(char **)Size;
          }
          break;
        }
        v32 = (PVOID *)*v32;
      }
      RtlFreeAnsiString(&DestinationString);
      return v33;
    }
  }
  else if ( !a5 )
  {
    v10 = (unsigned __int16 *)(v9 + a2);
  }
  v11 = &a1[*((unsigned int *)v8 + 8)];
  v12 = *v10;
  v13 = &a1[*((unsigned int *)v8 + 9)];
  v14 = *((_DWORD *)v8 + 6);
  Src = v11;
  if ( v12 < v14 )
  {
    v15 = (unsigned __int16)v12;
    v16 = (unsigned __int8 *)(v10 + 1);
    v17 = &a1[*(unsigned int *)&v11[4 * (unsigned __int16)v12]] - (char *)(v10 + 1);
    do
    {
      v18 = v16[v17];
      v19 = *v16 - v18;
      if ( v19 )
        break;
      ++v16;
    }
    while ( v18 );
    if ( !v19 )
    {
      v20 = *(_WORD *)&v13[2 * v15];
      goto LABEL_11;
    }
    v11 = (char *)Src;
  }
  v23 = 0;
  if ( !v14 )
    return 3221226083LL;
  v24 = v14 - 1;
  if ( (int)(v14 - 1) < 0 )
    return 3221226083LL;
  v25 = v10 + 1;
  while ( 1 )
  {
    v26 = (v24 + v23) >> 1;
    v27 = v25;
    v28 = (char *)(&a1[*(unsigned int *)&v11[4 * v26]] - (char *)v25);
    while ( 1 )
    {
      v29 = *(_BYTE *)v27;
      if ( *(_BYTE *)v27 != v28[(_QWORD)v27] )
        break;
      v27 = (unsigned __int16 *)((char *)v27 + 1);
      if ( !v29 )
      {
        v30 = 0;
        goto LABEL_22;
      }
    }
    v30 = *(_BYTE *)v27 < v28[(_QWORD)v27] ? -1 : 1;
LABEL_22:
    if ( v30 >= 0 )
      break;
    if ( !v26 )
      return 3221226083LL;
    v24 = v26 - 1;
LABEL_25:
    if ( v24 < v23 )
      return 3221226083LL;
    v11 = (char *)Src;
  }
  if ( v30 > 0 )
  {
    v23 = v26 + 1;
    goto LABEL_25;
  }
  if ( v24 >= v23 )
  {
    v20 = *(_WORD *)&v13[2 * v26];
    goto LABEL_11;
  }
  return 3221226083LL;
}
