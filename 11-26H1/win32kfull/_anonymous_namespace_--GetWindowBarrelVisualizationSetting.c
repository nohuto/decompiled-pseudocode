/*
 * XREFs of _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x14020CA6C
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1401FFAEC (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall anonymous_namespace_::GetWindowBarrelVisualizationSetting(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  __int64 v5; // rax
  int PointerBarrelVisualization; // eax
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 1;
  if ( (_DWORD)a2
    || (v5 = W32GetUserSessionState(a1, a2),
        (PointerBarrelVisualization = CTouchProcessor::GetPointerBarrelVisualization(
                                        *(CTouchProcessor **)(v5 + 3256),
                                        *(_WORD *)(a1 + 4))) == 0)
    || (*(_DWORD *)(a1 + 12) & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      v10 = ValidateHwnd(v8);
      if ( v10 )
      {
        v11 = 1;
        if ( (unsigned int)FeedbackGetWindowSetting(v10, 2LL, 1, &v11) )
          v4 = v11;
      }
    }
    UserSessionState = W32GetUserSessionState(v8, a2);
    CTouchProcessor::SetPointerBarrelVisualization(
      *(CTouchProcessor **)(UserSessionState + 3256),
      *(_WORD *)(a1 + 4),
      v4);
  }
  else
  {
    LOBYTE(v2) = PointerBarrelVisualization == 1;
    return v2;
  }
  return v4;
}
