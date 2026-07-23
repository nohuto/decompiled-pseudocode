/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1404A33C8
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140091610 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

char __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  WCHAR *v2; // rax
  signed __int64 v3; // rbx
  __int64 v5; // rdi
  char v6; // r13
  __int64 CurrentSilo; // rax
  PVOID v8; // r14
  __m128i v9; // xmm6
  char *CurrentServerSiloGlobals; // r12
  char v11; // r10
  __int16 v12; // si
  _QWORD *v13; // xmm0_8
  _WORD *v14; // rdi
  __int64 v15; // r8
  struct _OBJECT_TYPE *v16; // rax
  char v17; // di
  __int64 v18; // r15
  unsigned int v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v21; // rsi
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  bool v28; // zf
  PVOID Object; // [rsp+38h] [rbp-59h]
  __m128i v31; // [rsp+48h] [rbp-49h]
  __m128i v32; // [rsp+58h] [rbp-39h] BYREF
  __int128 v33; // [rsp+68h] [rbp-29h] BYREF
  __int16 v34; // [rsp+86h] [rbp-Bh]
  int v35; // [rsp+88h] [rbp-9h]
  char v37; // [rsp+100h] [rbp+6Fh]
  int v38; // [rsp+108h] [rbp+77h]
  PVOID v39; // [rsp+110h] [rbp+7Fh]

  v1 = a1 - 48;
  LOBYTE(v2) = *(_BYTE *)(a1 - 48 + 26);
  v3 = 0LL;
  v38 = 64;
  if ( ((unsigned __int8)v2 & 2) != 0 )
  {
    v2 = (WCHAR *)ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
    v5 = v1 - (_QWORD)v2;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return (char)v2;
  v2 = *(WCHAR **)v5;
  if ( !*(_QWORD *)(*(_QWORD *)v5 + 304LL) )
    return (char)v2;
  LOBYTE(v2) = 4;
  if ( *(_WORD *)(v5 + 8) != 4 )
    return (char)v2;
  v2 = *(WCHAR **)(v5 + 16);
  if ( v2[1] != 58 )
    return (char)v2;
  LOWORD(v2) = RtlUpcaseUnicodeChar(*v2);
  if ( (unsigned __int16)((_WORD)v2 - 65) > 0x19u )
    return (char)v2;
  v34 = 0;
  *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
  v6 = 0;
  v39 = *(PVOID *)v5;
  v33 = 0LL;
  v35 = -60876;
  CurrentSilo = PsGetCurrentSilo();
  v8 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
  ObfReferenceObject(v8);
  v9 = *(__m128i *)(a1 + 8);
  Object = v8;
  v31 = v9;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  v11 = 0;
  while ( 1 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) & 7) != 0 || !**(_QWORD **)CurrentServerSiloGlobals )
    {
      v12 = v31.m128i_i16[0];
LABEL_55:
      v14 = (_WORD *)v31.m128i_i64[1];
      goto LABEL_15;
    }
    v12 = _mm_cvtsi128_si32(v9);
    v31.m128i_i16[0] = v12;
    if ( (unsigned __int16)v12 < 8u )
      goto LABEL_55;
    v13 = (_QWORD *)_mm_srli_si128(v9, 8).m128i_u64[0];
    v14 = v13;
    if ( *v13 == ObpDosDevicesShortNamePrefix )
    {
      v14 = v13 + 1;
      v12 -= 8;
      v31.m128i_i64[1] = (__int64)(v13 + 1);
      v31.m128i_i16[0] = v12;
      v8 = **(PVOID **)CurrentServerSiloGlobals;
      v9 = v31;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v14 == 92 )
      {
        ++v14;
        v12 -= 2;
        v31.m128i_i64[1] = (__int64)v14;
        v31.m128i_i16[0] = v12;
        v9 = v31;
      }
      v32 = v9;
      if ( v12 )
      {
        do
        {
          if ( *v14 == 92 )
            break;
          ++v14;
          v28 = v12 == 2;
          v12 -= 2;
          v31.m128i_i16[0] = v12;
        }
        while ( !v28 );
        v31.m128i_i64[1] = (__int64)v14;
        v9 = v31;
      }
      v32.m128i_i16[0] -= v12;
      if ( !v32.m128i_i16[0] )
        goto LABEL_50;
      if ( v8 == v39 )
      {
        v37 = v11;
        v34 = 257;
      }
      else
      {
        v6 = 0;
        v37 = 0;
      }
      v15 = ObpLookupDirectoryEntryEx((unsigned __int64 *)v8, (unsigned __int16 *)&v32, 0, 0, 0, (__int64)&v33);
      if ( v8 == v39 )
      {
        HIBYTE(v34) = v37;
        v11 = v37;
        LOBYTE(v34) = v6;
      }
      else
      {
        v11 = HIBYTE(v34);
        v6 = v34;
      }
      if ( !v15 )
        goto LABEL_30;
      v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)];
      if ( v16 != ObpDirectoryObjectType )
        break;
      v8 = (PVOID)v15;
    }
    if ( v16 != ObpSymbolicLinkObjectType || *(_DWORD *)(v15 + 24) )
      break;
    if ( !v38 )
    {
      v15 = 0LL;
      break;
    }
    v9 = *(__m128i *)(v15 + 8);
    v8 = Object;
    --v38;
    v31 = v9;
  }
LABEL_30:
  v17 = 1;
  v18 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v15
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)] == IoDeviceObjectType )
  {
    v19 = *(_DWORD *)(v15 + 72);
    if ( v19 > 0x13 )
    {
      if ( v19 != 20 )
      {
        if ( v19 == 36 )
        {
          v17 = 6;
          goto LABEL_39;
        }
        v28 = v19 == 40;
        goto LABEL_67;
      }
    }
    else if ( v19 < 0x12 )
    {
      if ( v19 < 2 )
        goto LABEL_68;
      if ( v19 <= 3 )
      {
        v17 = 5;
        goto LABEL_39;
      }
      if ( v19 <= 6 )
        goto LABEL_68;
      if ( v19 <= 9 )
      {
        v17 = ((*(_BYTE *)(v15 + 52) & 1) == 0) | 2;
        goto LABEL_39;
      }
      v28 = v19 == 16;
LABEL_67:
      if ( !v28 )
      {
LABEL_68:
        v17 = 0;
        goto LABEL_39;
      }
    }
    v17 = 4;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v21 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
  v22 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL, 0);
  v23 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentServerSiloGlobals + 30, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)CurrentServerSiloGlobals + 15,
      v22,
      (ULONG_PTR)(CurrentServerSiloGlobals + 120));
  if ( v23 )
    v23[26] |= 1u;
  v24 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v25 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v24 + v18 + 32) = v17;
  *(_DWORD *)(v18 + 28) |= v25;
  if ( v18 == *(_QWORD *)CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v25;
  else
    ++*(_DWORD *)&CurrentServerSiloGlobals[4 * v24 + 12];
  _m_prefetchw(v21);
  v26 = *v21;
  if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v26 - 16;
  if ( (v26 & 2) != 0 || (v27 = *v21, v27 != _InterlockedCompareExchange64(v21, v3, v26)) )
    ExfReleasePushLock((_QWORD *)CurrentServerSiloGlobals + 15);
  KeAbPostRelease((ULONG_PTR)(CurrentServerSiloGlobals + 120));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_50:
  ObpReleaseLookupContext((__int64)&v33);
  LOBYTE(v2) = ObfDereferenceObject(Object);
  return (char)v2;
}
