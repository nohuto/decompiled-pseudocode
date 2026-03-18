/*
 * XREFs of _FindProp @ 0x1C0065DC0
 * Callers:
 *     GetWindowEffectiveCloakState @ 0x1C0064DD0 (GetWindowEffectiveCloakState.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0064FD8 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006501C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetProp @ 0x1C0065070 (NtUserSetProp.c)
 *     NtUserRemoveProp @ 0x1C0065170 (NtUserRemoveProp.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int i; // edx

  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    if ( a2 )
    {
      result = v4 + 8;
      for ( i = *(_DWORD *)(v4 + 4); i; --i )
      {
        if ( *(_WORD *)(result + 8) == a2 )
        {
          if ( a3 )
          {
            if ( (*(_BYTE *)(result + 10) & 1) != 0 )
              return result;
          }
          else if ( (*(_BYTE *)(result + 10) & 1) == 0 )
          {
            return result;
          }
        }
        result += 16LL;
      }
    }
  }
  return 0LL;
}
