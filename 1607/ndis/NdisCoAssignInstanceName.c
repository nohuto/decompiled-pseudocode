/*
 * XREFs of NdisCoAssignInstanceName @ 0x1C00F72C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z @ 0x1C007282C (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisCoAssignInstanceName(
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STRING BaseInstanceName,
        PNDIS_STRING VcInstanceName)
{
  __int64 v3; // r13
  NDIS_STATUS v4; // ebx
  unsigned __int16 v6; // bp
  char *PoolWithTag; // rax
  char *v10; // rsi
  unsigned int v11; // edx
  __int64 i; // rcx
  char v13; // al
  unsigned __int64 v14; // rcx
  _WORD *v15; // r8
  __int64 j; // rdx
  char v17; // al
  KIRQL v18; // al
  _QWORD *v19; // rdx
  _QWORD *v20; // r8
  PVOID v21; // r14
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  int v24; // esi
  wchar_t *v25; // rax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-38h] BYREF
  PVOID WnodeEventItem; // [rsp+70h] [rbp+8h] BYREF

  v3 = *((_QWORD *)NdisVcHandle + 24);
  v4 = 0;
  v6 = *((_WORD *)NdisVcHandle + 148);
  if ( !*((_QWORD *)NdisVcHandle + 38) )
  {
    v6 = 48;
    if ( BaseInstanceName )
      v6 = BaseInstanceName->Length + 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6E61444Eu);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_5;
    memset(PoolWithTag, 0, v6);
    *(_WORD *)v10 = 91;
    *((_WORD *)v10 + 5) = 58;
    v11 = *(unsigned __int16 *)(v3 + 4048);
    for ( i = 4LL; i > 0; --i )
    {
      v13 = v11;
      v11 >>= 4;
      *(_WORD *)&v10[2 * i] = ndisHexLookUp[v13 & 0xF];
    }
    v14 = *((_QWORD *)NdisVcHandle + 39);
    v15 = v10 + 40;
    for ( j = 15LL; j >= 0; --j )
    {
      v17 = v14;
      v14 >>= 4;
      *v15-- = ndisHexLookUp[v17 & 0xF];
    }
    *(_DWORD *)(v10 + 42) = 2097245;
    Destination.Length = 48;
    Destination.Buffer = (wchar_t *)v10;
    Destination.MaximumLength = v6;
    if ( BaseInstanceName )
      RtlAppendUnicodeStringToString(&Destination, BaseInstanceName);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1344));
    ++*(_WORD *)(v3 + 1384);
    v19 = (char *)NdisVcHandle + 320;
    *(_UNICODE_STRING *)((char *)NdisVcHandle + 296) = Destination;
    v20 = *(_QWORD **)(v3 + 1360);
    if ( *v20 != v3 + 1352 )
      __fastfail(3u);
    *v19 = v3 + 1352;
    *((_QWORD *)NdisVcHandle + 41) = v20;
    *v20 = v19;
    *(_QWORD *)(v3 + 1360) = v19;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 1344), v18);
    ndisSetupWmiNode(v3, (const void **)&Destination, 0, (__int128 *)&GUID_NDIS_NOTIFY_VC_ARRIVAL, &WnodeEventItem);
    v21 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v22 = IoWMIWriteEvent(WnodeEventItem);
      v24 = v22;
      if ( v22 < 0 )
      {
        if ( (unsigned __int8)byte_1C00895D9 >= 2u )
          WPP_SF_d(0x33u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, v22);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
          Template_qqq(v23, &IoWMIWriteEventFailed, (const GUID *)(v3 + 4064), v24, 219, 0);
        ExFreePoolWithTag(v21, 0);
      }
    }
  }
  if ( !VcInstanceName )
    goto LABEL_24;
  v25 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6E61444Eu);
  VcInstanceName->Buffer = v25;
  if ( v25 )
  {
    memmove(v25, *((const void **)NdisVcHandle + 38), v6);
    VcInstanceName->Length = *((_WORD *)NdisVcHandle + 148);
    VcInstanceName->MaximumLength = v6;
    goto LABEL_24;
  }
LABEL_5:
  v4 = -1073741670;
LABEL_24:
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)9);
  return v4;
}
