/*
 * XREFs of CmpQueryNameString @ 0x1404EC478
 * Callers:
 *     CmpTraceHiveMountBaseFileMounted @ 0x1404AF854 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x1406534C8 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x14065CDC8 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  NTSTATUS appended; // esi
  unsigned int v5; // ebp
  SIZE_T i; // rdx
  UNICODE_STRING *PoolWithTag; // rbx
  char *v8; // rcx
  int v9; // eax
  __int64 Length; // rcx
  __int64 StringRoutine; // rax
  wchar_t *Buffer; // r8
  unsigned __int16 v13; // dx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  appended = result;
  if ( result >= 0 )
  {
    v5 = 272;
    for ( i = 272LL; ; i = v14 )
    {
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, i, 0x62534D43u);
      if ( !PoolWithTag )
        break;
      v8 = (char *)Object;
      *(_QWORD *)&PoolWithTag->Length = 0LL;
      PoolWithTag->Buffer = 0LL;
      v9 = ObQueryNameStringMode(v8, (__int64)PoolWithTag, v5, &v14, 0);
      appended = v9;
      if ( v9 >= 0 )
      {
        a2->Length = 0;
        Length = PoolWithTag->Length;
        a2->MaximumLength = PoolWithTag->Length;
        StringRoutine = ExpAllocateStringRoutine(Length);
        a2->Buffer = (wchar_t *)StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, PoolWithTag);
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)a2->Length >> 1) - 1] )
                break;
              v13 = a2->Length - 2;
              a2->Length = v13;
            }
            while ( v13 );
          }
        }
        else
        {
          appended = -1073741801;
        }
LABEL_9:
        ExFreePoolWithTag(PoolWithTag, 0);
        break;
      }
      if ( v9 != -2147483643 || v14 <= v5 )
        goto LABEL_9;
      ExFreePoolWithTag(PoolWithTag, 0);
      v5 = v14;
    }
    ObfDereferenceObject(Object);
    return appended;
  }
  return result;
}
