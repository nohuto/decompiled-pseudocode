/*
 * XREFs of SepReadAndPopulateCapes @ 0x14056C24C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepRmCapPoolExpand @ 0x14021B3AC (SepRmCapPoolExpand.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepRegOpenKey @ 0x140475354 (SepRegOpenKey.c)
 *     SeValidSecurityDescriptor @ 0x140486C5C (SeValidSecurityDescriptor.c)
 */

__int64 __fastcall SepReadAndPopulateCapes(HANDLE KeyHandle, int a2, _DWORD *a3, PVOID *a4)
{
  ULONG v5; // r14d
  unsigned int *PoolWithTag; // r15
  ULONG *v8; // rdi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // r12
  _DWORD *v12; // rax
  char v13; // r14
  ULONG v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // eax
  PVOID v18; // rax
  char *v19; // rsi
  unsigned int v20; // ecx
  char *v21; // r14
  char *v22; // rsi
  __int16 v23; // ax
  char *v24; // rsi
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // esi
  ULONG v29; // esi
  unsigned int v30; // esi
  char *v31; // rsi
  char *v32; // rsi
  char *v33; // rsi
  __int64 v34; // rcx
  char *v35; // rsi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  char *v42; // [rsp+50h] [rbp-B0h]
  PVOID *v43; // [rsp+58h] [rbp-A8h]
  _DWORD *v44; // [rsp+60h] [rbp-A0h]
  wchar_t pszDest[344]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyInformation[560]; // [rsp+320h] [rbp+220h] BYREF

  v43 = a4;
  v44 = a3;
  Length = 0;
  v5 = 560;
  v37 = 0;
  Handle = 0LL;
  P = 0LL;
  PoolWithTag = (unsigned int *)KeyInformation;
  v8 = 0LL;
  v9 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x230u, &Length);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_2;
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
LABEL_4:
    if ( v10 >= 0 )
    {
      v13 = v37;
      goto LABEL_6;
    }
    goto LABEL_10;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x70536553u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    v13 = 0;
    goto LABEL_15;
  }
  v5 = Length;
  v37 = 1;
  v10 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, Length, &Length);
  if ( v10 >= 0 )
  {
LABEL_2:
    v11 = PoolWithTag[5];
    if ( !(_DWORD)v11 )
    {
      v12 = v44;
      *v43 = 0LL;
      *v12 = 0;
      goto LABEL_4;
    }
    v15 = a2 + 18;
    v16 = 56 * v11;
    v8 = (ULONG *)ExAllocatePoolWithTag(PagedPool, v15, 0x70536553u);
    if ( v8 )
    {
      v17 = 0;
      v40 = 0;
      while ( 1 )
      {
        LODWORD(ResultLength) = v17;
        v10 = RtlStringCbPrintfW(
                pszDest,
                0x157uLL,
                L"%s\\%d",
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                ResultLength);
        if ( v10 < 0 )
          break;
        v10 = SepRegOpenKey(pszDest, 0x201u, &Handle);
        if ( v10 < 0 )
          break;
        v26 = ZwQueryKey(Handle, KeyFullInformation, PoolWithTag, v5, &Length);
        v10 = v26;
        if ( v26 < 0 )
        {
          if ( v26 != -2147483643 && v26 != -1073741789 )
            goto LABEL_4;
          v13 = v37;
          if ( v37 )
            ExFreePoolWithTag(PoolWithTag, 0x70536553u);
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x70536553u);
          if ( !PoolWithTag )
          {
            v10 = -1073741670;
            goto LABEL_15;
          }
          v5 = Length;
          v37 = 1;
          v10 = ZwQueryKey(Handle, KeyFullInformation, PoolWithTag, Length, &Length);
          if ( v10 < 0 )
            break;
        }
        v27 = PoolWithTag[10] + 18;
        if ( v27 > v15 )
        {
          v8 = (ULONG *)SepRmCapPoolExpand(v8, v27);
          if ( !v8 )
            goto LABEL_35;
          v15 = v27;
        }
        v10 = ZwQueryValueKey(Handle, &CapeName, KeyValuePartialInformation, v8, v15, &Length);
        if ( v10 < 0 )
          break;
        v28 = v8[2] + ((v16 + 1) & 0xFFFFFFFE);
        v10 = ZwQueryValueKey(Handle, &CapePredicate, KeyValuePartialInformation, v8, v15, &Length);
        if ( v10 < 0 )
          break;
        v29 = v8[2] + v28;
        v10 = ZwQueryValueKey(Handle, &CapeSD, KeyValuePartialInformation, v8, v15, &Length);
        if ( v10 < 0 )
          break;
        v30 = v8[2] + ((v29 + 7) & 0xFFFFFFF8);
        v10 = ZwQueryValueKey(Handle, &CapeStagedSD, KeyValuePartialInformation, v8, v15, &Length);
        if ( v10 < 0 )
          break;
        v16 = v8[2] + ((v30 + 7) & 0xFFFFFFF8);
        ZwClose(Handle);
        Handle = 0LL;
        v17 = v40 + 1;
        v40 = v17;
        if ( v17 >= (unsigned int)v11 )
        {
          v18 = ExAllocatePoolWithTag(PagedPool, v16, 0x70536553u);
          P = v18;
          if ( !v18 )
            goto LABEL_35;
          memset(v18, 0, v16);
          v42 = (char *)P + v16;
          v19 = (char *)P + 56 * v11;
          v20 = 0;
          v40 = 0;
          v21 = (char *)P + 8;
          while ( 1 )
          {
            LODWORD(ResultLength) = v20;
            v10 = RtlStringCbPrintfW(
                    pszDest,
                    0x157uLL,
                    L"%s\\%d",
                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                    ResultLength);
            if ( v10 < 0 )
              goto LABEL_10;
            v10 = SepRegOpenKey(pszDest, 0x201u, &Handle);
            if ( v10 < 0 )
              goto LABEL_10;
            v10 = ZwQueryValueKey(Handle, &CapeFlags, KeyValuePartialInformation, v8, v15, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
            if ( v8[2] != 4 )
            {
              v10 = -1073741811;
              goto LABEL_10;
            }
            *((_DWORD *)P + 14 * v40 + 12) = v8[3];
            v10 = ZwQueryValueKey(Handle, &CapeName, KeyValuePartialInformation, v8, v15, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
            v22 = (char *)((unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            if ( &v22[v8[2]] > v42 )
              goto LABEL_67;
            v23 = *((_WORD *)v8 + 4);
            *((_WORD *)v21 - 3) = v23;
            *((_WORD *)v21 - 4) = v23;
            *(_QWORD *)v21 = v22;
            memmove(v22, v8 + 3, v8[2]);
            v24 = &v22[v8[2]];
            v10 = ZwQueryValueKey(Handle, &CapePredicate, KeyValuePartialInformation, v8, v15, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
            v25 = v8[2];
            if ( &v24[v25] > v42 )
              goto LABEL_67;
            *((_DWORD *)v21 + 2) = v25;
            if ( v8[2] )
            {
              *((_QWORD *)v21 + 2) = v24;
              memmove(v24, v8 + 3, v8[2]);
            }
            else
            {
              *((_QWORD *)v21 + 2) = 0LL;
            }
            v31 = &v24[v8[2]];
            v10 = ZwQueryValueKey(Handle, &CapeSD, KeyValuePartialInformation, v8, v15, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
            v32 = (char *)((unsigned __int64)(v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( &v32[v8[2]] > v42 )
              goto LABEL_67;
            *((_QWORD *)v21 + 3) = v32;
            memmove(v32, v8 + 3, v8[2]);
            v33 = &v32[v8[2]];
            if ( !SeValidSecurityDescriptor(v8[2], *((PSECURITY_DESCRIPTOR *)v21 + 3)) )
              goto LABEL_63;
            v10 = ZwQueryValueKey(Handle, &CapeStagedSD, KeyValuePartialInformation, v8, v15, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
            v34 = v8[2];
            v35 = (char *)((unsigned __int64)(v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( &v35[v34] > v42 )
            {
LABEL_67:
              v10 = -1073741789;
              goto LABEL_10;
            }
            if ( (_DWORD)v34 )
            {
              *((_QWORD *)v21 + 4) = v35;
              memmove(v35, v8 + 3, v8[2]);
              if ( !SeValidSecurityDescriptor(v8[2], *((PSECURITY_DESCRIPTOR *)v21 + 4)) )
              {
LABEL_63:
                v10 = -1073741703;
                goto LABEL_10;
              }
            }
            else
            {
              *((_QWORD *)v21 + 4) = 0LL;
            }
            v19 = &v35[v8[2]];
            ZwClose(Handle);
            v21 += 56;
            Handle = 0LL;
            v20 = v40 + 1;
            v40 = v20;
            if ( v20 >= (unsigned int)v11 )
            {
              *v43 = P;
              *v44 = v11;
              goto LABEL_4;
            }
          }
        }
      }
    }
    else
    {
LABEL_35:
      v10 = -1073741670;
    }
  }
LABEL_10:
  v13 = v37;
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
LABEL_6:
  if ( v13 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x70536553u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x70536553u);
  return (unsigned int)v10;
}
