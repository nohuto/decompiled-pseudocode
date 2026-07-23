/*
 * XREFs of CmpInitHiveFromFile @ 0x1403F89AC
 * Callers:
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwSetInformationObject @ 0x14015AD70 (ZwSetInformationObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpLogEvent @ 0x1405FC548 (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        _QWORD *a3,
        _BYTE *a4,
        int a5,
        void *a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  void *v12; // rdx
  char v13; // r15
  unsigned int v14; // ecx
  HANDLE v15; // rbx
  HANDLE v16; // rdi
  char v17; // al
  int v18; // esi
  HANDLE v19; // r14
  char v21; // r13
  BOOL v22; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // esi
  int v28; // eax
  PVOID PoolWithTag; // rax
  __int64 v30; // rsi
  char *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v37; // [rsp+62h] [rbp-9Eh]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int16 ObjectInformation[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v40; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v41[2]; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-80h]
  unsigned int v44; // [rsp+84h] [rbp-7Ch]
  HANDLE v45; // [rsp+88h] [rbp-78h] BYREF
  HANDLE ObjectHandle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+B4h] [rbp-4Ch] BYREF
  void *v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v58[4]; // [rsp+E8h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  _BYTE FileInformation[16]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v61; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  _DWORD *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  wchar_t *Buffer; // [rsp+170h] [rbp+70h]
  _DWORD v66[2]; // [rsp+178h] [rbp+78h] BYREF
  EVENT_DATA_DESCRIPTOR v67; // [rsp+180h] [rbp+80h] BYREF
  int *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]

  v56 = a9;
  v43 = a2;
  v12 = a6;
  v52 = a10;
  v54 = a4;
  v49 = a3;
  v47 = (__int64)a6;
  if ( stru_1402F34E0.LevelPlus1 > 4 )
  {
    v64 = 2LL;
    v63 = v66;
    Buffer = Source->Buffer;
    v66[0] = Source->Length;
    v66[1] = 0;
    TlgWrite(&stru_1402F34E0, &unk_14027AD63, 0LL, 0LL, 4u, &pData);
    v12 = (void *)v47;
    a4 = v54;
    a3 = v49;
  }
  v14 = a2 >> 17;
  v13 = 0;
  v36 = 0;
  LOBYTE(v14) = (a2 & 0x20000) == 0;
  v37 = 0;
  ObjectHandle = 0LL;
  v45 = 0LL;
  if ( (a5 & 0x2000000) != 0 )
    v13 = 64;
  v35 = 1;
  P = 0LL;
  v15 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  v44 = v14;
  if ( (a2 & 0x8000) != 0 )
  {
    v13 |= 0x20u;
    if ( (a2 & 0x40000) != 0 )
      v13 |= 0x80u;
    v35 = 0;
  }
  else
  {
    if ( (a5 & 0x40000000) != 0 )
      v13 |= 2u;
    if ( *a4 )
      v13 |= 1u;
  }
  while ( 1 )
  {
    *a3 = 0LL;
    v53 = 0LL;
    v17 = v13;
    if ( (_BYTE)v14 )
      v17 = v13 | 4;
    v18 = CmpOpenHiveFile(Source, 0, &ObjectHandle, &v50, v17, v12, (__int64)&v53, 0LL, 0LL);
    if ( v18 < 0 )
    {
      v19 = ObjectHandle;
      goto LABEL_13;
    }
    v21 = v13;
    if ( v50 == 2 )
    {
      v21 = v13 | 0x10;
      v36 = 1;
    }
    v19 = ObjectHandle;
    if ( (v43 & 0x8000) == 0 )
    {
      v18 = CmpQueryFileSecurityDescriptor(ObjectHandle, &P);
      if ( v18 < 0 )
        goto LABEL_13;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v42 = 1;
      v18 = CmpOpenHiveFile(Source, 1u, &Handle, &v51, v21, (void *)v47, 0LL, P, 0LL);
      if ( v18 >= 0 )
      {
        v15 = Handle;
        goto LABEL_39;
      }
      v15 = 0LL;
      Handle = 0LL;
    }
    else
    {
      v42 = 2;
      v18 = CmpOpenHiveFile(Source, 4u, &Handle, &v51, v21, (void *)v47, 0LL, P, 0LL);
      if ( v18 < 0 )
      {
        v15 = 0LL;
        Handle = 0LL;
        if ( v35 )
          goto LABEL_13;
      }
      else
      {
        v15 = Handle;
      }
      v18 = CmpOpenHiveFile(Source, 5u, &v45, &v55, v21, (void *)v47, 0LL, P, 0LL);
      if ( v18 >= 0 )
      {
        v16 = v45;
        goto LABEL_39;
      }
      v16 = 0LL;
      v45 = 0LL;
    }
    if ( v35 )
      goto LABEL_13;
LABEL_39:
    v22 = v42;
    if ( !v35 )
    {
      if ( v42 == 2 )
      {
        if ( v15 )
        {
          if ( v16 )
            goto LABEL_40;
          ZwClose(v15);
          v15 = 0LL;
          Handle = 0LL;
        }
        if ( v16 )
        {
          ZwClose(v16);
          v16 = 0LL;
          v45 = 0LL;
        }
        v22 = 0;
      }
      else if ( v42 == 1 )
      {
        v22 = v15 != 0LL;
      }
    }
LABEL_40:
    if ( !v37 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v37 = ExAcquireRundownProtection(&CmpShutdownRundown);
      if ( !v37 )
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
      v19 = ObjectHandle;
      v15 = Handle;
      v16 = v45;
      if ( !v37 )
      {
        v18 = -1073741431;
        goto LABEL_13;
      }
    }
    if ( v36 )
    {
      v27 = 0;
    }
    else if ( (_BYTE)v44 )
    {
      v43 &= ~0x20000u;
      v27 = 2;
    }
    else
    {
      v27 = 5;
    }
    v58[3] = 0LL;
    v58[0] = v19;
    v58[1] = v15;
    v58[2] = v16;
    memset(v52, 0, 0x160uLL);
    v28 = CmpInitializeHive(
            (unsigned int)&v57,
            v27,
            v43,
            v22,
            0LL,
            (__int64)v58,
            (__int64)Source,
            a5,
            0LL,
            0LL,
            v56,
            (__int64)v52);
    v18 = v28;
    if ( v28 != -1073741267 )
      break;
    if ( (_BYTE)v44 )
      goto LABEL_13;
    ZwClose(v19);
    ObjectHandle = 0LL;
    if ( v15 )
    {
      ZwClose(v15);
      v15 = 0LL;
      Handle = 0LL;
    }
    LOBYTE(v14) = v44;
    v12 = (void *)v47;
    a3 = v49;
    if ( v16 )
    {
      ZwClose(v16);
      LOBYTE(v14) = v44;
      v16 = 0LL;
      v12 = (void *)v47;
      a3 = v49;
      v45 = 0LL;
    }
  }
  if ( v28 >= 0 )
  {
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v19, ObjectHandleFlagInformation, ObjectInformation, 2u);
    if ( v15 )
    {
      v40 = 256;
      ZwSetInformationObject(v15, ObjectHandleFlagInformation, &v40, 2u);
    }
    if ( v16 )
    {
      v41[0] = 256;
      ZwSetInformationObject(v16, ObjectHandleFlagInformation, v41, 2u);
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
    v30 = v57;
    *(_QWORD *)(v57 + 3016) = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_WORD *)(v30 + 3008) = Source->Length;
      *(_WORD *)(v30 + 3010) = Source->Length;
      memmove(*(void **)(v30 + 3016), Source->Buffer, Source->Length);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v30 + 64) + 4088LL) & 4) != 0 )
      CmpLogEvent(&REG_EVENT_SELFHEAL);
    if ( ZwQueryInformationFile(v19, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
      *(_QWORD *)(v30 + 5432) = v61;
    v15 = 0LL;
    v31 = v54;
    v19 = 0LL;
    *(_DWORD *)(v30 + 168) = HIDWORD(v53);
    v16 = 0LL;
    ObjectHandle = 0LL;
    Handle = 0LL;
    v45 = 0LL;
    *v49 = v30;
    v18 = 0;
    *v31 = v36;
  }
LABEL_13:
  if ( v37 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
    v19 = ObjectHandle;
    v15 = Handle;
    v16 = v45;
  }
  if ( v19 )
    ZwClose(v19);
  if ( v15 )
    ZwClose(v15);
  if ( v16 )
    ZwClose(v16);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( stru_1402F34E0.LevelPlus1 > 4 )
  {
    v42 = v18;
    v68 = &v42;
    v69 = 4LL;
    TlgWrite(&stru_1402F34E0, &unk_14027AD39, 0LL, 0LL, 3u, &v67);
  }
  return (unsigned int)v18;
}
