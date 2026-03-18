/*
 * XREFs of KdpPrint @ 0x1406ACDA4
 * Callers:
 *     KdpTrap @ 0x1406AD120 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x1406ACB20 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x1406AD754 (KdpQuickMoveMemory.c)
 *     KdpPrintString @ 0x1406ADEAC (KdpPrintString.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        ULONG64 a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  unsigned __int16 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // edi
  ULONG64 v11; // rdx
  void *v12; // rsp
  ULONG64 v13; // r9
  bool v14; // bl
  unsigned __int64 v15; // rcx
  char v17[480]; // [rsp+0h] [rbp-200h] BYREF
  unsigned __int16 v18; // [rsp+200h] [rbp+0h] BYREF
  ULONG64 v19; // [rsp+208h] [rbp+8h]

  v8 = a4;
  v9 = a1;
  if ( a1 >= 0x9B )
  {
    a2 = 3;
    v9 = 101;
  }
  v10 = 0;
  *a8 = 0;
  if ( a2 <= 0x1F )
    a2 = 1 << a2;
  if ( (a2 & Kd_WIN2000_Mask) != 0 || v9 >= 0x9B || (_mm_lfence(), (a2 & *(_DWORD *)*(&KdComponentTable + v9)) != 0) )
  {
    if ( a4 > 0x200u )
      v8 = 512;
    if ( a5 )
    {
      if ( v8 )
      {
        v11 = a3 + v8;
        if ( v11 > MmUserProbeAddress || v11 < a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v12 = alloca(512LL);
      KdpQuickMoveMemory(v17, a3, v8);
      a3 = v13;
    }
    v19 = a3;
    v18 = v8;
    KdLogDbgPrint(&v18);
    if ( !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent )
    {
      v14 = KdEnterDebugger(a6);
      v10 = (unsigned __int8)KdpPrintString(&v18) != 0 ? 0x80000003 : 0;
      LOBYTE(v15) = v14;
      KdExitDebugger(v15);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
