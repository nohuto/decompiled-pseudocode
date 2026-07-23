/*
 * XREFs of CmpCmdHiveOpen @ 0x14044A564
 * Callers:
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     PsReferenceImpersonationToken @ 0x1405217F0 (PsReferenceImpersonationToken.c)
 *     RtlImpersonateSelfEx @ 0x1405486E8 (RtlImpersonateSelfEx.c)
 *     PsRevertThreadToSelf @ 0x14055CF88 (PsRevertThreadToSelf.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        PCUNICODE_STRING Source,
        BOOLEAN a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  NTSTATUS inited; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // eax
  int v12; // ecx
  PACCESS_TOKEN v13; // rdi
  NTSTATUS v14; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v17; // [rsp+30h] [rbp-1D8h]
  int v18; // [rsp+30h] [rbp-1D8h]
  int v19; // [rsp+38h] [rbp-1D0h]
  int v20; // [rsp+38h] [rbp-1D0h]
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp-1B8h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+51h] [rbp-1B7h]
  BOOLEAN CopyOnOpen[2]; // [rsp+52h] [rbp-1B6h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[3]; // [rsp+54h] [rbp-1B4h] BYREF
  __int64 v25[44]; // [rsp+60h] [rbp-1A8h] BYREF

  memset(v25, 0, sizeof(v25));
  EffectiveOnly = a2;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  inited = CmpInitHiveFromFile(Source, a5, a7, v17, v19, a8, (__int64)v25);
  v10 = inited;
  if ( !a7 )
  {
    if ( inited == -1073741790
      || (v11 = inited + 1073741724, v11 <= 0xE) && (v12 = 17473, _bittest(&v12, v11))
      || v10 == -1073741421 )
    {
      if ( EffectiveOnly && (a6 & 0x20) == 0 )
      {
        v13 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
        v10 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
        if ( v10 >= 0 )
        {
          v14 = CmpInitHiveFromFile(Source, a5, 0LL, v18, v20, a8, (__int64)v25);
          CurrentThread = KeGetCurrentThread();
          v10 = v14;
          if ( v13 )
            PsImpersonateClient(CurrentThread, v13, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel[0]);
          else
            PsRevertThreadToSelf(CurrentThread);
        }
        if ( v13 )
          ObfDereferenceObject(v13);
      }
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v10;
}
