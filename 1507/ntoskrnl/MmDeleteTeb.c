/*
 * XREFs of MmDeleteTeb @ 0x14053E174
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // edx
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+28h] [rbp-40h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)v8);
  v3 = MiObtainReferencedVad(a2, &v7);
  if ( v3 )
  {
    v4 = *(__int64 **)(v3 + 56);
    v5 = 0;
    if ( v4 )
    {
      while ( *((_DWORD *)v4 + 2) != 2 || (unsigned int)++v5 <= 1 )
      {
        v4 = (__int64 *)*v4;
        if ( !v4 )
        {
          if ( v5 != 1 )
            break;
          MiDeleteVad(v3, 0);
          return KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v3);
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
}
