/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C011E4B0
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0140A40 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C015C1E0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, unsigned int a2)
{
  DXGADAPTER *v2; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 2338);
  if ( v2 )
    return DXGADAPTER::IsVSyncAvailable(v2, a2);
  else
    return 1;
}
