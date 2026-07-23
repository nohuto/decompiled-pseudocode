/*
 * XREFs of KdpPrompt @ 0x1406F5E00
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     KdpQuickMoveMemory @ 0x1406F23B8 (KdpQuickMoveMemory.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x1406F2CFC (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x1406F65C4 (KdpPromptString.c)
 */

__int64 __fastcall KdpPrompt(
        char *a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 v6; // si
  unsigned __int16 v8; // bx
  char *v9; // rdi
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  char *v12; // r9
  void *v13; // rsp
  char *v14; // rcx
  char v15; // bl
  _BYTE v17[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v18[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v19[4]; // [rsp+400h] [rbp+0h] BYREF
  char *v20; // [rsp+408h] [rbp+8h]
  _BYTE *v21; // [rsp+410h] [rbp+10h]
  unsigned __int16 v22; // [rsp+418h] [rbp+18h] BYREF
  char *v23; // [rsp+420h] [rbp+20h]

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
      v10 = (unsigned __int64)&a1[v8];
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = alloca(512LL);
    v21 = v18;
    KdpQuickMoveMemory((__int64)v18, v9, v8);
    v9 = v12;
    ProbeForWrite(a3, v6, 1u);
    v13 = alloca(512LL);
    v14 = v17;
    v21 = v17;
  }
  else
  {
    v14 = (char *)a3;
  }
  v20 = v14;
  v19[0] = 0;
  v19[1] = v6;
  v23 = v9;
  v22 = v8;
  KdLogDbgPrint(&v22);
  v15 = KdEnterDebugger(a6);
  while ( (unsigned __int8)KdpPromptString(&v22, v19) == 1 )
    ;
  KdExitDebugger(v15);
  if ( a5 == 1 )
    KdpQuickMoveMemory((__int64)a3, v20, v19[0]);
  return v19[0];
}
