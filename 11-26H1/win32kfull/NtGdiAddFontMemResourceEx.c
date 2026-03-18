/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x14021B960
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall NtGdiAddFontMemResourceEx(void *a1, unsigned int a2, _BYTE *a3, unsigned int a4, void *a5)
{
  unsigned __int64 v5; // r15
  _BYTE *v6; // r14
  unsigned int v7; // ebx
  int v9; // edi
  void *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+40h] [rbp-C8h]
  unsigned int v18; // [rsp+48h] [rbp-C0h]
  _BYTE *v19; // [rsp+50h] [rbp-B8h]
  void *v20; // [rsp+58h] [rbp-B0h]
  void *v21; // [rsp+60h] [rbp-A8h]
  void *v22; // [rsp+68h] [rbp-A0h]
  _BYTE v23[4]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v15 = a2;
  v21 = a1;
  v18 = a2;
  v19 = a3;
  v16 = a4;
  v22 = a5;
  v9 = 1;
  v10 = 0LL;
  memset_0(v23, 0, 0x48uLL);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v12, v11, v13) < 0 || !v7 || !a1 || !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
    {
      v9 = 0;
      v17 = 0;
    }
    else
    {
      GreProbeAndReadFromUntrustedVa(v23, v5, v6, v5, 1uLL);
      v6 = v23;
      v19 = v23;
      if ( v5 != 4LL * v24 + 8 )
      {
        v9 = 0;
        v17 = 0;
      }
      v7 = v15;
    }
  }
  else
  {
    v6 = 0LL;
    v19 = 0LL;
  }
  if ( v9 )
  {
    v15 = 0;
    v10 = GrepAddFontMemResource(a1, v7, (struct tagDESIGNVECTOR *)v6, v5, &v15);
    v20 = v10;
    if ( v10 )
    {
      v16 = v15;
      GreProbeAndWriteToUntrustedVa(a5, 4uLL, &v16, 4uLL, 1uLL);
    }
  }
  return v10;
}
