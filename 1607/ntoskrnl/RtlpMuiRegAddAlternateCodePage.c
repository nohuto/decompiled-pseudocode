/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1401406C0
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1405610C0 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x140561174 (LdrpQueryValueKey.c)
 */

void __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // rbx
  unsigned int v11; // r13d
  unsigned int v12; // esi
  const wchar_t *v13; // rdi
  _WORD *v14; // r15
  __int64 v15; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  int v19; // [rsp+A8h] [rbp+58h]

  v19 = 7;
  v4 = 0LL;
  LODWORD(v18) = 0;
  Value = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  v5 = LdrpQueryValueKey(a2, &DestinationString, (__int64)&v18);
  if ( v5 != -1073741772 )
  {
    v6 = v18;
    if ( (_DWORD)v18 )
    {
      if ( v5 == -2147483643 )
      {
        LODWORD(v18) = v18 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          v8 = v7;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x72746C6Du);
          v10 = PoolWithTag;
          if ( PoolWithTag )
            memset(PoolWithTag, 0, v8);
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v18) && (v19 == 1 || v19 == 7) )
          {
            v11 = 0;
            v12 = (unsigned int)v18 >> 1;
            v13 = v10;
            if ( (unsigned int)v18 >> 1 )
            {
              v14 = (_WORD *)(a1 + 20);
              while ( v13 && *v13 )
              {
                if ( !wcsicmp(v13, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  break;
                }
                RtlInitUnicodeString(&DestinationString, v13);
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) || (++v4, *v14 = Value, ++v14, v4 < 4) )
                {
                  v15 = -1LL;
                  do
                    ++v15;
                  while ( v13[v15] );
                  v11 += v15 + 1;
                  v13 += (unsigned int)(v15 + 1);
                  if ( v11 < v12 )
                    continue;
                }
                break;
              }
            }
          }
          ExFreePoolWithTag(v10, 0);
        }
      }
    }
  }
}
