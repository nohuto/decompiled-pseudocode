/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A5DAC
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A5D40 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00DD504 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A26D0 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A58DC (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  char *PoolWithTag; // rax
  char *v6; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4C745042u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(PoolWithTag + 8));
    *((_QWORD *)v6 + 13) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( v6 + 104 != (char *)a3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((volatile signed __int32 **)v6 + 13, *a3);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
