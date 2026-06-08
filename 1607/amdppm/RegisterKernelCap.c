/*
 * XREFs of RegisterKernelCap @ 0x1C0019000
 * Callers:
 *     PccCapWorker @ 0x1C0005A00 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // r9d
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r9d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 1144);
  v3 = 2LL;
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
          v3 = 16LL;
      }
      else
      {
        v3 = 8LL;
      }
    }
    else
    {
      v3 = 4LL;
    }
  }
  else if ( *(_QWORD *)(a1 + 216) || *(_QWORD *)(a1 + 224) )
  {
    v4 = *(_DWORD *)(a1 + 684);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 200);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(v7 + 24);
    v9 = 0;
    v10 = *(_DWORD *)(v8 + 60);
    if ( !v10 || (v9 = *(_DWORD *)(a1 + 416), v9 == v10 - 1) )
    {
      if ( *(_DWORD *)(v8 + 64) )
        v9 = v10 + *(_DWORD *)(a1 + 464);
    }
    v4 = *(unsigned __int8 *)(32LL * v9 + *(_QWORD *)(v8 + 48) + 24);
  }
  v14 = 44LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 66) )
  {
    v11 = *(_DWORD *)(a1 + 68);
    BYTE4(v16) = 1;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 56);
  }
  HIDWORD(v14) = v11;
  HIDWORD(v15) = *(_DWORD *)(a1 + 680);
  v12 = v16;
  if ( v4 < 0x64 )
    v12 = v3;
  LODWORD(v15) = v4;
  LODWORD(v16) = v12;
  ((void (__fastcall *)(__int64 *, __int64, __int64))qword_1C00095B0)(&v14, a1, v3);
  return 0LL;
}
