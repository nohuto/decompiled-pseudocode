/*
 * XREFs of ndisReferenceProtocolByName @ 0x1C00EB9E4
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisReferenceProtocolByName(__int64 *SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v8; // edi
  KIRQL v9; // al
  __int64 v10; // r14
  KIRQL v11; // r13
  struct _NDIS_PROTOCOL_BLOCK *v12; // rbx
  unsigned __int16 Length; // bp
  wchar_t *Buffer; // rcx
  size_t v16; // r8
  unsigned __int16 v17; // ax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v8 = -1073741772;
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_Z(0x23u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, SourceString);
  DestinationString.Length = *(_WORD *)SourceString;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, (PCUNICODE_STRING)SourceString, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    v10 = *a2;
    v11 = v9;
    v12 = ndisProtocolList;
    if ( *a2 )
      v12 = *(struct _NDIS_PROTOCOL_BLOCK **)(v10 + 16);
    if ( v12 )
    {
      Length = DestinationString.Length;
      do
      {
        if ( a3 )
        {
          if ( v12 == (struct _NDIS_PROTOCOL_BLOCK *)v10 )
            goto LABEL_10;
          v17 = v12->Name.Length;
          if ( Length == v17 )
            goto LABEL_10;
          if ( Length < v17 )
            v17 = Length;
          v16 = v17;
        }
        else
        {
          if ( Length != v12->Name.Length )
            goto LABEL_10;
          v16 = Length;
        }
        if ( !memcmp(DestinationString.Buffer, v12->Name.Buffer, v16) )
        {
          if ( ndisReferenceProtocol((__int64)v12, a4) )
            v8 = 0;
          else
            v12 = 0LL;
          break;
        }
LABEL_10:
        v12 = v12->NextProtocol;
      }
      while ( v12 );
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v11);
    Buffer = DestinationString.Buffer;
    *a2 = (__int64)v12;
    ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    *a2 = 0LL;
    v8 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_qD(0x24u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, *a2, v8);
  return v8;
}
