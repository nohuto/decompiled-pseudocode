/*
 * XREFs of PortMiniportRegistryRead @ 0x1C0013690
 * Callers:
 *     StorPortRegistryRead @ 0x1C0013550 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall PortMiniportRegistryRead(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rbx
  PVOID SystemRoutineAddress; // rax
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  _WORD *v20; // rcx
  __int64 v21; // rbx
  int v22; // edx
  unsigned int i; // r8d
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+38h] [rbp-51h]
  _QWORD v27[14]; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+27h] BYREF
  int v29; // [rsp+F0h] [rbp+67h] BYREF
  int v30; // [rsp+100h] [rbp+77h] BYREF

  v29 = 0;
  v30 = -1;
  memset(v27, 0, sizeof(v27));
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  LODWORD(v27[4]) = 0;
  v27[2] = v8;
  v10 = 20;
  LODWORD(v27[1]) = 20;
  if ( a3 == 1 )
  {
    v25 = 0LL;
    P = 0LL;
    v10 = 52;
    v27[3] = &v25;
    v11 = &v29;
    LODWORD(v27[1]) = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v10 = 52;
      v27[3] = v9;
      LODWORD(v27[1]) = 52;
    }
    else
    {
      v27[3] = a4;
      v27[0] = &PortpBinaryReadCallBack;
    }
    v11 = &v30;
  }
  v27[5] = v11;
  LODWORD(v27[6]) = 4;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v27[1]) = v10 | 0x100;
    LODWORD(v27[4]) = a3 << 24;
  }
  v12 = *(_QWORD *)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v12,
          v27,
          0LL,
          0LL);
  if ( (v14 & 0x80000000) != 0 )
  {
LABEL_10:
    v15 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = v15;
    return v14;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return v14;
    }
    if ( *(_DWORD *)(a4 + 60) != -1073741789 )
      return v14;
    v14 = -1073741789;
    goto LABEL_10;
  }
  if ( (_WORD)v25 && (v17 = *(_DWORD *)(a4 + 44), v18 = (unsigned __int16)v25 >> 1, v18 < v17) )
  {
    v19 = v18 + 1;
    if ( (unsigned __int64)(WORD1(v25) - (unsigned __int16)v25) >= 2 && *((_WORD *)P + v19 - 1) && v19 < v17 )
      ++v19;
    memset(v9, 0, *(unsigned int *)(a4 + 44));
    v20 = P;
    v21 = v19 - 1;
    v22 = 0;
    v9[v21] = 0;
    if ( v20 )
    {
      for ( i = 0; i < (unsigned int)v21; ++v22 )
      {
        if ( !*v20 )
          break;
        ++i;
        *v9++ = *(_BYTE *)v20++;
      }
    }
    *(_DWORD *)(a4 + 44) = v22;
  }
  else
  {
    v14 = -1073741789;
    v24 = (unsigned __int16)v25 + 1;
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = (unsigned __int64)v24 >> 1;
  }
  ExFreePoolWithTag(P, 0);
  return v14;
}
