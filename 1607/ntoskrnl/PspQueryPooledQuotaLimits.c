/*
 * XREFs of PspQueryPooledQuotaLimits @ 0x14067D94C
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspQueryPooledQuotaLimits(void *a1, __int64 a2, int a3, _DWORD *a4, KPROCESSOR_MODE AccessMode)
{
  NTSTATUS result; // eax
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h]
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int128 v21; // [rsp+70h] [rbp-38h]
  __int128 v22; // [rsp+80h] [rbp-28h]
  unsigned __int64 v23; // [rsp+90h] [rbp-18h]

  if ( a3 != 72 )
    return -1073741820;
  result = ObReferenceObjectByHandleWithTag(
             a1,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             AccessMode,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v8 = (unsigned __int64 *)*((_QWORD *)Object + 130);
    v9 = v8[24];
    v10 = v8[16];
    *((_QWORD *)&v19 + 1) = v10;
    v11 = v8[17];
    v12 = v8[8];
    v13 = *v8;
    *(_QWORD *)&v21 = *v8;
    v14 = v8[1];
    v15 = v8[40];
    v16 = v8[32];
    *((_QWORD *)&v22 + 1) = v16;
    v17 = v8[33];
    if ( v9 <= v10 )
      v9 = v10;
    *(_QWORD *)&v20 = v9;
    if ( v12 <= v13 )
      v12 = v13;
    *((_QWORD *)&v21 + 1) = v12;
    if ( v15 <= v16 )
      v15 = v16;
    v23 = v15;
    if ( v11 <= v10 )
      v11 = v10;
    *(_QWORD *)&v19 = v11;
    if ( v14 <= v13 )
      v14 = v13;
    *((_QWORD *)&v20 + 1) = v14;
    if ( v17 <= v16 )
      v17 = v16;
    *(_QWORD *)&v22 = v17;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    *(_OWORD *)a2 = v19;
    *(_OWORD *)(a2 + 16) = v20;
    *(_OWORD *)(a2 + 32) = v21;
    *(_OWORD *)(a2 + 48) = v22;
    *(_QWORD *)(a2 + 64) = v23;
    if ( a4 )
      *a4 = 72;
    return 0;
  }
  return result;
}
