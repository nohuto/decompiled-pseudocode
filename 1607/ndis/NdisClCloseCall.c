/*
 * XREFs of NdisClCloseCall @ 0x1C00F61D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_qLLqD @ 0x1C0051CB4 (WPP_SF_qLLqD.c)
 *     NdisCmCloseCallComplete @ 0x1C00F6A60 (NdisCmCloseCallComplete.c)
 *     ndisReferenceVcPtr @ 0x1C00F9E8C (ndisReferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisClCloseCall(NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle, PVOID Buffer, UINT Size)
{
  __int64 v8; // rdi
  KIRQL v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  NDIS_STATUS v14; // eax
  int v15; // edi
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-28h]

  if ( (unsigned __int8)byte_1C00895DA >= 4u )
  {
    v18 = *(_DWORD *)(*((_QWORD *)NdisVcHandle + 9) + 4LL);
    v17 = *((_QWORD *)NdisVcHandle + 9);
    v16 = *(_DWORD *)NdisVcHandle;
    WPP_SF_qLLqD((__int64)NdisVcHandle, (__int64)NdisPartyHandle, (__int64)NdisVcHandle, *((_DWORD *)NdisVcHandle + 1));
  }
  v8 = 0LL;
  if ( !(unsigned __int8)ndisReferenceVcPtr(NdisVcHandle, NdisPartyHandle) )
    return -1073741823;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x20u;
  v11 = *((_DWORD *)NdisVcHandle + 1);
  if ( (v11 & 0x10) != 0 )
    *((_DWORD *)NdisVcHandle + 1) = v11 | 0x40;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v10);
  v12 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v12 + 392) >= 6u )
  {
    if ( NdisPartyHandle )
      v8 = *((_QWORD *)NdisPartyHandle + 1);
    v13 = *(_QWORD *)(v12 + 32);
  }
  else
  {
    if ( NdisPartyHandle )
      v8 = *((_QWORD *)NdisPartyHandle + 1);
    v13 = *(_QWORD *)(v12 + 24);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID, _QWORD, int, __int64, int))(v13 + 64))(
          *((_QWORD *)NdisVcHandle + 18),
          v8,
          Buffer,
          Size,
          v16,
          v17,
          v18);
  v15 = v14;
  if ( v14 != 259 )
  {
    NdisCmCloseCallComplete(v14, NdisVcHandle, NdisPartyHandle);
    v15 = 259;
  }
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_d(0x28u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, v15);
  return v15;
}
