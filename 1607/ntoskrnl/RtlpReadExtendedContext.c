/*
 * XREFs of RtlpReadExtendedContext @ 0x1404FB260
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1404FBFA8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1400F1048 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1400F2870 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x1404FB068 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  int v8; // esi
  __int64 v9; // rdi
  int *v10; // r15
  __int64 result; // rax
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // r12d
  unsigned int v17; // edi
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  _QWORD *v23; // rcx
  int v25; // [rsp+48h] [rbp-50h] BYREF
  int v26; // [rsp+4Ch] [rbp-4Ch]
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0;
  v9 = 0LL;
  v10 = (int *)&v27;
  if ( a6 )
    v10 = a6;
  result = RtlpValidateContextFlags(a4, &v25);
  if ( (int)result < 0 )
    return result;
  v12 = v25;
  result = RtlpReadExtendedContextLayout(1, a4, a5, v25, v10);
  if ( (int)result < 0 )
    return result;
  v26 = a4 & 0x10000;
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
  if ( (v12 & 1) != 0 )
  {
    v13 = (unsigned int)v10[3];
    if ( (_DWORD)v13 )
    {
      v14 = v10[2];
      if ( ((unsigned int)(v8 - 1) & (unsigned __int64)(v14 + v9)) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v9 + v14 + v13;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 + v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v16 = v12 & 2;
  if ( v16 )
  {
    v19 = (unsigned int)v10[5];
    if ( (_DWORD)v19 )
    {
      v20 = v10[4];
      v21 = v20 + v9;
      if ( (((_BYTE)v20 + (_BYTE)v9) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = v9 + v19 + v20;
      if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpCopyExtendedContext(a2, a3, 0LL, a4, v9, (__int64)v10);
  v17 = result;
  if ( (int)result >= 0 )
  {
    v18 = (unsigned int *)(a3 + *(int *)(a3 + 8));
    if ( !v26 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v18[12] = a4;
LABEL_19:
        if ( v16 )
        {
          v23 = (_QWORD *)(a3 + *(int *)(a3 + 16));
          *v23 &= MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v23[1] = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v23[1] = 0LL;
          memset(v23 + 2, 0, 0x30uLL);
        }
        return v17;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v18 = a4;
    goto LABEL_19;
  }
  return result;
}
