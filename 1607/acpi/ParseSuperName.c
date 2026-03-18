/*
 * XREFs of ParseSuperName @ 0x1C0017D40
 * Callers:
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseArg @ 0x1C001DCAC (ParseArg.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     PushTerm @ 0x1C0018668 (PushTerm.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     GetBaseData @ 0x1C001ED48 (GetBaseData.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v6; // rdx
  __int64 v8; // rbx
  unsigned __int8 v11; // cl
  __int64 v12; // r9
  int v13; // eax
  unsigned int NameSpaceObjectNoLock; // esi
  size_t v15; // rbx
  _BYTE *PoolWithTag; // r15
  KIRQL v17; // bl
  __int64 i; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-1D0h]
  _BYTE P[128]; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+C0h] [rbp-148h] BYREF

  v4 = 0;
  v6 = (unsigned __int8 *)a1[15];
  v8 = 0LL;
  v26 = 0LL;
  v11 = *v6;
  if ( !*v6 )
  {
    a1[15] = v6 + 1;
    return v4;
  }
  if ( v11 == 91 && v6[1] == 49 )
  {
    a1[15] = v6 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v4;
  }
  v12 = (__int64)*(&OpcodeTable + v11);
  if ( !v12 )
    goto LABEL_51;
  v13 = *(_DWORD *)(v12 + 28);
  if ( (v13 & 0x20) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      a1[15] = v6 + 1;
      v24 = (unsigned int)v11 - 104;
      if ( (unsigned int)v24 >= *(_DWORD *)(a1[12] + 60LL) )
      {
        LogError(3222536197LL);
        AcpiDiagTraceAmlError(a1, 3222536197LL);
        PrintDebugMessage(142, v24, 0, 0, 0LL);
        return (unsigned int)-1072431099;
      }
      else
      {
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Arg%d");
        *(_WORD *)(a2 + 2) = 129;
        *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v24);
      }
      return v4;
    }
    if ( (v13 & 4) != 0 )
    {
      v22 = (unsigned int)v11 - 96;
      a1[15] = v6 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v22 + 4 * v22 + 9);
      return v4;
    }
    if ( (v13 & 0x80u) != 0 )
    {
      v23 = PushTerm((_DWORD)a1, (_DWORD)v6, a4, v12, a2);
      ++a1[15];
      return v23;
    }
LABEL_51:
    LogError(3222536199LL);
    AcpiDiagTraceAmlError(a1, 3222536199LL);
    PrintDebugMessage(141, *(unsigned __int8 *)a1[15], a1[15], 0, 0LL);
    return (unsigned int)-1072431097;
  }
  v27 = a1[10];
  NameSpaceObjectNoLock = ParseName(a1, a1 + 15, Src);
  if ( !NameSpaceObjectNoLock )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    if ( v15 + 1 >= 0x80 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
    }
    else
    {
      PoolWithTag = P;
    }
    memmove(PoolWithTag, Src, v15);
    PoolWithTag[v15] = 0;
    v17 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, v27, (__int64)&v26, 0);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v17);
    if ( P != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( NameSpaceObjectNoLock == -1073741772 )
    {
      if ( a3 )
        return v4;
      LogError(3221225524LL);
      AcpiDiagTraceAmlError(a1, 3221225524LL);
      PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
    }
    v8 = v26;
  }
  v4 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock && v8 )
  {
    *(_WORD *)(a2 + 2) = 128;
    for ( i = v8; *(_WORD *)(i + 66) == 128; i = *(_QWORD *)(i + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 112));
      v8 = v26;
    }
    v19 = gdwfAMLI;
    *(_QWORD *)(a2 + 16) = i;
    if ( (v19 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 0xFFFFFFFF) == 1 )
    {
      v25 = v26;
      *(_WORD *)(v26 + 64) |= 4u;
      if ( (*(_WORD *)(v25 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects();
    }
    v20 = *(_QWORD *)(a2 + 16);
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v20 + 64) |= 4u;
      if ( (*(_WORD *)(v20 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects();
    }
  }
  return v4;
}
