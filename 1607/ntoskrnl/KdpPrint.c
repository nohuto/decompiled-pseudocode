/*
 * XREFs of KdpPrint @ 0x1406F2E34
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpQuickMoveMemory @ 0x1406F23B8 (KdpQuickMoveMemory.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x1406F2CFC (KdLogDbgPrint.c)
 *     KdpPrintString @ 0x1406F2F8C (KdpPrintString.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        char *a3,
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
  unsigned __int64 v13; // rdx
  void *v14; // rsp
  char *v15; // r9
  _BYTE v16[480]; // [rsp+0h] [rbp-200h] BYREF
  unsigned __int16 v17; // [rsp+200h] [rbp+0h] BYREF
  char *v18; // [rsp+208h] [rbp+8h]

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
        v13 = (unsigned __int64)&a3[v8];
        if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v14 = alloca(512LL);
      KdpQuickMoveMemory((__int64)v16, a3, v8);
      a3 = v15;
    }
    v18 = a3;
    v17 = v8;
    KdLogDbgPrint(&v17);
    if ( !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent )
    {
      v11 = KdEnterDebugger(a6);
      v10 = (unsigned __int8)KdpPrintString(&v17) != 0 ? 0x80000003 : 0;
      KdExitDebugger(v11);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
