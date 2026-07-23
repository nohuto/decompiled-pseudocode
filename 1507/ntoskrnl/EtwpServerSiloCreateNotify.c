/*
 * XREFs of EtwpServerSiloCreateNotify @ 0x140593ABC
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PsIsHostSilo @ 0x14013A210 (PsIsHostSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     PsAllocateMonitorContextServerSilo @ 0x140593528 (PsAllocateMonitorContextServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwpServerSiloCreateNotify(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rbx
  bool IsHostSilo; // bp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // r8d
  __int16 *v11; // r9
  char *v12; // rcx
  __int16 v13; // ax
  void *v14; // [rsp+58h] [rbp+10h] BYREF

  result = PsAllocateMonitorContextServerSilo(EtwSiloMonitor, 432LL, &v14);
  if ( (int)result >= 0 )
  {
    v3 = (unsigned __int16 *)v14;
    memset(v14, 0, 0x1B0uLL);
    IsHostSilo = PsIsHostSilo((__int64)a1);
    *((GUID *)v3 + 2) = SecurityProviderGuid;
    *((_QWORD *)v3 + 48) = a1;
    if ( a1 )
      PspReferenceSiloObject(a1);
    if ( IsHostSilo )
    {
      v3[63] = 3;
      v3[204] = 3;
    }
    else
    {
      v3[63] = 64;
    }
    *((_DWORD *)v3 + 98) = v3[63];
    result = PsSetMonitorContextServerSilo(EtwSiloMonitor, a1, 1, (__int64)v3, 0LL);
    v8 = result;
    if ( (int)result >= 0 )
    {
      v9 = PsAttachSiloToCurrentThread((__int64)a1, v5, v6, v7);
      EtwpInitializeAutoLoggers();
      if ( !IsHostSilo )
        EtwRegister(&PsProvGuid, 0LL, 0LL, (PREGHANDLE)v3 + 50);
      PsDetachSiloFromCurrentThread(v9);
      v10 = 0;
      v11 = (__int16 *)(v3 + 204);
      v12 = (char *)(v3 + 62);
      do
      {
        v13 = *v11;
        if ( *v11 )
        {
          *(_QWORD *)(v12 + 12) = -1LL;
          *((_WORD *)v12 + 1) = v13;
          *((_DWORD *)v12 - 1) = 1;
          *v12 = -1;
          *(_QWORD *)(v12 + 20) = 0LL;
          *((_DWORD *)v12 + 1) = 64;
          *((_BYTE *)v3 + 424) |= 1 << v10;
        }
        ++v10;
        ++v11;
        v12 += 32;
      }
      while ( v10 < 8 );
      PsDereferenceMonitorContextServerSilo((__int64)v3);
      return v8;
    }
  }
  return result;
}
