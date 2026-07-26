/*
 * XREFs of ndisFindRootDevice @ 0x1C00F277C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     WPP_SF_Zqq @ 0x1C004EB44 (WPP_SF_Zqq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

void __fastcall ndisFindRootDevice(
        UNICODE_STRING *SourceString,
        char a2,
        _UNICODE_STRING **a3,
        _UNICODE_STRING **a4,
        _NDIS_MINIPORT_BLOCK **a5,
        char a6)
{
  _UNICODE_STRING *p_MiniportName; // rbp
  char v7; // r12
  _UNICODE_STRING **v8; // rbx
  _UNICODE_STRING **v9; // r13
  UNICODE_STRING *v10; // r15
  unsigned __int16 v12; // ax
  _UNICODE_STRING *p_DestinationString; // rdi
  KIRQL v14; // al
  struct _NDIS_M_DRIVER_BLOCK *v15; // rsi
  _NDIS_MINIPORT_BLOCK *i; // rbx
  _NDIS_BIND_PATHS *BindPaths; // rdx
  unsigned int Number; // r13d
  _UNICODE_STRING *Paths; // r12
  char v20; // [rsp+30h] [rbp-68h]
  unsigned int v21; // [rsp+34h] [rbp-64h]
  wchar_t *P; // [rsp+38h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  KIRQL v28; // [rsp+C0h] [rbp+28h]

  v21 = 1;
  p_MiniportName = 0LL;
  v20 = 0;
  v7 = 0;
  v8 = a4;
  v9 = a3;
  v10 = SourceString;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_Z(0x34u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &SourceString->Length);
  DestinationString.Length = v10->Length;
  v12 = DestinationString.Length + 2;
  *v9 = 0LL;
  *v8 = 0LL;
  *a5 = 0LL;
  DestinationString.MaximumLength = v12;
  P = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x7473444Eu);
  DestinationString.Buffer = P;
  if ( P )
  {
    RtlUpcaseUnicodeString(&DestinationString, v10, 0);
    p_DestinationString = &DestinationString;
    ndisReferencePackage((__int64)&ndisPkgs);
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v15 = ndisMiniDriverList;
    v28 = v14;
    if ( ndisMiniDriverList )
    {
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v15->Ref.SpinLock);
        for ( i = v15->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( a2 )
          {
            if ( p_DestinationString->Length == i->MiniportName.Length
              && !memcmp(p_DestinationString->Buffer, i->MiniportName.Buffer, p_DestinationString->Length) )
            {
              p_MiniportName = &i->MiniportName;
              *a5 = i;
              v7 = 1;
              p_DestinationString = &i->MiniportName;
              v20 = 1;
              break;
            }
          }
          else
          {
            BindPaths = i->BindPaths;
            Number = BindPaths->Number;
            if ( BindPaths->Number >= v21 )
            {
              Paths = BindPaths->Paths;
              if ( DestinationString.Length == BindPaths->Paths[0].Length
                && !memcmp(DestinationString.Buffer, BindPaths->Paths[0].Buffer, DestinationString.Length) )
              {
                p_MiniportName = Paths;
                *a5 = i;
                v7 = 1;
                p_DestinationString = &i->MiniportName;
                v20 = 1;
                v21 = Number;
              }
              else
              {
                v7 = v20;
              }
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v15->Ref.SpinLock);
        if ( a2 && v7 )
          break;
        v15 = v15->NextDriver;
      }
      while ( v15 );
      v10 = SourceString;
      v8 = a4;
      v9 = a3;
      v14 = v28;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(P, 0);
    if ( v7 && *a5 )
    {
      if ( ndisReferenceMiniportByHandle(*a5, 1, a6) )
      {
        *v9 = p_DestinationString;
        *v8 = p_MiniportName;
      }
      else
      {
        *a5 = 0LL;
      }
    }
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_Zqq(
        0x35u,
        &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids,
        &v10->Length,
        p_DestinationString,
        p_MiniportName);
  }
}
