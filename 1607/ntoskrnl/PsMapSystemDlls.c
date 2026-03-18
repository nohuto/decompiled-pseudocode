/*
 * XREFs of PsMapSystemDlls @ 0x14046BE08
 * Callers:
 *     MiMapProcessExecutable @ 0x14046CDE8 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x14046BED8 (PspMapSystemDll.c)
 *     PsWow64GetProcessMachine @ 0x14051AA00 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2)
{
  int v2; // ebx
  int v5; // r15d
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rbp
  _BYTE v10[48]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v10);
  }
  v6 = 0;
  v7 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7
      && (v6 <= 0
       || a1[1].ActiveProcessors.Bitmap[7] && *(_WORD *)(v8 + 18) == (unsigned __int16)PsWow64GetProcessMachine(a1)) )
    {
      v2 = PspMapSystemDll(a1, v8, a2, 0LL);
      if ( v2 < 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( v6 >= 3 )
      goto LABEL_8;
  }
  if ( v6 > 0 )
    v2 = -1073741405;
LABEL_8:
  if ( v5 )
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  return (unsigned int)v2;
}
