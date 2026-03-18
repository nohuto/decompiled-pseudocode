/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64
 * Callers:
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _wcsupr @ 0x14014DA38 (_wcsupr.c)
 *     wcsstr @ 0x14014F14C (wcsstr.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     BcdQueryObject @ 0x14053D33C (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(_DWORD *a1, __int64 a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  GUID v12; // [rsp+30h] [rbp-30h] BYREF
  GUID v13; // [rsp+40h] [rbp-20h] BYREF

  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v13);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &v12);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&v12.Data1;
      if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&v12.Data1 )
        v5 = *(_QWORD *)v13.Data4 - *(_QWORD *)v12.Data4;
      if ( v5 )
      {
        v6 = (unsigned int)(a1[10] - 20);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, a1 + 12, v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&v12.Data1, (__int64)&DestinationString, 1);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(
                (char *)a1 + 2 * ((unsigned __int64)(v9 - v8) >> 1) + 68,
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeAnsiString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
