/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1C00D7FAC
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00BA280 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00D78D0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(int a1, int a2, __int64 a3, int a4, __int64 *a5)
{
  unsigned int v5; // r14d
  __int16 v10; // si
  unsigned int v11; // r11d
  unsigned int v12; // edx
  char *v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  char *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm1
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct _HIDP_DEVICE_DESC v22; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_DEVICE_DESC Object; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[160]; // [rsp+C0h] [rbp-40h] BYREF
  char v25; // [rsp+160h] [rbp+60h] BYREF

  v5 = 0;
  if ( a5 )
    *a5 = 0LL;
  memmove(v24, &commonUsages, 0xA0uLL);
  v10 = 2;
  v11 = 5;
  if ( a1 == 2 )
  {
    v12 = 7;
    v10 = 4;
    v13 = (char *)&touchUsages;
    v14 = 12;
    v15 = 10;
  }
  else
  {
    if ( a1 != 3 )
      return 0LL;
    v13 = (char *)&penUsages;
    v12 = 6;
    v14 = 11;
    v15 = 1;
  }
  v16 = &v25;
  do
  {
    if ( v5 >= v12 )
      break;
    ++v11;
    v17 = 32LL * v5++;
    v18 = *(_OWORD *)&v13[v17 + 16];
    *(_OWORD *)v16 = *(_OWORD *)&v13[v17];
    *((_OWORD *)v16 + 1) = v18;
    v16 += 32;
  }
  while ( v11 < v14 );
  v19 = BuildReportDescriptor(0xDu, v10, (struct tagUSAGE_PROPERTIES *)v24, v14, v15);
  if ( v19 )
  {
    v22 = Object;
    v20 = RIMIDECreatePseudoHIDDevice(13, v10, a2, a4, a3, &Object, &v22, 0);
    if ( v20 )
      *a5 = v20;
    else
      return 0;
  }
  return v19;
}
