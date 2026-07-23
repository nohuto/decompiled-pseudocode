/*
 * XREFs of KsepRegistryQuerySZ @ 0x140579410
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x140514A24 (KsepRegistryQueryDriverShims.c)
 *     KsepRegistryQueryMULTISZ @ 0x1405793E8 (KsepRegistryQueryMULTISZ.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 */

__int64 __fastcall KsepRegistryQuerySZ(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        void *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  _DWORD *Paged; // rax
  _DWORD *v14; // rbx
  unsigned int v15; // edi
  size_t v16; // r8
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  char v24; // al
  __int64 v25; // r9
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  if ( !KeyHandle )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v19 = KsepDebugFlag;
    KsepHistoryErrors[2 * v18 + 1] = -1073740768;
    KsepHistoryErrors[2 * v18] = 262993;
    if ( (v19 & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x351u, 0LL);
  }
  if ( !a4 )
  {
    v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v21 = KsepDebugFlag;
    KsepHistoryErrors[2 * v20 + 1] = -1073740768;
    KsepHistoryErrors[2 * v20] = 262994;
    if ( (v21 & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x352u, 0LL);
  }
  v10 = a6;
  if ( !a6 )
  {
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v23 = KsepDebugFlag;
    KsepHistoryErrors[2 * v22 + 1] = -1073740768;
    KsepHistoryErrors[2 * v22] = 262995;
    if ( (v23 & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x353u, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    Paged = KsepPoolAllocatePaged(ResultLength);
    v14 = Paged;
    if ( Paged )
    {
      v15 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v15 )
      {
        v16 = (unsigned int)v14[2];
        if ( v16 > a5 )
        {
          v15 = -1073741789;
        }
        else if ( v14[1] == a3 )
        {
          memmove(a4, v14 + 3, v16);
          *v10 = (unsigned int)v14[2];
        }
        else
        {
          v15 = -1073741788;
        }
      }
      KsepPoolFreePaged(v14);
      return v15;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v11 >= 0 )
    {
      v24 = KsepDebugFlag;
      v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v25 + 1] = -1073740768;
      KsepHistoryErrors[2 * v25] = 263013;
      if ( (v24 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x365u, 0LL);
    }
    return v12;
  }
}
