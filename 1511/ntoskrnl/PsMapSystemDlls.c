/*
 * XREFs of PsMapSystemDlls @ 0x140464324
 * Callers:
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2)
{
  int v2; // ebx
  int v5; // ebp
  int v6; // edi
  _QWORD *v7; // r14
  $D4FCF91253F76F57393CBFE908971F67 v9; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)&v9);
  }
  v6 = 0;
  v7 = &PspSystemDlls;
  while ( 1 )
  {
    if ( *v7 && (v6 != 1 || a1[1].ActiveProcessors.Bitmap[7]) )
    {
      v2 = PspMapSystemDll(a1, *v7, a2, 0LL);
      if ( v2 < 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( v6 >= 2 )
      goto LABEL_8;
  }
  if ( v6 == 1 )
    v2 = -1073741405;
LABEL_8:
  if ( v5 )
    KiUnstackDetachProcess(&v9, 0LL);
  return (unsigned int)v2;
}
