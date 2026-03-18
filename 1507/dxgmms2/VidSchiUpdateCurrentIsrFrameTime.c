/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C001B450
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C00043E0 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C00171C0 (VidSchiExecuteMmIoFlipAtISR.c)
 *     VidSchiProcessIsrVSync @ 0x1C0018DD0 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, union _LARGE_INTEGER *a2, char a3)
{
  LARGE_INTEGER result; // rax
  LONGLONG v6; // rbx
  LARGE_INTEGER v7; // rcx
  unsigned __int64 v8; // r8
  union _LARGE_INTEGER v9; // r9
  LARGE_INTEGER v10; // [rsp+40h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp+10h] BYREF

  result.QuadPart = (unsigned int)_InterlockedExchange(&a2[1835].HighPart, 0);
  LODWORD(v6) = a3 != 0;
  if ( result.LowPart )
  {
    v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !a2[1833].QuadPart )
      a2[1833] = PerformanceFrequency;
    v7 = v10;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&a2[1837], 0LL, 0LL);
    v9 = a2[1829];
    result.QuadPart = v10.QuadPart - v9.QuadPart;
    if ( v8 )
    {
      if ( result.QuadPart > v8 )
      {
        result.QuadPart /= v8;
        v6 = (v10.QuadPart - v9.QuadPart) / v8;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          v7.QuadPart = v9.QuadPart + v8 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    if ( !a3 )
      return result;
    result = KeQueryPerformanceCounter(&PerformanceFrequency);
    v7 = result;
    if ( !a2[1833].QuadPart )
    {
      result = PerformanceFrequency;
      a2[1833] = PerformanceFrequency;
    }
  }
  if ( (_DWORD)v6 )
  {
    a2[1830].LowPart += v6;
    a2[1829] = v7;
  }
  return result;
}
