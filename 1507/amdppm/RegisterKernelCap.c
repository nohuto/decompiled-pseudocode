/*
 * XREFs of RegisterKernelCap @ 0x1C0017760
 * Callers:
 *     PccCapWorker @ 0x1C0005BB0 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edi
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  ULONG v11; // ecx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-24h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 1128);
  v3 = 2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 24);
    v5 = *(_DWORD *)(v2 + 16) - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 2 )
          v3 = 16;
      }
      else
      {
        v3 = 8;
      }
    }
    else
    {
      v3 = 4;
    }
  }
  else if ( *(_QWORD *)(a1 + 216) || *(_QWORD *)(a1 + 224) )
  {
    v4 = *(_DWORD *)(a1 + 676);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 200);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(v7 + 16);
    v9 = 0LL;
    v10 = *(_DWORD *)(v8 + 44);
    if ( !v10 || (v9 = *(unsigned int *)(a1 + 408), (_DWORD)v9 == v10 - 1) )
    {
      if ( *(_DWORD *)(v8 + 48) )
        v9 = (unsigned int)(v10 + *(_DWORD *)(a1 + 456));
    }
    v4 = *(unsigned __int8 *)(32 * v9 + *(_QWORD *)(v8 + 32) + 24);
  }
  v11 = *(_DWORD *)(a1 + 56);
  ProcNumber = 0;
  v14 = 42;
  v16 = 0LL;
  v17 = 0;
  KeGetProcessorNumberFromIndex(v11, &ProcNumber);
  HIDWORD(v16) = *(_DWORD *)(a1 + 672);
  v12 = v17;
  if ( v4 < 0x64 )
    v12 = v3;
  LODWORD(v16) = v4;
  v17 = v12;
  ((void (__fastcall *)(int *))qword_1C0009580)(&v14);
  return 0LL;
}
