/*
 * XREFs of ExCallSessionCallBack @ 0x140445140
 * Callers:
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     MmGetNextSession @ 0x1400E6E28 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall ExCallSessionCallBack(__int64 a1, int *a2, __int64 a3, __int64 a4, int *a5)
{
  int v8; // esi
  struct _EX_RUNDOWN_REF *v9; // rbp
  ULONG_PTR SessionById; // rax
  void *v11; // rdi
  int v12; // ebx
  void *v14; // rcx
  struct _KPROCESS *NextSession; // rax
  __int64 v16; // rbx
  int SessionId; // r15d
  ULONG_PTR v18; // rcx
  int v19; // edi
  _BYTE v20[48]; // [rsp+20h] [rbp-78h] BYREF

  v8 = 0;
  v9 = ExReferenceCallBackBlock((signed __int64 *)&PsWin32CallBack);
  if ( v9 )
  {
    if ( a2 )
    {
      SessionById = MmGetSessionById(*a2);
      v11 = (void *)SessionById;
      if ( SessionById )
      {
        v12 = MmAttachSession(SessionById);
        if ( v12 < 0 )
        {
          v12 = -1073741811;
        }
        else
        {
          v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v9[1].Count)(v9[2].Count, a3, a4);
          MmDetachSession((__int64)v11, (__int64)v20);
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
        v19 = MmAttachSession(v18);
        if ( v19 >= 0 )
        {
          v19 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v9[1].Count)(v9[2].Count, a3, a4);
          MmDetachSession(v16, (__int64)v20);
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
