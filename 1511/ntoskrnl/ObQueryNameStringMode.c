/*
 * XREFs of ObQueryNameStringMode @ 0x14041FE90
 * Callers:
 *     SepQueryNameString @ 0x1403BF450 (SepQueryNameString.c)
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     sub_140495F7C @ 0x140495F7C (sub_140495F7C.c)
 *     PspInitializeFullProcessImageName @ 0x1404ABF8C (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x1404B5AC8 (ObQueryNameString.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     IopQueryNameInternal @ 0x1404D8B10 (IopQueryNameInternal.c)
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     PnpBuildCmResourceList @ 0x14052A17C (PnpBuildCmResourceList.c)
 *     IopGetRelatedFileName @ 0x1405F76DC (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x1406159EC (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x14062071C (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140621FD8 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x14062E584 (ObGetObjectInformation.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     SmKmFileInfoGetPath @ 0x14065A420 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14065BB3C (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x14066577C (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4 (OBP_GET_CURRENT_SILO_ROOT_DIRECTORY.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rbx
  __int64 (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // r10
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdi
  void **v15; // rax
  void *v16; // rdi
  unsigned int v17; // ecx
  char *v18; // rax
  struct _KTHREAD *v19; // rcx
  unsigned __int64 *v20; // r15
  __int64 v21; // rdi
  char *v22; // rax
  char *v23; // rdx
  char *v24; // rdi
  char *v25; // rcx
  size_t v26; // r8
  char *v27; // rcx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // r15
  unsigned __int64 *v30; // rcx
  char *v31; // rdi
  __int64 v32; // r15
  struct _KTHREAD *v33; // rcx
  __int64 v34; // rdi
  char *v35; // rdi
  size_t v36; // r8
  char *v37; // rcx
  char *v38; // rcx
  char v39; // [rsp+30h] [rbp-B8h]
  char v40; // [rsp+31h] [rbp-B7h]
  unsigned int v41; // [rsp+34h] [rbp-B4h]
  unsigned int v42; // [rsp+38h] [rbp-B0h]
  char *v43; // [rsp+40h] [rbp-A8h]
  char *v44; // [rsp+40h] [rbp-A8h]
  char *Object; // [rsp+48h] [rbp-A0h]
  signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-98h]
  unsigned int v47; // [rsp+58h] [rbp-90h]
  char *v48; // [rsp+60h] [rbp-88h]
  char *v49; // [rsp+60h] [rbp-88h]
  char *v50; // [rsp+60h] [rbp-88h]
  char *v51; // [rsp+70h] [rbp-78h]
  char *v52; // [rsp+70h] [rbp-78h]
  void **v53; // [rsp+78h] [rbp-70h]
  unsigned __int16 v54; // [rsp+A0h] [rbp-48h]

  v39 = 1;
  v40 = 0;
  v47 = 0;
  Object = 0LL;
  v41 = -1073741823;
  v7 = (unsigned __int64 *)(a1 - 48);
  v8 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v9 = (char *)v7 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v9 = 0LL;
  v53 = (void **)v9;
  v10 = 0LL;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v8] + 160);
  if ( v11 )
  {
    if ( v9 && *((_WORD *)v9 + 4) )
      LOBYTE(v8) = 1;
    else
      v8 = 0LL;
    v41 = v11(a1, v8, a2, a3, a4, a5);
    goto LABEL_9;
  }
  v10 = (char *)OBP_GET_CURRENT_SILO_ROOT_DIRECTORY();
  while ( v9 )
  {
    if ( a1 == v10 || a1 == ObpRootDirectoryObject )
    {
      v17 = 2;
LABEL_40:
      v47 = v17 + 18;
      *a4 = v17 + 18;
      if ( a3 < v17 + 18 )
      {
        v41 = -1073741820;
        v39 = 0;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = KeAbPreAcquire((ULONG_PTR)(v7 + 2), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v7 + 2, v14, (ULONG_PTR)(v7 + 2));
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v15 = v53;
      v16 = *v53;
      v48 = (char *)*v53;
      if ( *v53 )
      {
        ObfReferenceObject(v16);
        Object = (char *)v16;
        v15 = v53;
      }
      v42 = *((unsigned __int16 *)v15 + 4) + 2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v7 + 2);
      KeAbPostRelease((ULONG_PTR)(v7 + 2));
      KeLeaveCriticalRegion();
      v17 = v42;
      v18 = v48;
      while ( v18 != v10 && v18 != ObpRootDirectoryObject && v18 )
      {
        v51 = v18 - 48;
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        v20 = (unsigned __int64 *)(v18 - 32);
        v21 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        if ( (v51[26] & 2) == 0
          || (v22 = (char *)ObpInfoMaskToOffset[v51[26] & 3], v23 = (char *)(v51 - v22), v51 == v22)
          || !*(_QWORD *)v23 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v51 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v51 + 2);
          KeAbPostRelease((ULONG_PTR)(v51 + 16));
          KeLeaveCriticalRegion();
          v17 = v42 + 8;
          break;
        }
        v42 += 2 + *((unsigned __int16 *)v23 + 4);
        v49 = *(char **)v23;
        ObfReferenceObject(*(PVOID *)v23);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v20);
        KeAbPostRelease((ULONG_PTR)v20);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v18 = v49;
        Object = v49;
        v17 = v42;
        if ( v42 > 0xFFFF )
          goto LABEL_45;
      }
      if ( v17 <= 0xFFFF )
        goto LABEL_40;
LABEL_45:
      v41 = -1073741562;
      v39 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v39 )
      goto LABEL_9;
    v24 = (*((_BYTE *)v7 + 26) & 2) != 0 ? (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3] : 0LL;
    if ( !v24 )
      break;
    v25 = (char *)(a2 + v47 - 2);
    *(_WORD *)v25 = 0;
    if ( a1 != v10 && a1 != ObpRootDirectoryObject )
    {
      v26 = *((unsigned __int16 *)v24 + 4);
      v27 = &v25[-v26];
      v43 = v27;
      if ( (unsigned __int64)v27 <= a2 + 16 )
      {
        v40 = 1;
        goto LABEL_95;
      }
      memmove(v27, *((const void **)v24 + 2), v26);
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v29 = KeAbPreAcquire((ULONG_PTR)(v7 + 2), 0LL, 0LL);
      v30 = v7 + 2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v30, v29, (ULONG_PTR)(v7 + 2));
        v30 = v7 + 2;
      }
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      v31 = *(char **)v24;
      v50 = v31;
      if ( v31 )
      {
        ObfReferenceObject(v31);
        Object = v31;
        v30 = v7 + 2;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)v30);
        v30 = v7 + 2;
      }
      KeAbPostRelease((ULONG_PTR)v30);
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        if ( v50 == v10 || v50 == ObpRootDirectoryObject || !v50 )
        {
          v25 = v43;
          goto LABEL_81;
        }
        v44 = v43 - 2;
        *(_WORD *)v44 = 92;
        v52 = v50 - 48;
        if ( (*(v50 - 22) & 2) != 0 )
          v32 = (__int64)&v50[-ObpInfoMaskToOffset[*(v50 - 22) & 3] - 48];
        else
          v32 = 0LL;
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        BugCheckParameter2 = (signed __int64 *)(v52 + 16);
        v34 = KeAbPreAcquire((ULONG_PTR)(v52 + 16), 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v52 + 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)v52 + 2, v34, (ULONG_PTR)(v52 + 16));
        if ( v34 )
          *(_BYTE *)(v34 + 26) |= 1u;
        if ( !v32 || !*(_QWORD *)v32 )
          break;
        ObfDereferenceObject(Object);
        v35 = *(char **)v32;
        v50 = *(char **)v32;
        ObfReferenceObject(*(PVOID *)v32);
        Object = v35;
        v36 = *(unsigned __int16 *)(v32 + 8);
        v37 = &v44[-v36];
        v43 = v37;
        if ( (unsigned __int64)v37 <= a2 + 16 )
        {
          v40 = 1;
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegion();
          goto LABEL_95;
        }
        memmove(v37, *(const void **)(v32 + 16), v36);
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v52 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v52 + 2);
      KeAbPostRelease((ULONG_PTR)(v52 + 16));
      KeLeaveCriticalRegion();
      v25 = v44 - 6;
      if ( (unsigned __int64)(v44 - 6) < a2 + 16 )
        v25 = (char *)(a2 + 16);
      *(_DWORD *)v25 = *(_DWORD *)L"...";
      *((_WORD *)v25 + 2) = asc_140554F90[2];
      if ( v25 == (char *)(a2 + 16) )
        v25 += 2;
    }
LABEL_81:
    v38 = v25 - 2;
    *(_WORD *)v38 = 92;
    v54 = a2 + v47 - (_WORD)v38;
    *(_WORD *)(a2 + 2) = v54;
    *(_WORD *)a2 = v54 - 2;
    *(_QWORD *)(a2 + 8) = a2 + 16;
    if ( (char *)(a2 + 16) != v38 )
    {
      memmove((void *)(a2 + 16), v38, v54);
      *a4 = v54 + 16;
    }
LABEL_95:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v40 )
      goto LABEL_98;
    if ( (*((_BYTE *)v7 + 26) & 2) != 0 )
      v9 = (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3];
    else
      v9 = 0LL;
    v53 = (void **)v9;
    v40 = 0;
  }
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_98:
    v41 = 0;
    goto LABEL_9;
  }
  v41 = -1073741820;
LABEL_9:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v41;
}
