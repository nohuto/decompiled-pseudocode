/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x180071394
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x180062550 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x180093C20 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, __int128 *a3)
{
  HANDLE *v3; // r15
  unsigned int v4; // r12d
  unsigned __int64 v5; // rdi
  _BYTE *v6; // r13
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
  _BYTE *v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v25; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h]
  _BYTE v29[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+B4h] [rbp-4Ch]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]

  v3 = a1;
  v23 = a1;
  v4 = 0;
  Handle = 0LL;
  v16 = 544;
  v5 = 0LL;
  v6 = v29;
  result = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*v3, v19, 2LL, v29, 544, &v15);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return 0LL;
    return result;
  }
  if ( v30 != 4 || v31 != 4 || !v32 )
    return 0LL;
  v22 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v19, (unsigned __int16 *)&v22, 1) )
    {
      LOWORD(v22) = v22 - 8;
      *((_QWORD *)&v22 + 1) += 8LL;
    }
    v9 = v29;
    v18 = 0;
    v21 = v29;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
                 *v3,
                 v4,
                 0LL,
                 v9,
                 v16,
                 &v15);
      if ( inited >= 0 )
      {
        v19[0] = *((_WORD *)v21 + 6);
        v19[1] = *((_WORD *)v21 + 6);
        v20 = v21 + 16;
        v25 = *v3;
        v26 = v19;
        v24 = 48;
        v27 = 576;
        v28 = 0LL;
        inited = NtOpenKey(&Handle, 9LL, &v24);
        if ( inited >= 0 )
          break;
      }
LABEL_34:
      v9 = v21;
      v18 = ++v4;
      if ( inited < 0 )
        goto LABEL_35;
    }
    inited = RtlInitUnicodeStringEx((__int64)v19, (__int64)L"FilterFullPath");
    if ( inited < 0 )
      goto LABEL_33;
    v11 = v16;
    while ( 1 )
    {
      v12 = NtQueryValueKey(Handle, v19, 2LL, v6, v11, &v15);
      inited = v12;
      if ( v12 != -2147483643 && v12 != -1073741789 )
        goto LABEL_27;
      if ( v5 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v15);
      v5 = Heap;
      if ( !Heap )
        goto LABEL_26;
      v11 = v15;
      v6 = (_BYTE *)Heap;
      v21 = (_BYTE *)Heap;
LABEL_27:
      if ( inited != -2147483643 && inited != -1073741789 )
      {
        v4 = v18;
        v16 = v11;
        v3 = v23;
        if ( inited < 0
          || *((_DWORD *)v6 + 1) != 1
          || *((_DWORD *)v6 + 2) > 0xFFFEu
          || (unsigned int)RtlCompareUnicodeStrings(
                             *((unsigned __int16 **)&v22 + 1),
                             (unsigned __int64)(unsigned __int16)v22 >> 1,
                             (__int64)(v6 + 12),
                             (unsigned __int64)(unsigned __int16)(*((_WORD *)v6 + 4) - 2) >> 1,
                             1) )
        {
LABEL_33:
          NtClose(Handle);
          goto LABEL_34;
        }
LABEL_35:
        if ( v5 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
        if ( inited >= 0 )
        {
          NtClose(*v3);
          *v3 = Handle;
        }
        if ( inited == -2147483622 )
          return 0;
        return (unsigned int)inited;
      }
    }
    v5 = 0LL;
LABEL_26:
    inited = -1073741801;
    goto LABEL_27;
  }
  return result;
}
