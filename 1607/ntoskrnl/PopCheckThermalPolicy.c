/*
 * XREFs of PopCheckThermalPolicy @ 0x1405748F0
 * Callers:
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, _BYTE *a3, int *a4)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v9; // rdi
  PVOID DeviceNode; // rcx
  const wchar_t *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int i; // ecx
  unsigned __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  int v22; // r8d
  int v23; // r10d
  int v24; // eax
  unsigned int v25; // edx
  bool v26; // cf

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v9 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
    v11 = (const wchar_t *)*((_QWORD *)DeviceNode + 36);
  else
    v11 = &word_1405841A0;
  v12 = *(_DWORD *)(a1 + 268);
  if ( v12 && (v13 = *(_DWORD *)(a1 + 256), v13 >= v12) )
  {
    PopPrintEx(
      0,
      "Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v11,
      (const void *)a1,
      v13,
      *(_DWORD *)(a1 + 268));
    *(_BYTE *)(a1 + 342) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 342) = 0;
  }
  v14 = *(_DWORD *)(a1 + 316);
  *(_BYTE *)(a1 + 341) = v14 && *(_DWORD *)(a1 + 256) >= v14;
  v15 = *(_DWORD *)(a1 + 264);
  if ( v15 )
  {
    if ( *(_DWORD *)(a1 + 256) < v15 )
    {
      if ( *(_BYTE *)(a1 + 343) )
        *(_BYTE *)(a1 + 343) = 0;
    }
    else if ( !*(_BYTE *)(a1 + 343) )
    {
      *(_BYTE *)(a1 + 343) = 1;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)(a1 + 272); ++i )
  {
    if ( *(_DWORD *)(a1 + 256) >= *(_DWORD *)(a1 + 4LL * i + 276) )
      break;
  }
  v17 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 352) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v17 )
  {
    LOBYTE(v19) = *(_BYTE *)(a1 + 65) & 1;
    *a3 = v19;
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 256);
    if ( *(_DWORD *)(a1 + 80) != 100 || (v19 = *(_DWORD *)(a1 + 260)) != 0 && v18 >= v19 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        v20 = 10000 * *(_DWORD *)(a1 + 252);
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = v20;
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 260);
      }
      v21 = v18 - *(_DWORD *)(a1 + 108);
      v22 = *(_DWORD *)(a1 + 76);
      v23 = v21 * *(_DWORD *)(a1 + 244) + *(_DWORD *)(a1 + 248) * (v18 - *(_DWORD *)(a1 + 260));
      *a4 = v23;
      if ( !v21 || ((v21 ^ v23) & 0x80000000) == 0 )
        v22 -= v23;
      *(_DWORD *)(a1 + 108) = v18;
      *(_QWORD *)(a1 + 96) = a2;
      *a3 = 1;
      if ( v22 > 1000 )
        v22 = 1000;
      *(_DWORD *)(a1 + 344) = 1;
      v24 = *(_DWORD *)(a1 + 320);
      if ( v22 < 0 )
        v22 = 0;
      if ( v22 < 10 * v24 )
        v22 = 10 * v24;
      *(_DWORD *)(a1 + 76) = v22;
      v25 = (v22 + 5) / 10;
      v26 = v25 < *(_DWORD *)(a1 + 324);
      *(_DWORD *)(a1 + 348) = v25;
      LOBYTE(v19) = v26;
      *(_BYTE *)(a1 + 356) = v26;
    }
    else
    {
      *a3 = 0;
      *(_DWORD *)(a1 + 344) = 0;
    }
  }
  *a4 = 0;
  if ( v9 )
    LOBYTE(v19) = ObfDereferenceObject(v9);
  return v19;
}
