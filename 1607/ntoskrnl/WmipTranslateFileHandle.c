/*
 * XREFs of WmipTranslateFileHandle @ 0x14069EEFC
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140546AF0 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 */

__int64 __fastcall WmipTranslateFileHandle(__int64 a1, unsigned int *a2)
{
  void *v4; // rcx
  int FilePDO; // ebx
  unsigned __int16 Length; // r15
  unsigned int v7; // edi
  wchar_t *Buffer; // rdx
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(void **)a1;
  UnicodeString.Buffer = 0LL;
  FilePDO = WmipGetFilePDO(v4, 1, &v14);
  if ( FilePDO < 0 )
    return (unsigned int)FilePDO;
  FilePDO = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 8), 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( FilePDO >= 0 )
  {
    FilePDO = WmipGetGuidObjectInstanceInfo((__int64)Object, (ULONG_PTR)v14, &UnicodeString, &v12);
    if ( FilePDO < 0 )
    {
LABEL_12:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_14;
    }
    Length = UnicodeString.Length;
    v7 = UnicodeString.Length + 26;
    if ( *a2 >= v7 )
    {
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)(a1 + 16) = v12;
      *(_WORD *)(a1 + 20) = Length + 4;
      memmove((void *)(a1 + 22), Buffer, Length);
      v9 = Length >> 1;
      *a2 = v7;
      *(_WORD *)(a1 + 2 * v9 + 22) = 0;
      *(_WORD *)(a1 + 2LL * ((int)v9 + 1) + 22) = 0;
    }
    else
    {
      if ( *a2 < 4 )
      {
        FilePDO = -1073741823;
        goto LABEL_10;
      }
      *(_DWORD *)a1 = v7;
      *a2 = 4;
    }
    FilePDO = 0;
LABEL_10:
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)FilePDO;
}
