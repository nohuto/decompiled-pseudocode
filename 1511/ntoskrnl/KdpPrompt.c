/*
 * XREFs of KdpPrompt @ 0x1406ACF04
 * Callers:
 *     KdpTrap @ 0x1406AD120 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x1406ACB20 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x1406AD754 (KdpQuickMoveMemory.c)
 *     KdpPromptString @ 0x1406ADF84 (KdpPromptString.c)
 */

__int64 __fastcall KdpPrompt(
        ULONG64 a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 v6; // si
  unsigned __int16 v8; // bx
  ULONG64 v9; // rdi
  ULONG64 v10; // rcx
  void *v11; // rsp
  ULONG64 v12; // r9
  void *v13; // rsp
  _BYTE *v14; // rcx
  bool v15; // bl
  unsigned __int64 v16; // rcx
  _BYTE v18[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v19[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v20[4]; // [rsp+400h] [rbp+0h] BYREF
  _BYTE *v21; // [rsp+408h] [rbp+8h]
  _BYTE *v22; // [rsp+410h] [rbp+10h]
  unsigned __int16 v23; // [rsp+418h] [rbp+18h] BYREF
  ULONG64 v24; // [rsp+420h] [rbp+20h]

  v6 = a4;
  v8 = a2;
  v9 = a1;
  if ( a2 > 0x200u )
    v8 = 512;
  if ( a4 > 0x200u )
    v6 = 512;
  if ( a5 )
  {
    if ( v8 )
    {
      v10 = a1 + v8;
      if ( v10 > MmUserProbeAddress || v10 < v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v11 = alloca(512LL);
    v22 = v19;
    KdpQuickMoveMemory(v19, v9, v8);
    v9 = v12;
    ProbeForWrite(a3, v6, 1u);
    v13 = alloca(512LL);
    v14 = v18;
    v22 = v18;
  }
  else
  {
    v14 = a3;
  }
  v21 = v14;
  v20[0] = 0;
  v20[1] = v6;
  v24 = v9;
  v23 = v8;
  KdLogDbgPrint(&v23);
  v15 = KdEnterDebugger(a6);
  while ( (unsigned __int8)KdpPromptString(&v23, v20) == 1 )
    ;
  LOBYTE(v16) = v15;
  KdExitDebugger(v16);
  if ( a5 == 1 )
    KdpQuickMoveMemory(a3, v21, v20[0]);
  return v20[0];
}
