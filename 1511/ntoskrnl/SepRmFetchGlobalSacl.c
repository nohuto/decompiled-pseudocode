/*
 * XREFs of SepRmFetchGlobalSacl @ 0x14053C4F0
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x14053C468 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     RtlStringCchCatNW @ 0x14013C400 (RtlStringCchCatNW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepRegOpenKey @ 0x1403BED14 (SepRegOpenKey.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  int v3; // eax
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi
  NTSTATUS v10; // ebx
  char *v12; // rsi
  PVOID v13; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(unsigned __int16 *)a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = (unsigned int)(v3 + 98);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C635347u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_10;
  if ( RtlStringCbCopyW(PoolWithTag, (unsigned int)v7, L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName") >= 0 )
    RtlStringCchCatNW(v9, v7 >> 1, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  v10 = SepRegOpenKey(v9, 0x201u, &KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && ResultLength <= 0x1000B )
    {
      v10 = 0;
      if ( ResultLength <= 0xC )
      {
        *a2 = 0;
        *a3 = 0LL;
        goto LABEL_5;
      }
      v12 = (char *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6C635347u);
      if ( v12 )
      {
        v10 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, v12, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          ResultLength -= 12;
          v13 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6C635347u);
          *a3 = v13;
          if ( v13 )
          {
            memmove(v13, v12 + 12, ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v10 = -1073741801;
          }
        }
        ExFreePoolWithTag(v12, 0);
        goto LABEL_5;
      }
LABEL_10:
      v10 = -1073741801;
    }
  }
LABEL_5:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
