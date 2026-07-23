/*
 * XREFs of SmKmStoreFileGetExtents @ 0x140699358
 * Callers:
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14015A910 (ZwFsControlFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileGetExtents(
        HANDLE FileHandle,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        struct _PRIVILEGE_SET **a9,
        unsigned int *a10)
{
  struct _PRIVILEGE_SET *v12; // rsi
  unsigned int v13; // r13d
  unsigned int v15; // r15d
  BOOLEAN v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // rbx
  NTSTATUS Status; // edi
  int v20; // r14d
  unsigned int v21; // edi
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rcx
  BOOLEAN v34; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-69h]
  unsigned int v37; // [rsp+64h] [rbp-65h] BYREF
  struct _PRIVILEGE_SET *v38; // [rsp+68h] [rbp-61h] BYREF
  __int64 v39; // [rsp+70h] [rbp-59h]
  _QWORD *v40; // [rsp+78h] [rbp-51h]
  _DWORD *v41; // [rsp+80h] [rbp-49h]
  struct _PRIVILEGE_SET **v42; // [rsp+88h] [rbp-41h]
  unsigned int *v43; // [rsp+90h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v45[4]; // [rsp+A8h] [rbp-21h] BYREF

  P = 0LL;
  v41 = a8;
  v12 = 0LL;
  v42 = a9;
  v13 = a4;
  v43 = a10;
  v15 = 0x10000;
  v36 = a4;
  v40 = a3;
  v38 = 0LL;
  v16 = IoSetThreadHardErrorMode(0);
  v34 = v16;
  if ( a7 )
  {
    memset(v45, 0, sizeof(v45));
    v17 = *a3;
    v18 = v45;
    P = v45;
    v45[0] = v17;
  }
  else
  {
    Status = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9003Bu, a3, 8u, &P, 8u);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    v18 = (__int64 *)P;
    if ( Status < 0 )
      goto LABEL_28;
  }
  v37 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0LL;
  if ( *v18 )
  {
    while ( 1 )
    {
      v23 = *v18;
      v24 = v18[1];
      v22 += *v18;
      if ( v24 < 0 )
        break;
      if ( v15 )
      {
        v25 = *v18;
        if ( v23 >= v15 )
          v25 = v15;
        v15 -= v25;
        *v18 = v23 - v25;
        v18[1] = v25 + v24;
      }
      v26 = *v18;
      if ( *v18 >= v13 )
      {
        v27 = v18[1];
        v28 = a5 - ((a5 - 1) & (v27 + a5 - 1LL));
        v39 = v28 + v27 - 1;
        v29 = (v26 + 1 - v28) % (unsigned __int64)v13;
        v30 = (v26 + 1 - v28) / (unsigned __int64)v13;
        if ( (_DWORD)v30 )
        {
          v31 = SmArrayGrow(v21, v29, &v37, (const void **)&v38);
          v12 = v38;
          if ( !v31 )
          {
            Status = -1073741670;
            goto LABEL_23;
          }
          v20 += v30;
          v32 = 2LL * v21++;
          *((_QWORD *)&v38->Privilege[0].Luid + v32) = v39;
          *(&v12->PrivilegeCount + 2 * v32) = v30;
        }
        v13 = v36;
      }
      v18 += 2;
      if ( !*v18 )
      {
        v18 = (__int64 *)P;
        goto LABEL_19;
      }
    }
    Status = -1073741453;
LABEL_23:
    v18 = (__int64 *)P;
    goto LABEL_24;
  }
LABEL_19:
  if ( v22 < *v40 )
  {
    Status = -1073741453;
LABEL_24:
    v16 = v34;
    goto LABEL_28;
  }
  v16 = v34;
  if ( v20 )
  {
    *v41 = v20;
    *v42 = v12;
    v12 = 0LL;
    *v43 = v21;
    Status = 0;
  }
  else
  {
    Status = -1073741672;
  }
LABEL_28:
  if ( v18 && v18 != v45 )
    ExFreePoolWithTag(v18, 0);
  if ( v12 )
    MiDeleteSubsection(v12);
  IoSetThreadHardErrorMode(v16);
  return (unsigned int)Status;
}
