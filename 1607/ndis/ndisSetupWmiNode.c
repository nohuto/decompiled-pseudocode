/*
 * XREFs of ndisSetupWmiNode @ 0x1C00181A0
 * Callers:
 *     ndisWriteWmiStatusIndication @ 0x1C00176D4 (ndisWriteWmiStatusIndication.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009C754 (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A92DC (ndisNotifyWmiBindUnbind.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     NdisCoAssignInstanceName @ 0x1C00F72C0 (NdisCoAssignInstanceName.c)
 *     NdisCoDeleteVc @ 0x1C00F7F40 (NdisCoDeleteVc.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

_QWORD *__fastcall ndisSetupWmiNode(__int64 a1, const void **a2, unsigned int a3, __int128 *a4, _QWORD *a5)
{
  unsigned int v7; // eax
  unsigned int v10; // r15d
  unsigned int v11; // edi
  char *PoolWithTag; // rax
  char *v13; // rbx
  ULONG v14; // eax
  __int128 v15; // xmm0
  _QWORD *result; // rax

  v7 = (*(unsigned __int16 *)a2 + 9) & 0xFFFFFFF8;
  v10 = v7 + 64;
  v11 = v7 + 64 + a3;
  if ( v11 < 0x40 || v11 < v7 || v11 < a3 )
  {
    result = a5;
    *a5 = 0LL;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x3377444Eu);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      *(_DWORD *)v13 = v11;
      v14 = IoWMIDeviceObjectToProviderId(*(PDEVICE_OBJECT *)(a1 + 3880));
      *((_DWORD *)v13 + 2) = 1;
      *((_DWORD *)v13 + 1) = v14;
      *((_QWORD *)v13 + 2) = MEMORY[0xFFFFF78000000014];
      v15 = *a4;
      *((_DWORD *)v13 + 11) = 10;
      *((_DWORD *)v13 + 12) = 64;
      *(_OWORD *)(v13 + 24) = v15;
      *((_DWORD *)v13 + 14) = v10;
      *((_DWORD *)v13 + 15) = a3;
      *((_WORD *)v13 + 32) = *(_WORD *)a2;
      memmove(v13 + 66, a2[1], *(unsigned __int16 *)a2);
    }
    result = a5;
    *a5 = v13;
  }
  return result;
}
