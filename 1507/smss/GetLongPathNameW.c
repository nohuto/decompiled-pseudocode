/*
 * XREFs of GetLongPathNameW @ 0x140014B34
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140013D5C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     GetFileAttributesW @ 0x140014208 (GetFileAttributesW.c)
 *     SetErrorMode @ 0x140014860 (SetErrorMode.c)
 *     FindLFNorSFN_U @ 0x140014A2C (FindLFNorSFN_U.c)
 *     SkipPathTypeIndicator_U @ 0x140014FB4 (SkipPathTypeIndicator_U.c)
 *     FindClose @ 0x1400151D4 (FindClose.c)
 *     FindFirstFileExW @ 0x1400152E0 (FindFirstFileExW.c)
 */

__int64 __fastcall GetLongPathNameW(WCHAR *Name, WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int16 *v7; // r15
  int v9; // esi
  __int16 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  SIZE_T v13; // rdi
  __int16 *Heap; // rax
  __int16 *v15; // r13
  __int16 *v16; // r12
  void *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edi
  size_t v21; // rbx
  __int16 v22; // bx
  void *FirstFile; // rax
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 v26; // rsi
  unsigned int v27; // [rsp+30h] [rbp-2D8h]
  int v28; // [rsp+34h] [rbp-2D4h]
  WCHAR *BaseAddress; // [rsp+40h] [rbp-2C8h]
  char *v31; // [rsp+48h] [rbp-2C0h]
  char *v32; // [rsp+50h] [rbp-2B8h] BYREF
  void *Src; // [rsp+58h] [rbp-2B0h]
  char *v34; // [rsp+60h] [rbp-2A8h] BYREF
  __int16 *v35; // [rsp+68h] [rbp-2A0h]
  _WORD v36[274]; // [rsp+9Ch] [rbp-26Ch] BYREF

  v6 = 0;
  v27 = 0;
  v32 = 0LL;
  v34 = 0LL;
  Src = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  if ( !Name )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  v9 = SetErrorMode(32769);
  v28 = v9;
  if ( (unsigned int)GetFileAttributesW(Name) != -1 )
  {
    v10 = (__int16 *)SkipPathTypeIndicator_U(Name);
    if ( !v10 || !*v10 || !(unsigned int)FindLFNorSFN_U(v10, (__int16 **)&v32, (__int16 **)&v34) )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( Name[v26] );
      v6 = v26;
      v27 = v26;
      if ( a3 > (unsigned int)v26 && a2 )
      {
        if ( a2 != Name )
          memmove(a2, Name, 2LL * (unsigned int)(v26 + 1));
      }
      else
      {
        v6 = v26 + 1;
        v27 = v26 + 1;
      }
      goto LABEL_53;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( Name[v12] );
    v13 = 2LL * (unsigned int)(v12 + 1);
    Heap = (__int16 *)RtlAllocateHeap(
                        *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                        KernelBaseGlobalData + 0x200000,
                        v13);
    v7 = Heap;
    BaseAddress = (WCHAR *)Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
      v6 = 0;
LABEL_53:
      v9 = v28;
      goto LABEL_54;
    }
    memmove(Heap, Name, v13);
    v15 = &v7[(v32 - (char *)Name) >> 1];
    v32 = (char *)v15;
    v16 = &v7[(v34 - (char *)Name) >> 1];
    v34 = (char *)v16;
    v17 = a2;
    v31 = (char *)a2;
    v18 = a3;
    if ( !a3 || !a2 )
      goto LABEL_21;
    if ( a2 >= Name )
    {
      if ( a2 < &Name[v13 / 2] )
        goto LABEL_17;
      if ( a2 >= Name )
        goto LABEL_21;
    }
    if ( &a2[a3] < Name )
    {
      v17 = a2;
      goto LABEL_21;
    }
LABEL_17:
    Src = RtlAllocateHeap(
            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
            KernelBaseGlobalData + 0x200000,
            2LL * a3);
    if ( !Src )
    {
      RtlSetLastWin32Error(8u);
      v6 = 0;
LABEL_52:
      v7 = (__int16 *)BaseAddress;
      goto LABEL_53;
    }
    v17 = Src;
    v31 = (char *)Src;
    v15 = (__int16 *)v32;
    v16 = (__int16 *)v34;
    v7 = (__int16 *)BaseAddress;
    v18 = a3;
LABEL_21:
    v35 = v7;
    v6 = 0;
    while ( 1 )
    {
      v19 = v15 - v7;
      v20 = v19 + v6;
      if ( (_DWORD)v19 && v18 > v20 )
      {
        v21 = 2LL * (unsigned int)v19;
        memmove(v17, v7, v21);
        v31 += v21;
      }
      v22 = *v16;
      *v16 = 0;
      FirstFile = (void *)FindFirstFileExW(BaseAddress);
      *v16 = v22;
      if ( FirstFile == (void *)-1LL )
        break;
      FindClose(FirstFile);
      v24 = -1LL;
      do
        ++v24;
      while ( v36[v24] );
      if ( (_DWORD)v24 )
      {
        v15 = v36;
        v32 = (char *)v36;
      }
      else
      {
        v24 = v16 - v15;
      }
      v6 = v24 + v20;
      v27 = v6;
      if ( a3 > v6 && a2 )
      {
        v25 = 2LL * (unsigned int)v24;
        memmove(v31, v15, v25);
        v31 += v25;
      }
      v7 = v16;
      v35 = v16;
      if ( !*v16 || !(unsigned int)FindLFNorSFN_U(v16, (__int16 **)&v32, (__int16 **)&v34) )
        goto LABEL_38;
      v15 = (__int16 *)v32;
      v16 = (__int16 *)v34;
      v17 = v31;
      v18 = a3;
    }
    v6 = 0;
    v27 = 0;
LABEL_38:
    if ( v6 )
    {
      do
        ++v11;
      while ( v7[v11] );
      v6 += v11;
      v27 = v6;
      if ( a3 > v6 && a2 )
      {
        memmove(v31, v7, 2LL * (unsigned int)(v11 + 1));
        if ( Src )
          memmove(a2, Src, 2LL * (v6 + 1));
      }
      else
      {
        v27 = ++v6;
      }
    }
    goto LABEL_52;
  }
LABEL_54:
  if ( v7 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    v6 = v27;
  }
  if ( Src )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Src);
    v6 = v27;
  }
  SetErrorMode(v9);
  return v6;
}
