/*
 * XREFs of CmpQueryNameString @ 0x1404C2294
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1403D3C64 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x1405DDF9C (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1405E5CE4 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
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
  SIZE_T Length; // rcx
  wchar_t *StringRoutine; // rax
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
        StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
        a2->Buffer = StringRoutine;
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
