/*
 * XREFs of ResCGetName @ 0x1800FA76C
 * Callers:
 *     ResCGetIndexedName @ 0x180093F38 (ResCGetIndexedName.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x1800F7628 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCGetHighestCacheIndex @ 0x1800FA4F0 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x1800FA688 (ResCGetHighestConsecutiveCacheIndex.c)
 *     ResCGetSubIndexedName @ 0x1800FAB50 (ResCGetSubIndexedName.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F8464 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1800FAC04 (_CopyLowerCaseAndSubstitute.c)
 */

__int64 __fastcall ResCGetName(__int64 a1, __int16 a2, wchar_t *a3)
{
  unsigned int v3; // edi
  int v4; // esi
  const wchar_t *v7; // r13
  const wchar_t *v8; // r12
  void *v9; // r15
  int v10; // ebx
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  const unsigned __int16 *v13; // r8
  int v14; // eax
  const wchar_t *v15; // rax
  const unsigned __int16 *v16; // r8
  PVOID v17; // rax
  PVOID Heap; // rax
  int v19; // eax
  const wchar_t *v21; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v4 = a2 & 0xFF00;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = -2147467259;
  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a2 > 8u )
  {
    if ( (unsigned __int8)a2 != 9 )
    {
      if ( (unsigned __int8)a2 == 10 )
      {
        if ( v4 == 256 )
        {
          v21 = L"tmp";
          v13 = L"%s\\%s\\%s";
          v12 = L"upd";
          goto LABEL_16;
        }
        goto LABEL_67;
      }
      if ( (unsigned __int8)a2 != 11 )
      {
        switch ( (unsigned __int8)a2 )
        {
          case 0xCu:
            if ( v4 != 256 )
              goto LABEL_67;
            v15 = L"Rdy-";
            break;
          case 0xDu:
            if ( v4 != 256 )
              goto LABEL_67;
            v15 = L"Upd-";
            break;
          case 0xEu:
            if ( v4 != 1280 )
            {
              v7 = L"ResCache.hit";
              v8 = L"CmfHits";
              goto LABEL_66;
            }
            v15 = L"ResCache.hit";
            goto LABEL_22;
          default:
            goto LABEL_67;
        }
        v16 = L"%s%s";
        goto LABEL_64;
      }
      if ( v4 == 1280 )
      {
        v21 = L".tmp";
        v12 = L"Upd";
        goto LABEL_15;
      }
      if ( v4 != 256 )
        goto LABEL_67;
      v14 = StringCchPrintfW(a3, 0x103uLL, L"%s\\", a1);
LABEL_65:
      v10 = v14;
LABEL_66:
      if ( v10 >= 0 )
        goto LABEL_73;
      goto LABEL_67;
    }
    if ( v4 != 256 )
      goto LABEL_67;
    v15 = L"upd";
LABEL_63:
    v16 = L"%s\\%s";
    goto LABEL_64;
  }
  if ( (unsigned __int8)a2 == 8 )
  {
    if ( ((v4 - 256) & 0xFFFFFBFF) != 0 )
    {
      if ( v4 != 1024 )
        goto LABEL_67;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
      v9 = Heap;
      if ( !Heap || !(unsigned int)CopyLowerCaseAndSubstitute(a1, Heap) )
        goto LABEL_67;
      v14 = StringCchPrintfW(a3, 0x103uLL, L"Global\\%s%s%s", v9, L"wip", L".owner");
      goto LABEL_65;
    }
    v15 = L"wip";
    goto LABEL_63;
  }
  if ( (unsigned __int8)a2 == 1 )
  {
    if ( v4 == 256 )
    {
      v14 = StringCchPrintfW(a3, 0x103uLL, L"%s", a1);
      goto LABEL_65;
    }
    if ( v4 != 1024 )
    {
      if ( v4 != 1280 )
        goto LABEL_67;
      v15 = L"rc";
      v16 = L"%s\\%s*";
      goto LABEL_64;
    }
    v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v9 = v17;
    if ( !v17 || !(unsigned int)CopyLowerCaseAndSubstitute(a1, v17) )
      goto LABEL_67;
    v14 = StringCchPrintfW(a3, 0x103uLL, L"Global\\%s/base%s", v9, L".owner");
    goto LABEL_65;
  }
  if ( (unsigned __int8)a2 == 2 )
  {
    v7 = L"ResCache.ccm";
    goto LABEL_67;
  }
  if ( (unsigned __int8)a2 == 3 )
  {
    v7 = L"ResCache.mni";
    goto LABEL_67;
  }
  if ( (unsigned __int8)a2 == 4 )
  {
    if ( v4 != 1280 )
    {
      v7 = L"ResCache.dir";
      v8 = L"Directory";
      goto LABEL_66;
    }
    v15 = L"ResCache.dir";
LABEL_22:
    v16 = L"%s\\*\\%s";
LABEL_64:
    v14 = StringCchPrintfW(a3, 0x103uLL, v16, a1, v15);
    goto LABEL_65;
  }
  if ( (unsigned __int8)a2 == 5 )
  {
    if ( v4 == 1280 )
    {
      v11 = L".cmf";
      goto LABEL_14;
    }
  }
  else
  {
    if ( (unsigned __int8)a2 != 6 )
    {
      if ( (unsigned __int8)a2 == 7 )
        v7 = L"ResCache.usg";
      goto LABEL_67;
    }
    if ( v4 == 1280 )
    {
      v11 = L".toc";
LABEL_14:
      v21 = v11;
      v12 = L"Segment";
LABEL_15:
      v13 = L"%s\\%s*%s";
LABEL_16:
      v14 = StringCchPrintfW(a3, 0x103uLL, v13, a1, v12, v21);
      goto LABEL_65;
    }
  }
LABEL_67:
  switch ( v4 )
  {
    case 256:
      goto LABEL_70;
    case 512:
      if ( !v8 )
        break;
      v19 = StringCchPrintfW(a3, 0x103uLL, L"%s%s", a1, v8);
      goto LABEL_72;
    case 1280:
LABEL_70:
      if ( v7 )
      {
        v19 = StringCchPrintfW(a3, 0x103uLL, L"%s\\%s", a1, v7);
LABEL_72:
        v10 = v19;
      }
      break;
  }
LABEL_73:
  a3[259] = 0;
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  LOBYTE(v3) = v10 >= 0;
  return v3;
}
