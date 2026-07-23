/*
 * XREFs of MiLogAllocateWsleEvent @ 0x1401E26D0
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiFillPageExtraInfo @ 0x1401E26A0 (MiFillPageExtraInfo.c)
 */

__int64 __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int16 v7; // ax
  unsigned __int64 v9[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v6 = 32;
  memset(v9, 0, sizeof(v9));
  MiIdentifyPfnWrapper(a1, (__int64)v9);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    MiFillPageExtraInfo(&v9[3], a2, a3);
    v7 = 642;
  }
  else
  {
    v7 = 630;
    v6 = 24;
  }
  v12 = 0;
  v10 = v9;
  v11 = v6;
  return EtwTraceKernelEvent((int)&v10, 1, 0x28000001u, v7, 289413890);
}
