/*
 * XREFs of Pdcv2ActivationClientUnregister @ 0x18008E084
 * Callers:
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800797A4 (--1CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180005614 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180005760 (PdcAcquireRwLockExclusive2.c)
 *     McGenEventUnregister @ 0x180083318 (McGenEventUnregister.c)
 *     PdcPortClose @ 0x18008E300 (PdcPortClose.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x18008EB88 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 */

__int64 __fastcall Pdcv2ActivationClientUnregister(_QWORD *P)
{
  unsigned int v1; // ebx
  HANDLE *v3; // r14
  __int64 v4; // rcx
  __int64 **v5; // rsi
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( P && *(_DWORD *)P == 843138128 )
  {
    v3 = (HANDLE *)(P + 1);
    PdcAcquireRwLockExclusive2((__int64)(P + 1), &v10);
    v4 = P[4];
    *((_BYTE *)P + 64) = 0;
    PdcPortClose(v4);
    v5 = (__int64 **)(P + 9);
    while ( *v5 != (__int64 *)v5 )
    {
      v6 = *v5;
      v7 = **v5;
      if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
      v8 = v6[3];
      --*(_DWORD *)(v8 + 4LL * *((int *)v6 + 12) + 228);
      --*(_DWORD *)(v8 + 224);
      *((_DWORD *)v6 + 4) = 0;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    P[4] = 0LL;
    *(_DWORD *)P = 0;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(P, 0LL);
    PdcReleaseRwLockExclusive2((__int64)v3, &v10);
    if ( CloseHandle(*v3) )
      *v3 = 0LL;
    else
      GetLastError();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( _InterlockedExchangeAdd(&g_RegistrationCount, 0xFFFFFFFF) == 1 )
    {
      EtwEventUnregister(qword_1800CA0E0);
      qword_1800CA0E0 = 0LL;
      dword_1800CA0C0 = 0;
      McGenEventUnregister(&Microsoft_Windows_PDCHandle);
    }
  }
  else
  {
    v1 = -1073741585;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(0LL, 3221225711LL);
  }
  return v1;
}
