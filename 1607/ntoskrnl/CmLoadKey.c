/*
 * XREFs of CmLoadKey @ 0x1404A4834
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404A4ED0 (CmpQueryHiveRedirectionFileList.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     ObDrainDeferredObjectDeletion @ 0x140665DB4 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(
        _QWORD *a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        PRKEVENT a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 *a10)
{
  int v11; // r13d
  _WORD *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r12
  UNICODE_STRING *v20; // rcx
  UNICODE_STRING *p_Destination; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  int KeyCommon; // edi
  int v26; // r11d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  NTSTATUS v33; // ebx
  int Conflict; // ebx
  __int64 *v35; // r13
  __int64 v36; // r15
  int v37; // [rsp+54h] [rbp-35h] BYREF
  ULONG_PTR v38; // [rsp+58h] [rbp-31h]
  HANDLE Handle; // [rsp+60h] [rbp-29h] BYREF
  PVOID Object; // [rsp+68h] [rbp-21h] BYREF
  PVOID v41; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-11h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v44; // [rsp+E8h] [rbp+5Fh]

  v44 = a4;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  v11 = a4;
  HIWORD(Destination.Buffer) = 0;
  v13 = (_WORD *)a1[2];
  v38 = 0LL;
  LOBYTE(v43) = 0;
  Destination.Length = 0;
  if ( *v13 >= 2u )
  {
    for ( LODWORD(v15) = (unsigned __int16)*v13 >> 1; (_DWORD)v15; *(_WORD *)v16 -= 2 )
    {
      v16 = a1[2];
      v15 = (unsigned int)(v15 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v16 + 8) + 2 * v15) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v20 = (UNICODE_STRING *)a1[2];
  *(_DWORD *)&Destination.Length = 17039360;
  Destination.Buffer = PoolWithTag;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v20, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v26 = 0;
    if ( (a3 & 0x2000) != 0 )
      v26 = 3;
    if ( (a3 & 0x4000) != 0 )
      v26 |= 8u;
    if ( a5 )
      v26 |= 4u;
    KeyCommon = CmpCmdHiveOpen(
                  a2,
                  ((a3 & 0x20) << 21) | ((a3 & 0x80) << 20) | ((a3 & 0x200) << 19) | ((a3 & 4) << 27) | ((a3 & 0x400) << 20) | ((a3 & 0xFFFFF000) << 19) | 0x1090001,
                  v26,
                  a7,
                  (__int64)&v43);
    v27 = 3221225539LL;
    v28 = KeyCommon + 0x80000000;
    if ( (int)v28 >= 0 )
    {
      if ( KeyCommon != -1073741757 )
      {
        v29 = v38;
        goto LABEL_28;
      }
LABEL_36:
      if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v37, 8, (void *)a7, 0LL, 0LL, 0LL) < 0
        || (v33 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
            ZwClose(Handle),
            v33 < 0) )
      {
        KeyCommon = -1073741757;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)Object, a3, v11, (__int64)a6, a8, a9, (__int64)a10);
        ObfDereferenceObject(Object);
        KeyCommon = 0;
        if ( Conflict < 0 )
          KeyCommon = -1073741757;
      }
      v29 = v38;
      goto LABEL_28;
    }
    if ( KeyCommon == -1073741757 )
      goto LABEL_36;
    v35 = a10;
    v29 = v38;
    if ( (a3 & 0x2000) != 0 )
    {
      KeyCommon = ObReferenceObjectByHandle(
                    *(HANDLE *)(v38 + 2664),
                    0,
                    *(POBJECT_TYPE *)CmIoFileObjectType,
                    0,
                    &v41,
                    0LL);
      if ( KeyCommon < 0 )
        goto LABEL_28;
      v36 = v44;
      KeyCommon = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v41, a3, v44, (__int64)a6, a8, a9, (__int64)v35);
      ObfDereferenceObject(v41);
      if ( KeyCommon >= 0 )
        goto LABEL_46;
      if ( KeyCommon != -1073741275 )
      {
LABEL_28:
        if ( v29 )
        {
          ObDrainDeferredObjectDeletion(v28, v27);
          CmpDestroySecurityCache(v29);
          CmpUnJoinClassOfTrust(v29);
          CmpVERemoveHiveFromSIDMappingTable(v29);
          LOBYTE(v30) = 1;
          HvFreeHive(v29, v30);
          CmpCmdHiveClose(v29);
          CmpDereferenceHive(v29);
        }
        goto LABEL_30;
      }
    }
    else
    {
      v36 = v44;
    }
    KeyCommon = CmpLoadKeyCommon(v38, a1, a3, v36, a5, a6, a8, v35, 1, v43);
    v29 = 0LL;
    if ( KeyCommon < 0 )
    {
LABEL_30:
      ExReleaseRundownProtection(&CmpShutdownRundown);
      v31 = KeGetCurrentThread();
      v32 = v31->KernelApcDisable + 1;
      v31->KernelApcDisable = v32;
      if ( !v32
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v31->ApcState.ApcListHead[0].Flink != &v31->152
        && !v31->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v31);
      }
      goto LABEL_34;
    }
LABEL_46:
    KeyCommon = 0;
    goto LABEL_28;
  }
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($2B8565053CDC740D4E4887693DD8AC9E *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v23);
  }
  KeyCommon = -1073741431;
LABEL_34:
  ExFreePoolWithTag(v19, 0);
  return (unsigned int)KeyCommon;
}
