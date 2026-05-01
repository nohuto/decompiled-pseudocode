/*
 * XREFs of QueryTransientObjectSecurityDescriptor @ 0x180001850
 * Callers:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x180001D80 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 * Callees:
 *     QuerySecurityDescriptorValue @ 0x1800019E0 (QuerySecurityDescriptorValue.c)
 *     GetNormalizedObjectPath @ 0x180001F60 (GetNormalizedObjectPath.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180008DEC (memcpy_0.c)
 *     RtlStringCbCatW @ 0x180011068 (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x1800110E8 (RtlStringCbLengthW.c)
 *     RtlStringCbPrintfExW @ 0x180011148 (RtlStringCbPrintfExW.c)
 */

__int64 __fastcall QueryTransientObjectSecurityDescriptor(__int64 a1, __int64 a2, PSECURITY_DESCRIPTOR *a3)
{
  PSID *v4; // rsi
  WCHAR *v5; // r14
  unsigned int v6; // r12d
  NTSTATUS NormalizedObjectPath; // ebx
  unsigned int *v8; // r15
  int v9; // eax
  PVOID Heap; // rax
  PVOID v11; // r12
  const wchar_t *v13; // r13
  const wchar_t *v14; // rcx
  wchar_t *v15; // rax
  SIZE_T v16; // r8
  SIZE_T v17; // rax
  SIZE_T v18; // r15
  WCHAR *v19; // rax
  WCHAR *v20; // rbx
  wchar_t *v21; // rax
  wchar_t v22; // [rsp+48h] [rbp-39h]
  PVOID P; // [rsp+50h] [rbp-31h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-29h] BYREF
  int v25; // [rsp+60h] [rbp-21h]
  LPWSTR StringSid; // [rsp+68h] [rbp-19h] BYREF
  PVOID v27; // [rsp+70h] [rbp-11h] BYREF
  WCHAR *v28; // [rsp+78h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-1h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+7h] BYREF
  wchar_t *v31; // [rsp+90h] [rbp+Fh]
  wchar_t SubStr[4]; // [rsp+98h] [rbp+17h] BYREF

  wcscpy(SubStr, L"%s");
  v4 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0;
  P = 0LL;
  StringSid = 0LL;
  SecurityDescriptor = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  NormalizedObjectPath = GetNormalizedObjectPath(0LL, a2, &v27);
  if ( NormalizedObjectPath >= 0 )
  {
    NormalizedObjectPath = QuerySecurityDescriptorValue(v27, &P);
    if ( NormalizedObjectPath >= 0 )
    {
      v8 = (unsigned int *)P;
      v9 = *((_DWORD *)P + 1);
      if ( v9 == 3 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, *((unsigned int *)P + 2));
        v11 = Heap;
        if ( Heap )
        {
          memcpy_0(Heap, (char *)P + 12, v8[2]);
          *a3 = v11;
        }
        else
        {
          NormalizedObjectPath = -1073741801;
        }
      }
      else if ( v9 == 1 )
      {
        v4 = (PSID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x54uLL);
        if ( v4 )
        {
          NormalizedObjectPath = NtQueryInformationToken(
                                   (HANDLE)0xFFFFFFFFFFFFFFFALL,
                                   TokenUser,
                                   v4,
                                   0x54u,
                                   &ReturnLength);
          if ( NormalizedObjectPath >= 0 )
          {
            if ( ConvertSidToStringSidW(*v4, &StringSid) )
            {
              NormalizedObjectPath = RtlStringCbLengthW(StringSid, 4294967294LL, &Size);
              if ( NormalizedObjectPath >= 0 )
              {
                v13 = (const wchar_t *)((char *)P + 12);
                v14 = (const wchar_t *)((char *)P + 12);
                while ( 1 )
                {
                  v15 = wcsstr(v14, SubStr);
                  if ( !v15 )
                    break;
                  v14 = v15 + 2;
                  ++v6;
                }
                v16 = Size * v6;
                if ( is_mul_ok(Size, v6) && (v17 = v16 + *((unsigned int *)P + 2) - 4LL * v6, v17 >= v16) )
                {
                  Size = v16 + *((unsigned int *)P + 2) - 4LL * v6;
                  v18 = v17;
                  v19 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
                  v5 = v19;
                  if ( v19 )
                  {
                    v28 = v19;
                    v20 = v19;
                    v25 = 0;
                    if ( v6 )
                    {
                      while ( 1 )
                      {
                        v21 = wcsstr(v13, SubStr);
                        v22 = v21[2];
                        v31 = v21 + 2;
                        v21[2] = 0;
                        NormalizedObjectPath = RtlStringCbPrintfExW(
                                                 (_DWORD)v20,
                                                 v18,
                                                 (unsigned int)&v28,
                                                 (unsigned int)&Size,
                                                 0,
                                                 (__int64)v13,
                                                 (char)StringSid);
                        if ( NormalizedObjectPath < 0 )
                          break;
                        v13 = v31;
                        v18 = Size;
                        v20 = v28;
                        *v31 = v22;
                        if ( ++v25 >= v6 )
                          goto LABEL_40;
                      }
                    }
                    else
                    {
LABEL_40:
                      NormalizedObjectPath = RtlStringCbCatW(v20, v18, v13);
                      if ( NormalizedObjectPath >= 0 )
                      {
                        if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v5, 1u, &SecurityDescriptor, 0LL) )
                          NormalizedObjectPath = RtlCopySecurityDescriptor(SecurityDescriptor, a3);
                        else
                          NormalizedObjectPath = -1073741823;
                      }
                    }
                  }
                  else
                  {
                    NormalizedObjectPath = -1073741801;
                  }
                }
                else
                {
                  NormalizedObjectPath = -1073741675;
                }
              }
            }
            else
            {
              NormalizedObjectPath = -1073741823;
            }
          }
        }
        else
        {
          NormalizedObjectPath = -1073741801;
        }
      }
      else
      {
        NormalizedObjectPath = -1073739509;
      }
    }
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( StringSid )
    LocalFree(StringSid);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
  return (unsigned int)NormalizedObjectPath;
}
