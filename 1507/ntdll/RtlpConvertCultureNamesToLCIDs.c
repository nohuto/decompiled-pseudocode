/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x1800D59A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpMultiSZCchLength @ 0x18006B168 (LdrpMultiSZCchLength.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     wcsnlen @ 0x180089C00 (wcsnlen.c)
 *     RtlConvertLCIDToString @ 0x1800D4690 (RtlConvertLCIDToString.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, _QWORD *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rdi
  void *v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  DWORD *v10; // rax
  unsigned int v11; // r12d
  PVOID Heap; // rax
  WCHAR *v13; // rdi
  unsigned int v14; // r14d
  LCID *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+30h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  DWORD v21[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v19) < 0 )
    return 3221225485LL;
  v7 = 2 * v19;
  while ( *v4 && v7 )
  {
    if ( v6 >= 4 )
      goto LABEL_16;
    v8 = 2 * wcsnlen(v4, (unsigned __int64)v7 >> 1);
    RtlInitUnicodeString(&DestinationString, v4);
    if ( !RtlCultureNameToLCID(&DestinationString, &v21[v6]) )
      goto LABEL_16;
    v9 = 0;
    if ( v6 )
    {
      v10 = v21;
      while ( v21[v6] != *v10 )
      {
        ++v9;
        ++v10;
        if ( v9 >= v6 )
          goto LABEL_14;
      }
LABEL_16:
      v2 = -1073741811;
LABEL_28:
      *a2 = v5;
      return v2;
    }
LABEL_14:
    v4 = (const wchar_t *)((char *)v4 + v8 + 2);
    ++v6;
    v7 += -2 - v8;
    if ( !v4 )
      break;
  }
  v11 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(((_WORD)v6 << 6) + 4));
  v5 = Heap;
  if ( !Heap )
  {
    v2 = -1073741801;
    goto LABEL_28;
  }
  v13 = (WCHAR *)Heap;
  v14 = 0;
  if ( !v6 )
  {
LABEL_27:
    *(_DWORD *)v13 = 0;
    goto LABEL_28;
  }
  v15 = v21;
  while ( 1 )
  {
    RtlConvertLCIDToString(*v15, 0x10u, 4u, v13, 0x20u);
    v16 = -1LL;
    do
      ++v16;
    while ( v13[v16] );
    v11 += -2 - v16;
    v17 = -1LL;
    do
      ++v17;
    while ( v13[v17] );
    v13 += v17 + 1;
    if ( v11 < 4 )
      break;
    ++v14;
    ++v15;
    if ( v14 >= v6 )
      goto LABEL_27;
  }
  v2 = -1073741595;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v2;
}
