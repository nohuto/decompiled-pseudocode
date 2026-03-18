/*
 * XREFs of BgpConsoleInitialize @ 0x14075F3E0
 * Callers:
 *     <none>
 * Callees:
 *     BgpGetResolution @ 0x140131B20 (BgpGetResolution.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpConsoleSetPointSize @ 0x14016656C (BgpConsoleSetPointSize.c)
 *     BgpFoGetFontHandle @ 0x14075E940 (BgpFoGetFontHandle.c)
 *     BgpDisplayCharacterGetContext @ 0x14075F5E8 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x1407613BC (BgpConsoleClearScreenEx.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned __int16 a1, int a2, int a3)
{
  _DWORD *Resolution; // rax
  int FontHandle; // ebx
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v13; // r10d
  __int64 v14; // rax
  _DWORD v16[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-18h]
  int v20; // [rsp+54h] [rbp-14h]

  BgpFwAcquireLock();
  dword_1403188C8 |= a1;
  dword_1403188CC = a2;
  dword_1403188D0 = a3;
  Resolution = BgpGetResolution(v16);
  v17[0] = a3;
  v17[1] = a2;
  qword_1403188D4 = *(_QWORD *)Resolution;
  dword_1403188DC = Resolution[2];
  dword_1403188C0[0] = 80;
  dword_1403188C4 = 25;
  v20 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  FontHandle = BgpFoGetFontHandle((wchar_t *)L"Segoe Mono Boot", &v18);
  if ( FontHandle >= 0 )
  {
    FontHandle = BgpConsoleSetPointSize(
                   dword_1403188C4,
                   dword_1403188C0[0],
                   HIDWORD(qword_1403188D4),
                   qword_1403188D4,
                   (__int64)v17,
                   (__int64)v16);
    if ( FontHandle >= 0 )
    {
      dword_1403188E0 = v19;
      dword_1403188F0 = v16[0];
      dword_1403188F4 = v16[1];
      v8 = 1LL;
      if ( (a1 & 4) == 0 )
        v8 = 3LL;
      qword_1403188E8 = BgpDisplayCharacterGetContext(v17, &dword_1403188F0, v8);
      if ( qword_1403188E8 )
      {
        v9 = dword_1403188C0[0];
        v10 = 0LL;
        v11 = dword_1403188C4;
        dword_14031890C = 0;
        dword_140318904 = 0;
        dword_140318908 = 0;
        dword_1403188FC = (unsigned int)(qword_1403188D4 - dword_1403188C0[0] * dword_1403188F0) >> 1;
        v12 = (unsigned int)(HIDWORD(qword_1403188D4) - dword_1403188C4 * dword_1403188F4) >> 1;
        for ( dword_140318900 = (unsigned int)(HIDWORD(qword_1403188D4) - dword_1403188C4 * dword_1403188F4) >> 1;
              (unsigned int)v10 < v9;
              v10 = (unsigned int)(v10 + 1) )
        {
          v13 = 0;
          if ( v11 )
          {
            do
            {
              v14 = v13++;
              v12 = 3 * (25LL * (unsigned int)v10 + v14);
              LOWORD(dword_1403188C0[v12 + 22]) = 32;
              dword_1403188C0[v12 + 21] = a3;
              dword_1403188C0[v12 + 20] = a2;
              v11 = dword_1403188C4;
            }
            while ( v13 < dword_1403188C4 );
            v9 = dword_1403188C0[0];
          }
        }
        if ( (a1 & 1) != 0 )
          BgpConsoleClearScreenEx(v12, v10);
        FontHandle = 0;
      }
      else
      {
        FontHandle = -1073741823;
      }
    }
  }
  BgpFwReleaseLock();
  return (unsigned int)FontHandle;
}
