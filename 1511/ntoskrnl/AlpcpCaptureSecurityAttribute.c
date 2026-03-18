/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x14042BCD0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x14047CE68 (AlpcpDeleteBlob.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404AF9DC (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(char *Object, int *a2, __int64 a3)
{
  __int64 v3; // r12
  ULONG64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // ecx
  __int64 v9; // rdi
  unsigned int SecurityContext; // r14d
  ULONG_PTR v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v17; // rdx
  char v18; // bl
  ULONG_PTR v19; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-98h] BYREF
  int v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  ULONG_PTR v24; // [rsp+40h] [rbp-58h]
  ULONG64 v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  int v28; // [rsp+60h] [rbp-38h]
  int v30; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  if ( !KeGetCurrentThread()->PreviousMode )
    return (unsigned int)AlpcpCaptureSecurityAttributeInternal(Object, a3);
  v30 = *a2;
  v23 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 1);
  v25 = v6;
  if ( v6 )
  {
    if ( v6 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v7 = *(_QWORD *)v6;
    v28 = *(_DWORD *)(v6 + 8);
  }
  else
  {
    v7 = *(_QWORD *)(Object + 260);
    v28 = *((_DWORD *)Object + 67);
  }
  v27 = v7;
  v8 = v30;
  if ( (v30 & 0xFFFCFFFF) != 0 )
  {
    SecurityContext = -1073741811;
    v22 = -1073741811;
    return SecurityContext;
  }
  if ( (v30 & 0x30000) == 0x30000 )
  {
    SecurityContext = -1073741811;
    v22 = -1073741811;
    return SecurityContext;
  }
  v9 = v23;
  if ( v23 != -2 )
  {
    SecurityContext = 0;
    v11 = 0LL;
    v24 = 0LL;
    v12 = *((_QWORD *)Object + 2);
    if ( v12 )
    {
      v26 = v23;
      v13 = v12 + 40;
      if ( v13 )
      {
        v14 = v23 - 16;
        v26 = v23 - 16;
        v15 = KeAbPreAcquire(v13 + 16, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v13 + 16), v15, v13 + 16);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        if ( v14 < *(_DWORD *)(v13 + 8)
          && (v11 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * v14)) != 0
          && *(_BYTE *)(v11 - 31) == 3 )
        {
          _m_prefetchw((const void *)(v11 - 24));
          BugCheckParameter4 = *(_QWORD *)(v11 - 24);
          do
          {
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, v11, 0x20uLL, BugCheckParameter4);
              goto LABEL_40;
            }
            v17 = BugCheckParameter4;
            BugCheckParameter4 = _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v11 - 24),
                                   BugCheckParameter4 + 1,
                                   BugCheckParameter4);
          }
          while ( BugCheckParameter4 != v17 );
          if ( BugCheckParameter4 == -1 )
            goto LABEL_40;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v13 + 16));
          KeAbPostRelease(v13 + 16);
          if ( (*(_BYTE *)(v11 - 32) & 4) != 0 )
          {
            _InterlockedOr(v21, 0);
            if ( (*(_QWORD *)(v11 - 16) & 1) != 0 )
              ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v11 - 16));
          }
        }
        else
        {
LABEL_40:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v13 + 16));
          KeAbPostRelease(v13 + 16);
          v11 = 0LL;
        }
        v3 = a3;
        v9 = v23;
        v8 = v30;
      }
      v24 = v11;
    }
    if ( !v11 )
    {
      SecurityContext = -1073741816;
      v22 = -1073741816;
      return SecurityContext;
    }
    if ( Object != *(char **)(v11 + 24) )
    {
      AlpcpDereferenceBlobEx(v11, 1);
      SecurityContext = -1073741790;
      v22 = -1073741790;
      return SecurityContext;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      if ( (unsigned __int8)AlpcpDeleteBlob(v11) )
        AlpcpDereferenceBlobEx(v11, 1);
      AlpcpDereferenceBlobEx(v11, 1);
      v11 = 0LL;
      v24 = 0LL;
    }
    *(_QWORD *)(v3 + 32) = v11;
    v22 = 0;
    goto LABEL_31;
  }
  if ( (v30 & 0x20000) != 0 )
  {
    v18 = 1;
  }
  else
  {
    if ( (v30 & 0x10000) != 0 )
    {
      SecurityContext = -1073741816;
      v22 = -1073741816;
      return SecurityContext;
    }
    v18 = 0;
  }
  SecurityContext = AlpcpCreateSecurityContext(Object);
  if ( (SecurityContext & 0x80000000) == 0 )
  {
    v19 = v24;
    *(_QWORD *)(v3 + 32) = v24;
    if ( v18 )
    {
      v9 = *(_QWORD *)(v19 + 8);
      v23 = v9;
    }
  }
  v22 = SecurityContext;
  if ( (SecurityContext & 0x80000000) == 0 )
LABEL_31:
    *((_QWORD *)a2 + 2) = v9;
  return SecurityContext;
}
