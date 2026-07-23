/*
 * XREFs of CmpConstructNameWithStatus @ 0x1404365E0
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140402E14 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpConstructAndCacheName @ 0x1404C56E4 (CmpConstructAndCacheName.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 * Callees:
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B48A0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  BOOLEAN v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // bx
  struct _PRIVILEGE_SET *v11; // rdi
  __int64 v12; // rcx
  SIZE_T v13; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v15; // ebx
  __int16 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r11
  __int16 v19; // r10
  __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+28h] [rbp-40h]
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  v25 = 4294901760LL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  Privileges = 0LL;
  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v6 = 1;
  }
  else
  {
    v6 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v6 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  }
  v10 = *(_WORD *)(a1 + 58);
  v11 = 0LL;
  if ( v10 >= 2 )
  {
    v12 = (unsigned int)(v10 - 1);
    if ( v10 != 1 )
    {
      v13 = 8LL * (unsigned int)v12;
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v12, v13, 0x35364D43u);
      v11 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        v11 = Privileges;
        v15 = -1073741670;
        goto LABEL_26;
      }
      memset(TransientPoolWithTag, 0, v13);
    }
  }
  v16 = *(_WORD *)(a1 + 58);
  LOWORD(v25) = v10;
  Privileges = v11;
  WORD1(v25) = v16;
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 184);
    if ( v17 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(&v25, (unsigned __int16)v16, *(_QWORD *)(v17 + 16));
        v17 = *(_QWORD *)(v18 + 24);
        v16 = v19 - 1;
      }
      while ( v17 );
      v11 = Privileges;
      v16 = WORD1(v25);
    }
  }
  else
  {
    v26[0] = a1;
  }
  if ( v6 && v16 >= 0 )
  {
    do
    {
      v20 = v16 < 2 ? v26[v16] : *((_QWORD *)v11 + v16 - 2);
      if ( *(_WORD *)(v20 + 58) && *(_BYTE *)(v20 + 57) == 1 )
        break;
      if ( *(_DWORD *)(v20 + 32) != -1 )
      {
        if ( *(_DWORD *)(a1 + 32) == -1 && (*(_BYTE *)(a1 + 178) & 4) != 0 )
          break;
        v15 = CmpConstructNameFromKeyNodes((__int64)&v25, &v28);
        if ( v15 >= 0 )
          goto LABEL_25;
        goto LABEL_26;
      }
      --v16;
    }
    while ( v16 >= 0 );
  }
  v15 = CmpConstructNameFromKcbNameBlocks(a1, &v28);
  if ( v15 >= 0 )
  {
LABEL_25:
    v15 = 0;
    *a2 = v28;
  }
LABEL_26:
  if ( v11 )
    MiDeleteSubsection(v11);
  if ( v6 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v22);
    }
  }
  return (unsigned int)v15;
}
