/*
 * XREFs of ExCallSessionCallBack @ 0x140462BD4
 * Callers:
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140013A80 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall ExCallSessionCallBack(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v7; // edi
  ULONG_PTR SessionById; // rax
  void *v9; // rsi
  int v10; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  struct _KPROCESS *NextSession; // rbx
  __int64 v16; // r15
  int SessionId; // r12d
  ULONG_PTR v18; // rcx
  int v19; // ebp
  _RTL_RUN_ONCE *v20; // r14
  struct _EX_RUNDOWN_REF *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rsi
  _BYTE v24[48]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v7 = -1073741811;
  if ( a1 )
  {
    SessionById = MmGetSessionById(*a1, a2, a3);
    v9 = (void *)SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741811;
    v10 = MmAttachSession(SessionById);
    if ( v10 < 0 )
    {
      v10 = -1073741811;
    }
    else
    {
      Win32Callouts = MmSessionGetWin32Callouts();
      v12 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
      v13 = v12;
      if ( v12 )
      {
        v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, a2, a3);
        ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v13);
      }
      else
      {
        v10 = -1073741811;
      }
      MmDetachSession((__int64)v9, (__int64)v24);
    }
    ObfDereferenceObject(v9);
  }
  else
  {
    NextSession = (struct _KPROCESS *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v16 = a3;
      do
      {
        SessionId = MmGetSessionId(NextSession);
        v19 = MmAttachSession(v18);
        if ( v19 >= 0 )
        {
          v20 = MmSessionGetWin32Callouts();
          v21 = ExReferenceCallBackBlock((signed __int64 *)v20);
          v22 = v21;
          if ( v21 )
          {
            v19 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v21[1].Count)(v21[2].Count, a2, v16);
            ExDereferenceCallBackBlock((signed __int64 *)v20, v22);
          }
          MmDetachSession((__int64)NextSession, (__int64)v24);
        }
        if ( !SessionId )
          v7 = v19;
        NextSession = (struct _KPROCESS *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v4 = a4;
    }
    v10 = 0;
  }
  if ( v10 >= 0 && v4 )
    *v4 = v7;
  return (unsigned int)v10;
}
