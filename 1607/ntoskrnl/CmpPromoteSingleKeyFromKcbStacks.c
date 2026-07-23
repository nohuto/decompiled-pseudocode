/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x1401B3550
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 * Callees:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AA6C (CmpRebuildKcbCacheFromNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B964 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BD38 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(int a1, __int64 a2, char a3)
{
  int started; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  ULONG_PTR KcbAtLayerHeight; // rax
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v16[80]; // [rsp+60h] [rbp-19h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v12 = 0xFFFFFFFFLL;
  CmpInitializeKeyNodeStack(v16);
  started = CmpStartKeyNodeStackFromKcbStack(v16, a2, 0LL);
  if ( started >= 0 )
  {
    LOBYTE(v7) = a3;
    v8 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
           a1,
           (unsigned int)v16,
           v7,
           (unsigned int)&v15,
           (__int64)&v13,
           (__int64)&v14,
           (__int64)&v12);
    v9 = v14;
    started = v8;
    if ( v8 >= 0 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(unsigned __int16 *)(a2 + 2));
      *(_DWORD *)(KcbAtLayerHeight + 32) = v13;
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, v9);
      started = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64 *))(v15 + 16))(v15, &v12);
  }
  CmpCleanupKeyNodeStack(v16);
  return (unsigned int)started;
}
