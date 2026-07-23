/*
 * XREFs of PiDmCacheDataDecode @ 0x1404E2B40
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404E22E4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405668FC (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDmCacheDataDecode(__int64 a1, _DWORD *a2, GUID *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edx
  size_t v11; // r8
  const void *v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 3:
        *a2 = *(_DWORD *)(a1 + 8);
        v13 = *(_DWORD *)(a1 + 12);
        *a5 = v13;
        if ( a4 >= v13 )
        {
          v11 = v13;
          v12 = (const void *)(a1 + 16);
          goto LABEL_14;
        }
        break;
      case 4:
        *a2 = 13;
        *a5 = 16;
        if ( a4 >= 0x10 )
        {
          *a3 = *(GUID *)(a1 + 8);
          return v5;
        }
        return (unsigned int)-1073741789;
      case 5:
        *a2 = *(_DWORD *)(a1 + 8);
        v14 = *(_DWORD *)(a1 + 12);
        *a5 = v14;
        if ( a4 >= v14 )
        {
          v11 = v14;
          v12 = *(const void **)(a1 + 16);
          goto LABEL_14;
        }
        break;
      case 6:
        v8 = *(_DWORD *)(a1 + 8);
        if ( v8 == 13 )
        {
          *a2 = 13;
          *a5 = 16;
          if ( a4 >= 0x10 )
          {
            RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*(_QWORD *)(a1 + 16) + 16LL));
            return (unsigned int)RtlGUIDFromString(&DestinationString, a3);
          }
          return (unsigned int)-1073741789;
        }
        if ( v8 != 18 )
          return (unsigned int)-1073741595;
        *a2 = 18;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2 * v9) );
        v10 = 2 * v9 + 2;
        *a5 = v10;
        if ( a4 >= v10 )
        {
          v11 = v10;
          v12 = *(const void **)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_14:
          memmove(a3, v12, v11);
          return v5;
        }
        break;
      default:
        return (unsigned int)-1073741595;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)-1073741275;
}
