/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1C00C8900
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00B0550 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C8228 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
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
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct _HIDP_DEVICE_DESC v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_DEVICE_DESC Object; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[160]; // [rsp+C0h] [rbp-40h] BYREF
  char v26; // [rsp+160h] [rbp+60h] BYREF

  v5 = 0;
  if ( a5 )
    *a5 = 0LL;
  memmove(v25, &commonUsages, 0xA0uLL);
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
  v16 = &v26;
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
  v20 = BuildReportDescriptor(0xDu, v10, (struct tagUSAGE_PROPERTIES *)v25, v14, v15);
  if ( v20 )
  {
    v23 = Object;
    v21 = RIMIDECreatePseudoHIDDevice(v19, v10, a2, a4, a3, &Object, &v23, 0);
    if ( v21 )
      *a5 = v21;
    else
      return 0;
  }
  return v20;
}
