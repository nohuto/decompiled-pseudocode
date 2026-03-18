/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C0143CC0
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C016A770 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01861BC (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, unsigned int a2)
{
  DXGADAPTER *v2; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 357);
  if ( v2 )
    return DXGADAPTER::IsVSyncAvailable(v2, a2);
  else
    return 1;
}
