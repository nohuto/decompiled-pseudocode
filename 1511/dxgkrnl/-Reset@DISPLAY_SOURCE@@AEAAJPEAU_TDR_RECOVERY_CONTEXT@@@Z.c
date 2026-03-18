/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ECA8
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012E8EC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
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
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 0;
  *((_DWORD *)this + 241) = 0;
  *((_DWORD *)this + 239) = -1;
  *((_DWORD *)this + 248) = -1;
  *((_DWORD *)this + 249) = -1;
  *((_WORD *)this + 348) = 0;
  *(_WORD *)((char *)this + 699) = 1;
  *((_BYTE *)this + 980) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  v4 = (void *)*((_QWORD *)this + 92);
  if ( v4 )
    memset(v4, 0, 4 * *(unsigned int *)(v3 + 1344) * (unsigned __int64)*(unsigned int *)(v3 + 1348));
  v5 = (void *)*((_QWORD *)this + 97);
  if ( v5 )
    memset(v5, 0, 4 * *(unsigned int *)(v3 + 1344) * (unsigned __int64)*(unsigned int *)(v3 + 1348));
  return 0LL;
}
