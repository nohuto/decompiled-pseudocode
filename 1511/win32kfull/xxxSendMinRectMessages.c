/*
 * XREFs of xxxSendMinRectMessages @ 0x1C00FF20C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00FF0D0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned int *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
  {
    xxxCallHook(5u, v4, a2, 0xAu);
    v2 = 1;
  }
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_QWORD *)(v5 + 232) )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(unsigned int **)(v5 + 232);
      if ( v8 && !v8[3] )
      {
        if ( v6 < *v8 )
        {
          if ( *(_QWORD *)&v8[4 * v6 + 6] == v7 )
            ++v6;
          if ( v6 < *v8 )
          {
            v7 = *(_QWORD *)&v8[4 * v6 + 6];
            goto LABEL_14;
          }
        }
        v6 = 0;
      }
      v7 = 0LL;
LABEL_14:
      if ( !v7 )
        return v2;
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      ++*(_DWORD *)(v7 + 8);
      v12[1] = v7;
      if ( xxxSendTransformableMessageTimeout((struct tagWND *)v7, 139LL, v4, a2, 0, 100, &v13, 1, 0) )
        v2 = 1;
      ThreadUnlock1(v10, v9);
    }
  }
  return v2;
}
