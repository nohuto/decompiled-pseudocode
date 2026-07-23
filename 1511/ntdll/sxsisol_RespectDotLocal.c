/*
 * XREFs of sxsisol_RespectDotLocal @ 0x1800D24BC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800CB790 (RtlComputePrivatizedDllName_U.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  _UNICODE_STRING *p_LocalName; // rbx
  SIZE_T v7; // r8
  __int64 *v8; // r14
  __int64 v9; // rcx
  size_t Length; // r8
  unsigned __int16 *Buffer; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  RealName.Length = 0;
  *(_QWORD *)&RealName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&RealName.Buffer + 2) = 0;
  HIWORD(RealName.Buffer) = 0;
  LocalName.Length = 0;
  *(_QWORD *)&LocalName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&LocalName.Buffer + 2) = 0;
  HIWORD(LocalName.Buffer) = 0;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( LocalName.Buffer && RtlDoesFileExists_UstrEx(&LocalName, 1) )
    {
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || !RtlDoesFileExists_UstrEx(&RealName, 1) )
        goto LABEL_18;
      p_LocalName = &RealName;
    }
    v7 = p_LocalName->Length + 2LL;
    *a2 = 0;
    if ( v7 > 0xFFFE )
    {
      v5 = -1073741562;
      goto LABEL_19;
    }
    v8 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v7 > *((_QWORD *)a2 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v7) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_19;
    }
    v9 = *v8;
    Length = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v12 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v8;
    memmove((void *)(v9 + 2 * v12), Buffer, Length);
    v13 = (unsigned __int16)(*a2 + p_LocalName->Length);
    *a2 = v13;
    a2[1] = v13 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v13 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  v5 = -1073741811;
LABEL_19:
  RtlFreeAnsiString(&RealName);
  RtlFreeAnsiString(&LocalName);
  return (unsigned int)v5;
}
