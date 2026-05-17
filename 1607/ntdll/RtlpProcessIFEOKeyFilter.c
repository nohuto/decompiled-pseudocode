/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x18007F260
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x18007F110 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x18006C6D0 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1800A6A60 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  HANDLE *v4; // r15
  unsigned int v5; // r12d
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  _BYTE *v9; // rax
  int inited; // ebx
  int v11; // r15d
  int v12; // eax
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh]
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v19[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-B0h]
  unsigned int v21; // [rsp+58h] [rbp-A8h]
  _BYTE *v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v26; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A0h] [rbp-60h]
  _BYTE v30[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B4h] [rbp-4Ch]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]

  v21 = a2;
  v3 = v30;
  v4 = a1;
  v24 = a1;
  v5 = 0;
  Handle = 0LL;
  v16 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*v4, v19, 2LL, v30, 544, &v15);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return 0LL;
    return result;
  }
  if ( v31 != 4 || v32 != 4 || !v33 )
    return 0LL;
  v23 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v19, (unsigned __int16 *)&v23, 1) )
    {
      LOWORD(v23) = v23 - 8;
      *((_QWORD *)&v23 + 1) += 8LL;
    }
    v9 = v30;
    v18 = 0;
    v22 = v30;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
                 *v4,
                 v5,
                 0LL,
                 v9,
                 v16,
                 &v15);
      if ( inited >= 0 )
      {
        v19[0] = *((_WORD *)v22 + 6);
        v19[1] = *((_WORD *)v22 + 6);
        v20 = v22 + 16;
        v26 = *v4;
        v27 = v19;
        v25 = 48;
        v28 = 576;
        v29 = 0LL;
        inited = NtOpenKey(&Handle, v21, &v25);
        if ( inited >= 0 )
          break;
      }
LABEL_34:
      v9 = v22;
      v18 = ++v5;
      if ( inited < 0 )
        goto LABEL_35;
    }
    inited = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"FilterFullPath");
    if ( inited < 0 )
      goto LABEL_33;
    v11 = v16;
    while ( 1 )
    {
      v12 = NtQueryValueKey(Handle, v19, 2LL, v3, v11, &v15);
      inited = v12;
      if ( v12 != -2147483643 && v12 != -1073741789 )
        goto LABEL_27;
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v15);
      v6 = Heap;
      if ( !Heap )
        goto LABEL_26;
      v11 = v15;
      v3 = (_BYTE *)Heap;
      v22 = (_BYTE *)Heap;
LABEL_27:
      if ( inited != -2147483643 && inited != -1073741789 )
      {
        v5 = v18;
        v16 = v11;
        v4 = v24;
        if ( inited < 0
          || *((_DWORD *)v3 + 1) != 1
          || *((_DWORD *)v3 + 2) > 0xFFFEu
          || (unsigned int)RtlCompareUnicodeStrings(
                             *((unsigned __int16 **)&v23 + 1),
                             (unsigned __int64)(unsigned __int16)v23 >> 1,
                             (__int64)(v3 + 12),
                             (unsigned __int64)(unsigned __int16)(*((_WORD *)v3 + 4) - 2) >> 1,
                             1) )
        {
LABEL_33:
          NtClose(Handle);
          goto LABEL_34;
        }
LABEL_35:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          NtClose(*v4);
          *v4 = Handle;
        }
        if ( inited == -2147483622 )
          return 0;
        return (unsigned int)inited;
      }
    }
    v6 = 0LL;
LABEL_26:
    inited = -1073741801;
    goto LABEL_27;
  }
  return result;
}
