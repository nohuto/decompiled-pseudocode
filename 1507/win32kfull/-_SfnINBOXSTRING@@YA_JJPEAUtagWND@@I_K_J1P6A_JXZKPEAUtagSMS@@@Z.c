/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C01157A4
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C01156F0 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C0115750 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0059F90 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C0115880 (SfnINSTRING.c)
 */

unsigned __int8 *__fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        ULONG_PTR a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  unsigned __int64 v12; // rcx
  int v13; // edx
  int v14; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v13 = 332;
  if ( a1 == 678 )
    v13 = 399;
  v14 = *(_DWORD *)(gptiCurrent + 1252LL);
  if ( v14 == 1 )
    return (unsigned __int8 *)SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (unsigned __int64)a7);
  if ( v14 != 2 )
    return 0LL;
  if ( a3 == v13 )
    return SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return (unsigned __int8 *)SfnINSTRING((_DWORD)a2, a3, a4, (_DWORD)a5, a6, (__int64)a7, a8);
}
