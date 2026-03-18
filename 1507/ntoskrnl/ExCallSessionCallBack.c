/*
 * XREFs of ExCallSessionCallBack @ 0x14051C2F8
 * Callers:
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExCallSessionCallBack(__int64 a1, int *a2, __int64 a3, __int64 a4, int *a5)
{
  int v8; // esi
  struct _EX_RUNDOWN_REF *v9; // rbp
  _KPROCESS *SessionById; // rax
  _KPROCESS *v11; // rdi
  int v12; // ebx
  void *v14; // rcx
  struct _KPROCESS *NextSession; // rax
  __int64 v16; // rbx
  int SessionId; // r15d
  _KPROCESS *v18; // rcx
  int v19; // edi
  _BYTE v20[48]; // [rsp+20h] [rbp-78h] BYREF

  v8 = 0;
  v9 = ExReferenceCallBackBlock((signed __int64 *)&PsWin32CallBack);
  if ( v9 )
  {
    if ( a2 )
    {
      SessionById = (_KPROCESS *)MmGetSessionById(*a2);
      v11 = SessionById;
      if ( SessionById )
      {
        v12 = MmAttachSession(SessionById, (__int64)v20);
        if ( v12 < 0 )
        {
          v12 = -1073741811;
        }
        else
        {
          v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v9[1].Count)(v9[2].Count, a3, a4);
          MmDetachSession((__int64)v11, (struct _KTHREAD *)v20);
        }
        ObfDereferenceObject(v11);
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v14 = 0LL;
      while ( 1 )
      {
        NextSession = (struct _KPROCESS *)MmGetNextSession(v14);
        v16 = (__int64)NextSession;
        if ( !NextSession )
          break;
        SessionId = MmGetSessionId(NextSession);
        v19 = MmAttachSession(v18, (__int64)v20);
        if ( v19 >= 0 )
        {
          v19 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v9[1].Count)(v9[2].Count, a3, a4);
          MmDetachSession(v16, (struct _KTHREAD *)v20);
        }
        v14 = (void *)v16;
        if ( !SessionId )
          v8 = v19;
      }
      v12 = 0;
    }
    ExDereferenceCallBackBlock((signed __int64 *)&PsWin32CallBack, v9);
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 && a5 )
    *a5 = v8;
  return (unsigned int)v12;
}
