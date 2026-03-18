/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C00121FC
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000BC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0010A00 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(LARGE_INTEGER *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER result; // rax
  LONGLONG v7; // rbx
  signed __int64 v9; // rax
  LARGE_INTEGER v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  LARGE_INTEGER v13; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h]

  v3 = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 18820), 0);
  LODWORD(v7) = a3 != 0;
  if ( result.LowPart )
  {
    v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 18800) )
      *(union _LARGE_INTEGER *)(a2 + 18800) = PerformanceFrequency;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 18832), 0LL, 0LL);
    v10 = v15;
    v11 = v9;
    v12 = *(_QWORD *)(a2 + 18744);
    result.QuadPart = v15.QuadPart - v12;
    if ( v11 )
    {
      if ( result.QuadPart > v11 )
      {
        result.QuadPart /= v11;
        v7 = (v15.QuadPart - v12) / v11;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          v10.QuadPart = v12 + v11 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    if ( !a3 )
      return result;
    result = KeQueryPerformanceCounter(&PerformanceFrequency);
    v10 = result;
    if ( !*(_QWORD *)(a2 + 18800) )
    {
      result = PerformanceFrequency;
      *(union _LARGE_INTEGER *)(a2 + 18800) = PerformanceFrequency;
    }
  }
  if ( (_DWORD)v7 )
  {
    *(_DWORD *)(a2 + 18752) += v7;
    *(LARGE_INTEGER *)(a2 + 18744) = v10;
    if ( *(_BYTE *)(a2 + 8) )
    {
      result = a1[2];
      if ( !*(_QWORD *)(result.QuadPart + 904) || !*(_BYTE *)(result.QuadPart + 2090) )
      {
        v13 = a1[1];
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[47])(
                            (LARGE_INTEGER)v13.QuadPart,
                            0LL,
                            0LL,
                            &v16);
        if ( (result.LowPart & 0x80000000) == 0 )
          v3 = v17;
        *(_QWORD *)(a2 + 18760) = v3;
      }
    }
  }
  return result;
}
