/*
 * XREFs of ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015E928
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009C300 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015E3D8 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015F104 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015F200 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall DXGDEVICE::RemoveDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v6; // rdx
  char v7; // si
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, this + 32);
  v6 = this[v3 + 133];
  v7 = 0;
  if ( v6 )
  {
    if ( ((*((_DWORD *)a3 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v3 + 298) )
    {
      v8 = ((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF;
      if ( *((struct DXGALLOCATION **)v6 + v8) == a3 )
      {
        if ( !*((_DWORD *)this + v3 + 314) )
        {
          v9 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v9 + 24) = 8107LL;
          WdLogEvent5_WdAssertion(v9);
        }
        *((_QWORD *)this[v3 + 133] + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) = 0LL;
        v7 = 1;
        --*((_DWORD *)this + v3 + 314);
        *((_DWORD *)a3 + 18) &= 0xFFFFF801;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v7;
}
