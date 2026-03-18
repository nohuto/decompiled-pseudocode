/*
 * XREFs of CmpInitHiveFromFile @ 0x1403DCB84
 * Callers:
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwSetInformationObject @ 0x1401511A0 (ZwSetInformationObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403DD9C0 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogEvent @ 0x1405DE5EC (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        unsigned __int16 *a1,
        int a2,
        ULONG_PTR *a3,
        _BYTE *a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        void *a9)
{
  _BYTE *v9; // r10
  unsigned int v10; // esi
  ULONG_PTR *v12; // r9
  int v13; // r8d
  int v14; // eax
  BOOLEAN v15; // r13
  int v16; // r12d
  HANDLE v17; // rbx
  HANDLE v18; // rdi
  int FileSecurityDescriptor; // esi
  HANDLE v21; // r14
  char v22; // bl
  char v23; // al
  PVOID v24; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v26; // esi
  PVOID PoolWithTag; // rax
  ULONG_PTR v28; // rbx
  char *v29; // rcx
  char v30; // [rsp+60h] [rbp-A0h]
  __int16 ObjectInformation; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  __int16 v33; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+84h] [rbp-7Ch]
  unsigned int v38; // [rsp+88h] [rbp-78h]
  HANDLE v39; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ObjectHandle; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR *v44; // [rsp+B8h] [rbp-48h]
  char v45; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v46; // [rsp+C8h] [rbp-38h]
  void *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v50; // [rsp+E8h] [rbp-18h] BYREF
  char v51; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v52[4]; // [rsp+F8h] [rbp-8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp+18h] BYREF
  char FileInformation[16]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v55; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  _DWORD *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  __int64 v59; // [rsp+180h] [rbp+80h]
  _DWORD v60[2]; // [rsp+188h] [rbp+88h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF
  int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]

  v9 = a4;
  v44 = a3;
  v10 = a2;
  v46 = a4;
  v12 = a3;
  v49 = a8;
  v13 = (a5 >> 29) & 2;
  v36 = a2;
  v47 = a9;
  P = 0LL;
  v32 = v13;
  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v58 = 2LL;
    v57 = v60;
    v59 = *((_QWORD *)a1 + 1);
    v60[0] = *a1;
    v60[1] = 0;
    TlgWrite(&stru_1402CFD30, &unk_1402534A3, 0LL, 0LL, 4u, &pData);
    v13 = v32;
    v12 = v44;
    v9 = v46;
  }
  v30 = 0;
  v14 = v10 >> 17;
  LOBYTE(v14) = (v10 & 0x20000) == 0;
  v15 = 0;
  v16 = (a5 >> 19) & 0x40;
  while ( 1 )
  {
    v37 = v14;
    *v12 = 0LL;
    v38 = 0;
    v17 = 0LL;
    Handle = 0LL;
    v18 = 0LL;
    v39 = 0LL;
    v48 = 0LL;
    if ( (v10 & 0x8000) == 0 )
    {
      FileSecurityDescriptor = CmpOpenHiveFile(
                                 (_DWORD)a1,
                                 0,
                                 (unsigned int)&ObjectHandle,
                                 (unsigned int)&v41,
                                 v13 | v16 | (*v9 != 0) | ((_BYTE)v14 != 0 ? 4 : 0),
                                 (__int64)&v48,
                                 0LL,
                                 0LL);
      if ( FileSecurityDescriptor < 0 )
        goto LABEL_10;
      v21 = ObjectHandle;
      v22 = v30;
      if ( v41 == 2 )
        v22 = 1;
      v30 = v22;
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(ObjectHandle);
      if ( FileSecurityDescriptor < 0 )
      {
        ZwClose(v21);
LABEL_10:
        if ( !v15 )
          goto LABEL_11;
LABEL_65:
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_11;
      }
      v23 = v22;
      v24 = P;
      if ( (a5 & 0x10000000) != 0 )
      {
        FileSecurityDescriptor = CmpOpenHiveFile(
                                   (_DWORD)a1,
                                   1,
                                   (unsigned int)&Handle,
                                   (unsigned int)&v45,
                                   v32 | v16 | (v23 != 0 ? 0x10 : 0),
                                   0LL,
                                   (__int64)P,
                                   0LL);
        if ( FileSecurityDescriptor >= 0 )
          v38 = 1;
      }
      else
      {
        FileSecurityDescriptor = CmpOpenHiveFile(
                                   (_DWORD)a1,
                                   4,
                                   (unsigned int)&Handle,
                                   (unsigned int)&v45,
                                   v32 | v16 | (v23 != 0 ? 0x10 : 0),
                                   0LL,
                                   (__int64)P,
                                   0LL);
        if ( FileSecurityDescriptor >= 0 )
        {
          FileSecurityDescriptor = CmpOpenHiveFile(
                                     (_DWORD)a1,
                                     5,
                                     (unsigned int)&v39,
                                     (unsigned int)&v51,
                                     v32 | v16 | (v30 != 0 ? 0x10 : 0),
                                     0LL,
                                     (__int64)v24,
                                     0LL);
          if ( FileSecurityDescriptor < 0 )
          {
            ZwClose(Handle);
            v18 = v39;
            v17 = 0LL;
            Handle = 0LL;
LABEL_23:
            if ( P )
              ExFreePoolWithTag(P, 0);
            goto LABEL_25;
          }
          v18 = v39;
          v38 = 2;
        }
      }
      v17 = Handle;
      goto LABEL_23;
    }
    v16 |= 0x20u;
    if ( (_BYTE)v14 )
      v16 |= 4u;
    if ( (v10 & 0x40000) != 0 )
      v16 |= 0x80u;
    FileSecurityDescriptor = CmpOpenHiveFile(
                               (_DWORD)a1,
                               0,
                               (unsigned int)&ObjectHandle,
                               (unsigned int)&v41,
                               v16,
                               0LL,
                               0LL,
                               0LL);
    if ( FileSecurityDescriptor < 0 )
      goto LABEL_10;
    v21 = ObjectHandle;
LABEL_25:
    if ( !v15 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = ExAcquireRundownProtection(&CmpShutdownRundown);
      if ( !v15 )
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = Handle;
      v18 = v39;
      v21 = ObjectHandle;
      if ( !v15 )
        break;
    }
    if ( FileSecurityDescriptor < 0 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = Handle;
      v18 = v39;
      v21 = ObjectHandle;
      goto LABEL_60;
    }
    if ( v30 )
    {
      v26 = 0;
    }
    else if ( (_BYTE)v37 )
    {
      v36 &= ~0x20000u;
      v26 = 2;
    }
    else
    {
      v26 = 5;
    }
    v52[3] = 0LL;
    v52[0] = v21;
    v52[1] = v17;
    v52[2] = v18;
    memset(v47, 0, 0x160uLL);
    FileSecurityDescriptor = CmpInitializeHive(
                               &v50,
                               v26,
                               v36,
                               v38,
                               0LL,
                               (__int64)v52,
                               (__int64)a1,
                               a5,
                               0LL,
                               0LL,
                               v49,
                               (ULONG_PTR *)v47);
    if ( FileSecurityDescriptor >= 0 )
    {
      ObjectInformation = 256;
      ZwSetInformationObject(v21, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      if ( v17 )
      {
        v33 = 256;
        ZwSetInformationObject(v17, ObjectHandleFlagInformation, &v33, 2u);
      }
      if ( v18 )
      {
        v34 = 256;
        ZwSetInformationObject(v18, ObjectHandleFlagInformation, &v34, 2u);
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a1, 0x624E4D43u);
      v28 = v50;
      *(_QWORD *)(v50 + 3016) = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_WORD *)(v28 + 3008) = *a1;
        *(_WORD *)(v28 + 3010) = *a1;
        memmove(*(void **)(v28 + 3016), *((const void **)a1 + 1), *a1);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v28 + 64) + 4088LL) & 4) != 0 )
        CmpLogEvent(&REG_EVENT_SELFHEAL);
      if ( ZwQueryInformationFile(v21, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
        *(_QWORD *)(v28 + 5432) = v55;
      v29 = v46;
      *(_DWORD *)(v28 + 168) = HIDWORD(v48);
      *v44 = v28;
      *v29 = v30;
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      FileSecurityDescriptor = 0;
      goto LABEL_11;
    }
    ZwClose(v21);
    if ( v17 )
      ZwClose(v17);
    if ( v18 )
      ZwClose(v18);
    if ( FileSecurityDescriptor != -1073741267 || (_BYTE)v37 )
      goto LABEL_65;
    v13 = v32;
    v14 = 1;
    v10 = v36;
    v12 = v44;
    v9 = v46;
  }
  FileSecurityDescriptor = -1073741431;
LABEL_60:
  ZwClose(v21);
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
LABEL_11:
  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v43 = FileSecurityDescriptor;
    v62 = &v43;
    v63 = 4LL;
    TlgWrite(&stru_1402CFD30, &unk_140253479, 0LL, 0LL, 3u, &v61);
  }
  return (unsigned int)FileSecurityDescriptor;
}
