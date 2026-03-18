/*
 * XREFs of ?UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z @ 0x1C0001908
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::UpdateHandleInstance(DXGPROCESS *this, unsigned int a2, int a3)
{
  char *v3; // rsi
  unsigned int v7; // edi
  unsigned int v8; // r9d
  __int64 v9; // rdx
  int v10; // ecx

  v3 = (char *)this + 192;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 192));
  v7 = 0;
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)this + 58) )
  {
    v9 = *((_QWORD *)this + 27);
    v10 = *(_DWORD *)(v9 + 16LL * v8 + 8);
    if ( ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x30) && (v10 & 0x1000) == 0 && (v10 & 0xF) != 0 )
    {
      *(_DWORD *)(v9 + 16LL * v8 + 8) ^= (*(_DWORD *)(v9 + 16LL * v8 + 8) ^ (a3 << 6)) & 0xFC0;
      v7 = (*(_DWORD *)(*((_QWORD *)this + 27) + 16LL * v8 + 8) >> 6) & 0x3F | (((*(_DWORD *)(*((_QWORD *)this + 27)
                                                                                            + 16LL * v8
                                                                                            + 8) << 20) ^ (v8 ^ (*(_DWORD *)(*((_QWORD *)this + 27) + 16LL * v8 + 8) << 20)) & 0xFFFFFF) << 6);
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
