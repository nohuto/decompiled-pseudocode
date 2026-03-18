/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x14047FE50
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14054279C (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(char *Object, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // r9
  ULONG64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  ULONG_PTR v12; // rbx
  __int64 v13; // rsi
  _QWORD *v14; // rsi
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 BugCheckParameter4; // rax
  __int64 v19; // rdx
  char v20; // bl
  ULONG_PTR v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r9
  signed __int64 v24; // rdi
  bool v25; // cc
  ULONG_PTR v26; // rdi
  signed __int64 v27; // rax
  ULONG_PTR v28; // rax
  signed __int64 v29; // rdi
  ULONG_PTR v30; // rdi
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  int v33; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h]
  ULONG_PTR v36; // [rsp+48h] [rbp-50h]
  ULONG64 v37; // [rsp+50h] [rbp-48h]
  __int64 v38; // [rsp+58h] [rbp-40h]
  struct _SECURITY_QUALITY_OF_SERVICE v39; // [rsp+60h] [rbp-38h] BYREF
  int v41; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v6 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  if ( !(_BYTE)v6 )
    return (unsigned int)AlpcpCaptureSecurityAttributeInternal(Object, a3);
  v41 = *(_DWORD *)a2;
  v35 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  v37 = v7;
  if ( v7 )
  {
    if ( v7 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v8 = *(_QWORD *)v7;
    *(_DWORD *)&v39.ContextTrackingMode = *(_DWORD *)(v7 + 8);
  }
  else
  {
    v8 = *(_QWORD *)(Object + 260);
    *(_DWORD *)&v39.ContextTrackingMode = *((_DWORD *)Object + 67);
  }
  *(_QWORD *)&v39.Length = v8;
  v9 = v41;
  if ( (v41 & 0xFFFCFFFF) != 0 )
  {
    v11 = -1073741811;
    v33 = -1073741811;
    return v11;
  }
  if ( (v41 & 0x30000) == 0x30000 )
  {
    v11 = -1073741811;
    v33 = -1073741811;
    return v11;
  }
  v10 = v35;
  if ( v35 == -2 )
  {
    if ( (v41 & 0x20000) != 0 )
    {
      v20 = 1;
    }
    else
    {
      if ( (v41 & 0x10000) != 0 )
      {
        v11 = -1073741816;
        v33 = -1073741816;
        return v11;
      }
      v20 = 0;
    }
    v11 = AlpcpCreateSecurityContext((unsigned __int64 *)Object, v20, &v39, &BugCheckParameter2);
    if ( (v11 & 0x80000000) == 0 )
    {
      v21 = BugCheckParameter2;
      *(_QWORD *)(v3 + 32) = BugCheckParameter2;
      if ( v20 )
      {
        v10 = *(_QWORD *)(v21 + 8);
        v35 = v10;
      }
    }
    v33 = v11;
    if ( (v11 & 0x80000000) == 0 )
      goto LABEL_31;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    BugCheckParameter2 = 0LL;
    v13 = *((_QWORD *)Object + 2);
    if ( v13 )
    {
      v38 = v35;
      v14 = (_QWORD *)(v13 + 40);
      if ( v14 )
      {
        v15 = v35 - 16;
        v38 = v35 - 16;
        v16 = KeAbPreAcquire((ULONG_PTR)(v14 + 1), 0LL, 0LL, v6);
        if ( _InterlockedCompareExchange64(v14 + 1, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v14 + 1, v16, (ULONG_PTR)(v14 + 1), v17);
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        if ( (unsigned __int64)v15 < v14[2] && (v12 = *(_QWORD *)(*v14 + 8LL * v15)) != 0 && *(_BYTE *)(v12 - 31) == 3 )
        {
          _m_prefetchw((const void *)(v12 - 24));
          BugCheckParameter4 = *(_QWORD *)(v12 - 24);
          do
          {
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, v12, 0x20uLL, BugCheckParameter4);
              goto LABEL_40;
            }
            v19 = BugCheckParameter4;
            BugCheckParameter4 = _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v12 - 24),
                                   BugCheckParameter4 + 1,
                                   BugCheckParameter4);
          }
          while ( BugCheckParameter4 != v19 );
          if ( BugCheckParameter4 == -1 )
            goto LABEL_40;
          if ( _InterlockedCompareExchange64(v14 + 1, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v14 + 1);
          KeAbPostRelease((ULONG_PTR)(v14 + 1));
          if ( (*(_BYTE *)(v12 - 32) & 4) != 0 )
          {
            _InterlockedOr(v32, 0);
            if ( (*(_QWORD *)(v12 - 16) & 1) != 0 )
            {
              v22 = KeAbPreAcquire(v12 - 16, 0LL, 0LL, v6);
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 - 16), v22, v12 - 16, v23);
              if ( v22 )
                *(_BYTE *)(v22 + 26) |= 1u;
              ExfReleasePushLockExclusive((volatile signed __int64 *)(v12 - 16));
              if ( v22 )
                KeAbPostRelease(v12 - 16);
            }
          }
        }
        else
        {
LABEL_40:
          if ( _InterlockedCompareExchange64(v14 + 1, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v14 + 1);
          KeAbPostRelease((ULONG_PTR)(v14 + 1));
          v12 = 0LL;
        }
        v3 = a3;
        v10 = v35;
        v9 = v41;
      }
      v36 = v12;
      BugCheckParameter2 = v12;
    }
    if ( !v12 )
    {
      v11 = -1073741816;
      v33 = -1073741816;
      return v11;
    }
    if ( Object == *(char **)(v12 + 24) )
    {
      if ( (v9 & 0x10000) != 0 )
      {
        if ( AlpcpDeleteBlob(v12, a2, a3, v6) )
        {
          v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v25 = v27 <= 1;
          v28 = v27 - 1;
          if ( v25 )
          {
            if ( v28 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v28);
            v12 = BugCheckParameter2;
            AlpcpDestroyBlob(BugCheckParameter2);
          }
          else
          {
            v12 = BugCheckParameter2;
          }
        }
        v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v25 = v29 <= 1;
        v30 = v29 - 1;
        if ( v25 )
        {
          if ( v30 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v30);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
        v12 = 0LL;
        BugCheckParameter2 = 0LL;
        v10 = v35;
      }
      *(_QWORD *)(v3 + 32) = v12;
      v33 = 0;
LABEL_31:
      *(_QWORD *)(a2 + 16) = v10;
      return v11;
    }
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v25 = v24 <= 1;
    v26 = v24 - 1;
    if ( v25 )
    {
      if ( v26 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v26);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
    v11 = -1073741790;
    v33 = -1073741790;
  }
  return v11;
}
