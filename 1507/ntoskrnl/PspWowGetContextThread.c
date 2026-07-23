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

int __fastcall PspWowGetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  ULONG *v7; // rcx
  int result; // eax
  int v9; // r8d
  ULONG v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rsp
  CONTEXT *v13; // r12
  __int64 v14; // rcx
  PCONTEXT_EX v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  PCONTEXT_EX v20; // r10
  int v21; // ecx
  int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-28h]
  _BYTE v24[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG ContextFlags; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v27; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX v28; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+20h] BYREF
  __int64 v30; // [rsp+78h] [rbp+28h] BYREF
  int v31; // [rsp+80h] [rbp+30h]
  _BYTE v32[4]; // [rsp+90h] [rbp+40h] BYREF
  _BYTE v33[732]; // [rsp+94h] [rbp+44h] BYREF

  v5 = (__int64)a2;
  v27 = a1;
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
    ContextFlags = *v7;
  }
  else
  {
    ContextFlags = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    v10 = ContextFlags;
    if ( !a4 )
    {
      v13 = (CONTEXT *)v5;
      v15 = (PCONTEXT_EX)(v5 + 716);
LABEL_14:
      LOBYTE(v9) = 1;
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v27, v9, (unsigned int)v33, v22, v23, (__int64)v32, (__int64)v24);
      if ( result >= 0 )
      {
        if ( v24[0] && (v10 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v16 = ContextLength[0] + 15LL;
            if ( v16 <= ContextLength[0] )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((PCONTEXT)v24, 0x4010001Fu, &v28);
            if ( result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v31 |= 0x100040u;
                v20 = v28;
                v28->XState = v15->XState;
                v20->XState.Offset += (_DWORD)v15 - (_DWORD)v20;
                v20->All.Length = v20->XState.Offset + v20->XState.Length - v20->All.Offset;
              }
              result = PspGetContextThreadInternal(v27, (__int64)v24, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v24[0] )
                  result = RtlCopyContext(v13, v13->P1Home, (PCONTEXT)v33);
                else
                  result = RtlpWow64GetContextOnAmd64(v33, v24, v13);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v21, (int)v5 + 716, (unsigned int)&v30, v10, (__int64)v15);
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
    result = RtlGetExtendedContextLength(ContextFlags, ContextLength);
    if ( result >= 0 )
    {
      v11 = ContextLength[0] + 15LL;
      if ( v11 <= ContextLength[0] )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (CONTEXT *)v24;
      memset(v24, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v24, v10, &ContextEx);
      if ( result >= 0 )
      {
        v15 = ContextEx;
        result = RtlpReadExtendedContext(v14, 0, (__int64)ContextEx, v10, v5, &v30);
        if ( result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
