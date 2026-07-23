/*
 * XREFs of CmpCmdHiveOpen @ 0x14044C29C
 * Callers:
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     PsReferenceImpersonationToken @ 0x1404978B0 (PsReferenceImpersonationToken.c)
 *     RtlImpersonateSelfEx @ 0x1404B4274 (RtlImpersonateSelfEx.c)
 *     PsRevertThreadToSelf @ 0x1404C722C (PsRevertThreadToSelf.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        unsigned __int16 *a1,
        char a2,
        _BYTE *a3,
        ULONG_PTR *a4,
        unsigned int a5,
        char a6,
        __int64 a7)
{
  int v11; // edi
  NTSTATUS inited; // eax
  NTSTATUS v13; // ebx
  unsigned int v14; // eax
  int v15; // ecx
  PACCESS_TOKEN v17; // rsi
  NTSTATUS v18; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v20; // [rsp+28h] [rbp-1E0h]
  int v21; // [rsp+28h] [rbp-1E0h]
  int v22; // [rsp+30h] [rbp-1D8h]
  int v23; // [rsp+30h] [rbp-1D8h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-1B8h]
  BOOLEAN EffectiveOnly; // [rsp+51h] [rbp-1B7h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+52h] [rbp-1B6h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[3]; // [rsp+54h] [rbp-1B4h] BYREF
  _QWORD v28[44]; // [rsp+60h] [rbp-1A8h] BYREF

  memset(v28, 0, sizeof(v28));
  v11 = 0x20000;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a6 & 1) != 0 )
  {
    v11 = 163840;
    if ( (a6 & 2) == 0 )
      v11 = 425984;
  }
  if ( (a5 & 0x20000000) != 0 )
    v11 |= 2u;
  inited = CmpInitHiveFromFile(a1, v11, a4, a3, a5, v20, v22, a7, v28);
  v13 = inited;
  if ( inited == -1073741790
    || (v14 = inited + 1073741724, v14 <= 0xE) && (v15 = 17473, _bittest(&v15, v14))
    || v13 == -1073741421 )
  {
    if ( a2 )
    {
      v17 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
      v13 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v13 >= 0 )
      {
        v18 = CmpInitHiveFromFile(a1, v11, a4, a3, a5, v21, v23, a7, v28);
        CurrentThread = KeGetCurrentThread();
        v13 = v18;
        if ( v17 )
          PsImpersonateClient(CurrentThread, v17, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel[0]);
        else
          PsRevertThreadToSelf(CurrentThread);
      }
      if ( v17 )
        ObfDereferenceObject(v17);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v13;
}
