/*
 * XREFs of CmpInitHiveFromFile @ 0x14044A738
 * Callers:
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwSetInformationObject @ 0x14017FB70 (ZwSetInformationObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpLogEvent @ 0x140653B18 (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        unsigned int a2,
        _QWORD *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  _QWORD *v10; // r10
  char *v12; // r11
  unsigned int v13; // r8d
  __int64 v14; // r9
  int v15; // esi
  char v16; // r14
  unsigned int v17; // eax
  BOOLEAN v18; // r15
  unsigned int v19; // r13d
  HANDLE v20; // rbx
  int v21; // r14d
  int v23; // edi
  HANDLE v24; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v26; // rtt
  int v27; // r14d
  HANDLE v28; // rsi
  PVOID PoolWithTag; // rax
  __int64 v30; // rbx
  char *v31; // rcx
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  int FileSecurityDescriptor; // esi
  struct _KTHREAD *v36; // rax
  __int16 v37; // cx
  HANDLE v38; // rbx
  HANDLE v39; // rdi
  bool v40; // zf
  unsigned __int64 v41; // rtt
  unsigned __int64 v42; // rtt
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  unsigned __int64 v45; // rtt
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  unsigned __int64 v48; // rtt
  struct _KTHREAD *v49; // rcx
  __int16 v50; // ax
  unsigned __int64 v51; // rtt
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  char v54; // [rsp+60h] [rbp-A0h]
  __int16 ObjectInformation; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v56[2]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v57; // [rsp+6Ch] [rbp-94h] BYREF
  int v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+74h] [rbp-8Ch]
  unsigned int v60; // [rsp+78h] [rbp-88h]
  HANDLE ObjectHandle; // [rsp+80h] [rbp-80h]
  HANDLE v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h]
  int v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h]
  void *v68; // [rsp+C8h] [rbp-38h]
  _QWORD *v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h] BYREF
  char *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v73; // [rsp+F8h] [rbp-8h]
  _QWORD v74[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp+20h] BYREF
  char FileInformation[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v77; // [rsp+140h] [rbp+40h]

  v10 = a3;
  v69 = a3;
  v15 = a2 >> 17;
  v12 = a4;
  v13 = (a5 >> 29) & 2;
  v71 = a4;
  v14 = a6;
  LOBYTE(v15) = (a2 & 0x20000) == 0;
  v73 = a9;
  v16 = 0;
  v17 = a2;
  v18 = 0;
  v19 = (a5 >> 19) & 0x40;
  v59 = a2;
  v66 = a6;
  v68 = a10;
  P = 0LL;
  v60 = v13;
  v54 = 0;
  while ( 1 )
  {
    v58 = v15;
    *v10 = 0LL;
    v63 = 0;
    v20 = 0LL;
    Handle = 0LL;
    v62 = 0LL;
    v70 = 0LL;
    if ( (v17 & 0x8000) == 0 )
      break;
    v19 |= 0x20u;
    if ( (_BYTE)v15 )
      v19 |= 4u;
    if ( (v17 & 0x40000) != 0 )
      v19 |= 0x80u;
    v21 = CmpOpenHiveFile(Source, v19, v14, 0LL, 0LL, 0LL);
    if ( v21 < 0 )
    {
      if ( v18 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v41 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        v40 = v41 == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpShutdownRundown,
                       (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                       CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
        goto LABEL_71;
      }
      return (unsigned int)v21;
    }
    v24 = ObjectHandle;
LABEL_14:
    if ( !v18 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      _m_prefetchw(&CmpShutdownRundown);
      v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v26 == _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      {
        v18 = 1;
      }
      else
      {
        v18 = ExfAcquireRundownProtection(&CmpShutdownRundown);
        if ( !v18 )
        {
          v36 = KeGetCurrentThread();
          v37 = v36->KernelApcDisable + 1;
          v36->KernelApcDisable = v37;
          if ( !v37
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
            && !v36->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( !v18 )
        {
          v38 = v62;
          v39 = ObjectHandle;
          v21 = -1073741431;
LABEL_86:
          ZwClose(v39);
          if ( Handle )
            ZwClose(Handle);
          if ( v38 )
            ZwClose(v38);
          return (unsigned int)v21;
        }
      }
      v24 = ObjectHandle;
      v20 = v62;
    }
    if ( v21 < 0 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v45 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v45 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v46 = KeGetCurrentThread();
      v47 = v46->KernelApcDisable + 1;
      v46->KernelApcDisable = v47;
      if ( !v47
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
        && !v46->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v39 = ObjectHandle;
      v38 = v62;
      goto LABEL_86;
    }
    if ( v54 )
    {
      v27 = 0;
    }
    else if ( (_BYTE)v15 )
    {
      v59 &= ~0x20000u;
      v27 = 2;
    }
    else
    {
      v27 = 5;
    }
    v28 = Handle;
    v74[3] = 0LL;
    v74[1] = Handle;
    v74[0] = v24;
    v74[2] = v20;
    memset(v68, 0, 0x160uLL);
    v21 = CmpInitializeHive(
            (unsigned int)&v72,
            v27,
            v59,
            v63,
            0LL,
            (__int64)v74,
            (__int64)Source,
            a5,
            0LL,
            0LL,
            v73,
            (__int64)v68);
    if ( v21 >= 0 )
    {
      ObjectInformation = 256;
      ZwSetInformationObject(v24, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      if ( v28 )
      {
        v57 = 256;
        ZwSetInformationObject(v28, ObjectHandleFlagInformation, &v57, 2u);
      }
      if ( v20 )
      {
        v56[0] = 256;
        ZwSetInformationObject(v20, ObjectHandleFlagInformation, v56, 2u);
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
      v30 = v72;
      *(_QWORD *)(v72 + 3016) = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_WORD *)(v30 + 3008) = Source->Length;
        *(_WORD *)(v30 + 3010) = Source->Length;
        memmove(*(void **)(v30 + 3016), Source->Buffer, Source->Length);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v30 + 64) + 4088LL) & 4) != 0 )
        CmpLogEvent(&REG_EVENT_SELFHEAL);
      if ( ZwQueryInformationFile(v24, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
        *(_QWORD *)(v30 + 5432) = v77;
      v31 = v71;
      *(_DWORD *)(v30 + 168) = HIDWORD(v70);
      *v69 = v30;
      *v31 = v54;
      _m_prefetchw(&CmpShutdownRundown);
      v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v32 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0LL;
    }
    ZwClose(v24);
    if ( Handle )
      ZwClose(Handle);
    if ( v20 )
      ZwClose(v20);
    if ( v21 != -1073741267 || (_BYTE)v58 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v42 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      v40 = v42 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpShutdownRundown,
                     (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                     CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_71:
      if ( !v40 )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v43 = KeGetCurrentThread();
      v44 = v43->KernelApcDisable + 1;
      v43->KernelApcDisable = v44;
      if ( !v44
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
        && !v43->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v21;
    }
    v16 = v54;
    v15 = 1;
    v17 = v59;
    v13 = v60;
    v14 = v66;
    v10 = v69;
    v12 = v71;
  }
  v23 = CmpOpenHiveFile(Source, v13 | v19 | (*v12 != 0) | ((_BYTE)v15 != 0 ? 4 : 0), v14, (__int64)&v70, 0LL, 0LL);
  if ( v23 < 0 )
  {
    if ( v18 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v51 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v51 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v52 = KeGetCurrentThread();
      v53 = v52->KernelApcDisable + 1;
      v52->KernelApcDisable = v53;
      if ( !v53
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
        && !v52->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return (unsigned int)v23;
  }
  v24 = ObjectHandle;
  if ( v65 == 2 )
    v16 = 1;
  v54 = v16;
  FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(ObjectHandle);
  if ( FileSecurityDescriptor >= 0 )
  {
    if ( (a5 & 0x10000000) != 0 )
    {
      v21 = CmpOpenHiveFile(Source, v60 | v19 | (v16 != 0 ? 0x10 : 0), v66, 0LL, (__int64)P, 0LL);
      if ( v21 >= 0 )
        v63 = 1;
    }
    else
    {
      v21 = CmpOpenHiveFile(Source, v60 | v19 | (v16 != 0 ? 0x10 : 0), v66, 0LL, (__int64)P, 0LL);
      if ( v21 >= 0 )
      {
        v21 = CmpOpenHiveFile(Source, v60 | v19 | (v54 != 0 ? 0x10 : 0), v66, 0LL, (__int64)P, 0LL);
        if ( v21 < 0 )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        else
        {
          v63 = 2;
        }
        v20 = v62;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    LOBYTE(v15) = v58;
    goto LABEL_14;
  }
  ZwClose(ObjectHandle);
  if ( v18 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v48 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v48 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v49 = KeGetCurrentThread();
    v50 = v49->KernelApcDisable + 1;
    v49->KernelApcDisable = v50;
    if ( !v50
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
      && !v49->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)FileSecurityDescriptor;
}
