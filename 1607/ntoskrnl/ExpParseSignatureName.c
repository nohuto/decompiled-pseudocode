/*
 * XREFs of ExpParseSignatureName @ 0x1406B14D4
 * Callers:
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x1401537E4 (wcsncpy_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     ExpTranslateHexStringToGUID @ 0x1406B2C54 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1406B2DD0 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1406B2E6C (ExpTranslateHexStringToULONGLONG.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        char *a8)
{
  char v11; // r10
  char v12; // r12
  __int64 v13; // rdi
  bool v14; // dl
  wchar_t v15; // cx
  char v16; // r15
  NTSTATUS result; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r14
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdi
  wchar_t *v23; // r14
  int v24; // edx
  const wchar_t *v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // edx
  const wchar_t *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // eax
  int v34; // r9d
  const wchar_t *v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v11 = 0;
  v12 = 0;
  LODWORD(v13) = 0;
  v14 = *Src == 123;
  if ( a2 )
  {
    do
    {
      v15 = Src[(unsigned int)v13];
      if ( v15 == 41 )
        break;
      if ( v14 )
      {
        if ( v15 == 125 )
        {
          v11 = 1;
          break;
        }
      }
      else if ( v15 == 45 )
      {
        break;
      }
      LODWORD(v13) = v13 + 1;
    }
    while ( (unsigned int)v13 < a2 );
  }
  if ( v14 && !v11 )
    return -1073741811;
  v16 = v14;
  if ( (unsigned int)v13 > 8 )
    v16 = 1;
  if ( v16 != 1 || v11 != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v13 + 1), 0x72766E45u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    wcsncpy_s(PoolWithTag, (unsigned int)(v13 + 1), Src, (unsigned int)v13);
    v19[(unsigned int)v13] = 0;
    if ( v16 )
      v20 = ExpTranslateHexStringToGUID(v19, a3);
    else
      v20 = ExpTranslateHexStringToULONG(v19, a3);
    v21 = v20;
    ExFreePoolWithTag(v19, 0);
    if ( v21 < 0 )
      return v21;
    v12 = 0;
LABEL_25:
    if ( (unsigned int)v13 < a2 )
    {
      if ( Src[(unsigned int)v13] != 45 )
      {
LABEL_47:
        if ( (unsigned int)v13 < a2 && Src[(unsigned int)v13] == 41 && (v16 || v12) )
        {
          *a7 = v16;
          *a8 = v12;
          return 0;
        }
        return -1073741811;
      }
      v22 = (unsigned int)(v13 + 1);
      v12 = 1;
      if ( (unsigned int)v22 < a2 )
      {
        v23 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22uLL, 0x72766E45u);
        if ( v23 )
        {
          v24 = v22;
          v25 = &Src[v22];
          do
          {
            if ( Src[v22] == 45 )
              break;
            v22 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v22 < a2 );
          v26 = v22 - v24;
          if ( (unsigned int)(v22 - v24 - 1) > 7 )
            goto LABEL_52;
          v27 = v26;
          wcsncpy_s(v23, 0x11uLL, v25, v26);
          v23[v27] = 0;
          v21 = ExpTranslateHexStringToULONG(v23, a4);
          if ( v21 < 0 )
          {
LABEL_53:
            ExFreePoolWithTag(v23, 0);
            return v21;
          }
          v28 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v28 >= a2 )
            goto LABEL_52;
          v29 = v28;
          v30 = &Src[v28];
          do
          {
            if ( Src[v28] == 45 )
              break;
            v28 = (unsigned int)(v28 + 1);
          }
          while ( (unsigned int)v28 < a2 );
          v31 = v28 - v29;
          if ( (unsigned int)(v28 - v29 - 1) > 0xF )
            goto LABEL_52;
          v32 = v31;
          wcsncpy_s(v23, 0x11uLL, v30, v31);
          v23[v32] = 0;
          v33 = ExpTranslateHexStringToULONGLONG(v23, a5);
          if ( v33 < 0 )
          {
            v21 = v33;
            goto LABEL_53;
          }
          v13 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v13 >= a2 )
            goto LABEL_52;
          v34 = v13;
          v35 = &Src[v13];
          do
          {
            if ( Src[v13] == 41 )
              break;
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < a2 );
          v36 = v13 - v34;
          if ( (unsigned int)(v13 - v34 - 1) > 0xF )
          {
LABEL_52:
            v21 = -1073741811;
            goto LABEL_53;
          }
          v37 = v36;
          wcsncpy_s(v23, 0x11uLL, v35, v36);
          v23[v37] = 0;
          v21 = ExpTranslateHexStringToULONGLONG(v23, a6);
          ExFreePoolWithTag(v23, 0);
          if ( v21 < 0 )
            return v21;
          goto LABEL_47;
        }
        return -1073741670;
      }
    }
    return -1073741811;
  }
  LODWORD(v13) = v13 + 1;
  GuidString.Buffer = Src;
  GuidString.Length = 2 * v13;
  GuidString.MaximumLength = 2 * v13;
  result = RtlGUIDFromString(&GuidString, a3);
  if ( result >= 0 )
    goto LABEL_25;
  return result;
}
