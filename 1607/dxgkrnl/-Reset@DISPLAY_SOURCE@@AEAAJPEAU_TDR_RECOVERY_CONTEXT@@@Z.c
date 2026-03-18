/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01485B4
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0148460 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 0;
  *((_WORD *)this + 352) = 0;
  *((_DWORD *)this + 243) = 0;
  *((_DWORD *)this + 241) = -1;
  *((_DWORD *)this + 250) = -1;
  *((_DWORD *)this + 251) = -1;
  *(_WORD *)((char *)this + 707) = 1;
  *((_BYTE *)this + 988) = 0;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  v4 = (void *)*((_QWORD *)this + 93);
  if ( v4 )
    memset(v4, 0, 4 * *(unsigned int *)(v3 + 1480) * (unsigned __int64)*(unsigned int *)(v3 + 1484));
  v5 = (void *)*((_QWORD *)this + 98);
  if ( v5 )
    memset(v5, 0, 4 * *(unsigned int *)(v3 + 1480) * (unsigned __int64)*(unsigned int *)(v3 + 1484));
  return 0LL;
}
