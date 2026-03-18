/*
 * XREFs of ObQueryNameStringMode @ 0x140426100
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     NtQueryObject @ 0x1404259B0 (NtQueryObject.c)
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     sub_140459F24 @ 0x140459F24 (sub_140459F24.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 *     IopGetRelatedFileName @ 0x140671564 (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x140672188 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x14069FC58 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     SmKmFileInfoGetPath @ 0x1406DCB64 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1406DE390 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406E8870 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  __int64 v5; // r12
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rbx
  __int64 (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // r10
  __int64 v13; // r9
  unsigned int v14; // ecx
  char *v15; // rax
  struct _KTHREAD *v16; // rcx
  unsigned __int64 *v17; // r15
  __int64 v18; // rdi
  char *v19; // rax
  char *v20; // rdx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rdi
  __int64 v27; // r9
  void **v28; // rax
  void *v29; // rdi
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  char *v32; // rdi
  char *v33; // rcx
  __int64 v34; // r15
  struct _KTHREAD *v35; // rcx
  unsigned __int64 *v36; // r12
  __int64 v37; // rdi
  __int64 v38; // r9
  char *v39; // rdi
  size_t v40; // r8
  char *v41; // rcx
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  char *v44; // rcx
  int v45; // eax
  size_t v46; // rdi
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  size_t v49; // r8
  char *v50; // rcx
  struct _KTHREAD *v51; // rcx
  __int64 v52; // r9
  __int64 v53; // r9
  __int64 v54; // r15
  char *v55; // rdi
  struct _KTHREAD *v56; // rcx
  __int16 v57; // ax
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  char v60; // [rsp+30h] [rbp-E8h]
  char v61; // [rsp+31h] [rbp-E7h]
  unsigned int v62; // [rsp+34h] [rbp-E4h]
  unsigned int v63; // [rsp+38h] [rbp-E0h]
  char *v64; // [rsp+40h] [rbp-D8h]
  char *v65; // [rsp+40h] [rbp-D8h]
  char *Object; // [rsp+48h] [rbp-D0h]
  unsigned int v67; // [rsp+50h] [rbp-C8h]
  char *v68; // [rsp+58h] [rbp-C0h]
  char *v69; // [rsp+58h] [rbp-C0h]
  char *v70; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v71; // [rsp+60h] [rbp-B8h]
  char *v72; // [rsp+70h] [rbp-A8h]
  char *v73; // [rsp+70h] [rbp-A8h]
  void **v74; // [rsp+78h] [rbp-A0h]
  char *v75; // [rsp+90h] [rbp-88h] BYREF
  __int64 v76; // [rsp+98h] [rbp-80h]
  int v77; // [rsp+A0h] [rbp-78h]
  struct _KTHREAD *v78; // [rsp+A8h] [rbp-70h]
  struct _KTHREAD *v79; // [rsp+B0h] [rbp-68h]
  struct _KTHREAD *v80; // [rsp+B8h] [rbp-60h]
  struct _KTHREAD *v81; // [rsp+C0h] [rbp-58h]
  struct _KTHREAD *v82; // [rsp+C8h] [rbp-50h]
  struct _KTHREAD *v83; // [rsp+D0h] [rbp-48h]
  struct _KTHREAD *v84; // [rsp+D8h] [rbp-40h]

  v5 = a2;
  v61 = 1;
  v60 = 0;
  v67 = 0;
  Object = 0LL;
  v62 = -1073741823;
  v7 = (unsigned __int64 *)(a1 - 48);
  v8 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v9 = (char *)v7 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v9 = 0LL;
  v74 = (void **)v9;
  v10 = 0LL;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v8] + 160);
  if ( v11 )
  {
    if ( v9 && *((_WORD *)v9 + 4) )
      LOBYTE(v8) = 1;
    else
      v8 = 0LL;
    v62 = v11(a1, v8, v5, a3, a4, a5);
  }
  else
  {
    if ( (int)PsGetSiloObject(-1LL, &ObpDirectoryObjectType, &v75) >= 0 )
    {
      v10 = v75;
    }
    else
    {
      v10 = (char *)ObpRootDirectoryObject;
      v75 = (char *)ObpRootDirectoryObject;
      if ( ObpRootDirectoryObject )
        ObfReferenceObject(ObpRootDirectoryObject);
    }
    while ( v9 )
    {
      if ( a1 == v10 || a1 == ObpRootDirectoryObject )
      {
        v14 = 2;
LABEL_38:
        v67 = v14 + 18;
        *a4 = v14 + 18;
        if ( a3 < v14 + 18 )
        {
          v62 = -1073741820;
          v61 = 0;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v26 = KeAbPreAcquire((ULONG_PTR)(v7 + 2), 0LL, 0LL, v13);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v7 + 2, v26, (ULONG_PTR)(v7 + 2), v27);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v28 = v74;
        v29 = *v74;
        v69 = (char *)*v74;
        if ( *v74 )
        {
          ObfReferenceObject(v29);
          Object = (char *)v29;
          v28 = v74;
        }
        v63 = *((unsigned __int16 *)v28 + 4) + 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v7 + 2);
        KeAbPostRelease((ULONG_PTR)(v7 + 2));
        v30 = KeGetCurrentThread();
        v81 = v30;
        v31 = v30->KernelApcDisable + 1;
        v30->KernelApcDisable = v31;
        if ( !v31
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
          && !v30->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v14 = v63;
        v15 = v69;
        while ( v15 != v10 && v15 != ObpRootDirectoryObject && v15 )
        {
          v72 = v15 - 48;
          v16 = KeGetCurrentThread();
          --v16->KernelApcDisable;
          v17 = (unsigned __int64 *)(v15 - 32);
          v18 = KeAbPreAcquire((ULONG_PTR)v17, 0LL, 0LL, v13);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v17, v18, (ULONG_PTR)v17, 17LL);
          if ( v18 )
            *(_BYTE *)(v18 + 26) |= 1u;
          if ( (v72[26] & 2) == 0
            || (v19 = (char *)ObpInfoMaskToOffset[v72[26] & 3], v20 = (char *)(v72 - v19), v72 == v19)
            || !*(_QWORD *)v20 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v72 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v72 + 2);
            KeAbPostRelease((ULONG_PTR)(v72 + 16));
            v23 = KeGetCurrentThread();
            v83 = v23;
            v24 = v23->KernelApcDisable + 1;
            v23->KernelApcDisable = v24;
            if ( !v24
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
              && !v23->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v14 = v63 + 8;
            break;
          }
          v63 += 2 + *((unsigned __int16 *)v20 + 4);
          v68 = *(char **)v20;
          ObfReferenceObject(*(PVOID *)v20);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v17);
          KeAbPostRelease((ULONG_PTR)v17);
          v21 = KeGetCurrentThread();
          v79 = v21;
          v22 = v21->KernelApcDisable + 1;
          v21->KernelApcDisable = v22;
          if ( !v22
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
            && !v21->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObject(Object);
          v15 = v68;
          Object = v68;
          v14 = v63;
          if ( v63 > 0xFFFF )
            goto LABEL_62;
        }
        if ( v14 <= 0xFFFF )
          goto LABEL_38;
LABEL_62:
        v62 = -1073741562;
        v61 = 0;
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( !v61 )
        goto LABEL_9;
      v32 = (*((_BYTE *)v7 + 26) & 2) != 0 ? (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3] : 0LL;
      if ( !v32 )
        break;
      v71 = v5 + 16;
      v33 = (char *)(v5 + v67 - 2);
      *(_WORD *)v33 = 0;
      if ( a1 == v10 || a1 == ObpRootDirectoryObject )
      {
LABEL_92:
        v44 = v33 - 2;
        *(_WORD *)v44 = 92;
        v45 = (unsigned __int16)(v5 + v67 - (_WORD)v44);
        v77 = v45;
        *(_WORD *)(v5 + 2) = v45;
        v46 = (unsigned __int16)(v5 + v67 - (_WORD)v44);
        *(_WORD *)v5 = v45 - 2;
        *(_QWORD *)(v5 + 8) = v5 + 16;
        if ( (char *)(v5 + 16) != v44 )
        {
          memmove((void *)(v5 + 16), v44, v46);
          *a4 = v46 + 16;
        }
      }
      else
      {
        v76 = (__int64)(v32 + 8);
        v49 = *((unsigned __int16 *)v32 + 4);
        v50 = &v33[-v49];
        v65 = v50;
        if ( (unsigned __int64)v50 <= v5 + 16 )
        {
          v60 = 1;
        }
        else
        {
          memmove(v50, *((const void **)v32 + 2), v49);
          v51 = KeGetCurrentThread();
          --v51->KernelApcDisable;
          v54 = KeAbPreAcquire((ULONG_PTR)(v7 + 2), 0LL, 0LL, v52);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v7 + 2, v54, (ULONG_PTR)(v7 + 2), v53);
          if ( v54 )
            *(_BYTE *)(v54 + 26) |= 1u;
          v55 = *(char **)v32;
          v70 = v55;
          if ( v55 )
          {
            ObfReferenceObject(v55);
            Object = v55;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v7 + 2);
          KeAbPostRelease((ULONG_PTR)(v7 + 2));
          v56 = KeGetCurrentThread();
          v78 = v56;
          v57 = v56->KernelApcDisable + 1;
          v56->KernelApcDisable = v57;
          if ( !v57
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
            && !v56->SpecialApcDisable )
          {
LABEL_106:
            KiCheckForKernelApcDelivery();
            goto LABEL_73;
          }
          while ( 1 )
          {
LABEL_73:
            if ( v70 == v10 || v70 == ObpRootDirectoryObject || !v70 )
            {
              v33 = v65;
LABEL_91:
              v5 = a2;
              goto LABEL_92;
            }
            v64 = v65 - 2;
            *(_WORD *)v64 = 92;
            v73 = v70 - 48;
            if ( (*(v70 - 22) & 2) != 0 )
              v34 = (__int64)&v70[-ObpInfoMaskToOffset[*(v70 - 22) & 3] - 48];
            else
              v34 = 0LL;
            v35 = KeGetCurrentThread();
            --v35->KernelApcDisable;
            v36 = (unsigned __int64 *)(v73 + 16);
            v37 = KeAbPreAcquire((ULONG_PTR)(v73 + 16), 0LL, 0LL, v13);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v73 + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v36, v37, (ULONG_PTR)v36, v38);
            if ( v37 )
              *(_BYTE *)(v37 + 26) |= 1u;
            if ( !v34 || !*(_QWORD *)v34 )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v73 + 2, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)v73 + 2);
              KeAbPostRelease((ULONG_PTR)(v73 + 16));
              v47 = KeGetCurrentThread();
              v84 = v47;
              v48 = v47->KernelApcDisable + 1;
              v47->KernelApcDisable = v48;
              if ( !v48
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
                && !v47->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v33 = v64 - 6;
              if ( (unsigned __int64)(v64 - 6) < v71 )
                v33 = (char *)v71;
              *(_DWORD *)v33 = *(_DWORD *)L"...";
              *((_WORD *)v33 + 2) = asc_1405CCD30[2];
              if ( v33 == (char *)v71 )
                v33 += 2;
              goto LABEL_91;
            }
            ObfDereferenceObject(Object);
            v39 = *(char **)v34;
            v70 = *(char **)v34;
            ObfReferenceObject(*(PVOID *)v34);
            Object = v39;
            v76 = v34 + 8;
            v40 = *(unsigned __int16 *)(v34 + 8);
            v41 = &v64[-v40];
            v65 = v41;
            if ( (unsigned __int64)v41 <= v71 )
              break;
            memmove(v41, *(const void **)(v34 + 16), v40);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v36);
            KeAbPostRelease((ULONG_PTR)v36);
            v42 = KeGetCurrentThread();
            v82 = v42;
            v43 = v42->KernelApcDisable + 1;
            v42->KernelApcDisable = v43;
            if ( !v43
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
              && !v42->SpecialApcDisable )
            {
              goto LABEL_106;
            }
          }
          v60 = 1;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v36);
          KeAbPostRelease((ULONG_PTR)v36);
          v58 = KeGetCurrentThread();
          v80 = v58;
          v59 = v58->KernelApcDisable + 1;
          v58->KernelApcDisable = v59;
          if ( !v59
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
            && !v58->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v5 = a2;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v60 )
        goto LABEL_133;
      if ( (*((_BYTE *)v7 + 26) & 2) != 0 )
        v9 = (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3];
      else
        v9 = 0LL;
      v74 = (void **)v9;
      v60 = 0;
    }
    *a4 = 16;
    if ( a3 >= 0x10 )
    {
      *(_DWORD *)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
LABEL_133:
      v62 = 0;
      goto LABEL_9;
    }
    v62 = -1073741820;
  }
LABEL_9:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v62;
}
