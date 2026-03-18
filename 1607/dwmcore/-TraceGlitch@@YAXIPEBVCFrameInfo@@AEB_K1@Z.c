/*
 * XREFs of ?TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800B39F4
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     Template_xxxxxxxxxxxqN16 @ 0x18011A83C (Template_xxxxxxxxxxxqN16.c)
 */

void __fastcall TraceGlitch(
        unsigned int a1,
        const struct CFrameInfo *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned int v14; // r8d
  char *v15; // rcx
  int v16; // eax
  _BYTE v17[4]; // [rsp+80h] [rbp-B8h] BYREF
  char v18; // [rsp+84h] [rbp-B4h] BYREF

  v4 = *a3;
  v6 = *a4;
  memset_0(v17, 0, 0x80uLL);
  v8 = *((_QWORD *)a2 + 35);
  v9 = *((_QWORD *)a2 + 165);
  v10 = *((_QWORD *)a2 + 38);
  v11 = (*((_QWORD *)a2 + 32) - *((_QWORD *)a2 + 30)) / 0xAuLL;
  v12 = (*((_QWORD *)a2 + 33) - *((_QWORD *)a2 + 32)) / 0xAuLL;
  v13 = 10000000 * (v10 - v9) % (unsigned __int64)(10 * v4);
  v14 = 0;
  if ( a1 )
  {
    v15 = &v18;
    v13 = (unsigned __int64)a2 + 432;
    do
    {
      if ( v14 >= 0x10 )
        break;
      ++v14;
      *((_DWORD *)v15 - 1) = *(_DWORD *)(v13 - 268);
      v16 = *(_DWORD *)v13;
      v13 += 4LL;
      *(_DWORD *)v15 = v16;
      v15 += 8;
    }
    while ( v14 < a1 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xxxxxxxxxxxqN16(
      (unsigned int)v17,
      v13,
      *(_QWORD *)a2,
      v11,
      v12,
      v8,
      v10,
      10000000 * (v10 - v8) / (unsigned __int64)(10 * v4),
      v9,
      *((_DWORD *)a2 + 41),
      10000000 * (v10 - v9) / (unsigned __int64)(10 * v4),
      v4,
      v6,
      a1);
}
