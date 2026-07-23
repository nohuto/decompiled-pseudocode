/*
 * XREFs of EtwpNotifyGuid @ 0x1404D8804
 * Callers:
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x1400CF7C4 (PsGetProcessId.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404D5CB4 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 */

__int64 __fastcall EtwpNotifyGuid(_DWORD *Src, char a2)
{
  bool v3; // cc
  volatile signed __int32 *v5; // rsi
  int v6; // r12d
  ACCESS_MASK v7; // ebx
  int v8; // ebp
  int v9; // r13d
  char *GuidEntryByGuid; // rax
  __int64 *v11; // rbp
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r15
  __int64 v17; // r14
  char v18; // al
  __int64 result; // rax
  int v20; // eax
  int v21; // eax
  volatile signed __int32 *v22; // [rsp+70h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  v3 = Src[1] <= 0x10000u;
  Handle = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v6 = 0;
  if ( !v3 )
    return 3221225990LL;
  v7 = 4;
  Src[9] = PsGetCurrentThreadProcessId();
  if ( *Src != 4 )
  {
    v8 = 1;
    goto LABEL_4;
  }
  v7 = 128;
  v8 = 0;
  result = EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid.Data1, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
LABEL_4:
    v9 = Src[8];
    Src[5] = 0;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(Src + 10, v8);
    v11 = (__int64 *)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741163;
    if ( a2 )
    {
      v13 = EtwpAccessCheck(*((PSECURITY_DESCRIPTOR *)GuidEntryByGuid + 7), v7, 0LL);
      if ( v13 < 0 )
      {
LABEL_21:
        EtwpUnreferenceGuidEntry(v11, v12, v14, v15);
        return (unsigned int)v13;
      }
    }
    KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
    v16 = v11 + 5;
    if ( (__int64 *)*v16 == v16 )
    {
      v13 = -1073741162;
    }
    else
    {
      if ( !*((_BYTE *)Src + 12) )
        goto LABEL_9;
      v21 = EtwpCreateUmReplyObject((ULONG_PTR)v11, &Handle);
      v5 = v22;
      v13 = v21;
      if ( v21 >= 0 )
      {
        *((_QWORD *)Src + 3) = v22;
LABEL_9:
        v13 = EtwpAllocDataBlock((unsigned int)Src[1], Src, &v22);
        if ( v13 < 0 )
        {
          v13 = -1073741801;
        }
        else
        {
          v17 = *v16;
          if ( (__int64 *)*v16 != v16 )
          {
            do
            {
              v18 = *(_BYTE *)(v17 + 98);
              if ( (v18 & 2) != 0
                && (v18 & 0x40) == 0
                && (!v9 || (unsigned int)PsGetProcessId(*(PEPROCESS *)(v17 + 80)) == v9) )
              {
                v20 = EtwpSendDataBlock(v17, (__int64)v22);
                if ( v20 < 0 )
                  v13 = v20;
                else
                  ++v6;
              }
              v17 = *(_QWORD *)v17;
            }
            while ( (__int64 *)v17 != v16 );
            if ( v6 )
              v13 = 0;
          }
          EtwpUnreferenceDataBlock(v22);
          *((_QWORD *)Src + 3) = Handle;
          Src[5] = v6;
        }
      }
    }
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    if ( v5 )
      ObfDereferenceObject((PVOID)v5);
    goto LABEL_21;
  }
  return result;
}
