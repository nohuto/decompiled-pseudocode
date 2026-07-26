/*
 * XREFs of NdisOpenNDKAdapter @ 0x1C00D0CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011E40 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisOpenNDKAdapter(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rcx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v4; // r9
  __int64 (__fastcall *v5)(_QWORD); // r10
  char v6; // r11

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  DriverHandle = v1->DriverHandle;
  if ( !DriverHandle->OpenNDKAdapterHandler || !DriverHandle->CloseNDKAdapterHandler || !v1->NDKBlock )
    return 3221225659LL;
  NDKBlock = ndisGetNDKBlock(v1);
  if ( *((_BYTE *)NDKBlock + 24) == v6 )
    return 3221291025LL;
  else
    return v5(*(_QWORD *)(v4 + 56));
}
