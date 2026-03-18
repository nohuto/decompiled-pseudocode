/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0146D14
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C0146C60 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C0146CC0 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C006FAA0 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C0146DF0 (SfnINSTRING.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        __int64 a3,
        ULONG_PTR a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  unsigned int v9; // edi
  __int64 *v10; // rbx
  unsigned __int64 v12; // rcx
  int v13; // edx
  int v14; // eax

  v9 = a3;
  v10 = (__int64 *)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, (__int64)a2, a3, a4) )
    return 0LL;
  v13 = 332;
  if ( a1 == 678 )
    v13 = 399;
  v14 = *(_DWORD *)(gptiCurrent + 1268LL);
  if ( v14 == 1 )
    return SfnDWORD(v10, v9, a4, (__int64)a5, a6, (__int64)a7);
  if ( v14 != 2 )
    return 0LL;
  if ( v9 == v13 )
    return SfnINSTRINGNULL(v10, v9, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((_DWORD)v10, v9, a4, (_DWORD)a5, a6, (__int64)a7, a8);
}
