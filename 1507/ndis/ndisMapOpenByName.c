/*
 * XREFs of ndisMapOpenByName @ 0x1C004A174
 * Callers:
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 */

__int64 __fastcall ndisMapOpenByName(__int64 *SourceString, __int64 a2)
{
  __int64 v4; // rdi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // r14
  unsigned __int16 Length; // si
  __int64 v11; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_Zq(0x28u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, SourceString, a2);
  DestinationString.Length = *(_WORD *)SourceString;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  v4 = 0LL;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, (PCUNICODE_STRING)SourceString, 0);
    v6 = (KSPIN_LOCK *)(a2 + 32);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
    v8 = *(_QWORD *)(a2 + 24);
    v9 = v7;
    if ( v8 )
    {
      Length = DestinationString.Length;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + 416);
        if ( Length == *(_WORD *)v11 && !memcmp(DestinationString.Buffer, *(const void **)(v11 + 8), Length) )
          break;
        v8 = *(_QWORD *)(v8 + 400);
        if ( !v8 )
          goto LABEL_17;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 232));
      if ( (*(_DWORD *)(v8 + 224) & 0x10) == 0 && ndisReferenceMiniport(*(_QWORD *)(v8 + 16), 0x32u) )
      {
        v4 = v8;
        ndisMReferenceOpen(v8, 4u);
        *(_DWORD *)(v8 + 224) |= 0x10u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 232));
    }
LABEL_17:
    KeReleaseSpinLock(v6, v9);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( (unsigned __int8)byte_1C008530D >= 4u )
      WPP_SF_q(0x2Au, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, v4);
    return v4;
  }
  else
  {
    if ( (unsigned __int8)byte_1C008530D >= 2u )
      WPP_SF_(0x29u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    return 0LL;
  }
}
