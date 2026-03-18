/*
 * XREFs of ParseSuperName @ 0x1C00100D0
 * Callers:
 *     ParseArg @ 0x1C000D8A8 (ParseArg.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     PushTerm @ 0x1C0013334 (PushTerm.c)
 *     GetBaseData @ 0x1C0016D70 (GetBaseData.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v6; // rdx
  __int64 v8; // rbx
  unsigned __int8 v11; // cl
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r13
  unsigned int NameSpaceObjectNoLock; // esi
  size_t v16; // rbx
  _BYTE *PoolWithTag; // r15
  KIRQL v18; // bl
  __int64 i; // rcx
  char v20; // al
  __int64 v21; // rcx
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-1D8h] BYREF
  _BYTE P[128]; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+C0h] [rbp-148h] BYREF

  v4 = 0;
  v6 = (unsigned __int8 *)a1[15];
  v8 = 0LL;
  v27 = 0LL;
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
      v25 = (unsigned int)v11 - 104;
      if ( (unsigned int)v25 >= *(_DWORD *)(a1[12] + 60LL) )
      {
        LogError(3222536197LL);
        PrintDebugMessage(142, v25, 0, 0, 0LL);
        return (unsigned int)-1072431099;
      }
      else
      {
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Arg%d");
        *(_WORD *)(a2 + 2) = 129;
        *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v25);
      }
      return v4;
    }
    if ( (v13 & 4) != 0 )
    {
      v23 = (unsigned int)v11 - 96;
      a1[15] = v6 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v23 + 4 * v23 + 9);
      return v4;
    }
    if ( (v13 & 0x80u) != 0 )
    {
      v24 = PushTerm((_DWORD)a1, (_DWORD)v6, a4, v12, a2);
      ++a1[15];
      return v24;
    }
LABEL_51:
    LogError(3222536199LL);
    PrintDebugMessage(141, *(unsigned __int8 *)a1[15], a1[15], 0, 0LL);
    return (unsigned int)-1072431097;
  }
  v14 = a1[10];
  NameSpaceObjectNoLock = ParseName(a1 + 15, Src);
  if ( !NameSpaceObjectNoLock )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( Src[v16] );
    if ( v16 + 1 >= 0x80 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
    }
    else
    {
      PoolWithTag = P;
    }
    memmove(PoolWithTag, Src, v16);
    PoolWithTag[v16] = 0;
    v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, v14, (__int64)&v27, 0);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
    if ( P != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( NameSpaceObjectNoLock == -1073741772 )
    {
      if ( a3 )
        return v4;
      LogError(3221225524LL);
      PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
    }
    v8 = v27;
  }
  v4 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock && v8 )
  {
    *(_WORD *)(a2 + 2) = 128;
    for ( i = v8; *(_WORD *)(i + 58) == 128; i = *(_QWORD *)(i + 72) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 104));
      v8 = v27;
    }
    v20 = gdwfAMLI;
    *(_QWORD *)(a2 + 16) = i;
    if ( (v20 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 104), 0xFFFFFFFF) == 1 )
    {
      v26 = v27;
      *(_WORD *)(v27 + 56) |= 4u;
      if ( (*(_WORD *)(v26 + 56) & 0x40) == 0 )
        FreeNameSpaceObjects();
    }
    v21 = *(_QWORD *)(a2 + 16);
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 104), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v21 + 56) |= 4u;
      if ( (*(_WORD *)(v21 + 56) & 0x40) == 0 )
        FreeNameSpaceObjects();
    }
  }
  return v4;
}
