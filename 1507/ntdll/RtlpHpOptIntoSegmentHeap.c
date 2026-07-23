/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x1800EA77C
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180064870 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180085900 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  struct _PEB *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax
  _WORD *i; // rcx
  const wchar_t *v6; // rbp
  unsigned int v7; // esi
  size_t v8; // r15
  const wchar_t **v9; // r14
  const wchar_t *v10; // r12
  __int64 v11; // rax
  ULONG_PTR PackageSize; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v14[7]; // [rsp+38h] [rbp-160h] BYREF
  WCHAR PackageFullName[128]; // [rsp+70h] [rbp-128h] BYREF

  v1 = 0;
  v14[0] = L"svchost.exe";
  v14[1] = L"runtimebroker.exe";
  v14[2] = L"csrss.exe";
  v14[3] = L"smss.exe";
  v14[4] = L"services.exe";
  v14[5] = L"lsass.exe";
  v2 = NtCurrentPeb();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
    goto LABEL_21;
  if ( MEMORY[0x7FFE0268] && MEMORY[0x7FFE0264] != 1 )
    return v1;
  if ( (v2->BitField & 0x10) != 0 )
  {
LABEL_21:
    v1 = 1;
    RtlpHpAppCompatFlags &= 0xFFFFFFFC;
    return v1;
  }
  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 1);
    v4 = 0;
    for ( i = (_WORD *)(v3 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v3; --i )
    {
      if ( *i == 92 )
      {
        if ( v4 )
        {
          v6 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v7 = 0;
            v8 = v4;
            v9 = (const wchar_t **)v14;
            while ( 1 )
            {
              v10 = *v9;
              if ( !wcsnicmp(v6, *v9, v8) )
              {
                v11 = -1LL;
                do
                  ++v11;
                while ( v10[v11] );
                if ( v8 == v11 )
                  goto LABEL_21;
              }
              ++v7;
              ++v9;
              if ( v7 >= 6 )
                goto LABEL_19;
            }
          }
        }
        break;
      }
      ++v4;
    }
LABEL_19:
    PackageSize = 256LL;
    if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL) < 0
      || wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      return v1;
    }
    goto LABEL_21;
  }
  return v1;
}
