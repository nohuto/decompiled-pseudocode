/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x14044C520
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x14040AC68 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(char *Object, int *a2, __int64 a3)
{
  __int64 v3; // r12
  ULONG_PTR v6; // rax
  __int64 v7; // xmm0_8
  int v8; // ecx
  __int64 v9; // rdi
  unsigned int v10; // r14d
  ULONG_PTR v11; // rbx
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v17; // rdx
  char v18; // bl
  ULONG_PTR v19; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-98h] BYREF
  int v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  ULONG_PTR v24[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h]
  struct _SECURITY_QUALITY_OF_SERVICE v26; // [rsp+58h] [rbp-40h] BYREF
  int v28; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  if ( !KeGetCurrentThread()->PreviousMode )
    return (unsigned int)AlpcpCaptureSecurityAttributeInternal(Object, a3);
  v28 = *a2;
  v23 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 1);
  v24[1] = v6;
  if ( v6 )
  {
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v7 = *(_QWORD *)v6;
    *(_DWORD *)&v26.ContextTrackingMode = *(_DWORD *)(v6 + 8);
  }
  else
  {
    v7 = *(_QWORD *)(Object + 260);
    *(_DWORD *)&v26.ContextTrackingMode = *((_DWORD *)Object + 67);
  }
  *(_QWORD *)&v26.Length = v7;
  v8 = v28;
  if ( (v28 & 0xFFFCFFFF) != 0 )
  {
    v10 = -1073741811;
    v22 = -1073741811;
    return v10;
  }
  if ( (v28 & 0x30000) == 0x30000 )
  {
    v10 = -1073741811;
    v22 = -1073741811;
    return v10;
  }
  v9 = v23;
  if ( v23 != -2 )
  {
    v10 = 0;
    v11 = 0LL;
    v24[0] = 0LL;
    v12 = *((_QWORD *)Object + 2);
    if ( v12 )
    {
      v25 = v23;
      v13 = (_QWORD *)(v12 + 40);
      if ( v13 )
      {
        v14 = v23 - 16;
        v25 = v23 - 16;
        v15 = KeAbPreAcquire((ULONG_PTR)(v13 + 1), 0LL, 0);
        if ( _InterlockedCompareExchange64(v13 + 1, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v13 + 1, v15, (ULONG_PTR)(v13 + 1));
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        if ( (unsigned __int64)v14 < v13[2] && (v11 = *(_QWORD *)(*v13 + 8LL * v14)) != 0 && *(_BYTE *)(v11 - 31) == 3 )
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
          if ( _InterlockedCompareExchange64(v13 + 1, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v13 + 1);
          KeAbPostRelease((ULONG_PTR)(v13 + 1));
          if ( (*(_BYTE *)(v11 - 32) & 4) != 0 )
          {
            _InterlockedOr(v21, 0);
            if ( (*(_QWORD *)(v11 - 16) & 1) != 0 )
              ExfAcquireReleasePushLockExclusive(v11 - 16);
          }
        }
        else
        {
LABEL_40:
          if ( _InterlockedCompareExchange64(v13 + 1, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v13 + 1);
          KeAbPostRelease((ULONG_PTR)(v13 + 1));
          v11 = 0LL;
        }
        v3 = a3;
        v9 = v23;
        v8 = v28;
      }
      v24[0] = v11;
    }
    if ( !v11 )
    {
      v10 = -1073741816;
      v22 = -1073741816;
      return v10;
    }
    if ( Object != *(char **)(v11 + 24) )
    {
      AlpcpDereferenceBlobEx(v11, 1);
      v10 = -1073741790;
      v22 = -1073741790;
      return v10;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      if ( AlpcpDeleteBlob(v11) )
        AlpcpDereferenceBlobEx(v11, 1);
      AlpcpDereferenceBlobEx(v11, 1);
      v11 = 0LL;
      v24[0] = 0LL;
    }
    *(_QWORD *)(v3 + 32) = v11;
    v22 = 0;
    goto LABEL_31;
  }
  if ( (v28 & 0x20000) != 0 )
  {
    v18 = 1;
  }
  else
  {
    if ( (v28 & 0x10000) != 0 )
    {
      v10 = -1073741816;
      v22 = -1073741816;
      return v10;
    }
    v18 = 0;
  }
  v10 = AlpcpCreateSecurityContext((unsigned __int64 *)Object, v18, &v26, v24);
  if ( (v10 & 0x80000000) == 0 )
  {
    v19 = v24[0];
    *(_QWORD *)(v3 + 32) = v24[0];
    if ( v18 )
    {
      v9 = *(_QWORD *)(v19 + 8);
      v23 = v9;
    }
  }
  v22 = v10;
  if ( (v10 & 0x80000000) == 0 )
LABEL_31:
    *((_QWORD *)a2 + 2) = v9;
  return v10;
}
