/*
 * XREFs of ExRaiseHardError @ 0x140673360
 * Callers:
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpQuotaWarningWorker @ 0x1405DE770 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x1405E3D80 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x1405F7A20 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x1405F848C (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x14066A6A0 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x14067392C (NtRaiseHardError.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140150920 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  int v9; // ebx
  NTSTATUS result; // eax
  PVOID v11; // r9
  ULONG_PTR v12; // r8
  __int64 i; // rdx
  _QWORD *v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  __int64 v17; // rsi
  char *v18; // rbx
  char *v19; // rcx
  int v20; // ebx
  PVOID BaseAddress; // [rsp+40h] [rbp-F8h] BYREF
  int v22; // [rsp+48h] [rbp-F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-E8h] BYREF
  int v24; // [rsp+58h] [rbp-E0h]
  unsigned int v25; // [rsp+60h] [rbp-D8h]
  int v26; // [rsp+68h] [rbp-D0h]
  int v27; // [rsp+6Ch] [rbp-CCh]
  char *v28; // [rsp+70h] [rbp-C8h]
  char *v29; // [rsp+78h] [rbp-C0h]
  _DWORD *v30; // [rsp+80h] [rbp-B8h]
  _QWORD *v31; // [rsp+88h] [rbp-B0h]
  _QWORD *v32; // [rsp+90h] [rbp-A8h]
  char *v33; // [rsp+98h] [rbp-A0h]
  void *Src[2]; // [rsp+A0h] [rbp-98h]

  v9 = a1;
  v27 = a1;
  v24 = a1;
  v25 = a2;
  v22 = a3;
  v32 = a4;
  v30 = a6;
  if ( ExpTooLateForErrors )
  {
    *a6 = 1;
    return 0;
  }
  if ( a2 > 5 )
    return -1073741584;
  v11 = 0LL;
  BaseAddress = 0LL;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 136LL;
      RegionSize = 136LL;
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( _bittest(&a3, i) )
        {
          *(_OWORD *)&Src[2 * (unsigned int)i] = *(_OWORD *)a4[i];
          v12 += WORD1(Src[2 * (unsigned int)i]);
          RegionSize = v12;
        }
      }
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      v11 = BaseAddress;
      v14 = BaseAddress;
      v31 = BaseAddress;
      v15 = (char *)BaseAddress + 40;
      v29 = (char *)BaseAddress + 40;
      v16 = (char *)BaseAddress + 120;
      v28 = (char *)BaseAddress + 120;
      v17 = 0LL;
      v26 = 0;
      while ( (unsigned int)v17 < a2 )
      {
        if ( _bittest(&a3, v17) )
        {
          v18 = &v15[16 * (unsigned int)v17];
          v14[v17] = v18;
          memmove(v16, Src[2 * (unsigned int)v17 + 1], WORD1(Src[2 * (unsigned int)v17]));
          v19 = v28;
          Src[2 * (unsigned int)v17 + 1] = v28;
          *(_OWORD *)v18 = *(_OWORD *)&Src[2 * (unsigned int)v17];
          v16 = &v19[WORD1(Src[2 * (unsigned int)v17])];
          v28 = v16;
          v33 = v16;
          v15 = v29;
          v14 = v31;
        }
        else
        {
          v14[v17] = a4[v17];
          v16 = v28;
        }
        v17 = (unsigned int)(v17 + 1);
        v26 = v17;
        v11 = BaseAddress;
      }
      v9 = v27;
    }
    else
    {
      v11 = a4;
      BaseAddress = a4;
    }
  }
  v20 = ExpRaiseHardError(v9, a2, a3, (_DWORD)v11, (__int64)v11, a5, (__int64)&v22);
  if ( BaseAddress && BaseAddress != a4 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  *a6 = v22;
  return v20;
}
