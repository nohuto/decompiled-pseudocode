/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1404BAF58
 * Callers:
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4 (OBP_GET_CURRENT_SILO_ROOT_DIRECTORY.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  signed __int64 v2; // rbx
  __int64 v4; // rdi
  WCHAR *v5; // rax
  WCHAR v6; // ax
  char v7; // r12
  char v8; // r13
  void *v9; // r14
  __m128i v10; // xmm6
  __int16 v11; // si
  _QWORD *v12; // xmm0_8
  _WORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  struct _OBJECT_TYPE *v16; // rax
  char v17; // di
  __int64 v18; // r15
  unsigned int v19; // eax
  bool v20; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD **v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  signed __int64 v28; // rax
  unsigned __int64 v29; // rtt
  PVOID Object; // [rsp+38h] [rbp-59h]
  __m128i v31; // [rsp+48h] [rbp-49h]
  __int16 v32; // [rsp+58h] [rbp-39h]
  __int64 v33[2]; // [rsp+68h] [rbp-29h] BYREF
  __int16 v34; // [rsp+86h] [rbp-Bh]
  int v35; // [rsp+88h] [rbp-9h]
  int v37; // [rsp+100h] [rbp+6Fh]
  _QWORD **v38; // [rsp+108h] [rbp+77h] BYREF
  void *v39; // [rsp+110h] [rbp+7Fh]

  v1 = a1 - 48;
  v2 = 0LL;
  v37 = 64;
  if ( (*(_BYTE *)(a1 - 48 + 26) & 2) != 0 )
    v4 = v1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
  else
    v4 = 0LL;
  if ( !v4 )
    return;
  if ( !*(_QWORD *)(*(_QWORD *)v4 + 304LL) )
    return;
  if ( *(_WORD *)(v4 + 8) != 4 )
    return;
  v5 = *(WCHAR **)(v4 + 16);
  if ( v5[1] != 58 )
    return;
  v6 = RtlUpcaseUnicodeChar(*v5);
  if ( (unsigned __int16)(v6 - 65) > 0x19u )
    return;
  v34 = 0;
  *(_DWORD *)(a1 + 24) = v6 - 64;
  v7 = 0;
  v8 = 0;
  v39 = *(void **)v4;
  *(_OWORD *)v33 = 0LL;
  v35 = -60876;
  v9 = (void *)OBP_GET_CURRENT_SILO_ROOT_DIRECTORY();
  Object = v9;
  v10 = *(__m128i *)(a1 + 8);
  v31 = v10;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v38);
  while ( 1 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) & 7) != 0 || !**v38 )
    {
      v11 = v31.m128i_i16[0];
LABEL_16:
      v13 = (_WORD *)v31.m128i_i64[1];
      goto LABEL_17;
    }
    v11 = _mm_cvtsi128_si32(v10);
    v31.m128i_i16[0] = v11;
    if ( (unsigned __int16)v11 < 8u )
      goto LABEL_16;
    v12 = (_QWORD *)_mm_srli_si128(v10, 8).m128i_u64[0];
    v13 = v12;
    if ( *v12 == ObpDosDevicesShortNamePrefix )
    {
      v13 = v12 + 1;
      v11 -= 8;
      v31.m128i_i16[0] = v11;
      v9 = (void *)**v38;
      v10.m128i_i16[0] = v11;
    }
    while ( 1 )
    {
LABEL_17:
      if ( *v13 == 92 )
      {
        ++v13;
        v11 -= 2;
        v31.m128i_i16[0] = v11;
        v10.m128i_i16[0] = v11;
      }
      v32 = v10.m128i_i16[0];
      if ( v11 )
      {
        do
        {
          if ( *v13 == 92 )
            break;
          ++v13;
          v20 = v11 == 2;
          v11 -= 2;
          v31.m128i_i16[0] = v11;
        }
        while ( !v20 );
        v10.m128i_i16[0] = v31.m128i_i16[0];
      }
      if ( v32 == v11 )
        goto LABEL_69;
      if ( v9 == v39 )
      {
        v34 = 257;
      }
      else
      {
        v7 = 0;
        v8 = 0;
      }
      v14 = ObpLookupDirectoryEntryEx(v9, 0, (__int64)v33);
      v15 = v14;
      if ( v9 == v39 )
      {
        LOBYTE(v34) = v7;
        HIBYTE(v34) = v8;
      }
      else
      {
        v8 = HIBYTE(v34);
        v7 = v34;
      }
      if ( !v14 )
        goto LABEL_38;
      v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      if ( v16 != ObpDirectoryObjectType )
        break;
      v9 = (void *)v15;
    }
    if ( v16 != ObpSymbolicLinkObjectType || *(_DWORD *)(v15 + 24) )
      break;
    if ( !v37 )
    {
      v15 = 0LL;
      break;
    }
    v10 = *(__m128i *)(v15 + 8);
    v9 = Object;
    --v37;
    v31 = v10;
  }
LABEL_38:
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
          goto LABEL_56;
        }
        v20 = v19 == 40;
        goto LABEL_52;
      }
    }
    else if ( v19 < 0x12 )
    {
      if ( v19 < 2 )
        goto LABEL_53;
      if ( v19 <= 3 )
      {
        v17 = 5;
        goto LABEL_56;
      }
      if ( v19 <= 6 )
        goto LABEL_53;
      if ( v19 <= 9 )
      {
        v17 = ((*(_BYTE *)(v15 + 52) & 1) == 0) | 2;
        goto LABEL_56;
      }
      v20 = v19 == 16;
LABEL_52:
      if ( !v20 )
      {
LABEL_53:
        v17 = 0;
        goto LABEL_56;
      }
    }
    v17 = 4;
  }
LABEL_56:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v22 = (unsigned __int64 *)(v38 + 15);
  v23 = KeAbPreAcquire((ULONG_PTR)(v38 + 15), 0LL, 0LL);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  v25 = v38;
  v26 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v27 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v26 + v18 + 32) = v17;
  *(_DWORD *)(v18 + 28) |= v27;
  if ( (_QWORD *)v18 == *v25 )
    *((_DWORD *)v25 + 2) |= v27;
  else
    ++*((_DWORD *)v25 + v26 + 3);
  _m_prefetchw(v22);
  v28 = *v22;
  if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = v28 - 16;
  if ( (v28 & 2) != 0 || (v29 = *v22, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v2, v28)) )
    ExfReleasePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_69:
  ObpReleaseLookupContext((__int64)v33);
  ObfDereferenceObject(Object);
  PsDereferenceMonitorContextServerSilo((__int64)v38);
}
