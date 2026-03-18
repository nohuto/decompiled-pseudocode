/*
 * XREFs of KdpPrint @ 0x1406F20D8
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KdpPrintString @ 0x1406F2000 (KdpPrintString.c)
 *     KdLogDbgPrint @ 0x1406F2230 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x1406F2720 (KdpQuickMoveMemory.c)
 *     KdEnterDebugger @ 0x1406F2738 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  unsigned __int16 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // edi
  char v11; // bl
  __int64 v12; // rcx
  unsigned __int64 v14; // rdx
  void *v15; // rsp
  unsigned __int64 v16; // r9
  char v17[480]; // [rsp+0h] [rbp-200h] BYREF
  unsigned __int16 v18; // [rsp+200h] [rbp+0h] BYREF
  unsigned __int64 v19; // [rsp+208h] [rbp+8h]

  v8 = a4;
  v9 = a1;
  if ( a1 >= 0x9C )
  {
    a2 = 3;
    v9 = 101;
  }
  v10 = 0;
  *a8 = 0;
  if ( a2 <= 0x1F )
    a2 = 1 << a2;
  if ( (a2 & Kd_WIN2000_Mask) != 0 || v9 >= 0x9C || (_mm_lfence(), (a2 & *(_DWORD *)*(&KdComponentTable + v9)) != 0) )
  {
    if ( a4 > 0x200u )
      v8 = 512;
    if ( a5 )
    {
      if ( v8 )
      {
        v14 = a3 + v8;
        if ( v14 > 0x7FFFFFFF0000LL || v14 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v15 = alloca(512LL);
      KdpQuickMoveMemory(v17, a3, v8);
      a3 = v16;
    }
    v19 = a3;
    v18 = v8;
    KdLogDbgPrint(&v18);
    if ( !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent )
    {
      v11 = KdEnterDebugger(a6);
      v10 = KdpPrintString(&v18) ? 0x80000003 : 0;
      LOBYTE(v12) = v11;
      KdExitDebugger(v12);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
