/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18009E6B4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800740E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18009E0EC (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rdi
  unsigned int v4; // esi
  __int64 result; // rax
  int v8; // eax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v9 = 0LL;
    result = WPF::HrMalloc((WPF *)a1, a2, *(unsigned int *)(a1 + 20), (__int64 *)&v9);
    v4 = result;
    if ( (int)result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
    v8 = *(_DWORD *)(a1 + 24);
    v3 = v9;
    if ( v8 )
      memcpy_0(v9, *(const void **)a1, (unsigned int)(8 * v8));
  }
  *(_QWORD *)a1 = 0LL;
  result = v4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return result;
}
