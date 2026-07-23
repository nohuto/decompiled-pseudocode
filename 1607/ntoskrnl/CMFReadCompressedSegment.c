/*
 * XREFs of CMFReadCompressedSegment @ 0x1406B93D0
 * Callers:
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14015A730 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     XpressDecode @ 0x14023E274 (XpressDecode.c)
 *     XpressDecodeClose @ 0x14023E398 (XpressDecodeClose.c)
 *     XpressDecodeCreate @ 0x14023E3CC (XpressDecodeCreate.c)
 */

__int64 __fastcall CMFReadCompressedSegment(HANDLE FileHandle, __int64 a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  NTSTATUS v9; // ebx
  int v10; // edx
  __int64 v11; // r8
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  unsigned int v15; // r8d
  char *v16; // r13
  unsigned int v17; // r12d
  __int64 v18; // r15
  __int128 v19; // xmm1
  char *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edi
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  void *v26; // [rsp+60h] [rbp-21h]
  HANDLE SectionHandle; // [rsp+68h] [rbp-19h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  int v31; // [rsp+E8h] [rbp+67h]

  SectionHandle = 0LL;
  v4 = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  if ( !FileHandle || !a4 || !a2 )
  {
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( a4[21] > 0x400u )
    return (unsigned int)-1073741811;
  v4 = (_DWORD *)XpressDecodeCreate();
  if ( !v4 )
  {
    v9 = -1073741801;
    goto LABEL_31;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v9 < 0 )
  {
LABEL_31:
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    goto LABEL_33;
  }
  SectionOffset.QuadPart = 0LL;
  v9 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0x400000u,
         2u);
  if ( v9 >= 0 )
  {
    v10 = ViewSize;
    if ( ViewSize < 0x1060 || a3 < 0x1060 )
    {
LABEL_12:
      v9 = -1073741306;
      goto LABEL_31;
    }
    v11 = 32LL;
    v12 = (_OWORD *)a2;
    v13 = a4;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    v15 = v10 - 4192;
    v16 = (char *)BaseAddress + 4192;
    v31 = v10 - 4192;
    *v12 = *v13;
    v17 = a3 - 4192;
    v18 = 0LL;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v19 = v13[5];
    v20 = (char *)(a2 + 4192);
    v26 = (void *)(a2 + 4192);
    v12[5] = v19;
    v21 = a4[21];
    v22 = a4[20];
    if ( v21 )
    {
      do
      {
        if ( (_DWORD)v18 == v21 - 1 )
        {
          v23 = a4[22];
        }
        else
        {
          v20 = (char *)v26;
          v23 = a4[(unsigned int)(v18 + 1) + 23] - a4[v18 + 23];
        }
        if ( v23 > v15 || !v17 )
          goto LABEL_12;
        if ( v22 > v17 )
          v22 = v17;
        if ( v23 == v22 )
        {
          memmove(v20, v16, v22);
        }
        else if ( (unsigned int)XpressDecode((__int64)v4, (__int64)v20, v22, v22, (__int64)v16, v23) != v22 )
        {
          v9 = -1073741217;
          goto LABEL_31;
        }
        v17 -= v22;
        v15 = v31 - v23;
        v18 = (unsigned int)(v18 + 1);
        v16 += v23;
        v31 -= v23;
        v20 = (char *)v26 + v22;
        v21 = a4[21];
        v26 = v20;
      }
      while ( (unsigned int)v18 < v21 );
    }
    v9 = 0;
    goto LABEL_31;
  }
  BaseAddress = 0LL;
LABEL_33:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v4 )
    XpressDecodeClose(v4);
  return (unsigned int)v9;
}
