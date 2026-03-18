/*
 * XREFs of FadeDesktop @ 0x1C0106E90
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C0106CB4 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C01070A4 (GreSetDeviceGammaRamp.c)
 */

LARGE_INTEGER __fastcall FadeDesktop(unsigned int a1, unsigned int *a2, DWORD a3, int a4)
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v9; // rbx
  unsigned int v10; // r15d
  DWORD v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned __int16 *v14; // r8
  unsigned int *v15; // r9
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  HDC v20; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v22; // rtt
  DWORD v23; // esi
  union _LARGE_INTEGER v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+30h] [rbp-38h]
  DWORD LowPart; // [rsp+78h] [rbp+10h]

  result = KeQueryPerformanceCounter(&v24);
  v9 = result;
  if ( v24.QuadPart )
  {
    result.QuadPart = 0x3E8 / a1;
    LowPart = result.LowPart;
    v10 = 0x3E8 / a1;
    if ( result.LowPart <= a3 )
    {
      if ( result.LowPart )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = 0;
          if ( *a2 )
          {
            do
            {
              v25 = 256LL;
              v13 = 1544LL * v12 + 1552;
              v14 = (unsigned __int16 *)((char *)a2 + v13);
              v15 = &a2[386 * v12 + 644];
              v26 = 1544LL * v12;
              do
              {
                if ( a4 )
                  v16 = v11 * *v14;
                else
                  v16 = *v14 * (a3 - v11);
                *(unsigned __int16 *)((char *)v14 + 4 - v13) = v16 / a3;
                v17 = *((unsigned __int16 *)v15 - 256);
                if ( a4 )
                  v18 = v11 * v17;
                else
                  v18 = (a3 - v11) * v17;
                *(unsigned __int16 *)((char *)v14 + 4 - (1544LL * v12 + 1040)) = v18 / a3;
                if ( a4 )
                  v19 = v11 * *(unsigned __int16 *)v15;
                else
                  v19 = *(unsigned __int16 *)v15 * (a3 - v11);
                result.QuadPart = v19 / a3;
                v15 = (unsigned int *)((char *)v15 + 2);
                *(unsigned __int16 *)((char *)v14++ + 4 - (1544LL * v12 + 528)) = result.LowPart;
                --v25;
              }
              while ( v25 );
              v20 = *(HDC *)&a2[(unsigned __int64)v26 / 4 + 386];
              if ( v20 )
                result.QuadPart = GreSetDeviceGammaRamp(v20, a2 + 1, 0, 0);
              ++v12;
            }
            while ( v12 < *a2 );
            v10 = LowPart;
          }
          if ( v11 == a3 )
            break;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v22 = 1000LL * (PerformanceCounter.LowPart - v9.LowPart);
          result.QuadPart = ((PerformanceCounter.QuadPart - v9.QuadPart) & 0xFFFFFFFF00000000uLL) / v24.QuadPart;
          v23 = 1000 * result.LowPart + v22 / v24.QuadPart;
          if ( v23 < a3 )
          {
            result.QuadPart = UserSleep(v23 % v10);
            v11 = v23 % v10 + v23;
            if ( v11 < a3 )
              continue;
          }
          v11 = a3;
        }
      }
    }
  }
  return result;
}
