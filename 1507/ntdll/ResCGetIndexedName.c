/*
 * XREFs of ResCGetIndexedName @ 0x1800FAE54
 * Callers:
 *     ResCGetHighestConsecutiveCacheIndex @ 0x1800FAD70 (ResCGetHighestConsecutiveCacheIndex.c)
 *     ResCGetSubIndexedName @ 0x1800FB67C (ResCGetSubIndexedName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F8A8C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ResCGetName @ 0x1800FB298 (ResCGetName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x1800FB730 (_CopyLowerCaseAndSubstitute.c)
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
  const wchar_t *v17; // rax
  PVOID v18; // rax
  void *v19; // rdi
  const wchar_t *v20; // rax
  PVOID Heap; // rax
  int v22; // eax
  const wchar_t *v23; // rax
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
        if ( ((v5 - 256) & 0xFFFFFBFF) != 0 )
        {
          if ( v5 != 512 )
          {
            if ( v5 == 768 )
            {
              v17 = L".init";
            }
            else
            {
              if ( v5 != 1024 )
                goto LABEL_46;
              v17 = L".owner";
            }
            v15 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s%s", a1, a3, L"Directory", v17);
            goto LABEL_43;
          }
          v14 = L"Directory";
          goto LABEL_13;
        }
        v16 = L"ResCache.dir";
        break;
      case 5u:
        v9 = L"Segment";
        v11 = L"Segment";
        v10 = L".cmf";
        goto LABEL_46;
      case 6u:
        v9 = L"Segment";
        v10 = L".toc";
        goto LABEL_46;
      case 0xBu:
        if ( v5 != 256 )
          goto LABEL_47;
        v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d%s", a1, L"Upd", a3, L".tmp");
        goto LABEL_43;
      case 0xEu:
        if ( ((v5 - 256) & 0xFFFFFBFF) != 0 )
        {
          if ( v5 != 512 )
            goto LABEL_46;
          v14 = L"CmfHits";
LABEL_13:
          v15 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s", a1, a3, v14);
LABEL_43:
          v12 = v15;
          goto LABEL_44;
        }
        v16 = L"ResCache.hit";
        break;
      default:
        goto LABEL_46;
    }
    v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s", a1, L"rc", a3, v16);
    goto LABEL_43;
  }
  if ( ((v5 - 256) & 0xFFFFFBFF) == 0 )
  {
    v15 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d", a1, L"rc", a3);
    goto LABEL_43;
  }
  if ( v5 != 768 )
  {
    if ( v5 != 1024 )
      goto LABEL_46;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    BaseAddress = Heap;
    v19 = Heap;
    if ( Heap )
    {
      if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, Heap) )
        goto LABEL_34;
      v20 = L".owner";
      goto LABEL_37;
    }
    return 0LL;
  }
  v18 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  BaseAddress = v18;
  v19 = v18;
  if ( !v18 )
    return 0LL;
  if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, v18) )
  {
LABEL_34:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    return 0LL;
  }
  v20 = L".init";
LABEL_37:
  v12 = StringCchPrintfW(a4, 0x103uLL, L"Global\\%s/%s%04d%s", v19, L"rc", a3, v20);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
LABEL_44:
  if ( v12 >= 0 )
    goto LABEL_63;
  v10 = 0LL;
LABEL_46:
  if ( v5 == 256 )
  {
    if ( v9 )
    {
      LODWORD(v24) = a3;
      v22 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%d%s", a1, v9, v24, v10);
      goto LABEL_62;
    }
    goto LABEL_63;
  }
LABEL_47:
  switch ( v5 )
  {
    case 512:
      if ( v11 )
      {
        LODWORD(v24) = a3;
        v22 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d", a1, v11, v24);
        goto LABEL_62;
      }
      break;
    case 768:
      if ( v11 )
      {
        v23 = L".init";
        goto LABEL_55;
      }
      break;
    case 1024:
      if ( v11 )
      {
        v23 = L".owner";
LABEL_55:
        LODWORD(v24) = a3;
        v22 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d%s", a1, v11, v24, v23);
LABEL_62:
        v12 = v22;
      }
      break;
    default:
      if ( v5 != 1280 || !v9 )
        break;
      LODWORD(v24) = a3;
      v22 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s*%s", a1, L"rc", v24, v9, v10);
      goto LABEL_62;
  }
LABEL_63:
  a4[259] = 0;
  LOBYTE(v4) = v12 >= 0;
  return v4;
}
