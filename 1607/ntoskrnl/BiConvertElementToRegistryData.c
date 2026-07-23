/*
 * XREFs of BiConvertElementToRegistryData @ 0x14053E864
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1406D2870 (BiConvertQualifiedPartitionToBootEnvironment.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  size_t v6; // r14
  NTSTATUS v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r15d
  _BYTE *Buffer; // rsi
  char v17; // bl
  unsigned int v18; // eax
  GUID *v19; // rcx
  _BYTE *v20; // rax
  int v22; // eax
  unsigned int *v23; // rbx
  _OWORD *PoolWithTag; // rax
  _BYTE *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // r14d
  int v28; // r15d
  int v29; // ebx
  _WORD *v30; // rax
  unsigned int v31; // ecx
  size_t v32; // rbx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  unsigned int *v34; // [rsp+28h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+48h]

  v6 = a3;
  v34 = 0LL;
  Src = 0LL;
  v8 = 0;
  v9 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v9 )
  {
    if ( a2->Data1 == 6 )
      v22 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v22 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v23 = (unsigned int *)Src;
    v8 = v22;
    if ( v22 >= 0 )
    {
      v15 = *((_DWORD *)Src + 2) + 16;
      if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
      {
        v8 = -1073741811;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
        Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = *(_OWORD *)&a2->Data2;
          memmove(PoolWithTag + 1, v23, v23[2]);
          ExFreePoolWithTag(v23, 0x4B444342u);
          v34 = 0LL;
          goto LABEL_20;
        }
        v8 = -1073741801;
      }
    }
LABEL_59:
    if ( v23 )
      ExFreePoolWithTag(v23, 0x4B444342u);
    return (unsigned int)v8;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    v17 = 0;
    v18 = a3 >> 1;
    v19 = a2;
    if ( a3 >> 1 )
    {
      while ( LOWORD(v19->Data1) )
      {
        v19 = (GUID *)((char *)v19 + 2);
        if ( !--v18 )
          goto LABEL_16;
      }
      v17 = 1;
    }
LABEL_16:
    v15 = a3;
    if ( !v17 )
    {
      if ( a3 + 2 < a3 )
        return (unsigned int)-1073741675;
      v15 = a3 + 2;
    }
    Src = (void *)v15;
    v20 = ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
    Buffer = v20;
    if ( !v20 )
      return (unsigned int)-1073741801;
    memmove(v20, a2, v6);
    if ( !v17 )
      *(_WORD *)&Buffer[(_QWORD)Src - 2] = 0;
    goto LABEL_20;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v8 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
    if ( v8 < 0 )
      return (unsigned int)v8;
    Buffer = GuidString.Buffer;
    v15 = GuidString.Length + 2;
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 || (a3 & 7) == 0 )
        {
          v15 = a3;
          v25 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v25;
          if ( v25 )
          {
            memmove(v25, a2, v6);
            goto LABEL_21;
          }
          return (unsigned int)-1073741801;
        }
      }
      else if ( a3 - 1 <= 1 )
      {
        v15 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = LOBYTE(a2->Data1) != 0;
LABEL_21:
          *a5 = Buffer;
          *a6 = v15;
          return 0;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v15 = 8;
      if ( a3 == 8 )
      {
        v26 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        Buffer = v26;
        if ( v26 )
        {
          *v26 = *(_QWORD *)&a2->Data1;
          goto LABEL_21;
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
  v29 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_45:
    v15 = v28 + 2;
    v30 = ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
    v31 = 0;
    Buffer = v30;
    if ( !v30 )
      return (unsigned int)-1073741801;
    Src = v30;
    v36 = 0;
    if ( v27 )
    {
      while ( 1 )
      {
        v8 = RtlStringFromGUIDEx(&a2[v31], &GuidString, 1u);
        if ( v8 < 0 )
          break;
        v32 = (unsigned int)GuidString.Length + 2;
        memmove(Src, GuidString.Buffer, v32);
        Src = (char *)Src + v32;
        RtlFreeAnsiString(&GuidString);
        v31 = v36 + 1;
        v36 = v31;
        if ( v31 >= v27 )
        {
          v30 = Src;
          goto LABEL_50;
        }
      }
LABEL_57:
      if ( !Buffer )
        return (unsigned int)v8;
      ExFreePoolWithTag(Buffer, 0x4B444342u);
      v23 = v34;
      goto LABEL_59;
    }
LABEL_50:
    *v30 = 0;
LABEL_20:
    if ( v8 >= 0 )
      goto LABEL_21;
    goto LABEL_57;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&GuidString, 0LL);
    v8 = RtlStringFromGUIDEx(&a2[v29], &GuidString, 1u);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v28 += GuidString.Length + 2;
    RtlFreeAnsiString(&GuidString);
    if ( ++v29 >= v27 )
      goto LABEL_45;
  }
}
