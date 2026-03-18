/*
 * XREFs of KdpPrint @ 0x14072CE60
 * Callers:
 *     KdpTrap @ 0x14072D1DC (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x14072CBDC (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x14072D7A0 (KdpQuickMoveMemory.c)
 *     KdpPrintString @ 0x14072DEF8 (KdpPrintString.c)
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
  char v14; // bl
  char v16[480]; // [rsp+0h] [rbp-200h] BYREF
  unsigned __int16 v17; // [rsp+200h] [rbp+0h] BYREF
  ULONG64 v18; // [rsp+208h] [rbp+8h]

  v8 = a4;
  v9 = a1;
  if ( a1 >= 0x9A )
  {
    a2 = 3;
    v9 = 101;
  }
  v10 = 0;
  *a8 = 0;
  if ( a2 <= 0x1F )
    a2 = 1 << a2;
  if ( (a2 & Kd_WIN2000_Mask) != 0 || v9 >= 0x9A || (_mm_lfence(), (a2 & *(_DWORD *)*(&KdComponentTable + v9)) != 0) )
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
      KdpQuickMoveMemory(v16, a3, v8);
      a3 = v13;
    }
    v18 = a3;
    v17 = v8;
    KdLogDbgPrint(&v17);
    if ( !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent )
    {
      v14 = KdEnterDebugger(a6);
      v10 = (unsigned __int8)KdpPrintString(&v17) != 0 ? 0x80000003 : 0;
      KdExitDebugger(v14);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
