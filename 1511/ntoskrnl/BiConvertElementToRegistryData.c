/*
 * XREFs of BiConvertElementToRegistryData @ 0x1404FD8D0
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14068DED8 (BiConvertQualifiedPartitionToBootEnvironment.c)
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
  GUID *v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // r15d
  _OWORD *PoolWithTag; // rax
  _BYTE *Buffer; // rsi
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // r14d
  int v28; // r15d
  _WORD *v29; // rax
  __int64 v30; // rcx
  size_t v31; // rbx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF
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
      v15 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v15 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v9 = (unsigned int *)Src;
    v10 = v15;
    if ( v15 >= 0 )
    {
      v16 = *((_DWORD *)Src + 2) + 16;
      if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
      {
        v10 = -1073741811;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
        Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = *(_OWORD *)&a2->Data2;
          memmove(PoolWithTag + 1, v9, v9[2]);
          ExFreePoolWithTag(v9, 0);
          v9 = 0LL;
          goto LABEL_14;
        }
        v10 = -1073741801;
      }
    }
LABEL_60:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return (unsigned int)v10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 1) == 0 )
    {
      v13 = a2;
      v14 = a3 >> 1;
      if ( a3 >> 1 )
      {
        while ( LOWORD(v13->Data1) )
        {
          v13 = (GUID *)((char *)v13 + 2);
          if ( !--v14 )
            goto LABEL_25;
        }
        LOBYTE(v6) = 1;
      }
LABEL_25:
      v16 = a3;
      if ( !(_BYTE)v6 )
      {
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v16 = a3 + 2;
      }
      Src = (void *)v16;
      v24 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
      Buffer = v24;
      if ( v24 )
      {
        memmove(v24, a2, v7);
        if ( !(_BYTE)v6 )
          *(_WORD *)&Buffer[(_QWORD)Src - 2] = 0;
        goto LABEL_14;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741788;
  }
  v20 = v12 - 1;
  if ( !v20 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v10 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Buffer = GuidString.Buffer;
    v16 = GuidString.Length + 2;
LABEL_14:
    if ( v10 >= 0 )
    {
LABEL_15:
      v10 = 0;
      *a5 = Buffer;
      *a6 = v16;
      return (unsigned int)v10;
    }
    goto LABEL_58;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 || (a3 & 7) == 0 )
        {
          v16 = a3;
          v25 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v25;
          if ( v25 )
          {
            memmove(v25, a2, v7);
            goto LABEL_15;
          }
          return (unsigned int)-1073741801;
        }
      }
      else if ( a3 - 1 <= 1 )
      {
        v16 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = LOBYTE(a2->Data1) != 0;
          goto LABEL_15;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v16 = 8;
      if ( a3 == 8 )
      {
        v26 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        Buffer = v26;
        if ( v26 )
        {
          *v26 = *(_QWORD *)&a2->Data1;
          goto LABEL_15;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (a3 & 0xF) != 0 )
    return (unsigned int)-1073741788;
  v27 = a3 >> 4;
  v28 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_45:
    v16 = v28 + 2;
    v29 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
    Buffer = v29;
    if ( !v29 )
      return (unsigned int)-1073741801;
    v30 = 0LL;
    v34 = 0;
    Src = v29;
    if ( v27 )
    {
      while ( 1 )
      {
        v10 = RtlStringFromGUIDEx(&a2[v30], &GuidString, 1u);
        if ( v10 < 0 )
          break;
        v31 = (unsigned int)GuidString.Length + 2;
        memmove(Src, GuidString.Buffer, v31);
        Src = (char *)Src + v31;
        RtlFreeAnsiString(&GuidString);
        v30 = (unsigned int)(v34 + 1);
        v34 = v30;
        if ( (unsigned int)v30 >= v27 )
        {
          v29 = Src;
          goto LABEL_50;
        }
      }
LABEL_58:
      if ( !Buffer )
        return (unsigned int)v10;
      ExFreePoolWithTag(Buffer, 0);
      goto LABEL_60;
    }
LABEL_50:
    *v29 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&GuidString, 0LL);
    v10 = RtlStringFromGUIDEx(&a2[v6], &GuidString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v28 += GuidString.Length + 2;
    RtlFreeAnsiString(&GuidString);
    if ( ++v6 >= v27 )
      goto LABEL_45;
  }
}
