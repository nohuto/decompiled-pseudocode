/*
 * XREFs of MiStartZeroPageWorkers @ 0x1407C97DC
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1404F927C (PsCreateSystemThreadEx.c)
 *     MiCreateZeroContext @ 0x1407C9940 (MiCreateZeroContext.c)
 */

void MiStartZeroPageWorkers()
{
  __int64 ZeroContext; // rdi
  int v1; // esi
  unsigned int v2; // ebx
  int v3; // r14d
  int v4; // ebp
  _QWORD *ZeroThreadContext; // rax
  __int64 v6; // r15
  struct _GROUP_AFFINITY *p_Affinity; // rcx
  USHORT Count; // [rsp+50h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-48h] BYREF

  ZeroContext = MiCreateZeroContext();
  if ( ZeroContext )
  {
    v1 = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        KeQueryNodeActiveAffinity(v1, &Affinity, &Count);
        if ( Count < 2u )
        {
          v2 = 1;
        }
        else
        {
          v2 = Count >> 1;
          if ( v2 >= 0x3F )
            v2 = 63;
        }
        v3 = v1 << byte_14034EB89;
        v4 = 0;
        if ( v2 )
          break;
LABEL_12:
        if ( ZeroContext )
          ZeroContext += 64LL;
        if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
          return;
      }
      while ( 1 )
      {
        ZeroThreadContext = MiCreateZeroThreadContext(MiSystemPartition, ZeroContext, v3);
        v6 = (__int64)ZeroThreadContext;
        if ( !ZeroThreadContext )
          break;
        p_Affinity = &Affinity;
        if ( v2 <= 1 )
          p_Affinity = 0LL;
        if ( PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)MiZeroLargePageThread,
               (__int64)ZeroThreadContext,
               p_Affinity,
               0LL) < 0 )
        {
          MiDeleteZeroThreadContext((__int64)MiSystemPartition, v6);
          return;
        }
        ObCloseHandle(Handle, 0);
        if ( ++v4 >= v2 )
          goto LABEL_12;
      }
    }
  }
}
