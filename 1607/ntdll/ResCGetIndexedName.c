/*
 * XREFs of ResCGetIndexedName @ 0x180095790
 * Callers:
 *     ResCGetHighestConsecutiveCacheIndex @ 0x180104F74 (ResCGetHighestConsecutiveCacheIndex.c)
 *     ResCGetSubIndexedName @ 0x18010543C (ResCGetSubIndexedName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180102D38 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ResCGetName @ 0x180105058 (ResCGetName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1801054F0 (_CopyLowerCaseAndSubstitute.c)
 */

__int64 __fastcall ResCGetIndexedName(__int64 a1, __int64 a2, int a3, wchar_t *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  const wchar_t *v9; // r12
  const wchar_t *v10; // rcx
  const wchar_t *v11; // r13
  int v12; // edi
  const wchar_t *v14; // rax
  int v15; // eax
  const wchar_t *v16; // rax
  int v17; // eax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  PVOID Heap; // rax
  void *v21; // rdi
  const wchar_t *v22; // rax
  PVOID v23; // rax
  __int64 v24; // [rsp+28h] [rbp-40h]
  PVOID BaseAddress; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = a2 & 0xFF00;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -2147467259;
  if ( !a4 )
    return 0LL;
  if ( a3 < 0 )
    return ResCGetName(a1, a2, a4);
  if ( (unsigned __int8)a2 != 1 )
  {
    switch ( (unsigned __int8)a2 )
    {
      case 4u:
        if ( ((v5 - 256) & 0xFFFFFBFF) == 0 )
        {
          v19 = L"ResCache.dir";
LABEL_19:
          v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s", a1, L"rc", a3, v19);
          goto LABEL_7;
        }
        if ( v5 != 512 )
        {
          if ( v5 == 768 )
          {
            v14 = L".init";
          }
          else
          {
            if ( v5 != 1024 )
              goto LABEL_59;
            v14 = L".owner";
          }
          v15 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s%s", a1, a3, L"Directory", v14);
          goto LABEL_7;
        }
        v18 = L"Directory";
        break;
      case 5u:
        v9 = L"Segment";
        v11 = L"Segment";
        v10 = L".cmf";
        goto LABEL_59;
      case 6u:
        v9 = L"Segment";
        v10 = L".toc";
        goto LABEL_59;
      case 0xBu:
        if ( v5 != 256 )
          goto LABEL_60;
        v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d%s", a1, L"Upd", a3, L".tmp");
        goto LABEL_7;
      case 0xEu:
        if ( ((v5 - 256) & 0xFFFFFBFF) == 0 )
        {
          v19 = L"ResCache.hit";
          goto LABEL_19;
        }
        if ( v5 != 512 )
          goto LABEL_59;
        v18 = L"CmfHits";
        break;
      default:
        goto LABEL_59;
    }
    v15 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s", a1, a3, v18);
LABEL_7:
    v12 = v15;
LABEL_8:
    if ( v12 >= 0 )
    {
LABEL_9:
      a4[259] = 0;
      LOBYTE(v4) = v12 >= 0;
      return v4;
    }
    v10 = 0LL;
LABEL_59:
    if ( v5 == 256 )
    {
      if ( !v9 )
        goto LABEL_9;
      LODWORD(v24) = a3;
      v17 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%d%s", a1, v9, v24, v10);
      goto LABEL_13;
    }
LABEL_60:
    switch ( v5 )
    {
      case 512:
        if ( !v11 )
          goto LABEL_9;
        LODWORD(v24) = a3;
        v17 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d", a1, v11, v24);
        goto LABEL_13;
      case 768:
        if ( !v11 )
          goto LABEL_9;
        v16 = L".init";
        break;
      case 1024:
        if ( !v11 )
          goto LABEL_9;
        v16 = L".owner";
        break;
      default:
        if ( v5 != 1280 || !v9 )
          goto LABEL_9;
        LODWORD(v24) = a3;
        v17 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s*%s", a1, L"rc", v24, v9, v10);
        goto LABEL_13;
    }
    LODWORD(v24) = a3;
    v17 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d%s", a1, v11, v24, v16);
LABEL_13:
    v12 = v17;
    goto LABEL_9;
  }
  if ( ((v5 - 256) & 0xFFFFFBFF) == 0 )
  {
    v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d", a1, L"rc", a3);
    goto LABEL_7;
  }
  if ( v5 == 768 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    BaseAddress = Heap;
    v21 = Heap;
    if ( Heap )
    {
      if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, Heap) )
      {
LABEL_23:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
        return 0LL;
      }
      v22 = L".init";
LABEL_26:
      v12 = StringCchPrintfW(a4, 0x103uLL, L"Global\\%s/%s%04d%s", v21, L"rc", a3, v22);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      goto LABEL_8;
    }
  }
  else
  {
    if ( v5 != 1024 )
      goto LABEL_59;
    v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    BaseAddress = v23;
    v21 = v23;
    if ( v23 )
    {
      if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, v23) )
        goto LABEL_23;
      v22 = L".owner";
      goto LABEL_26;
    }
  }
  return 0LL;
}
