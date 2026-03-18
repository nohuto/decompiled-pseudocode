/*
 * XREFs of ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C0147030
 * Callers:
 *     ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0145084 (-CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::CollectDbgInfo(ADAPTER_DISPLAY *this, struct DXGADAPTERDBGINFO *a2)
{
  __int64 i; // r11
  __int64 v3; // r8
  __int64 v4; // r9

  for ( i = 0LL;
        (unsigned int)i < *((_DWORD *)this + 20);
        *(_OWORD *)((char *)a2 + 8 * v4 + 808) = *(_OWORD *)(*((_QWORD *)this + 14) + v3 + 628) )
  {
    v3 = 1016LL * (unsigned int)i;
    v4 = 2LL * (unsigned int)i;
    *((_QWORD *)a2 + i + 73) = *(_QWORD *)(*((_QWORD *)this + 14) + v3 + 672);
    *((_DWORD *)a2 + i + 178) = *(_DWORD *)(*((_QWORD *)this + 14) + v3 + 680);
    i = (unsigned int)(i + 1);
  }
  return 0LL;
}
