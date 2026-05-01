/*
 * XREFs of QueryTransientObjectSecurityDescriptor @ 0x18001E8A0
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001E360 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022680 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 * Callees:
 *     GetNormalizedObjectPath @ 0x18001E458 (GetNormalizedObjectPath.c)
 *     QuerySecurityDescriptorValue @ 0x18001E64C (QuerySecurityDescriptorValue.c)
 *     AccessHlprFree @ 0x18001E9F8 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001EAE4 (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x18001EB5C (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     RtlStringCbPrintfExW @ 0x18005475C (RtlStringCbPrintfExW.c)
 */

__int64 __fastcall QueryTransientObjectSecurityDescriptor(int a1, __int64 a2, PSECURITY_DESCRIPTOR *a3)
{
  PSID *v4; // r13
  const WCHAR *v5; // r12
  unsigned int v6; // edi
  int NormalizedObjectPath; // ebx
  _DWORD *v9; // rsi
  PVOID Heap; // rax
  PVOID v11; // rdi
  const wchar_t *v12; // r15
  const wchar_t *v13; // rcx
  unsigned int v14; // r14d
  wchar_t *v15; // rax
  SIZE_T v16; // r8
  SIZE_T v17; // rax
  SIZE_T v18; // rsi
  const WCHAR *v19; // rax
  const WCHAR *v20; // rbx
  wchar_t *v21; // r12
  wchar_t v22; // [rsp+40h] [rbp-39h]
  SIZE_T Size; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v24; // [rsp+50h] [rbp-29h] BYREF
  LPWSTR StringSid; // [rsp+58h] [rbp-21h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-19h] BYREF
  const WCHAR *v27; // [rsp+68h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-9h] BYREF
  const WCHAR *v29; // [rsp+78h] [rbp-1h]
  ULONG ReturnLength; // [rsp+80h] [rbp+7h] BYREF
  PSECURITY_DESCRIPTOR *pDestinationSecurityDescriptor; // [rsp+88h] [rbp+Fh]
  wchar_t SubStr[4]; // [rsp+90h] [rbp+17h] BYREF

  wcscpy(SubStr, L"%s");
  v4 = 0LL;
  v5 = 0LL;
  pDestinationSecurityDescriptor = a3;
  v6 = 0;
  v28 = 0LL;
  v24 = 0LL;
  StringSid = 0LL;
  SecurityDescriptor = 0LL;
  if ( !a2 || !a3 )
  {
    NormalizedObjectPath = -1073741811;
    goto LABEL_5;
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
          goto LABEL_5;
        }
        goto LABEL_13;
      }
      if ( v24[1] != 1 )
      {
        NormalizedObjectPath = -1073739509;
        goto LABEL_5;
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
          goto LABEL_5;
        if ( !ConvertSidToStringSidW(*v4, &StringSid) )
          goto LABEL_22;
        NormalizedObjectPath = RtlStringCbLengthW(StringSid, 4294967294LL, &Size);
        if ( NormalizedObjectPath < 0 )
          goto LABEL_5;
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
        v16 = Size * v6;
        if ( !is_mul_ok(Size, v6) || (v17 = v16 + (unsigned int)v24[2] - 4LL * v6, v17 < v16) )
        {
          NormalizedObjectPath = -1073741675;
          goto LABEL_5;
        }
        Size = v16 + (unsigned int)v24[2] - 4LL * v6;
        v18 = v17;
        v19 = (const WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        v29 = v19;
        v5 = v19;
        if ( v19 )
        {
          v27 = v19;
          v20 = v19;
          if ( v6 )
          {
            while ( 1 )
            {
              v21 = wcsstr(v12, SubStr);
              v22 = v21[2];
              v21[2] = 0;
              NormalizedObjectPath = RtlStringCbPrintfExW(
                                       (_DWORD)v20,
                                       v18,
                                       (unsigned int)&v27,
                                       (unsigned int)&Size,
                                       0,
                                       (__int64)v12,
                                       (char)StringSid);
              if ( NormalizedObjectPath < 0 )
                goto LABEL_34;
              v12 = v21 + 2;
              v18 = Size;
              ++v14;
              v20 = v27;
              v21[2] = v22;
              if ( v14 >= v6 )
              {
                v5 = v29;
                break;
              }
            }
          }
          NormalizedObjectPath = RtlStringCbCatW(v20, v18, v12);
          if ( NormalizedObjectPath < 0 )
          {
LABEL_34:
            v5 = v29;
            goto LABEL_5;
          }
          if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v5, 1u, &SecurityDescriptor, 0LL) )
          {
            NormalizedObjectPath = RtlCopySecurityDescriptor(SecurityDescriptor, pDestinationSecurityDescriptor);
            goto LABEL_5;
          }
LABEL_22:
          NormalizedObjectPath = -1073741823;
          goto LABEL_5;
        }
      }
LABEL_13:
      NormalizedObjectPath = -1073741801;
    }
  }
LABEL_5:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( StringSid )
    LocalFree(StringSid);
  AccessHlprFree(v5);
  AccessHlprFree(v4);
  AccessHlprFree(0LL);
  AccessHlprFree(v24);
  AccessHlprFree(v28);
  return (unsigned int)NormalizedObjectPath;
}
