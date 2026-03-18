/*
 * XREFs of PspWow64GetContextThread @ 0x1404A4C94
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1404A4FB8 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1404A5384 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlCopyContext @ 0x14064CDA0 (RtlCopyContext.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  unsigned int *v7; // rcx
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  void *v11; // rsp
  unsigned int *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  _DWORD *v19; // r10
  int v20; // ecx
  int v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-28h]
  _BYTE v23[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v24; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp+8h]
  int v26; // [rsp+5Ch] [rbp+Ch]
  __int64 v27; // [rsp+60h] [rbp+10h]
  __int64 v28; // [rsp+68h] [rbp+18h] BYREF
  __int64 v29; // [rsp+70h] [rbp+20h] BYREF
  __int64 v30; // [rsp+78h] [rbp+28h] BYREF
  int v31; // [rsp+80h] [rbp+30h]
  __int64 v32[92]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v27 = a1;
  if ( a3 != 716 )
    return 3221225476LL;
  v6 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(v6 + 1064) )
    return 3221225485LL;
  if ( a4 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v24 = *v7;
  }
  else
  {
    v24 = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v24, a2);
  if ( (int)result >= 0 )
  {
    v9 = v24;
    if ( !a4 )
    {
      v12 = (unsigned int *)v5;
      v14 = v5 + 716;
LABEL_14:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v21, v22, (__int64)v32, (__int64)v23);
      if ( (int)result >= 0 )
      {
        if ( v23[0] && (v9 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v15 = v25 + 15LL;
            if ( v15 <= v25 )
              v15 = 0xFFFFFFFFFFFFFF0LL;
            v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
            v17 = alloca(v16);
            v18 = alloca(v16);
            result = RtlInitializeExtendedContext((__int64)v23, 0x4010001Fu, &v28);
            if ( (int)result >= 0 )
            {
              if ( (v9 & 0x10040) == 0x10040 )
              {
                v31 |= 0x100040u;
                v19 = (_DWORD *)v28;
                *(_QWORD *)(v28 + 16) = *(_QWORD *)(v14 + 16);
                v19[4] += v14 - (_DWORD)v19;
                v19[1] = v19[4] + v19[5] - *v19;
              }
              result = PspGetContextThreadInternal(v27, (__int64)v23, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v23[0] )
                  result = RtlCopyContext(v12, *v12, (char *)v32 + 4);
                else
                  result = RtlpWow64GetContextOnAmd64((char *)v32 + 4, v23, v12);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v20, (int)v5 + 716, (unsigned int)&v30, v9, v14);
                    v26 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v24);
    if ( (int)result >= 0 )
    {
      v10 = v25 + 15LL;
      if ( v10 <= v25 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = (unsigned int *)v23;
      memset(v23, 0, v25);
      result = RtlInitializeExtendedContext((__int64)v23, v9, &v29);
      if ( (int)result >= 0 )
      {
        v14 = v29;
        result = RtlpReadExtendedContext(v13, 0, v29, v9, v5, &v30);
        if ( (int)result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
