/*
 * XREFs of NdisQueryBindInstanceName @ 0x1C005A780
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

NDIS_STATUS __stdcall NdisQueryBindInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE BindingContext)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // r14
  const UNICODE_STRING *v6; // rbp
  unsigned int MaximumLength; // r12d
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x30u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)BindingContext);
  v5 = *((_QWORD *)BindingContext + 3);
  v6 = *(const UNICODE_STRING **)(v5 + 3912);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6->MaximumLength, 0x6E61444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, MaximumLength);
      pAdapterInstanceName->Buffer = v9;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) >= 0 )
      {
        v4 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qqd(0x31u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, BindingContext, v5, v4);
  return v4;
}
