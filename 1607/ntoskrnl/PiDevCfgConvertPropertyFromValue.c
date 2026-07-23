/*
 * XREFs of PiDevCfgConvertPropertyFromValue @ 0x1406360BC
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDevCfgConvertPropertyFromValue(
        unsigned int a1,
        int a2,
        wchar_t *a3,
        unsigned int a4,
        int *a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v8; // ebp
  _BYTE *PoolWithTag; // rbx
  bool v10; // zf
  int v11; // esi
  _WORD *v12; // rax
  int v13; // esi
  _BYTE *v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rax
  GUID *v17; // rax
  int v18; // esi
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v8 = 0;
  PoolWithTag = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_56;
    v10 = a1 == 7;
    goto LABEL_53;
  }
  if ( a4 == 4099 )
  {
LABEL_54:
    v8 = a2;
LABEL_55:
    PoolWithTag = a3;
    goto LABEL_56;
  }
  if ( a4 > 0x11 )
  {
    if ( a4 != 18 )
    {
      if ( a4 == 19 )
      {
        v10 = a1 == 3;
        goto LABEL_53;
      }
      if ( a4 != 20 )
      {
        if ( a4 <= 0x15 )
          goto LABEL_56;
        if ( a4 <= 0x18 )
          goto LABEL_10;
        if ( a4 != 25 )
          goto LABEL_56;
      }
    }
    if ( a1 - 1 <= 1 )
      goto LABEL_54;
    goto LABEL_56;
  }
  if ( a4 == 17 )
  {
    if ( a1 != 4 )
      goto LABEL_56;
    v18 = *(_DWORD *)a3;
    v8 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
    if ( PoolWithTag )
    {
      *PoolWithTag = -(v18 != 0);
      goto LABEL_56;
    }
    return (unsigned int)-1073741670;
  }
  if ( a4 > 9 )
  {
    if ( a4 != 13 )
    {
      if ( a4 != 16 || a1 != 3 && a1 != 11 || a2 != 8 )
        goto LABEL_56;
      v8 = 8;
      goto LABEL_55;
    }
    if ( !a1 )
      goto LABEL_56;
    if ( a1 > 2 )
    {
      if ( a1 != 3 || a2 != 16 )
        goto LABEL_56;
      v8 = 16;
      goto LABEL_55;
    }
    if ( a2 != 78 )
      goto LABEL_56;
    v8 = 16;
    v17 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x63647050u);
    PoolWithTag = v17;
    if ( v17 )
    {
      GuidString.Buffer = a3;
      *(_DWORD *)&GuidString.Length = 5111884;
      if ( RtlGUIDFromString(&GuidString, v17) < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      goto LABEL_56;
    }
    return (unsigned int)-1073741670;
  }
  if ( a4 >= 8 )
  {
    if ( a1 == 4 )
    {
      v15 = *(unsigned int *)a3;
      v8 = 8;
      v16 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x63647050u);
      PoolWithTag = v16;
      if ( v16 )
      {
        *v16 = v15;
        goto LABEL_56;
      }
      return (unsigned int)-1073741670;
    }
    v10 = a1 == 11;
LABEL_53:
    if ( v10 )
      goto LABEL_54;
LABEL_56:
    *a5 = v8;
    *a6 = PoolWithTag;
    return v6;
  }
  if ( a4 < 2 )
    goto LABEL_56;
  if ( a4 <= 3 )
  {
    if ( a1 != 4 )
      goto LABEL_56;
    v13 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFu )
      goto LABEL_56;
    v8 = 1;
    v14 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
    PoolWithTag = v14;
    if ( v14 )
    {
      *v14 = v13;
      goto LABEL_56;
    }
  }
  else
  {
    if ( a4 > 5 )
    {
LABEL_10:
      v10 = a1 == 4;
      goto LABEL_53;
    }
    if ( a1 != 4 )
      goto LABEL_56;
    v11 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFFFu )
      goto LABEL_56;
    v8 = 2;
    v12 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x63647050u);
    PoolWithTag = v12;
    if ( v12 )
    {
      *v12 = v11;
      goto LABEL_56;
    }
  }
  return (unsigned int)-1073741670;
}
