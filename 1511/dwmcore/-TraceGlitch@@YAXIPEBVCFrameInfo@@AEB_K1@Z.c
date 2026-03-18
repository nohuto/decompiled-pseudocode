/*
 * XREFs of ?TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800B1010
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18008DCB0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     Template_xxxxxxxxxxxqN16 @ 0x180104460 (Template_xxxxxxxxxxxqN16.c)
 */

void __fastcall TraceGlitch(
        unsigned int a1,
        const struct CFrameInfo *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v18[124]; // [rsp+84h] [rbp-B4h] BYREF

  v4 = *a3;
  v5 = 0;
  v6 = *a4;
  v17 = 0;
  memset_0(v18, 0, sizeof(v18));
  v9 = *((_QWORD *)a2 + 38);
  v10 = *((_QWORD *)a2 + 35);
  v11 = *((_QWORD *)a2 + 168);
  v12 = (*((_QWORD *)a2 + 32) - *((_QWORD *)a2 + 30)) / 0xAuLL;
  v13 = (*((_QWORD *)a2 + 33) - *((_QWORD *)a2 + 32)) / 0xAuLL;
  v14 = 10000000 * (v9 - v11) % (unsigned __int64)(10 * v4);
  if ( a1 )
  {
    v15 = v18;
    v14 = (unsigned __int64)a2 + 432;
    do
    {
      if ( v5 >= 0x10 )
        break;
      ++v5;
      *(v15 - 1) = *(_DWORD *)(v14 - 268);
      v16 = *(_DWORD *)v14;
      v14 += 4LL;
      *v15 = v16;
      v15 += 2;
    }
    while ( v5 < a1 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xxxxxxxxxxxqN16(
      (unsigned int)&v17,
      v14,
      *(_QWORD *)a2,
      v12,
      v13,
      v10,
      v9,
      10000000 * (v9 - v10) / (unsigned __int64)(10 * v4),
      v11,
      *((_DWORD *)a2 + 41),
      10000000 * (v9 - v11) / (unsigned __int64)(10 * v4),
      v4,
      v6,
      a1);
}
