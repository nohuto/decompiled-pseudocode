/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DB8C4
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DBBE8 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  const struct tagTOUCHINPUT *v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  struct HTOUCHINPUT__ *result; // rax
  ULONG v12; // eax

  v6 = a3;
  if ( !a2 || (v7 = 48LL * (a2 - 1), v7 > 0xFFFFFFFF) || (v8 = (unsigned int)(v7 + 80), (unsigned int)v7 >= 0xFFFFFFB0) )
    v8 = 0LL;
  if ( (_DWORD)v8 && 48 * (unsigned __int64)a2 <= 0xFFFFFFFF )
  {
    LOBYTE(a3) = 20;
    v9 = HMAllocObject(a1, 0LL, a3, v8);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 24) = a2;
      memmove((void *)(v9 + 32), v6, 48 * a2);
      result = *(struct HTOUCHINPUT__ **)v10;
      *(_DWORD *)(v10 + 28) = a4;
      return result;
    }
  }
  else
  {
    v12 = RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v12);
  }
  return 0LL;
}
