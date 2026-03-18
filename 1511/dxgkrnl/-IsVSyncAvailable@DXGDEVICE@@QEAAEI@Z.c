/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C0123DB0
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0146BF8 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01604D4 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, __int64 a2)
{
  DXGADAPTER *v2; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 354);
  if ( v2 )
    return DXGADAPTER::IsVSyncAvailable(v2, a2);
  else
    return 1;
}
