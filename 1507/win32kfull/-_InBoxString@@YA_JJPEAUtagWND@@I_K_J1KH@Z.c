/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C0116000
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1C0115F80 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1C0115FC0 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     NtUserfnINSTRINGNULL @ 0x1C0052930 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINSTRING @ 0x1C01160F0 (NtUserfnINSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 result; // rax
  int v9; // eax
  bool v10; // cl
  bool v11; // zf
  int v12; // eax
  int v13; // esi
  __int64 (__fastcall *v14)(int, int, int, int, __int64); // r11

  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !gptiCurrent )
    return -1LL;
  v9 = *((_DWORD *)a2 + 13);
  if ( a1 == 678 )
  {
    v10 = (v9 & 0x40) != 0;
    v11 = (v9 & 0x30) == 0;
    v12 = 399;
  }
  else
  {
    v10 = (*((_DWORD *)a2 + 13) & 0x200) != 0;
    v11 = (v9 & 0x30) == 0;
    v12 = 332;
  }
  v13 = *(_DWORD *)(gptiCurrent + 1252LL);
  if ( v10 || v11 )
  {
    *(_DWORD *)(gptiCurrent + 1252LL) = 2;
    if ( a3 == v12 )
      result = NtUserfnINSTRINGNULL((__int64)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_9;
  }
  v14 = (__int64 (__fastcall *)(int, int, int, int, __int64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
  if ( v14 == xxxSendMessageFF || (char *)v14 == (char *)xxxWrapSendMessageBSM )
    return -1LL;
  *(_DWORD *)(gptiCurrent + 1252LL) = 1;
  result = v14((int)a2, a3, a4, a5, a6);
LABEL_9:
  *(_DWORD *)(gptiCurrent + 1252LL) = v13;
  return result;
}
