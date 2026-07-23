/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140691660
 * Callers:
 *     BiCreateEfiEntry @ 0x14068FB74 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsupr @ 0x140144618 (_wcsupr.c)
 *     wcsstr @ 0x140145D70 (wcsstr.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(_DWORD *a1, void *a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rdi
  wchar_t *v9; // rcx
  __int64 v10; // rax
  char *v11; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  GUID Identifier; // [rsp+30h] [rbp-30h] BYREF
  GUID v15; // [rsp+40h] [rbp-20h] BYREF

  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v15);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &Identifier);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v15.Data1 - *(_QWORD *)&Identifier.Data1;
      if ( *(_QWORD *)&v15.Data1 == *(_QWORD *)&Identifier.Data1 )
        v5 = *(_QWORD *)v15.Data4 - *(_QWORD *)Identifier.Data4;
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
            v10 = -1LL;
            do
              ++v10;
            while ( aBcdobject[v10] );
            v11 = (char *)a1 + 2 * ((unsigned __int64)(v9 - v8) >> 1) + 2 * v10;
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&Identifier, &DestinationString, 1u);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(v11 + 48, DestinationString.Buffer, DestinationString.Length);
              RtlFreeAnsiString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0);
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
