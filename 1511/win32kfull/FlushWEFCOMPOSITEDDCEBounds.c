/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E7B00
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E7BF4 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7850 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7958 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 result; // rax
  __int64 Prop; // rax
  __int64 v4; // r10
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  struct tagWND *v6; // rcx
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v7, 4LL);
  if ( (_DWORD)result )
  {
    Prop = GetProp(*(_QWORD *)(a1 + 32), (unsigned __int16)atomLayer, 1LL);
    if ( (*(_BYTE *)(v4 + 51) & 0x10) != 0 )
    {
      return UnionRect((_DWORD *)(Prop + 16), (int *)(Prop + 16), &v7.left);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
      v6 = *(struct tagWND **)(a1 + 32);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow(v6, (__m128i *)&v7);
      else
        return PostCOMPOSITEDInvalidateAPC(v6, &v7);
    }
  }
  return result;
}
