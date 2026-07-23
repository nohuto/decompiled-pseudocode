/*
 * XREFs of PiControlGetDeviceStack @ 0x14064A520
 * Callers:
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetLowerDeviceObject @ 0x1400B1D38 (IoGetLowerDeviceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, void *a3, unsigned int *a4)
{
  struct _DEVICE_OBJECT *v4; // rcx
  int v5; // r15d
  void *v6; // r13
  unsigned int v7; // edi
  int v8; // esi
  UNICODE_STRING *v9; // r14
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT i; // rax
  __int64 **PoolWithTag; // rax
  __int64 **v13; // rcx
  struct _DEVICE_OBJECT *v14; // rbx
  __int64 *v15; // rbx
  unsigned int v16; // edx
  _WORD *v17; // r12
  __int64 v18; // r12
  unsigned __int16 Length; // di
  unsigned int v20; // r8d
  _WORD *v21; // r12
  unsigned int v22; // r15d
  UNICODE_STRING *v23; // rcx
  PVOID *v24; // rbx
  __int64 *v25; // rax
  int v27; // [rsp+30h] [rbp-48h] BYREF
  void *v28; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h]
  __int64 *v30; // [rsp+48h] [rbp-30h] BYREF
  __int64 **v31; // [rsp+50h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+48h]

  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v31 = &v30;
  v5 = 0;
  v6 = a3;
  v30 = (__int64 *)&v30;
  v7 = a2;
  v8 = 0;
  v9 = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v4);
  Object = DeviceAttachmentBaseRef;
  if ( !DeviceAttachmentBaseRef )
  {
    v8 = -1073741808;
    goto LABEL_49;
  }
  for ( i = IoGetAttachedDeviceReference(DeviceAttachmentBaseRef); ; i = IoGetLowerDeviceObject(v14) )
  {
    v14 = i;
    if ( !i )
      break;
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
    if ( !PoolWithTag )
    {
      ObfDereferenceObject(v14);
      v8 = -1073741670;
      goto LABEL_49;
    }
    PoolWithTag[2] = (__int64 *)&v14->Type;
    v13 = v31;
    if ( *v31 != (__int64 *)&v30 )
      __fastfail(3u);
    PoolWithTag[1] = (__int64 *)v31;
    *PoolWithTag = (__int64 *)&v30;
    *v13 = (__int64 *)PoolWithTag;
    v31 = PoolWithTag;
  }
  v15 = v30;
  v28 = v6;
  v16 = v7;
  v33 = v7;
  v17 = v6;
  if ( v30 == (__int64 *)&v30 )
  {
LABEL_40:
    if ( v17 && v16 >= 2 )
      *v17 = 0;
    v22 = v5 + 2;
    *a4 = v22;
    if ( !v6 || v22 > v7 )
      v8 = -1073741789;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(v15[2] + 8);
    if ( v18 )
      break;
    RtlInitUnicodeString(&DestinationString, L"?");
LABEL_31:
    Length = DestinationString.Length;
LABEL_32:
    v17 = v28;
    if ( v28 && v33 >= (unsigned __int64)Length + 2 )
    {
      memmove(v28, DestinationString.Buffer, Length);
      v21 = &v17[(unsigned __int64)Length >> 1];
      *v21 = 0;
      v17 = v21 + 1;
      v33 += -2 - Length;
      v28 = v17;
    }
    v15 = (__int64 *)*v15;
    v5 += Length + 2;
    if ( v15 == (__int64 *)&v30 )
      goto LABEL_38;
  }
  if ( *(_QWORD *)(v18 + 64) && *(_WORD *)(v18 + 56) >= 2u )
  {
    DestinationString = *(UNICODE_STRING *)(v18 + 56);
    for ( Length = _mm_cvtsi128_si32((__m128i)DestinationString); ; Length -= 2 )
    {
      DestinationString.Length = Length;
      if ( Length < 2u || DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
        break;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    Length = DestinationString.Length;
  }
  if ( Length )
    goto LABEL_32;
  v20 = 272;
  v27 = 272;
  if ( v9 )
  {
LABEL_25:
    v8 = ObQueryNameStringMode((char *)v18, (__int64)v9, v20, &v27, 0);
    if ( v8 >= 0 && v27 && v9->Length >= 2u )
    {
      DestinationString = *v9;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"?");
      v8 = 0;
    }
    goto LABEL_31;
  }
  v9 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x110uLL, 0x47706E50u);
  if ( v9 )
  {
    v20 = v27;
    goto LABEL_25;
  }
  v17 = v28;
  v8 = -1073741670;
LABEL_38:
  if ( v8 >= 0 )
  {
    v16 = v33;
    v7 = a2;
    v6 = a3;
    goto LABEL_40;
  }
LABEL_46:
  if ( v9 )
  {
    v23 = v9;
    goto LABEL_48;
  }
LABEL_49:
  while ( 1 )
  {
    v24 = (PVOID *)v30;
    if ( v30 == (__int64 *)&v30 )
      break;
    v25 = (__int64 *)*v30;
    if ( (__int64 **)v30[1] != &v30 || (__int64 *)v25[1] != v30 )
      __fastfail(3u);
    v30 = (__int64 *)*v30;
    v25[1] = (__int64)&v30;
    ObfDereferenceObject(v24[2]);
    v23 = (UNICODE_STRING *)v24;
LABEL_48:
    ExFreePoolWithTag(v23, 0);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
