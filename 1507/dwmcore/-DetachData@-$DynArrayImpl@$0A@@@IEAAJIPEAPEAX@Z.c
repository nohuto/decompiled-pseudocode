/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1801490DC
 * Callers:
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1800F75A0 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rdi
  unsigned int v4; // esi
  __int64 result; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v8 = 0LL;
    result = WPF::HrMalloc((WPF *)a1, 0xF0uLL, *(unsigned int *)(a1 + 20), &v8);
    v4 = result;
    if ( (int)result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
    v3 = v8;
    if ( *(_DWORD *)(a1 + 24) )
      memcpy_0(v8, *(const void **)a1, (unsigned int)(240 * *(_DWORD *)(a1 + 24)));
  }
  *(_QWORD *)a1 = 0LL;
  result = v4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return result;
}
