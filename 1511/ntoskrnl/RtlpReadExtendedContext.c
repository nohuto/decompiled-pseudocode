/*
 * XREFs of RtlpReadExtendedContext @ 0x1403F00B0
 * Callers:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x14002B108 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x14002B260 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x14002B50C (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x1403F0394 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, __int64 *a6)
{
  int v8; // esi
  __int64 v9; // rdi
  __int64 *v10; // r15
  __int64 result; // rax
  int v12; // ecx
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r9
  ULONG64 v16; // rcx
  int v17; // r12d
  unsigned int v18; // edi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG64 v22; // rdx
  ULONG64 v23; // rcx
  _QWORD *v24; // rcx
  int v26; // [rsp+48h] [rbp-50h] BYREF
  int v27; // [rsp+4Ch] [rbp-4Ch]
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0;
  v9 = 0LL;
  v10 = &v28;
  if ( a6 )
    v10 = a6;
  result = RtlpValidateContextFlags(a4, &v26);
  if ( (int)result < 0 )
    return result;
  v13 = v26;
  LOBYTE(v12) = 1;
  result = RtlpReadExtendedContextLayout(v12, a4, a5, v26, (__int64)v10);
  if ( (int)result < 0 )
    return result;
  v27 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    v8 = 4;
    v9 = a5 + 716;
  }
  else
  {
    if ( (a4 & 0x100000) != 0 )
    {
      v9 = a5 + 1232;
    }
    else
    {
      if ( (a4 & 0x200000) != 0 )
      {
        v8 = 8;
        v9 = a5 + 416;
        goto LABEL_9;
      }
      if ( (a4 & 0x400000) == 0 )
        goto LABEL_9;
      v9 = a5 + 912;
    }
    v8 = 16;
  }
LABEL_9:
  if ( (v13 & 1) != 0 )
  {
    v14 = *((unsigned int *)v10 + 3);
    if ( (_DWORD)v14 )
    {
      v15 = *((int *)v10 + 2);
      if ( ((unsigned int)(v8 - 1) & (unsigned __int64)(v15 + v9)) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v9 + v15 + v14;
      if ( v16 > MmUserProbeAddress || v16 < v15 + v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  v17 = v13 & 2;
  if ( v17 )
  {
    v20 = *((unsigned int *)v10 + 5);
    if ( (_DWORD)v20 )
    {
      v21 = *((int *)v10 + 4);
      v22 = v21 + v9;
      if ( (((_BYTE)v21 + (_BYTE)v9) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = v9 + v20 + v21;
      if ( v23 > MmUserProbeAddress || v23 < v22 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  result = RtlpCopyExtendedContext(a2, a3, 0LL, a4, v9, (__int64)v10);
  v18 = result;
  if ( (int)result >= 0 )
  {
    v19 = (unsigned int *)(a3 + *(int *)(a3 + 8));
    if ( !v27 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v19[12] = a4;
LABEL_19:
        if ( v17 )
        {
          v24 = (_QWORD *)(a3 + *(int *)(a3 + 16));
          *v24 &= MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v24[1] = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v24[1] = 0LL;
          memset(v24 + 2, 0, 0x30uLL);
        }
        return v18;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v19 = a4;
    goto LABEL_19;
  }
  return result;
}
