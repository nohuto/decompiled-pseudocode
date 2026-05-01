/*
 * XREFs of QueryTransientObjectSecurityDescriptor @ 0x18001A034
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x1800199CC (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     QuerySecurityDescriptorValue @ 0x180019E50 (QuerySecurityDescriptorValue.c)
 *     AccessHlprFree @ 0x18001A148 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001A224 (RtlStringCbCatW.c)
 *     GetNormalizedObjectPath @ 0x18001A310 (GetNormalizedObjectPath.c)
 *     RtlStringCbLengthW @ 0x18001A4B0 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     RtlStringCbPrintfExW @ 0x180038688 (RtlStringCbPrintfExW.c)
 */

__int64 __fastcall QueryTransientObjectSecurityDescriptor(__int64 a1, __int64 a2, PSECURITY_DESCRIPTOR *a3)
{
  PSID *v4; // r12
  const WCHAR *v5; // r13
  unsigned int v6; // edi
  signed int NormalizedObjectPath; // ebx
  _DWORD *v9; // rsi
  PVOID Heap; // rax
  PVOID v11; // rdi
  const wchar_t *v12; // r15
  const wchar_t *v13; // rcx
  unsigned int v14; // r14d
  wchar_t *v15; // rax
  SIZE_T v16; // r8
  SIZE_T v17; // rax
  __int64 v18; // rcx
  SIZE_T v19; // rsi
  const WCHAR *v20; // rax
  const WCHAR *v21; // rbx
  wchar_t v22; // [rsp+48h] [rbp-29h]
  SIZE_T Size; // [rsp+50h] [rbp-21h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-19h] BYREF
  HLOCAL v25; // [rsp+60h] [rbp-11h] BYREF
  const WCHAR *v26; // [rsp+68h] [rbp-9h] BYREF
  HLOCAL hMem; // [rsp+70h] [rbp-1h] BYREF
  __int64 v28; // [rsp+78h] [rbp+7h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+Fh] BYREF
  wchar_t *v30; // [rsp+88h] [rbp+17h]
  PSECURITY_DESCRIPTOR *pDestinationSecurityDescriptor; // [rsp+90h] [rbp+1Fh]
  wchar_t SubStr[4]; // [rsp+98h] [rbp+27h] BYREF

  wcscpy(SubStr, L"%s");
  v4 = 0LL;
  v5 = 0LL;
  pDestinationSecurityDescriptor = a3;
  v6 = 0;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  hMem = 0LL;
  if ( !a3 )
  {
    NormalizedObjectPath = -1073741811;
    goto LABEL_4;
  }
  NormalizedObjectPath = GetNormalizedObjectPath(a1, a2, &v28);
  if ( NormalizedObjectPath >= 0 )
  {
    NormalizedObjectPath = QuerySecurityDescriptorValue(v28, &v24);
    if ( NormalizedObjectPath >= 0 )
    {
      v9 = v24;
      if ( v24[1] == 3 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)v24[2]);
        v11 = Heap;
        if ( Heap )
        {
          memcpy_0(Heap, v24 + 3, (unsigned int)v9[2]);
          *a3 = v11;
          goto LABEL_4;
        }
        goto LABEL_12;
      }
      if ( v24[1] != 1 )
      {
        NormalizedObjectPath = -1073739509;
        goto LABEL_4;
      }
      v4 = (PSID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x54uLL);
      if ( v4 )
      {
        NormalizedObjectPath = NtQueryInformationToken(
                                 (HANDLE)0xFFFFFFFFFFFFFFFALL,
                                 TokenUser,
                                 v4,
                                 0x54u,
                                 &ReturnLength);
        if ( NormalizedObjectPath < 0 )
          goto LABEL_4;
        if ( !ConvertSidToStringSidW(*v4, (LPWSTR *)&v25) )
          goto LABEL_21;
        NormalizedObjectPath = RtlStringCbLengthW(v25, 4294967294LL, &Size);
        if ( NormalizedObjectPath < 0 )
          goto LABEL_4;
        v12 = (const wchar_t *)(v24 + 3);
        v13 = (const wchar_t *)(v24 + 3);
        v14 = 0;
        while ( 1 )
        {
          v15 = wcsstr(v13, SubStr);
          if ( !v15 )
            break;
          v13 = v15 + 2;
          ++v6;
        }
        NormalizedObjectPath = -1073741675;
        v16 = Size * v6;
        if ( !is_mul_ok(Size, v6) )
          goto LABEL_4;
        v17 = -1LL;
        v18 = (unsigned int)v24[2] - 4LL * v6;
        if ( v18 + v16 >= v16 )
          v17 = v18 + v16;
        Size = v17;
        NormalizedObjectPath = v18 + v16 < v16 ? 0xC0000095 : 0;
        if ( v18 + v16 < v16 )
          goto LABEL_4;
        v19 = Size;
        v20 = (const WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
        v5 = v20;
        if ( v20 )
        {
          v26 = v20;
          v21 = v20;
          if ( v6 )
          {
            do
            {
              v30 = wcsstr(v12, SubStr) + 2;
              v22 = *v30;
              *v30 = 0;
              NormalizedObjectPath = RtlStringCbPrintfExW(
                                       (_DWORD)v21,
                                       v19,
                                       (unsigned int)&v26,
                                       (unsigned int)&Size,
                                       0,
                                       (__int64)v12,
                                       (char)v25);
              if ( NormalizedObjectPath < 0 )
                goto LABEL_4;
              v12 = v30;
              ++v14;
              v19 = Size;
              v21 = v26;
              *v30 = v22;
            }
            while ( v14 < v6 );
          }
          NormalizedObjectPath = RtlStringCbCatW(v21, v19, v12);
          if ( NormalizedObjectPath < 0 )
            goto LABEL_4;
          if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v5, 1u, &hMem, 0LL) )
          {
            NormalizedObjectPath = RtlCopySecurityDescriptor(hMem, pDestinationSecurityDescriptor);
            goto LABEL_4;
          }
LABEL_21:
          NormalizedObjectPath = -1073741823;
          goto LABEL_4;
        }
      }
LABEL_12:
      NormalizedObjectPath = -1073741801;
    }
  }
LABEL_4:
  if ( hMem )
    LocalFree(hMem);
  if ( v25 )
    LocalFree(v25);
  AccessHlprFree(v5);
  AccessHlprFree(v4);
  AccessHlprFree(0LL);
  AccessHlprFree(v24);
  AccessHlprFree(v28);
  return (unsigned int)NormalizedObjectPath;
}
