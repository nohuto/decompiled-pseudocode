/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 */

void MiFlushStrongCodeDriverLoadFailures()
{
  struct _KTHREAD *Lock; // rdi
  unsigned __int16 *v1; // rbx
  __int64 v2; // rcx
  const CHAR *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+38h] [rbp-39h] BYREF
  int v8; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-9h] BYREF
  _DWORD *v11; // [rsp+78h] [rbp+7h]
  int v12; // [rsp+80h] [rbp+Fh]
  int v13; // [rsp+84h] [rbp+13h]
  __int64 v14; // [rsp+88h] [rbp+17h]
  _DWORD v15[2]; // [rsp+90h] [rbp+1Fh] BYREF
  int *v16; // [rsp+98h] [rbp+27h]
  int v17; // [rsp+A0h] [rbp+2Fh]
  int v18; // [rsp+A4h] [rbp+33h]
  int *v19; // [rsp+A8h] [rbp+37h]
  int v20; // [rsp+B0h] [rbp+3Fh]
  int v21; // [rsp+B4h] [rbp+43h]

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned __int16 *)MiStrongCodeLoadFailureHead;
    if ( MiStrongCodeLoadFailureHead == &MiStrongCodeLoadFailureHead )
      break;
    v2 = *(_QWORD *)MiStrongCodeLoadFailureHead;
    if ( *((PVOID **)MiStrongCodeLoadFailureHead + 1) != &MiStrongCodeLoadFailureHead
      || *(PVOID *)(v2 + 8) != MiStrongCodeLoadFailureHead )
    {
      __fastfail(3u);
    }
    MiStrongCodeLoadFailureHead = *(PVOID *)MiStrongCodeLoadFailureHead;
    *(_QWORD *)(v2 + 8) = &MiStrongCodeLoadFailureHead;
    if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x400000000000uLL) )
    {
      v3 = (const CHAR *)*((_QWORD *)v1 + 2);
      v8 = *((_DWORD *)v1 + 10);
      v7 = *((_DWORD *)v1 + 11);
      TlgCreateSz(&pDesc, v3);
      v4 = *((_QWORD *)v1 + 4);
      v13 = 0;
      v15[1] = 0;
      v18 = 0;
      v21 = 0;
      v14 = v4;
      v15[0] = v1[12];
      v16 = &v8;
      v19 = &v7;
      v11 = v15;
      v12 = 2;
      v17 = 4;
      v20 = 4;
      MmTlgWrite(v6, (unsigned __int8 *)dword_1402A4290, v5, v6, 7u, &v9);
    }
    ExFreePoolWithTag(v1, 0);
  }
  MmReleaseLoadLock((__int64)Lock);
}
