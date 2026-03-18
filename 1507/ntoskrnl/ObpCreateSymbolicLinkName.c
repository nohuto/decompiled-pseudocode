/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x140551904
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rbx
  WCHAR *v4; // rax
  WCHAR v5; // ax
  __int64 v6; // r9
  void *v7; // r15
  char v8; // r13
  __int64 v9; // r9
  PVOID v10; // rbx
  __m128i v11; // xmm6
  void *v12; // r14
  unsigned __int64 v13; // rdx
  __int16 v14; // si
  _QWORD *v15; // xmm0_8
  _WORD *v16; // rdi
  char v17; // r15
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct _OBJECT_TYPE *v21; // rax
  char v22; // bl
  __int64 v23; // r14
  unsigned int v24; // eax
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rsi
  void ***v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rtt
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  signed __int64 *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rcx
  signed __int64 v42; // rtt
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  void *v45; // [rsp+38h] [rbp-59h]
  __m128i v46; // [rsp+48h] [rbp-49h]
  __int16 v47; // [rsp+58h] [rbp-39h]
  PVOID Object; // [rsp+68h] [rbp-29h] BYREF
  PVOID v49; // [rsp+70h] [rbp-21h]
  __int16 v50; // [rsp+86h] [rbp-Bh]
  int v51; // [rsp+88h] [rbp-9h]
  int v53; // [rsp+100h] [rbp+6Fh]
  PVOID v54; // [rsp+108h] [rbp+77h] BYREF
  void ***v55; // [rsp+110h] [rbp+7Fh] BYREF

  v1 = a1 - 48;
  v53 = 64;
  if ( (*(_BYTE *)(a1 - 48 + 26) & 2) != 0 )
    v3 = v1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
  else
    v3 = 0LL;
  if ( !v3 )
    return;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 304LL) )
    return;
  if ( *(_WORD *)(v3 + 8) != 4 )
    return;
  v4 = *(WCHAR **)(v3 + 16);
  if ( v4[1] != 58 )
    return;
  v5 = RtlUpcaseUnicodeChar(*v4);
  if ( (unsigned __int16)(v5 - 65) > 0x19u )
    return;
  v50 = 0;
  *(_DWORD *)(a1 + 24) = v5 - 64;
  v7 = *(void **)v3;
  v45 = *(void **)v3;
  v8 = 0;
  v49 = 0LL;
  Object = 0LL;
  v51 = -60876;
  if ( PsGetSiloObject((void *)0xFFFFFFFFFFFFFFFFLL, (__int64)&ObpDirectoryObjectType, (__int64)&v54, v6) >= 0 )
  {
    v10 = v54;
  }
  else
  {
    v10 = ObpRootDirectoryObject;
    v54 = ObpRootDirectoryObject;
    if ( ObpRootDirectoryObject )
      ObfReferenceObject(ObpRootDirectoryObject);
  }
  v11 = *(__m128i *)(a1 + 8);
  v12 = v10;
  v46 = v11;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v55, v9);
  while ( 1 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) & 7) != 0 || (v13 = (unsigned __int64)**v55) == 0 )
    {
      v14 = v46.m128i_i16[0];
LABEL_20:
      v16 = (_WORD *)v46.m128i_i64[1];
      goto LABEL_21;
    }
    v14 = _mm_cvtsi128_si32(v11);
    v46.m128i_i16[0] = v14;
    if ( (unsigned __int16)v14 < 8u )
      goto LABEL_20;
    v15 = (_QWORD *)_mm_srli_si128(v11, 8).m128i_u64[0];
    v16 = v15;
    if ( *v15 == ObpDosDevicesShortNamePrefix )
    {
      v16 = v15 + 1;
      v14 -= 8;
      v46.m128i_i16[0] = v14;
      v12 = **v55;
      v11.m128i_i16[0] = v14;
    }
    while ( 1 )
    {
LABEL_21:
      if ( *v16 == 92 )
      {
        ++v16;
        v14 -= 2;
        v46.m128i_i16[0] = v14;
        v11.m128i_i16[0] = v14;
      }
      v47 = v11.m128i_i16[0];
      if ( v14 )
      {
        do
        {
          if ( *v16 == 92 )
            break;
          ++v16;
          v25 = v14 == 2;
          v14 -= 2;
          v46.m128i_i16[0] = v14;
        }
        while ( !v25 );
        v11.m128i_i16[0] = v46.m128i_i16[0];
      }
      if ( v47 == v14 )
        goto LABEL_76;
      if ( v12 == v7 )
      {
        v17 = v50;
        v50 = 257;
      }
      else
      {
        v17 = 0;
        v8 = 0;
      }
      v18 = ObpLookupDirectoryEntryEx(v12, 0, (__int64)&Object);
      v19 = v18;
      if ( v12 == v45 )
      {
        LOBYTE(v50) = v17;
        HIBYTE(v50) = v8;
      }
      else
      {
        v8 = HIBYTE(v50);
      }
      v20 = (unsigned int)ObHeaderCookie;
      if ( !v18 )
        goto LABEL_42;
      v13 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v18 - 48) >> 8);
      v21 = (struct _OBJECT_TYPE *)ObTypeIndexTable[v13];
      if ( v21 != ObpDirectoryObjectType )
        break;
      v7 = v45;
      v12 = (void *)v19;
    }
    if ( v21 != ObpSymbolicLinkObjectType || *(_DWORD *)(v19 + 24) )
      break;
    if ( !v53 )
    {
      v19 = 0LL;
      break;
    }
    v11 = *(__m128i *)(v19 + 8);
    v7 = v45;
    --v53;
    v12 = v10;
    v46 = v11;
  }
LABEL_42:
  v22 = 1;
  v23 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v19
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8)] == IoDeviceObjectType )
  {
    v24 = *(_DWORD *)(v19 + 72);
    if ( v24 > 0x13 )
    {
      if ( v24 != 20 )
      {
        if ( v24 == 36 )
        {
          v22 = 6;
          goto LABEL_60;
        }
        v25 = v24 == 40;
        goto LABEL_56;
      }
    }
    else if ( v24 < 0x12 )
    {
      if ( v24 < 2 )
        goto LABEL_57;
      if ( v24 <= 3 )
      {
        v22 = 5;
        goto LABEL_60;
      }
      if ( v24 <= 6 )
        goto LABEL_57;
      if ( v24 <= 9 )
      {
        v22 = ((*(_BYTE *)(v19 + 52) & 1) == 0) | 2;
        goto LABEL_60;
      }
      v25 = v24 == 16;
LABEL_56:
      if ( !v25 )
      {
LABEL_57:
        v22 = 0;
        goto LABEL_60;
      }
    }
    v22 = 4;
  }
LABEL_60:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v27 = (unsigned __int64 *)(v55 + 15);
  v28 = KeAbPreAcquire((ULONG_PTR)(v55 + 15), 0LL, 0LL, v20);
  v30 = v28;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
    ExfAcquirePushLockExclusiveEx(v27, v28, (ULONG_PTR)v27, v29);
  if ( v30 )
    *(_BYTE *)(v30 + 26) |= 1u;
  v31 = v55;
  v32 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v33 = (unsigned int)(1 << (*(_BYTE *)(a1 + 24) - 1));
  *(_BYTE *)(v32 + v23 + 32) = v22;
  *(_DWORD *)(v23 + 28) |= v33;
  if ( (void **)v23 == *v31 )
    *((_DWORD *)v31 + 2) |= v33;
  else
    ++*((_DWORD *)v31 + v32 + 3);
  _m_prefetchw(v27);
  v34 = *v27;
  v35 = *v27 - 16;
  if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v35 = 0LL;
  if ( (v34 & 2) != 0 || (v36 = *v27, v36 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v35, v34)) )
    ExfReleasePushLock(v27, v33);
  KeAbPostRelease((ULONG_PTR)v27);
  v37 = KeGetCurrentThread();
  v38 = v37->SpecialApcDisable + 1;
  v37->SpecialApcDisable = v38;
  if ( !v38 && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery();
  v10 = v54;
LABEL_76:
  if ( (_BYTE)v50 )
  {
    v39 = (signed __int64 *)((char *)Object + 296);
    _m_prefetchw((char *)Object + 296);
    v40 = *v39;
    v41 = *v39 - 16;
    if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v41 = 0LL;
    if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
      ExfReleasePushLock(v39, v13);
    KeAbPostRelease((ULONG_PTR)v39);
    ObfDereferenceObject(Object);
    v43 = KeGetCurrentThread();
    v44 = v43->KernelApcDisable + 1;
    v43->KernelApcDisable = v44;
    if ( !v44
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v10 = v54;
  }
  if ( v49 )
    ObfDereferenceObject(v49);
  ObfDereferenceObject(v10);
  PsDereferenceMonitorContextServerSilo((__int64)v55);
}
