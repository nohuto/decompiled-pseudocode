/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x18005DA38
 * Callers:
 *     RtlInitializeHeapManager @ 0x18005D72C (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x18005E010 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180098480 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1)
{
  struct _PEB *v1; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  _WORD *i; // rcx
  const wchar_t *v7; // r15
  unsigned int v8; // esi
  size_t v9; // r12
  const wchar_t **v10; // r14
  const wchar_t *v11; // r13
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[6]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[128]; // [rsp+70h] [rbp-90h] BYREF

  v1 = NtCurrentPeb();
  v16[0] = L"svchost.exe";
  v3 = 0;
  v16[1] = L"runtimebroker.exe";
  v16[2] = L"csrss.exe";
  v16[3] = L"smss.exe";
  v16[4] = L"services.exe";
  v16[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    goto LABEL_18;
  if ( RtlGetNtProductType(&v14) && v14 != 1 )
    return v3;
  if ( (v1->BitField & 0x10) != 0 )
  {
LABEL_18:
    v3 = 1;
    RtlpHpAppCompatFlags &= 0xFFFFFFFC;
    return v3;
  }
  if ( a1 )
  {
    v4 = 0;
    v5 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v5 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v5; --i )
    {
      if ( *i == 92 )
      {
        if ( v4 )
        {
          v7 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v8 = 0;
            v9 = v4;
            v10 = (const wchar_t **)v16;
            while ( 1 )
            {
              v11 = *v10;
              if ( !wcsnicmp(v7, *v10, v9) )
              {
                v12 = -1LL;
                do
                  ++v12;
                while ( v11[v12] );
                if ( v9 == v12 )
                  goto LABEL_18;
              }
              ++v8;
              ++v10;
              if ( v8 >= 6 )
                goto LABEL_8;
            }
          }
        }
        break;
      }
      ++v4;
    }
LABEL_8:
    v15 = 256LL;
    if ( (int)RtlQueryPackageIdentity(-4, (unsigned int)String1, (unsigned int)&v15, 0, 0LL, 0LL) >= 0
      && !wcsnicmp(String1, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      goto LABEL_18;
    }
  }
  return v3;
}
