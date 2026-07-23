/*
 * XREFs of PspWowSetContextThread @ 0x14056AA80
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x14045047C (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1405315B0 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x14056AD68 (RtlpWow64SetContextOnAmd64.c)
 *     RtlCopyContext @ 0x1406CFE94 (RtlCopyContext.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1406D0030 (RtlGuardIsValidWow64StackPointer.c)
 */

int __fastcall PspWowSetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  _KPROCESS *v7; // r12
  ULONG *v8; // rcx
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
  _BYTE v30[3]; // [rsp+51h] [rbp+1h] BYREF
  ULONG ContextFlags; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  _KPROCESS *v34; // [rsp+68h] [rbp+18h]
  PCONTEXT_EX v35; // [rsp+70h] [rbp+20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+28h]
  int v37; // [rsp+80h] [rbp+30h] BYREF
  _BYTE v38[4]; // [rsp+84h] [rbp+34h] BYREF
  __int16 v39; // [rsp+88h] [rbp+38h]

  v29 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_KPROCESS **)(a1 + 544);
  v34 = v7;
  if ( !v7[1].ActiveProcessors.Bitmap[7] )
    return -1073741811;
  if ( a4 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (ULONG *)MmUserProbeAddress;
    ContextFlags = *v8;
  }
  else
  {
    ContextFlags = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((__int64)&ContextFlags, a4);
  if ( result >= 0 )
  {
    v10 = a4 == 0;
    v11 = ContextFlags;
    if ( v10 )
    {
      v16 = a2;
      v18 = (PCONTEXT_EX)(a2 + 179);
      goto LABEL_14;
    }
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v12 = ContextLength + 15LL;
      if ( v12 <= ContextLength )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      v16 = (ULONG *)&v29;
      result = RtlInitializeExtendedContext((PCONTEXT)&v29, v11, &ContextEx);
      if ( result >= 0 )
      {
        v18 = ContextEx;
        result = RtlpReadExtendedContext(v17, 1, (__int64)ContextEx, v11, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_14:
          if ( (struct _KTHREAD *)a1 != CurrentThread
            || (*(_DWORD *)&v7->0 & 0x20) == 0
            || (*v16 & 0x10001) != 0x10001
            || (unsigned int)RtlGuardIsValidWow64StackPointer(v16[49]) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(v7, a1, 1, (__int64)v38, v25, v27, &v37, v30);
            if ( result >= 0 )
            {
              v19 = v30[0];
              if ( v30[0] && (v11 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v20 = ContextLength + 15LL;
                  if ( v20 <= ContextLength )
                    v20 = 0xFFFFFFFFFFFFFF0LL;
                  v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
                  v22 = alloca(v21);
                  v23 = alloca(v21);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v29, 0x10001Fu, &v35);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal(a1, (__int64)&v29, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v19
                             ? RtlCopyContext((PCONTEXT)v38, *v16, (PCONTEXT)v16)
                             : RtlpWow64SetContextOnAmd64(v38, &v29, v16, &v29);
                      if ( result >= 0 )
                      {
                        if ( v39 != 35
                          && ((v11 & 0x10020) == 65568 || (v11 & 0x10040) == 65600 || (v11 & 0x10002) == 65538) )
                        {
                          v37 |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(v34, a1, 0, (__int64)v38, v26, v28, &v37, 0LL);
                        if ( result >= 0 && v29 )
                        {
                          if ( (v11 & 0x10040) == 0x10040 )
                          {
                            v37 |= 0x100040u;
                            v24 = v35;
                            v35->XState = v18->XState;
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
