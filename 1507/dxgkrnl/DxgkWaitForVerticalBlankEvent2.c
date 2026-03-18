/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C012C5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  _OWORD *v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v13; // edi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  PVOID *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  struct _KEVENT **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // r14d
  PVOID *v26; // rdi
  PVOID v27[2]; // [rsp+70h] [rbp+0h] BYREF

  v4 = (_QWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = (_OWORD *)a1;
  v6 = 0;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2083);
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v5;
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v5[1];
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5[2];
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v5[3];
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v5[4];
  v7 = *(unsigned int *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
  if ( (unsigned int)v7 > 8 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v8[3] = v7;
    v8[4] = 32LL;
    v8[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v8);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_8:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2083);
    return 3221225485LL;
  }
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  memset(v4 + 13, 0, 0x40uLL);
  v13 = 0;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v14 = ObReferenceObjectByHandle(
              *(HANDLE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20 + 8LL * v13),
              0x100000u,
              (POBJECT_TYPE)ExEventObjectType,
              1,
              (PVOID *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL),
              0LL);
      v17 = v13 + 1;
      v18 = *v4;
      *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60 + 8 * v17) = *(_QWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL);
      if ( v14 < 0 )
        break;
      ++v13;
      if ( (unsigned int)v17 >= (unsigned int)v7 )
      {
        v6 = v7 + 1;
        goto LABEL_20;
      }
    }
    if ( v13 )
    {
      v19 = (PVOID *)(v4 + 13);
      v20 = v13;
      do
      {
        ObfDereferenceObject(*v19++);
        --v20;
      }
      while ( v20 );
    }
    v21 = WdLogNewEntry5_WdWarning(v18, v15, v17, v16);
    *(_QWORD *)(v21 + 24) = *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20 + 8LL * v13);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_8;
  }
LABEL_20:
  v22 = (struct _KEVENT **)(v4 + 12);
  if ( !v6 )
    v22 = 0LL;
  v25 = DxgkWaitForVerticalBlankEventInternal(
          *(unsigned int *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
          *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
          v6,
          v22);
  if ( (_DWORD)v7 )
  {
    v26 = (PVOID *)(v4 + 13);
    do
    {
      ObfDereferenceObject(*v26++);
      --v7;
    }
    while ( v7 );
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 2083);
  return v25;
}
