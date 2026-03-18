/*
 * XREFs of AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C007922C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C000434C (AMLIGetNSObjectNameSegment.c)
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     RtlStringCchPrintfW @ 0x1C001EA28 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1C001EA7C (RtlStringCchPrintfExW.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

wchar_t *__fastcall AcpiArblibAllocateArbiterInstance(__int64 a1, unsigned int a2)
{
  int v4; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rbx
  signed __int32 v7; // r14d
  const wchar_t *v8; // rax
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  NTSTRSAFE_PWSTR v13; // r13
  size_t v14; // rdi
  unsigned int v15; // r15d
  volatile signed __int32 *v16; // r12
  __int64 v17; // rcx
  int v18; // eax
  char v19; // cl
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rsi
  ULONG dwFlags[2]; // [rsp+20h] [rbp-20h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-18h]
  __int64 v27; // [rsp+30h] [rbp-10h]
  size_t pcchRemaining; // [rsp+90h] [rbp+50h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+58h] BYREF

  if ( a2 > 6 )
    return 0LL;
  v4 = 74;
  if ( !_bittest(&v4, a2) )
    return 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)257, 0x1D8uLL, 0x41706341u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x1D8uLL);
  v7 = _InterlockedExchangeAdd(&AcpiArbiterInstanceCount, 1u);
  ppszDestEnd = v6;
  pcchRemaining = 64LL;
  if ( a2 == 1 )
  {
    v8 = L"Port";
  }
  else
  {
    v8 = L"Memory";
    if ( a2 != 3 )
      v8 = L"Bus Number";
  }
  if ( RtlStringCchPrintfExW(v6, 0x40uLL, &ppszDestEnd, &pcchRemaining, 0, L"ACPI %s ", v8) < 0 )
  {
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 704);
  AMLIReferenceHandleEx((__int64)v10);
  v12 = (volatile signed __int32 *)AMLIGetParent(v11);
  v13 = ppszDestEnd;
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    v14 = pcchRemaining;
    if ( pcchRemaining >= 5 )
    {
      AMLIGetNSObjectNameSegment((__int64)v10);
      RtlStringCchPrintfW(v13, v14, L"%C%C%C%C");
      v15 = 4;
      v14 -= 4LL;
      v16 = (volatile signed __int32 *)AMLIGetParent((__int64)v10);
      AMLIDereferenceHandleEx(v10);
      v17 = (__int64)v16;
      while ( 1 )
      {
        v24 = AMLIGetParent(v17);
        if ( !v24 )
          break;
        if ( v14 < 6 || v15 >= 0x40 )
          goto LABEL_31;
        memmove(v13 + 5, v13, 2LL * v15);
        v15 += 5;
        v14 -= 5LL;
        v18 = AMLIGetNSObjectNameSegment((__int64)v16);
        v19 = v18;
        if ( HIBYTE(v18) )
          v20 = SHIBYTE(v18);
        else
          v20 = 42;
        if ( BYTE2(v18) )
          v21 = SBYTE2(v18);
        else
          v21 = 42;
        if ( BYTE1(v18) )
          v22 = SBYTE1(v18);
        else
          v22 = 42;
        v23 = 42LL;
        if ( v19 )
          v23 = (unsigned int)v19;
        LODWORD(v27) = v20;
        LODWORD(pszFormat) = v21;
        dwFlags[0] = v22;
        RtlStringCchPrintfW(v13, 5uLL, L"%C%C%C%C", v23, *(_QWORD *)dwFlags, pszFormat, v27);
        v13[4] = 46;
        AMLIDereferenceHandleEx(v16);
        v17 = v24;
        v16 = (volatile signed __int32 *)v24;
      }
      v6[63] = 0;
      return v6;
    }
  }
  else
  {
    v14 = pcchRemaining;
  }
LABEL_31:
  RtlStringCchPrintfW(v13, v14, L"%x", (unsigned int)(v7 + 1));
  v6[63] = 0;
  return v6;
}
