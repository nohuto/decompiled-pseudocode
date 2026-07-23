/*
 * XREFs of CmpCmdHiveOpen @ 0x1404A4CD8
 * Callers:
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     PsRevertThreadToSelf @ 0x1404A4FF0 (PsRevertThreadToSelf.c)
 *     PsReferenceImpersonationToken @ 0x1404A5010 (PsReferenceImpersonationToken.c)
 *     RtlImpersonateSelfEx @ 0x1404BF77C (RtlImpersonateSelfEx.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        UNICODE_STRING *Source,
        BOOLEAN a2,
        _BYTE *a3,
        _QWORD *a4,
        int a5,
        char a6,
        void *a7,
        __int64 a8)
{
  unsigned int v11; // ebx
  NTSTATUS inited; // eax
  NTSTATUS v13; // edi
  unsigned int v14; // eax
  int v15; // ecx
  PACCESS_TOKEN v16; // rsi
  NTSTATUS v17; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v20; // [rsp+30h] [rbp-1D8h]
  int v21; // [rsp+30h] [rbp-1D8h]
  int v22; // [rsp+38h] [rbp-1D0h]
  int v23; // [rsp+38h] [rbp-1D0h]
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp-1B8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+51h] [rbp-1B7h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-1B6h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+54h] [rbp-1B4h] BYREF
  __int64 v28; // [rsp+58h] [rbp-1B0h]
  __int64 v29[44]; // [rsp+60h] [rbp-1A8h] BYREF

  EffectiveOnly = a2;
  v28 = a8;
  memset(v29, 0, sizeof(v29));
  v11 = 0x20000;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a6 & 1) != 0 )
  {
    v11 = 163840;
    if ( (a6 & 2) == 0 )
      v11 = 425984;
  }
  if ( (a6 & 4) != 0 )
    v11 |= 0x80000u;
  if ( (a6 & 8) != 0 )
    v11 |= 0x108000u;
  if ( (a5 & 0x20000000) != 0 )
    v11 |= 2u;
  inited = CmpInitHiveFromFile(Source, v11, a4, a3, a5, a7, v20, v22, a8, v29);
  v13 = inited;
  if ( !a7 )
  {
    if ( inited == -1073741790
      || (v14 = inited + 1073741724, v14 <= 0xE) && (v15 = 17473, _bittest(&v15, v14))
      || v13 == -1073741421 )
    {
      if ( EffectiveOnly && (a6 & 0x20) == 0 )
      {
        v16 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
        v13 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
        if ( v13 >= 0 )
        {
          v17 = CmpInitHiveFromFile(Source, v11, a4, a3, a5, 0LL, v21, v23, v28, v29);
          CurrentThread = KeGetCurrentThread();
          v13 = v17;
          if ( v16 )
            PsImpersonateClient(CurrentThread, v16, CopyOnOpen, EffectiveOnly, ImpersonationLevel);
          else
            PsRevertThreadToSelf(CurrentThread);
        }
        if ( v16 )
          ObfDereferenceObject(v16);
      }
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v13;
}
