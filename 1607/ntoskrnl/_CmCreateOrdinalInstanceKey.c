/*
 * XREFs of _CmCreateOrdinalInstanceKey @ 0x1406D78FC
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 * Callees:
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall CmCreateOrdinalInstanceKey(__int64 a1, char *a2, wchar_t *a3, ULONG a4, __int64 a5, HANDLE *a6)
{
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int i; // edi
  __int64 v13; // r9
  wchar_t v15; // ax
  int v16; // esi
  wchar_t *v17; // rcx
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  ULONG v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = a4;
  Handle = 0LL;
  v9 = 0;
  v10 = wcstoul(L"999A", 0LL, 36);
  v11 = wcstoul(L"ZZZZ", 0LL, 36);
  if ( v10 - 1 > 0xFFFFFFFD || v11 - 1 > 0xFFFFFFFD )
    return (unsigned int)-1073741595;
  for ( i = 0; ; i = v10 )
  {
LABEL_4:
    if ( i <= 0x270F )
    {
      if ( swprintf_s(a3, 5uLL, L"%04u", i) >= 0 )
        goto LABEL_12;
      return (unsigned int)-1073741595;
    }
    if ( i >= v10 )
      break;
  }
  if ( i > v11 )
    return (unsigned int)-2147483622;
  if ( ultow_s(i, a3, 5uLL, 36) )
    return (unsigned int)-1073741595;
LABEL_12:
  v15 = *a3;
  v16 = 1;
  v17 = a3;
  while ( 2 )
  {
    if ( v15 )
    {
      if ( v15 > 0x61u )
      {
        if ( v15 == 101 || v15 == 105 || v15 == 111 )
        {
LABEL_36:
          v20 = v17 - a3;
          v21 = 3 - v20;
          if ( (_DWORD)v20 != 3 )
          {
            do
            {
              v16 *= 36;
              --v21;
            }
            while ( v21 );
          }
          goto LABEL_35;
        }
        if ( v15 <= 0x74u )
          goto LABEL_29;
        if ( v15 <= 0x76u )
          goto LABEL_36;
        v18 = v15 == 121;
      }
      else
      {
        if ( v15 == 97 || v15 == 65 || v15 == 69 || v15 == 73 || v15 == 79 )
          goto LABEL_36;
        if ( v15 <= 0x54u )
          goto LABEL_29;
        if ( v15 <= 0x56u )
          goto LABEL_36;
        v18 = v15 == 89;
      }
      if ( v18 )
        goto LABEL_36;
LABEL_29:
      v15 = *++v17;
      continue;
    }
    break;
  }
  v19 = PnpCtxRegCreateKey(a1, a2, a3, v13, 1u, 0LL, &Handle, &v23);
  if ( v19 == -1073741444 )
    return (unsigned int)-1073741595;
  if ( v19 < 0 )
  {
    return (unsigned int)v19;
  }
  else
  {
    if ( v23 != 1 )
    {
      ZwClose(Handle);
      Handle = 0LL;
LABEL_35:
      i += v16;
      goto LABEL_4;
    }
    *a6 = Handle;
  }
  return v9;
}
