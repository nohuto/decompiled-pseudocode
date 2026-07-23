/*
 * XREFs of PspWow64SetContextThread @ 0x1404A4990
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1404A5384 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1404A5778 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1404A5AC8 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlCopyContext @ 0x14064CDA0 (RtlCopyContext.c)
 */

int __fastcall PspWow64SetContextThread(__int64 a1, _DWORD *a2, int a3, char a4)
{
  __int64 v5; // rdi
  ULONG_PTR v7; // r12
  _DWORD *v8; // rcx
  int result; // eax
  bool v10; // zf
  ULONG v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  ULONG *v16; // r14
  __int64 v17; // rcx
  PCONTEXT_EX v18; // r15
  char v19; // r12
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  void *v23; // rsp
  PCONTEXT_EX v24; // r11
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+28h] [rbp-28h]
  int v28; // [rsp+28h] [rbp-28h]
  char v29; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v30[15]; // [rsp+51h] [rbp+1h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+18h]
  PCONTEXT_EX v33; // [rsp+70h] [rbp+20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+28h]
  int v35; // [rsp+80h] [rbp+30h] BYREF
  _WORD v36[366]; // [rsp+84h] [rbp+34h] BYREF

  v5 = (__int64)a2;
  v29 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 544);
  BugCheckParameter1 = v7;
  if ( !*(_QWORD *)(v7 + 1064) )
    return -1073741811;
  if ( a4 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *(_DWORD *)&v30[3] = *v8;
  }
  else
  {
    *(_DWORD *)&v30[3] = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v30[3], a2);
  if ( result >= 0 )
  {
    v10 = a4 == 0;
    v11 = *(_DWORD *)&v30[3];
    if ( v10 )
    {
      v16 = (ULONG *)v5;
      v18 = (PCONTEXT_EX)(v5 + 716);
      goto LABEL_14;
    }
    result = RtlGetExtendedContextLength(*(ULONG *)&v30[3], (PULONG)&v30[7]);
    if ( result >= 0 )
    {
      v12 = *(unsigned int *)&v30[7] + 15LL;
      if ( v12 <= *(unsigned int *)&v30[7] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      v16 = (ULONG *)&v29;
      result = RtlInitializeExtendedContext((PCONTEXT)&v29, v11, &ContextEx);
      if ( result >= 0 )
      {
        v18 = ContextEx;
        result = RtlpReadExtendedContext(v17, 1, (__int64)ContextEx, v11, v5, 0LL);
        if ( result >= 0 )
        {
LABEL_14:
          if ( (struct _KTHREAD *)a1 != CurrentThread
            || (*(_DWORD *)(v7 + 440) & 0x20) == 0
            || (*v16 & 0x10001) != 0x10001
            || (unsigned int)RtlGuardIsValidWow64StackPointer(v16[49]) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(v7, v25, v27, (__int64)&v35, (__int64)v30);
            if ( result >= 0 )
            {
              v19 = v30[0];
              if ( v30[0] && (v11 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, (PULONG)&v30[7]);
                if ( result >= 0 )
                {
                  v20 = *(unsigned int *)&v30[7] + 15LL;
                  if ( v20 <= *(unsigned int *)&v30[7] )
                    v20 = 0xFFFFFFFFFFFFFF0LL;
                  v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
                  v22 = alloca(v21);
                  v23 = alloca(v21);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v29, 0x10001Fu, &v33);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal(a1, (__int64)&v29, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v19
                             ? RtlCopyContext((PCONTEXT)v36, *v16, (PCONTEXT)v16)
                             : RtlpWow64SetContextOnAmd64(v36, &v29, v16, &v29);
                      if ( result >= 0 )
                      {
                        if ( v36[2] != 35
                          && ((v11 & 0x10020) == 65568 || (v11 & 0x10040) == 65600 || (v11 & 0x10002) == 65538) )
                        {
                          v35 |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v26, v28, (__int64)&v35, 0LL);
                        if ( result >= 0 && v29 )
                        {
                          if ( (v11 & 0x10040) == 0x10040 )
                          {
                            v35 |= 0x100040u;
                            v24 = v33;
                            v33->XState = v18->XState;
                            v24->XState.Offset += (_DWORD)v18 - (_DWORD)v24;
                            v24->All.Length = v24->XState.Offset + v24->XState.Length - v24->All.Offset;
                          }
                          return PspSetContextThreadInternal(a1, (CONTEXT *)&v29, 0, 1, 1);
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
