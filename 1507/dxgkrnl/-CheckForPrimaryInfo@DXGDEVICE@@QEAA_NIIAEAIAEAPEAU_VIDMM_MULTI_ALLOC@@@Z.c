/*
 * XREFs of ?CheckForPrimaryInfo@DXGDEVICE@@QEAA_NIIAEAIAEAPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B3D0
 * Callers:
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00B79C8 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00B7C98 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall DXGDEVICE::CheckForPrimaryInfo(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct _VIDMM_MULTI_ALLOC **a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v9; // r8
  char v10; // bl
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  v7 = a3;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (DXGDEVICE *)((char *)this + 232));
  v9 = *((_QWORD *)this + 31 * v5 + v7 + 74);
  if ( v9 )
  {
    v10 = 1;
    *a4 = *(_DWORD *)(*(_QWORD *)(v9 + 48) + 4LL) & 1;
    *a5 = *(struct _VIDMM_MULTI_ALLOC **)(v9 + 24);
  }
  else
  {
    v10 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v10;
}
