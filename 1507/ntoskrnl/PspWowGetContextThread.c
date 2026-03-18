/*
 * XREFs of PspWowGetContextThread @ 0x140530EB8
 * Callers:
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x14045047C (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x14053112C (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1405311DC (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1405315B0 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlCopyContext @ 0x1406CFE94 (RtlCopyContext.c)
 */

__int64 __fastcall PspWowGetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rcx
  __int64 result; // rax
  int v9; // r8d
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  _DWORD *v20; // r10
  int v21; // ecx
  int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-28h]
  _BYTE v24[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+8h]
  int v27; // [rsp+5Ch] [rbp+Ch]
  __int64 v28; // [rsp+60h] [rbp+10h]
  __int64 v29; // [rsp+68h] [rbp+18h] BYREF
  __int64 v30; // [rsp+70h] [rbp+20h] BYREF
  __int64 v31; // [rsp+78h] [rbp+28h] BYREF
  int v32; // [rsp+80h] [rbp+30h]
  char v33[4]; // [rsp+90h] [rbp+40h] BYREF
  _BYTE v34[732]; // [rsp+94h] [rbp+44h] BYREF

  v5 = (__int64)a2;
  v28 = a1;
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
    v25 = *v7;
  }
  else
  {
    v25 = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v25, a2);
  if ( (int)result >= 0 )
  {
    v10 = v25;
    if ( !a4 )
    {
      v13 = (unsigned int *)v5;
      v15 = v5 + 716;
LABEL_14:
      LOBYTE(v9) = 1;
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v28, v9, (unsigned int)v34, v22, v23, (__int64)v33, (__int64)v24);
      if ( (int)result >= 0 )
      {
        if ( v24[0] && (v10 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v16 = v26 + 15LL;
            if ( v16 <= v26 )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((__int64)v24, 0x4010001Fu, &v29);
            if ( (int)result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v32 |= 0x100040u;
                v20 = (_DWORD *)v29;
                *(_QWORD *)(v29 + 16) = *(_QWORD *)(v15 + 16);
                v20[4] += v15 - (_DWORD)v20;
                v20[1] = v20[4] + v20[5] - *v20;
              }
              result = PspGetContextThreadInternal(v28, (__int64)v24, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v24[0] )
                  result = RtlCopyContext(v13, *v13, v34);
                else
                  result = RtlpWow64GetContextOnAmd64(v34, v24, v13);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v21, (int)v5 + 716, (unsigned int)&v31, v10, v15);
                    v27 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v25);
    if ( (int)result >= 0 )
    {
      v11 = v26 + 15LL;
      if ( v11 <= v26 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (unsigned int *)v24;
      memset(v24, 0, v26);
      result = RtlInitializeExtendedContext((__int64)v24, v10, &v30);
      if ( (int)result >= 0 )
      {
        v15 = v30;
        result = RtlpReadExtendedContext(v14, 0, v30, v10, v5, &v31);
        if ( (int)result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
