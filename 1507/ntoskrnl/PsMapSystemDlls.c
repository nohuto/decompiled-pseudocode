/*
 * XREFs of PsMapSystemDlls @ 0x140466680
 * Callers:
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2)
{
  int v2; // ebx
  int v5; // ebp
  int v6; // edi
  _QWORD *v7; // r14
  _BYTE v9[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v9);
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
    KiUnstackDetachProcess((struct _KTHREAD *)v9, 0);
  return (unsigned int)v2;
}
