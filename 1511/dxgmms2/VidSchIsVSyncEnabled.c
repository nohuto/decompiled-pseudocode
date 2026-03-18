/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C0039080
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C0039180 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  int v12; // eax
  char v13; // bp
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v18 + 24) = v4;
      WdLogEvent5_WdAssertion(v18);
      return 0;
    }
    else
    {
      v6 = (struct _ERESOURCE *)(a1 + 1200);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
      v11 = 0;
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        *(_QWORD *)(v19 + 24) = v4;
        WdLogEvent5_WdAssertion(v19);
      }
      else
      {
        ExAcquireResourceExclusiveLite(v6, 1u);
        v12 = *(_DWORD *)(a1 + 1924);
        if ( _bittest(&v12, v4) )
          v13 = 1;
        else
          v13 = 0;
        ExReleaseResourceLite(v6);
        if ( v13 )
        {
          ExAcquireResourceExclusiveLite(v6, 1u);
          v15 = *(unsigned __int8 *)(a1 + 1928);
          if ( (_BYTE)v15 )
          {
            if ( *(_DWORD *)(a1 + 1908) )
            {
              LOBYTE(v14) = 1;
              VidSchiControlVSync(a1, v14, 65539LL);
            }
            else
            {
              *(_BYTE *)(a1 + 1928) = 0;
            }
          }
          v11 = *(_BYTE *)(a1 + 1904);
          if ( v11 )
          {
            if ( !v15 )
              _InterlockedExchange((volatile __int32 *)(a1 + 1972), 1);
          }
          ExReleaseResourceLite(v6);
        }
      }
      ExReleaseResourceLite(v6);
      return v11;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
    return 0;
  }
}
