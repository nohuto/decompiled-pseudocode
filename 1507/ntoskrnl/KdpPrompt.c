/*
 * XREFs of KdpPrompt @ 0x14072CFC0
 * Callers:
 *     KdpTrap @ 0x14072D1DC (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x14072CBDC (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x14072D7A0 (KdpQuickMoveMemory.c)
 *     KdpPromptString @ 0x14072DFD8 (KdpPromptString.c)
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
  char v15; // bl
  _BYTE v17[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v18[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v19[4]; // [rsp+400h] [rbp+0h] BYREF
  _BYTE *v20; // [rsp+408h] [rbp+8h]
  _BYTE *v21; // [rsp+410h] [rbp+10h]
  unsigned __int16 v22; // [rsp+418h] [rbp+18h] BYREF
  ULONG64 v23; // [rsp+420h] [rbp+20h]

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
    v21 = v18;
    KdpQuickMoveMemory(v18, v9, v8);
    v9 = v12;
    ProbeForWrite(a3, v6, 1u);
    v13 = alloca(512LL);
    v14 = v17;
    v21 = v17;
  }
  else
  {
    v14 = a3;
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
    KdpQuickMoveMemory(a3, v20, v19[0]);
  return v19[0];
}
