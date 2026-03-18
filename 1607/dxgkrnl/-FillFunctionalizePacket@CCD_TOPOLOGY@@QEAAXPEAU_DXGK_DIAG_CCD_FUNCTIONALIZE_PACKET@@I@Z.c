/*
 * XREFs of ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z @ 0x1C008C7EC
 * Callers:
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C008C75C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall CCD_TOPOLOGY::FillFunctionalizePacket(
        CCD_TOPOLOGY *this,
        struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *a2,
        unsigned int a3)
{
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx

  memset(a2, 0, a3);
  *(_DWORD *)a2 = 23;
  *((_DWORD *)a2 + 1) = a3;
  v6 = 0;
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 12) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
  v7 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v7 + 20) )
  {
    do
    {
      v8 = v6++;
      v9 = 52 * v8;
      *(_DWORD *)((char *)a2 + v9 + 56) = *(_DWORD *)(216 * v8 + v7 + 64);
      *(_DWORD *)((char *)a2 + v9 + 60) = *(_DWORD *)(216 * v8 + v7 + 68);
      *(_DWORD *)((char *)a2 + v9 + 72) = *(_DWORD *)(216 * v8 + v7 + 48);
      *(_QWORD *)((char *)a2 + v9 + 64) = *(_QWORD *)(216 * v8 + v7 + 56);
      *(_DWORD *)((char *)a2 + v9 + 76) = *(_DWORD *)(216 * v8 + v7 + 180);
      *(_QWORD *)((char *)a2 + v9 + 80) = *(_QWORD *)(216 * v8 + v7 + 192);
      *(_OWORD *)((char *)a2 + v9 + 88) = *(_OWORD *)(216 * v8 + v7 + 208);
      *(_DWORD *)((char *)a2 + v9 + 104) = *(_DWORD *)(216 * v8 + v7 + 232);
      v7 = *((_QWORD *)this + 8);
    }
    while ( v6 < *(unsigned __int16 *)(v7 + 20) );
  }
}
