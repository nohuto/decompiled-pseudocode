/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x14053FEAC
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     SepIsImageInMinTcbList @ 0x140541C98 (SepIsImageInMinTcbList.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x14053FF80 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 */

NTSTATUS __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  ULONG v9; // ecx
  __int64 v10; // rdx
  __int16 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *v14; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpOpenBaseImageFileOptionsKey(&v14);
  if ( result >= 0 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v7 - 2) == 92 )
          break;
        v7 -= 2LL;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    v12 = v7;
    v11 = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      v9 = 576;
      if ( KeGetCurrentThread()->PreviousMode == 1 )
        v9 = 1600;
      ObjectAttributes.RootDirectory = v14;
      ObjectAttributes.Attributes = v9;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(a3, 9u, &ObjectAttributes);
      if ( result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, v10, a1);
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
