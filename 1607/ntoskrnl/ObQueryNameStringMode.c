/*
 * XREFs of ObQueryNameStringMode @ 0x140433A60
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     PspInitializeFullProcessImageName @ 0x1404B5B34 (PspInitializeFullProcessImageName.c)
 *     sub_1404BE890 @ 0x1404BE890 (sub_1404BE890.c)
 *     ObQueryNameString @ 0x1404BFAE4 (ObQueryNameString.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 *     IoRegisterDeviceInterface @ 0x140540DA8 (IoRegisterDeviceInterface.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x14055690C (PnpBuildCmResourceList.c)
 *     IopGetRelatedFileName @ 0x140621550 (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x140655F60 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656CFC (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x1406666B0 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x1406980DC (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x140699848 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140091610 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r13d
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  char *v10; // rdi
  unsigned int (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // r10
  __int64 CurrentSilo; // rax
  char *v14; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rdi
  char *v17; // rdi
  unsigned int v18; // ecx
  char *v19; // rax
  struct _KTHREAD *v20; // rcx
  unsigned __int64 *v21; // r14
  __int64 v22; // rdi
  char *v23; // rax
  char *v24; // rdx
  char *v25; // rcx
  size_t v26; // r8
  char *v27; // rcx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // r14
  char *v30; // rdi
  __int64 v31; // r14
  struct _KTHREAD *v32; // rcx
  unsigned __int64 *v33; // r13
  __int64 v34; // rdi
  char *v35; // rdi
  size_t v36; // r8
  char *v37; // rcx
  char *v38; // rcx
  char v39; // [rsp+30h] [rbp-A8h]
  char v40; // [rsp+31h] [rbp-A7h]
  unsigned int v41; // [rsp+34h] [rbp-A4h]
  unsigned int v42; // [rsp+38h] [rbp-A0h]
  char *v43; // [rsp+40h] [rbp-98h]
  char *v44; // [rsp+40h] [rbp-98h]
  char *Object; // [rsp+48h] [rbp-90h]
  unsigned int v46; // [rsp+50h] [rbp-88h]
  char *v47; // [rsp+60h] [rbp-78h]
  char *v48; // [rsp+60h] [rbp-78h]
  char *v49; // [rsp+60h] [rbp-78h]
  char *v50; // [rsp+68h] [rbp-70h]
  char *v51; // [rsp+68h] [rbp-70h]
  char *v52; // [rsp+70h] [rbp-68h]
  char *v53; // [rsp+78h] [rbp-60h]
  unsigned __int16 v54; // [rsp+8Ch] [rbp-4Ch]

  v5 = a3;
  v39 = 1;
  v40 = 0;
  v46 = 0;
  Object = 0LL;
  v41 = -1073741823;
  v8 = (unsigned __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v53 = v10;
  v11 = *(unsigned int (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9]
                                                                                                 + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    return v11(a1, v9, a2, a3, a4, a5);
  }
  else
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
    v52 = v14;
    while ( v10 )
    {
      if ( a1 == v14 || a1 == ObpRootDirectoryObject )
      {
        v18 = 2;
LABEL_39:
        v46 = v18 + 18;
        *a4 = v18 + 18;
        if ( v5 < v18 + 18 )
        {
          v41 = -1073741820;
          v39 = 0;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = KeAbPreAcquire((ULONG_PTR)(v8 + 2), 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v8 + 2, v16, (ULONG_PTR)(v8 + 2));
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        v17 = *(char **)v53;
        v47 = *(char **)v53;
        if ( *(_QWORD *)v53 )
        {
          ObfReferenceObject(v17);
          Object = v17;
        }
        v42 = *((unsigned __int16 *)v53 + 4) + 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8 + 2);
        KeAbPostRelease((ULONG_PTR)(v8 + 2));
        KeLeaveCriticalRegion();
        v18 = v42;
        v19 = v47;
        while ( v19 != v52 && v19 != ObpRootDirectoryObject && v19 )
        {
          v50 = v19 - 48;
          v20 = KeGetCurrentThread();
          --v20->KernelApcDisable;
          v21 = (unsigned __int64 *)(v19 - 32);
          v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v21, v22, (ULONG_PTR)v21);
          if ( v22 )
            *(_BYTE *)(v22 + 26) |= 1u;
          if ( (v50[26] & 2) == 0
            || (v23 = (char *)ObpInfoMaskToOffset[v50[26] & 3], v24 = (char *)(v50 - v23), v50 == v23)
            || !*(_QWORD *)v24 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v50 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v50 + 2);
            KeAbPostRelease((ULONG_PTR)(v50 + 16));
            KeLeaveCriticalRegion();
            v18 = v42 + 8;
            break;
          }
          v42 += 2 + *((unsigned __int16 *)v24 + 4);
          v48 = *(char **)v24;
          ObfReferenceObject(*(PVOID *)v24);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v21);
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          v19 = v48;
          Object = v48;
          v18 = v42;
          if ( v42 > 0xFFFF )
            goto LABEL_44;
        }
        if ( v18 <= 0xFFFF )
        {
          v5 = a3;
          goto LABEL_39;
        }
LABEL_44:
        v41 = -1073741562;
        v39 = 0;
        v5 = a3;
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( !v39 )
        return v41;
      if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
        v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
      else
        v10 = 0LL;
      v53 = v10;
      if ( v10 )
      {
        v25 = (char *)(a2 + v46 - 2);
        *(_WORD *)v25 = 0;
        if ( a1 == v52 || a1 == ObpRootDirectoryObject )
        {
LABEL_81:
          v38 = v25 - 2;
          *(_WORD *)v38 = 92;
          v54 = a2 + v46 - (_WORD)v38;
          *(_WORD *)(a2 + 2) = v54;
          *(_WORD *)a2 = v54 - 2;
          *(_QWORD *)(a2 + 8) = a2 + 16;
          if ( (char *)(a2 + 16) != v38 )
          {
            memmove((void *)(a2 + 16), v38, v54);
            *a4 = v54 + 16;
          }
        }
        else
        {
          v26 = *((unsigned __int16 *)v10 + 4);
          v27 = &v25[-v26];
          v43 = v27;
          if ( (unsigned __int64)v27 <= a2 + 16 )
          {
            v40 = 1;
          }
          else
          {
            memmove(v27, *((const void **)v10 + 2), v26);
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            v29 = KeAbPreAcquire((ULONG_PTR)(v8 + 2), 0LL, 0);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v8 + 2, v29, (ULONG_PTR)(v8 + 2));
            if ( v29 )
              *(_BYTE *)(v29 + 26) |= 1u;
            v30 = *(char **)v10;
            v49 = v30;
            if ( v30 )
            {
              ObfReferenceObject(v30);
              Object = v30;
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v8 + 2);
            KeAbPostRelease((ULONG_PTR)(v8 + 2));
            KeLeaveCriticalRegion();
            while ( 1 )
            {
              if ( v49 == v52 || v49 == ObpRootDirectoryObject || !v49 )
              {
                v25 = v43;
LABEL_80:
                v5 = a3;
                goto LABEL_81;
              }
              v44 = v43 - 2;
              *(_WORD *)v44 = 92;
              v51 = v49 - 48;
              if ( (*(v49 - 22) & 2) != 0 )
                v31 = (__int64)&v49[-ObpInfoMaskToOffset[*(v49 - 22) & 3] - 48];
              else
                v31 = 0LL;
              v32 = KeGetCurrentThread();
              --v32->KernelApcDisable;
              v33 = (unsigned __int64 *)(v51 + 16);
              v34 = KeAbPreAcquire((ULONG_PTR)(v51 + 16), 0LL, 0);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v51 + 2, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx(v33, v34, (ULONG_PTR)v33);
              if ( v34 )
                *(_BYTE *)(v34 + 26) |= 1u;
              if ( !v31 || !*(_QWORD *)v31 )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v51 + 2, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v51 + 2);
                KeAbPostRelease((ULONG_PTR)(v51 + 16));
                KeLeaveCriticalRegion();
                v25 = v44 - 6;
                if ( (unsigned __int64)(v44 - 6) < a2 + 16 )
                  v25 = (char *)(a2 + 16);
                *(_DWORD *)v25 = *(_DWORD *)L"...";
                *((_WORD *)v25 + 2) = asc_1405879B0[2];
                if ( v25 == (char *)(a2 + 16) )
                  v25 += 2;
                goto LABEL_80;
              }
              ObfDereferenceObject(Object);
              v35 = *(char **)v31;
              v49 = *(char **)v31;
              ObfReferenceObject(*(PVOID *)v31);
              Object = v35;
              v36 = *(unsigned __int16 *)(v31 + 8);
              v37 = &v44[-v36];
              v43 = v37;
              if ( (unsigned __int64)v37 <= a2 + 16 )
                break;
              memmove(v37, *(const void **)(v31 + 16), v36);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)v33);
              KeAbPostRelease((ULONG_PTR)v33);
              KeLeaveCriticalRegion();
            }
            v40 = 1;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v33);
            KeAbPostRelease((ULONG_PTR)v33);
            KeLeaveCriticalRegion();
            v5 = a3;
          }
        }
        if ( Object )
          ObfDereferenceObject(Object);
        if ( !v40 )
          return 0;
        if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
          v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
        else
          v10 = 0LL;
        v53 = v10;
        v40 = 0;
      }
      v14 = v52;
    }
    *a4 = 16;
    if ( v5 >= 0x10 )
    {
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      return 0;
    }
    return (unsigned int)-1073741820;
  }
}
