/*
 * XREFs of KsepRegistryQueryValue @ 0x140654384
 * Callers:
 *     KsepDbQueryRegistryDeviceData @ 0x1405353E8 (KsepDbQueryRegistryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 */

__int64 __fastcall KsepRegistryQueryValue(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        _DWORD *a3,
        void *a4,
        unsigned __int64 a5,
        size_t *a6)
{
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al
  size_t *v14; // rsi
  __int64 v15; // rcx
  char v16; // al
  NTSTATUS v17; // eax
  unsigned int v18; // ebx
  char v19; // al
  __int64 v20; // r9
  _DWORD *Paged; // rax
  _DWORD *v23; // rbx
  unsigned int v24; // edi
  size_t v25; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  if ( !KeyHandle )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 263113;
    if ( (v11 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3C9u, 0LL);
  }
  if ( !a4 )
  {
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v13 = KsepDebugFlag;
    KsepHistoryErrors[2 * v12 + 1] = -1073740768;
    KsepHistoryErrors[2 * v12] = 263114;
    if ( (v13 & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CAu, 0LL);
  }
  v14 = a6;
  if ( !a6 )
  {
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v16 = KsepDebugFlag;
    KsepHistoryErrors[2 * v15 + 1] = -1073740768;
    KsepHistoryErrors[2 * v15] = 263115;
    if ( (v16 & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CBu, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v18 = v17;
  if ( v17 == -1073741789 )
  {
    Paged = KsepPoolAllocatePaged(ResultLength);
    v23 = Paged;
    if ( Paged )
    {
      v24 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v24 )
      {
        v25 = (unsigned int)v23[2];
        if ( v25 <= a5 )
        {
          memmove(a4, v23 + 3, v25);
          *a3 = v23[1];
          *v14 = (unsigned int)v23[2];
        }
        else
        {
          *v14 = v25;
          v24 = -1073741789;
        }
      }
      KsepPoolFreePaged(v23);
      return v24;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v17 >= 0 )
    {
      v19 = KsepDebugFlag;
      v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v20 + 1] = -1073740768;
      KsepHistoryErrors[2 * v20] = 263133;
      if ( (v19 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3DDu, 0LL);
    }
    return v18;
  }
}
