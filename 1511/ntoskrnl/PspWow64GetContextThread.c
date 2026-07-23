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

int __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  ULONG *v7; // rcx
  int result; // eax
  ULONG v9; // edi
  unsigned __int64 v10; // rax
  void *v11; // rsp
  CONTEXT *v12; // r12
  __int64 v13; // rcx
  PCONTEXT_EX v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  PCONTEXT_EX v19; // r10
  int v20; // ecx
  int v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-28h]
  _BYTE v23[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v24; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v26; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX v27; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+20h] BYREF
  __int64 v29; // [rsp+78h] [rbp+28h] BYREF
  int v30; // [rsp+80h] [rbp+30h]
  _BYTE v31[736]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v26 = a1;
  if ( a3 != 716 )
    return -1073741820;
  v6 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(v6 + 1064) )
    return -1073741811;
  if ( a4 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (ULONG *)MmUserProbeAddress;
    v24 = *v7;
  }
  else
  {
    v24 = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v24, a2);
  if ( result >= 0 )
  {
    v9 = v24;
    if ( !a4 )
    {
      v12 = (CONTEXT *)v5;
      v14 = (PCONTEXT_EX)(v5 + 716);
LABEL_14:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v21, v22, (__int64)v31, (__int64)v23);
      if ( result >= 0 )
      {
        if ( v23[0] && (v9 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v15 = ContextLength[0] + 15LL;
            if ( v15 <= ContextLength[0] )
              v15 = 0xFFFFFFFFFFFFFF0LL;
            v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
            v17 = alloca(v16);
            v18 = alloca(v16);
            result = RtlInitializeExtendedContext((PCONTEXT)v23, 0x4010001Fu, &v27);
            if ( result >= 0 )
            {
              if ( (v9 & 0x10040) == 0x10040 )
              {
                v30 |= 0x100040u;
                v19 = v27;
                v27->XState = v14->XState;
                v19->XState.Offset += (_DWORD)v14 - (_DWORD)v19;
                v19->All.Length = v19->XState.Offset + v19->XState.Length - v19->All.Offset;
              }
              result = PspGetContextThreadInternal(v26, (__int64)v23, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v23[0] )
                  result = RtlCopyContext(v12, v12->P1Home, (PCONTEXT)&v31[4]);
                else
                  result = RtlpWow64GetContextOnAmd64(&v31[4], v23, v12);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v20, (int)v5 + 716, (unsigned int)&v29, v9, (__int64)v14);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v24, ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength[0] + 15LL;
      if ( v10 <= ContextLength[0] )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = (CONTEXT *)v23;
      memset(v23, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v23, v9, &ContextEx);
      if ( result >= 0 )
      {
        v14 = ContextEx;
        result = RtlpReadExtendedContext(v13, 0, (__int64)ContextEx, v9, v5, &v29);
        if ( result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
