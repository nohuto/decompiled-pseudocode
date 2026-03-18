/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIGpeValidIndex @ 0x1C0020228 (ACPIGpeValidIndex.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r15
  bool v4; // si
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rcx
  const char *v8; // rax
  const char *v9; // rdx
  __int64 v11; // rbx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rbx
  int v22; // esi
  __int64 v23; // rbx
  int v24; // r8d
  unsigned __int8 v25; // r8
  _QWORD v26[16]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 408) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C0074698 = 0;
      byte_1C007469C = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1465074783LL);
    if ( v6 )
      *(_DWORD *)(v1 + 552) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1465077855LL);
    *(_QWORD *)(v1 + 408) = v6;
    if ( !*(_QWORD *)(a1 + 56) )
    {
      if ( (*(_DWORD *)(v1 + 552) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x400000000uLL);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v4 = (*(_QWORD *)(v1 + 8) & 0x800000000LL) == 0;
      if ( *(_WORD *)(v2 + 2) != 4 )
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      v5 = ACPIBuildDevicePowerNodes(v1, *(_QWORD *)(a1 + 56));
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v11 = *(_QWORD *)(v2 + 32);
      v12 = *(_WORD *)(v11 + 10);
      if ( v12 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v12);
      v13 = *(_WORD *)(v11 + 50);
      if ( v13 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v13);
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 456) = *(_DWORD *)(v11 + 24);
        v14 = *(_QWORD *)(v11 + 64);
        if ( v14 >= 6 )
          v15 = 0;
        else
          v15 = SystemPowerStateTranslation[v14];
        *(_DWORD *)(v1 + 488) = v15;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x100000000uLL);
        }
        else
        {
          v16 = *(_QWORD *)(v1 + 912);
          if ( (v16 & 0x800000000LL) != 0 )
          {
            if ( (v16 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v11 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v1 + 912) & 0x100000000LL) == 0
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v11 + 24), v17, v18, v19) )
      {
        v20 = *(unsigned __int8 *)(v11 + 24);
        v21 = v20 >> 3;
        v22 = 1 << (v20 % 8LL);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        if ( ((unsigned __int8)v22 & *((_BYTE *)GpeEnable + v21)) != 0 )
        {
          if ( (*(_QWORD *)(v1 + 8) & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v21) |= v22;
            v25 = *((_BYTE *)GpeWakeHandler + v21);
            if ( (v25 & (unsigned __int8)v22) != 0 )
              *((_BYTE *)GpeWakeHandler + v21) = v25 & ~(_BYTE)v22;
          }
          else if ( ((unsigned __int8)v22 & *((_BYTE *)GpeSpecialHandler + v21)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v21) |= v22;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs(v2, 1LL);
    v23 = *(_QWORD *)(v1 + 408);
    if ( v23 )
    {
      memset(v26, 0, 0x78uLL);
      v24 = *(_BYTE *)(v1 + 552) & 0x40;
      WORD1(v26[0]) = 1;
      v26[2] = 0LL;
      WORD1(v26[5]) = 1;
      v26[7] = 0LL;
      WORD1(v26[10]) = 1;
      v26[12] = 0LL;
      AMLIAsyncEvalObject(v23, 0LL, (v24 | 0x20u) >> 5, v26, 0LL, 0LL);
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(v1 + 8);
  v8 = (const char *)qword_1C002C340;
  v9 = (const char *)qword_1C002C340;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x28u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v5,
    v1,
    v8,
    v9);
  ACPIBuildCompleteMustSucceed(0LL);
  return v5;
}
