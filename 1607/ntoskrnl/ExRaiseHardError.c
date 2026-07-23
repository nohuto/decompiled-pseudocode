/*
 * XREFs of ExRaiseHardError @ 0x1406B61A0
 * Callers:
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpQuotaWarningWorker @ 0x1405FC6A0 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x140603738 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x140621894 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x1406223C8 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x1406AD178 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x1406B67E4 (NtRaiseHardError.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 */

__int64 __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, char *a4, int a5, int *a6)
{
  __int64 v8; // rsi
  int v9; // r14d
  ULONG_PTR v10; // rdi
  NTSTATUS v11; // ebx
  unsigned int v12; // edx
  char *v13; // r8
  _QWORD *v14; // r14
  char *v15; // rdi
  __int64 i; // rbx
  __int64 v17; // rcx
  int v20; // [rsp+48h] [rbp-140h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-138h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-130h] BYREF
  int v23; // [rsp+60h] [rbp-128h]
  unsigned int v24; // [rsp+68h] [rbp-120h]
  int v25; // [rsp+70h] [rbp-118h]
  char *v26; // [rsp+78h] [rbp-110h]
  PVOID v27; // [rsp+80h] [rbp-108h]
  const void *v28; // [rsp+88h] [rbp-100h]
  int *v29; // [rsp+90h] [rbp-F8h]
  void *Src[10]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v31[5]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v32[5]; // [rsp+118h] [rbp-70h] BYREF

  v8 = a2;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v28 = a4;
  v29 = a6;
  v9 = 0;
  v20 = 0;
  BaseAddress = 0LL;
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  v10 = 80LL;
  memset(Src, 0, sizeof(Src));
  if ( ExpTooLateForErrors )
  {
    v11 = 0;
    v9 = 1;
    goto LABEL_19;
  }
  if ( (unsigned int)v8 > 5 )
  {
    v11 = -1073741584;
    goto LABEL_19;
  }
  if ( !a4 )
    goto LABEL_18;
  memmove(v32, a4, 8 * v8);
  memmove(v31, a4, 8 * v8);
  if ( !a3 )
    goto LABEL_18;
  RegionSize = 80LL;
  v12 = 0;
  if ( (_DWORD)v8 )
  {
    v13 = a4;
    do
    {
      if ( _bittest(&a3, v12) )
      {
        v10 += *(unsigned __int16 *)(*(_QWORD *)v13 + 2LL);
        RegionSize = v10;
      }
      ++v12;
      v13 += 8;
    }
    while ( v12 < (unsigned int)v8 );
  }
  v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v11 >= 0 )
  {
    v14 = BaseAddress;
    v27 = BaseAddress;
    v15 = (char *)BaseAddress + 80;
    v26 = (char *)BaseAddress + 80;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( _bittest(&a3, i) )
      {
        *(_OWORD *)&Src[2 * (unsigned int)i] = *(_OWORD *)*(_QWORD *)&a4[8 * i];
        v14[2 * (unsigned int)i + 1] = v15;
        WORD1(v14[2 * (unsigned int)i]) = WORD1(Src[2 * (unsigned int)i]);
        LOWORD(v14[2 * (unsigned int)i]) = Src[2 * (unsigned int)i];
        memmove(v15, Src[2 * (unsigned int)i + 1], WORD1(Src[2 * (unsigned int)i]));
        v17 = 2LL * (unsigned int)i;
        Src[v17 + 1] = v15;
        v15 += WORD1(Src[v17]);
        v26 = v15;
        v32[(unsigned int)i] = &v14[v17];
        v31[(unsigned int)i] = &Src[v17];
      }
    }
LABEL_18:
    v11 = ExpRaiseHardError(a1, v8, a3, (unsigned int)v32, (__int64)v31, a5, (__int64)&v20);
    v9 = v20;
  }
LABEL_19:
  *a6 = v9;
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v11;
}
