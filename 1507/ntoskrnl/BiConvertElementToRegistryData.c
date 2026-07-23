/*
 * XREFs of BiConvertElementToRegistryData @ 0x140570370
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14070D9F0 (BiConvertQualifiedPartitionToBootEnvironment.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v6; // ebx
  size_t v7; // r14
  unsigned int *v9; // r13
  NTSTATUS v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r15d
  _BYTE *v18; // rax
  _BYTE *Buffer; // rsi
  _QWORD *v20; // rax
  unsigned int v21; // r14d
  int v22; // r15d
  _WORD *v23; // rax
  __int64 v24; // rcx
  size_t v25; // rbx
  GUID *v26; // rcx
  unsigned int v27; // eax
  _BYTE *v28; // rax
  int v29; // eax
  _OWORD *PoolWithTag; // rax
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  int v34; // [rsp+88h] [rbp+48h]

  v6 = 0;
  v7 = a3;
  Src = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v11 )
  {
    if ( a2->Data1 == 6 )
      v29 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v29 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v9 = (unsigned int *)Src;
    v10 = v29;
    if ( v29 >= 0 )
    {
      v17 = *((_DWORD *)Src + 2) + 16;
      if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
        Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = *(_OWORD *)&a2->Data2;
          memmove(PoolWithTag + 1, v9, v9[2]);
          ExFreePoolWithTag(v9, 0);
          v9 = 0LL;
          goto LABEL_54;
        }
        v10 = -1073741801;
      }
      else
      {
        v10 = -1073741811;
      }
    }
LABEL_58:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return (unsigned int)v10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    v26 = a2;
    v27 = a3 >> 1;
    if ( a3 >> 1 )
    {
      while ( LOWORD(v26->Data1) )
      {
        v26 = (GUID *)((char *)v26 + 2);
        if ( !--v27 )
          goto LABEL_38;
      }
      LOBYTE(v6) = 1;
    }
LABEL_38:
    v17 = a3;
    if ( !(_BYTE)v6 )
    {
      if ( a3 + 2 < a3 )
        return (unsigned int)-1073741675;
      v17 = a3 + 2;
    }
    Src = (void *)v17;
    v28 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v28;
    if ( !v28 )
      return (unsigned int)-1073741801;
    memmove(v28, a2, v7);
    if ( !(_BYTE)v6 )
      *(_WORD *)&Buffer[(_QWORD)Src - 2] = 0;
    goto LABEL_54;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v10 = RtlStringFromGUIDEx(a2, &DestinationString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Buffer = DestinationString.Buffer;
    v17 = DestinationString.Length + 2;
    goto LABEL_54;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 && (a3 & 7) != 0 )
          return (unsigned int)-1073741788;
        v17 = a3;
        v18 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
        Buffer = v18;
        if ( !v18 )
          return (unsigned int)-1073741801;
        memmove(v18, a2, v7);
LABEL_55:
        v10 = 0;
        *a5 = Buffer;
        *a6 = v17;
        return (unsigned int)v10;
      }
      if ( a3 - 1 <= 1 )
      {
        v17 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = LOBYTE(a2->Data1) != 0;
          goto LABEL_55;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v17 = 8;
      if ( a3 == 8 )
      {
        v20 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        Buffer = v20;
        if ( v20 )
        {
          *v20 = *(_QWORD *)&a2->Data1;
          goto LABEL_55;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (a3 & 0xF) != 0 )
    return (unsigned int)-1073741788;
  v21 = a3 >> 4;
  v22 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_23:
    v17 = v22 + 2;
    v23 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v23;
    if ( !v23 )
      return (unsigned int)-1073741801;
    v24 = 0LL;
    v34 = 0;
    Src = v23;
    if ( v21 )
    {
      while ( 1 )
      {
        v10 = RtlStringFromGUIDEx(&a2[v24], &DestinationString, 1u);
        if ( v10 < 0 )
          break;
        v25 = (unsigned int)DestinationString.Length + 2;
        memmove(Src, DestinationString.Buffer, v25);
        Src = (char *)Src + v25;
        RtlFreeAnsiString(&DestinationString);
        v24 = (unsigned int)(v34 + 1);
        v34 = v24;
        if ( (unsigned int)v24 >= v21 )
        {
          v23 = Src;
          goto LABEL_28;
        }
      }
LABEL_56:
      if ( !Buffer )
        return (unsigned int)v10;
      ExFreePoolWithTag(Buffer, 0);
      goto LABEL_58;
    }
LABEL_28:
    *v23 = 0;
LABEL_54:
    if ( v10 >= 0 )
      goto LABEL_55;
    goto LABEL_56;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = RtlStringFromGUIDEx(&a2[v6], &DestinationString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v22 += DestinationString.Length + 2;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v6 >= v21 )
      goto LABEL_23;
  }
}
