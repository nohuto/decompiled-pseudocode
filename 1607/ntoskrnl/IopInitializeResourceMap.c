/*
 * XREFs of IopInitializeResourceMap @ 0x1407AB6F0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCmEncodeMemIoResource @ 0x14013D9E8 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     IopWriteResourceList @ 0x140557C10 (IopWriteResourceList.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 */

void __fastcall IopInitializeResourceMap(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  unsigned int *v5; // rsi
  int v6; // ebx
  _QWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  ULONG v10; // r15d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *PoolWithTag; // rax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v12; // r12
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned int v14; // r13d
  ULONGLONG v15; // rbx
  ULONGLONG v16; // r15
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // [rsp+38h] [rbp-49h]
  ULONG v22; // [rsp+3Ch] [rbp-45h]
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  __int64 v24; // [rsp+48h] [rbp-39h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v25; // [rsp+50h] [rbp-31h]
  UNICODE_STRING v26; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING v27; // [rsp+68h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v29[22]; // [rsp+88h] [rbp+7h] BYREF
  __int16 v30; // [rsp+9Eh] [rbp+1Dh]
  char v31; // [rsp+A2h] [rbp+21h]
  char v32; // [rsp+A5h] [rbp+24h]
  __int16 v33; // [rsp+A6h] [rbp+25h]
  char v34; // [rsp+A8h] [rbp+27h]

  v1 = a1;
  v24 = a1;
  RtlInitUnicodeString(&DestinationString, L"System Resources");
  v2 = 0;
  v21 = 0;
  do
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        RtlInitUnicodeString(&v27, L"Reserved");
        RtlInitUnicodeString(&v26, L".Translated");
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( v18 >= 0x23 )
            _report_rangecheckfailure();
          v29[v18] = 0;
          ++v17;
          ++v18;
        }
        while ( v17 < 0x23 );
        LOBYTE(v30) = 1;
        v31 = 1;
        v5 = MmInitializeMemoryLimits(v1, (__int64)v29);
        if ( !v5 )
          goto LABEL_25;
      }
      else
      {
        RtlInitUnicodeString(&v27, L"Loader Reserved");
        RtlInitUnicodeString(&v26, L".Raw");
        v3 = 0;
        v4 = 0LL;
        do
        {
          if ( v4 >= 0x23 )
            _report_rangecheckfailure();
          v29[v4] = 0;
          ++v3;
          ++v4;
        }
        while ( v3 < 0x23 );
        v29[3] = 1;
        v33 = 257;
        v29[6] = 1;
        v34 = 1;
        v30 = 257;
        v31 = 1;
        v32 = 1;
        v5 = MmInitializeMemoryLimits(v1, (__int64)v29);
        if ( !v5 )
          return;
      }
    }
    else
    {
      RtlInitUnicodeString(&v27, L"Physical Memory");
      RtlInitUnicodeString(&v26, L".Translated");
      v5 = (unsigned int *)MmPhysicalMemoryBlock;
    }
    if ( !*v5 )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      goto LABEL_25;
    }
    v6 = 0;
    v7 = v5 + 6;
    v8 = *v5;
    do
    {
      v9 = *v7 << 12;
      if ( v9 == (unsigned __int64)(unsigned int)(16 * *(_DWORD *)v7) << 8
        || v9 == (unsigned __int64)(unsigned int)(v9 >> 16) << 16
        || v9 == HIDWORD(v9) << 32
        || v9 <= 0xFFFFF000
        || (v19 = (v9 - 4294963201u) / 0xFFFFF000 + 1, v6 += v19, 0xFFFFFFFF00001000uLL * v19 + v9) )
      {
        ++v6;
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
    v10 = 20 * (v6 + 1);
    v22 = v10;
    PoolWithTag = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
    v25 = PoolWithTag;
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      return;
    }
    memset(PoolWithTag, 0, (unsigned int)(20 * (v6 + 1)));
    *(_DWORD *)&v12->Type = 1;
    v13 = v12 + 1;
    v14 = 0;
    *((_DWORD *)&v12->u.Memory48 + 3) = v6;
    if ( !*v5 )
      goto LABEL_20;
    do
    {
      v15 = *(_QWORD *)&v5[4 * v14 + 4] << 12;
      v16 = *(_QWORD *)&v5[4 * v14 + 6] << 12;
      if ( RtlCmEncodeMemIoResource(v13, 3u, v16, v15) >= 0 )
      {
        v13->ShareDisposition = 1;
LABEL_17:
        ++v13;
        goto LABEL_18;
      }
      if ( v16 > 0xFFFFF000 )
      {
        v20 = (v16 - 4294963201u) / 0xFFFFF000 + 1;
        v16 += 0xFFFFFFFF00001000uLL * v20;
        do
        {
          v13->u.Generic.Start.QuadPart = v15;
          v15 += 4294963200LL;
          *(_WORD *)&v13->Type = 259;
          v13->u.Generic.Length = -4096;
          ++v13;
          --v20;
        }
        while ( v20 );
      }
      if ( v16 )
      {
        *(_WORD *)&v13->Type = 259;
        v13->u.Generic.Start.QuadPart = v15;
        v13->u.Generic.Length = v16;
        goto LABEL_17;
      }
LABEL_18:
      ++v14;
    }
    while ( v14 < *v5 );
    v2 = v21;
    v12 = v25;
    v10 = v22;
LABEL_20:
    if ( (int)IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL) >= 0 )
    {
      IopWriteResourceList(Handle, &DestinationString, &v27, &v26, v12, v10);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v2 )
      ExFreePoolWithTag(v5, 0);
    v1 = v24;
LABEL_25:
    v21 = ++v2;
  }
  while ( v2 < 3 );
}
