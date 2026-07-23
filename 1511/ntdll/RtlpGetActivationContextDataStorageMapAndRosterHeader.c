/*
 * XREFs of RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x180041BAC (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800434C8 (RtlpInitializeAssemblyStorageMap.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180081D7C (RtlpUninitializeAssemblyStorageMap.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpGetActivationContextDataStorageMapAndRosterHeader(
        int a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        volatile signed __int64 *a5,
        _QWORD *a6)
{
  unsigned __int16 *Buffer; // rdi
  int v7; // ebx
  _QWORD *v8; // r12
  _QWORD *v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // r14
  volatile signed __int64 *v12; // r15
  __int64 v13; // rax
  volatile signed __int64 v14; // rax
  __int64 v16; // rax
  char *Heap; // rax
  void *v18; // rdi
  __int64 v19; // rax
  unsigned __int16 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v24; // [rsp+50h] [rbp-B0h]
  _QWORD *v25; // [rsp+58h] [rbp-A8h]
  void *Src[2]; // [rsp+60h] [rbp-A0h]
  _WORD v27[264]; // [rsp+70h] [rbp-90h] BYREF

  Buffer = v27;
  v7 = 0;
  v24 = a4;
  v27[0] = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  v8 = a4;
  v9 = a6;
  v25 = a6;
  v10 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0x20000;
  v11 = 0LL;
  UnicodeString.Buffer = v27;
  v12 = 0LL;
  if ( (_UNKNOWN *)a3 == &unk_180101268 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() passed the empty activation context\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return (unsigned int)-1073741811;
  }
  if ( v8 )
    *v8 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !v8 || !a5 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags                : 0x%lx\n"
      "SXS:    Peb                  : %p\n"
      "SXS:    ActivationContextData: %p\n"
      "SXS:    AssemblyStorageMap   : %p\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader",
      a1,
      a2,
      v8,
      (const void *)a5);
    v7 = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( a3 == -4 )
    {
LABEL_36:
      v11 = a2 + 97;
      v19 = a2[97];
      v12 = a2 + 98;
      if ( !v19 )
        goto LABEL_29;
      v10 = v19 + *(unsigned int *)(v19 + 24);
      goto LABEL_27;
    }
    if ( (a1 & 3) == 0 )
    {
      v11 = (_QWORD *)(a3 + 24);
      v13 = *(_QWORD *)(a3 + 24);
      if ( !v13 )
        return (unsigned int)-1073741595;
      v10 = v13 + *(unsigned int *)(v13 + 24);
      v14 = a3 + 112;
      goto LABEL_17;
    }
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_36;
  if ( !a3 || (a1 & 1) != 0 )
  {
    v11 = a2 + 95;
    v16 = a2[95];
    v12 = a2 + 96;
    if ( v16 )
    {
      v10 = v16 + *(unsigned int *)(v16 + 24);
      if ( !*v12 )
      {
        v20 = _mm_cvtsi128_si32(*(__m128i *)(a2[4] + 96LL));
        *(_OWORD *)Src = *(_OWORD *)(a2[4] + 96LL);
        v21 = v20 + 14LL;
        if ( v21 > 0x208 )
        {
          if ( v21 > 0xFFFE )
            return (unsigned int)-1073741562;
          UnicodeString.MaximumLength = v20 + 14;
          UnicodeString.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)(v20 + 14));
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
            return (unsigned int)-1073741801;
        }
        else
        {
          Buffer = v27;
          UnicodeString.MaximumLength = 520;
          UnicodeString.Buffer = v27;
        }
        memmove(Buffer, Src[1], v20);
        v22 = (unsigned __int64)v20 >> 1;
        UnicodeString.Length = v20 + 12;
        v8 = v24;
        *(_QWORD *)&Buffer[v22] = *(_QWORD *)L".Local";
        *(_DWORD *)&Buffer[v22 + 4] = *(_DWORD *)L"al";
        Buffer[v22 + 6] = aLocal[6];
        v7 = 0;
      }
      goto LABEL_27;
    }
LABEL_29:
    v14 = *v12;
    v9 = v25;
LABEL_17:
    *a5 = v14;
    *v8 = *v11;
    if ( v9 )
      *v9 = v10;
    goto LABEL_19;
  }
LABEL_27:
  if ( !*v11 || *v12 )
    goto LABEL_29;
  if ( *(_DWORD *)(v10 + 8) > 0x1FFFFFFDu )
  {
    v7 = -1073741675;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * *(unsigned int *)(v10 + 8) + 16);
    v18 = Heap;
    if ( Heap )
    {
      v7 = RtlpInitializeAssemblyStorageMap(Heap, *(unsigned int *)(v10 + 8), Heap + 16);
      if ( v7 >= 0 )
      {
        if ( _InterlockedCompareExchange64(v12, (signed __int64)v18, 0LL) )
        {
          RtlpUninitializeAssemblyStorageMap(v18);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
        Buffer = UnicodeString.Buffer;
        v7 = 0;
        goto LABEL_29;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    }
    else
    {
      v7 = -1073741801;
    }
    Buffer = UnicodeString.Buffer;
  }
LABEL_19:
  if ( Buffer && Buffer != v27 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v7;
}
