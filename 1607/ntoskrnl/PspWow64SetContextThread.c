/*
 * XREFs of PspWow64SetContextThread @ 0x140518F20
 * Callers:
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     __chkstk @ 0x140167650 (__chkstk.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x140517E70 (RtlpReadExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140518E30 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x14051A264 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14051B93C (RtlGuardIsValidWow64StackPointer.c)
 *     RtlCopyContext @ 0x14068C174 (RtlCopyContext.c)
 *     EtwTiLogSetContextThread @ 0x1406A5D34 (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspWow64SetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  unsigned int *v15; // r15
  __int64 v16; // rcx
  _KPROCESS *v17; // rbx
  char v18; // bl
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  __int64 v23; // rcx
  int v24; // ebx
  _DWORD *v25; // r8
  int v26; // ecx
  int v27; // [rsp+20h] [rbp-30h]
  int v28; // [rsp+20h] [rbp-30h]
  int v29[2]; // [rsp+20h] [rbp-30h]
  int v30; // [rsp+28h] [rbp-28h]
  int v31; // [rsp+28h] [rbp-28h]
  char v32; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v33[15]; // [rsp+51h] [rbp+1h] BYREF
  _DWORD *v34; // [rsp+60h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+18h]
  __int64 v36; // [rsp+70h] [rbp+20h] BYREF
  int v37; // [rsp+80h] [rbp+30h] BYREF
  _WORD v38[366]; // [rsp+84h] [rbp+34h] BYREF

  v32 = 0;
  if ( a3 != 716 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(BugCheckParameter1 + 1064) )
    return 3221225485LL;
  if ( a4 )
  {
    v9 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)&v33[3] = *(_DWORD *)v9;
  }
  else
  {
    *(_DWORD *)&v33[3] = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((__int64)&v33[3], a4);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)&v33[3];
    if ( a4 )
    {
      result = RtlGetExtendedContextLength(*(unsigned int *)&v33[3]);
      if ( (int)result < 0 )
        return result;
      v11 = *(unsigned int *)&v33[7] + 15LL;
      if ( v11 <= *(unsigned int *)&v33[7] )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = alloca(v12);
      v14 = alloca(v12);
      v15 = (unsigned int *)&v32;
      result = RtlInitializeExtendedContext((__int64)&v32, v10, &v34);
      if ( (int)result < 0 )
        return result;
      result = RtlpReadExtendedContext(v16, 1, (__int64)v34, v10, (__int64)a2, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v15 = a2;
      v34 = a2 + 179;
    }
    v17 = (_KPROCESS *)BugCheckParameter1;
    if ( (struct _KTHREAD *)a1 == CurrentThread
      && (*(_DWORD *)(BugCheckParameter1 + 440) & 0x20) != 0
      && (*v15 & 0x10001) == 0x10001
      && !(unsigned int)RtlGuardIsValidWow64StackPointer(v15[49]) )
    {
      return 3221225485LL;
    }
    result = PspWow64ReadOrWriteThreadCpuArea(v17, a1, 1, (__int64)v38, v27, v30, &v37, v33);
    if ( (int)result >= 0 )
    {
      v18 = v33[0];
      if ( v33[0] && (v10 & 0x10040) == 0x10040 )
      {
        return 3221225659LL;
      }
      else
      {
        result = RtlGetExtendedContextLength(1048607LL);
        if ( (int)result >= 0 )
        {
          v19 = *(unsigned int *)&v33[7] + 15LL;
          if ( v19 <= *(unsigned int *)&v33[7] )
            v19 = 0xFFFFFFFFFFFFFF0LL;
          v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
          v21 = alloca(v20);
          v22 = alloca(v20);
          result = RtlInitializeExtendedContext((__int64)&v32, 0x10001Fu, &v36);
          if ( (int)result >= 0 )
          {
            result = PspGetContextThreadInternal(a1, (__int64)&v32, 0, 1, 1);
            if ( (int)result >= 0 )
            {
              result = v18 ? RtlCopyContext(v38, *v15, v15) : RtlpWow64SetContextOnAmd64(v38, &v32, v15, &v32);
              if ( (int)result >= 0 )
              {
                if ( v38[2] != 35 && ((v10 & 0x10020) == 65568 || (v10 & 0x10040) == 65600 || (v10 & 0x10002) == 65538) )
                  v37 |= 1u;
                result = PspWow64ReadOrWriteThreadCpuArea(
                           (_KPROCESS *)BugCheckParameter1,
                           a1,
                           0,
                           (__int64)v38,
                           v28,
                           v31,
                           &v37,
                           0LL);
                v24 = result;
                if ( (int)result >= 0 )
                {
                  if ( v32 )
                  {
                    if ( (v10 & 0x10040) == 0x10040 )
                    {
                      v37 |= 0x100040u;
                      v25 = (_DWORD *)v36;
                      v26 = (int)v34;
                      *(_QWORD *)(v36 + 16) = *((_QWORD *)v34 + 2);
                      v25[4] += v26 - (_DWORD)v25;
                      v25[1] = v25[4] + v25[5] - *v25;
                    }
                    v24 = PspSetContextThreadInternal(a1, (__int64)&v32, 0, 1, 1);
                  }
                  if ( v24 >= 0 )
                  {
                    if ( a4 )
                    {
                      LOBYTE(v23) = KeGetCurrentThread()->PreviousMode;
                      EtwTiLogSetContextThread(v23, a1, v15, *(unsigned int *)&v33[3], *(_QWORD *)v29);
                    }
                  }
                  return (unsigned int)v24;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
