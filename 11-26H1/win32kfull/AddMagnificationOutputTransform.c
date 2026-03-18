/*
 * XREFs of AddMagnificationOutputTransform @ 0x140198B60
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     MagInputTransform @ 0x140198D44 (MagInputTransform.c)
 *     MagnificationInverseTransformPoint @ 0x140198DFC (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(unsigned __int64 *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // edi
  __int64 UserSessionState; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)(UserSessionState + 66048),
         (signed __int64)CurrentThread,
         0LL) )
  {
    do
    {
      UserSleep(1LL);
      v6 = W32GetUserSessionState(v8, v7);
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 66048), (signed __int64)CurrentThread, 0LL) );
  }
  v10 = *(_QWORD *)(W32GetUserSessionState(v6, UserSessionState) + 19176);
  v11 = *(_QWORD *)(v10 + 232);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 16) & 2) != 0 )
    {
      v10 = MagInputTransform();
      if ( v10 )
      {
        if ( PtInRect((_DWORD *)v10, *a1) )
        {
          MagnificationInverseTransformPoint(v10, a1);
          v3 = 1;
        }
      }
    }
  }
  _InterlockedExchange64((volatile __int64 *)(W32GetUserSessionState(v10, v9) + 66048), 0LL);
  return v3;
}
